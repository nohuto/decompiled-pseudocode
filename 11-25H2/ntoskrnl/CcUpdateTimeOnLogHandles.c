/*
 * XREFs of CcUpdateTimeOnLogHandles @ 0x1404DBC28
 * Callers:
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404BE770 (CcLazyWriteScan.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeRcuReadUnlock @ 0x1403A5890 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1403A59C0 (KeRcuReadLock.c)
 */

void __fastcall CcUpdateTimeOnLogHandles(__int64 a1)
{
  __int64 v2; // rbx
  __int64 i; // rdi
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
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  KeRcuReadUnlock();
}
