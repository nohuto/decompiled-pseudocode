/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x14005A178
 * Callers:
 *     RaidDeleteUnit @ 0x1400381B0 (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x14009E1C8 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5528), &LockHandle);
  if ( *(_DWORD *)(a1 + 5536) == 1 )
    KeCancelTimer((PKTIMER)(a1 + 5400));
  --*(_DWORD *)(a1 + 5536);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
