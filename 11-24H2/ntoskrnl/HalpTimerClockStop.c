/*
 * XREFs of HalpTimerClockStop @ 0x1404B6820
 * Callers:
 *     HalpTimerClockPowerChange @ 0x140546A70 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerClockStop()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
  {
    InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
    result = guard_dispatch_icall_no_overrides(InternalData, v7, v8, v9);
    CurrentPrcb->PendingTickFlags &= ~2u;
  }
  else
  {
    v1 = HalpTimerGetInternalData(HalpClockTimer);
    return guard_dispatch_icall_no_overrides(v1, v2, v3, v4);
  }
  return result;
}
