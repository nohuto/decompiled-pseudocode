/*
 * XREFs of PnprWakeProcessors @ 0x140B45254
 * Callers:
 *     PnprEndMirroring @ 0x140B43B20 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140B43BF4 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeResumeClockTimerSafe @ 0x1405B6128 (KeResumeClockTimerSafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnprGetMillisecondCounter @ 0x140B43B94 (PnprGetMillisecondCounter.c)
 *     KeRestoreMtrrBroadcast @ 0x140B47880 (KeRestoreMtrrBroadcast.c)
 */

__int64 PnprWakeProcessors()
{
  int MillisecondCounter; // eax
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184));
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v1 = PnprContext;
    *(_DWORD *)(PnprContext + 33324) = MillisecondCounter;
    *(_DWORD *)(v1 + 200) = 6;
  }
  KeRestoreMtrrBroadcast();
  guard_dispatch_icall_no_overrides(0LL);
  KeResumeClockTimerSafe();
  guard_dispatch_icall_no_overrides(2LL);
  v2 = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_QWORD *)(PnprContext + 33296) = 10000 * (v2 - *(_QWORD *)(PnprContext + 33296));
  *(_DWORD *)(v3 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 188));
  result = PnprContext;
  v5 = *(unsigned int *)(PnprContext + 64);
  if ( (v5 & 0x20) != 0 )
    return guard_dispatch_icall_no_overrides(v5);
  return result;
}
