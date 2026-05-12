/*
 * XREFs of RaidUnitDisablePendingTimer @ 0x140032D3C
 * Callers:
 *     StorPortUnitPoFxD3Completion @ 0x1400414E0 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x14007A190 (StorPortUnitDirectedPowerDownCompletion.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDisablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
  if ( (*(_BYTE *)(a1 + 505) & 0x20) == 0 && (*(_DWORD *)(a1 + 512) & 4) == 0 )
  {
    KeCancelTimer((PKTIMER)(a1 + 1056));
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 504), 0xDu);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
