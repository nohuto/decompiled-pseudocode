/*
 * XREFs of CcUpdateTimeOnLogHandles @ 0x1404DB318
 * Callers:
 *     CcLazyWriteScan @ 0x14043BAE8 (CcLazyWriteScan.c)
 *     CcLazyWriteScanVolume @ 0x1404B5560 (CcLazyWriteScanVolume.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1402CE360 (KeRcuReadLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 */

void __fastcall CcUpdateTimeOnLogHandles(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 i; // rdi
  __int64 v7; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = MEMORY[0xFFFFF78000000320];
  KeRcuReadLock(a1);
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 168) & 1) != 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 768), &LockHandle);
      if ( (*(_DWORD *)(i + 168) & 1) != 0 )
      {
        *(_DWORD *)(i + 168) &= ~1u;
        *(_QWORD *)(i + 160) = v2;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v7);
    }
  }
  KeRcuReadUnlock(v4, v3, v5);
}
