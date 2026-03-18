/*
 * XREFs of HalpTimerClockInitialize @ 0x140546A00
 * Callers:
 *     HalpTimerClockPowerChange @ 0x140546A70 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpTimerSetProblemEx @ 0x1404F98E4 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerClockInitialize()
{
  ULONG_PTR v0; // rbx
  __int64 InternalData; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // r8

  v0 = HalpClockTimer;
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  result = guard_dispatch_icall_no_overrides(InternalData, v2, v3, v4);
  if ( (int)result < 0 )
  {
    HalpTimerSetProblemEx(v0, 15, result, (__int64)"minkernel\\hals\\lib\\timers\\common\\clockint.c", 0x5AFu);
    KeBugCheckEx(0x5Cu, 0x110uLL, v0, HalpTimerLastProblem, BugCheckParameter4);
  }
  return result;
}
