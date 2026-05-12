/*
 * XREFs of RaidAdapterEnableQosWaitTimeoutCheck @ 0x14005A2AC
 * Callers:
 *     RaUnitSetQOSIoctl @ 0x1400976F0 (RaUnitSetQOSIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterEnableQosWaitTimeoutCheck(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5528), &LockHandle);
  if ( !*(_DWORD *)(a1 + 5536) )
    KeSetCoalescableTimer((PKTIMER)(a1 + 5400), (LARGE_INTEGER)-5000000LL, 0x1F4u, 0x32u, (PKDPC)(a1 + 5464));
  ++*(_DWORD *)(a1 + 5536);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
