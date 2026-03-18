/*
 * XREFs of PnprWakeProcessors @ 0x140B55254
 * Callers:
 *     PnprEndMirroring @ 0x140B53B20 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140B53BF4 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeResumeClockTimerSafe @ 0x1405B9F4C (KeResumeClockTimerSafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprGetMillisecondCounter @ 0x140B53B94 (PnprGetMillisecondCounter.c)
 *     KeRestoreMtrrBroadcast @ 0x140B57820 (KeRestoreMtrrBroadcast.c)
 */

__int64 __fastcall PnprWakeProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int MillisecondCounter; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx

  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), 0LL, a3, a4);
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v5 = PnprContext;
    *(_DWORD *)(PnprContext + 33324) = MillisecondCounter;
    *(_DWORD *)(v5 + 200) = 6;
  }
  KeRestoreMtrrBroadcast();
  guard_dispatch_icall_no_overrides(0LL, 0LL, v6, v7);
  KeResumeClockTimerSafe();
  guard_dispatch_icall_no_overrides(2LL, *(_QWORD *)(PnprContext + 33176), v8, v9);
  v10 = PnprGetMillisecondCounter(0);
  v14 = PnprContext;
  *(_QWORD *)(PnprContext + 33296) = 10000 * (v10 - *(_QWORD *)(PnprContext + 33296));
  *(_DWORD *)(v14 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 188));
  result = PnprContext;
  v16 = *(unsigned int *)(PnprContext + 64);
  if ( (v16 & 0x20) != 0 )
    return guard_dispatch_icall_no_overrides(v16, v11, v12, v13);
  return result;
}
