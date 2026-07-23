/*
 * XREFs of PnprWakeProcessors @ 0x140B572A4
 * Callers:
 *     PnprEndMirroring @ 0x140B55B70 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140B55C44 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeResumeClockTimerSafe @ 0x1405B757C (KeResumeClockTimerSafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnprGetMillisecondCounter @ 0x140B55BE4 (PnprGetMillisecondCounter.c)
 *     KeRestoreMtrrBroadcast @ 0x140B598A0 (KeRestoreMtrrBroadcast.c)
 */

__int64 PnprWakeProcessors()
{
  int MillisecondCounter; // eax
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), 0LL);
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v1 = PnprContext;
    *(_DWORD *)(PnprContext + 33324) = MillisecondCounter;
    *(_DWORD *)(v1 + 200) = 6;
  }
  KeRestoreMtrrBroadcast();
  guard_dispatch_icall_no_overrides(0LL, 0LL);
  KeResumeClockTimerSafe(v3, v2);
  guard_dispatch_icall_no_overrides(2LL, *(_QWORD *)(PnprContext + 33176));
  v4 = PnprGetMillisecondCounter(0);
  v6 = PnprContext;
  *(_QWORD *)(PnprContext + 33296) = 10000 * (v4 - *(_QWORD *)(PnprContext + 33296));
  *(_DWORD *)(v6 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 188));
  result = PnprContext;
  v8 = *(unsigned int *)(PnprContext + 64);
  if ( (v8 & 0x20) != 0 )
    return guard_dispatch_icall_no_overrides(v8, v5);
  return result;
}
