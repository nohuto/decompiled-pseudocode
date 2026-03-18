/*
 * XREFs of PopDisableIrpWatchdog @ 0x1404A05F4
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x14035836C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     PopIrpWatchdogBugcheck @ 0x1405C8BC8 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall PopDisableIrpWatchdog(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rbx
  KIRQL v3; // bp
  BOOLEAN v4; // al

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 288));
  if ( *(_DWORD *)(v2 + 188) == 1 && *(_DWORD *)(v2 + 296) == 1 )
  {
    v4 = KeCancelTimer((PKTIMER)(v2 + 56));
    *(_DWORD *)(v2 + 296) = 0;
    v1 = v4 == 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 288), v3);
  if ( v1 )
    PopIrpWatchdogBugcheck(v2);
}
