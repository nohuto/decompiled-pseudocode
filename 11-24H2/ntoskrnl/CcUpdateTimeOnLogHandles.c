/*
 * XREFs of CcUpdateTimeOnLogHandles @ 0x1404D4D38
 * Callers:
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 */

void __fastcall CcUpdateTimeOnLogHandles(__int64 a1)
{
  __int64 v2; // rbx
  __int64 i; // rdi
  __int64 v4; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = MEMORY[0xFFFFF78000000320];
  KeRcuReadLock();
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
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v4);
    }
  }
  KeRcuReadUnlock();
}
