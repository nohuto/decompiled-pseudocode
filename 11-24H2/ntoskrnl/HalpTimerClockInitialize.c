/*
 * XREFs of HalpTimerClockInitialize @ 0x1405442C0
 * Callers:
 *     HalpTimerClockPowerChange @ 0x140544330 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpTimerSetProblemEx @ 0x1404F71C4 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerClockInitialize()
{
  ULONG_PTR v0; // rbx
  __int64 InternalData; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // r8

  v0 = HalpClockTimer;
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  result = guard_dispatch_icall_no_overrides(InternalData, v2);
  if ( (int)result < 0 )
  {
    HalpTimerSetProblemEx(v0, 15, result, (__int64)"minkernel\\hals\\lib\\timers\\common\\clockint.c", 0x5AFu);
    KeBugCheckEx(0x5Cu, 0x110uLL, v0, HalpTimerLastProblem, BugCheckParameter4);
  }
  return result;
}
