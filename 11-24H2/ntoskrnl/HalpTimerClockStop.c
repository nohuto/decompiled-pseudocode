/*
 * XREFs of HalpTimerClockStop @ 0x1404B1000
 * Callers:
 *     HalpTimerClockPowerChange @ 0x140544330 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerClockStop()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v5; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
  {
    InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
    result = guard_dispatch_icall_no_overrides(InternalData, v5);
    CurrentPrcb->PendingTickFlags &= ~2u;
  }
  else
  {
    v1 = HalpTimerGetInternalData(HalpClockTimer);
    return guard_dispatch_icall_no_overrides(v1, v2);
  }
  return result;
}
