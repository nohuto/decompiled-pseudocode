/*
 * XREFs of PopDisableIrpWatchdog @ 0x14049A414
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x1402BA5A0 (PopDequeueQuerySetIrp.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     PopIrpWatchdogBugcheck @ 0x1405CA848 (PopIrpWatchdogBugcheck.c)
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
