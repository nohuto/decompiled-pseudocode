/*
 * XREFs of HalpTimerStopProfileInterrupt @ 0x14054A174
 * Callers:
 *     HalpTimerSelectRoles @ 0x14053B848 (HalpTimerSelectRoles.c)
 *     DefaultDisableMonitoring @ 0x14054C400 (DefaultDisableMonitoring.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerStopProfileInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( HalpProfileTimer && ((*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !KeGetPcr()->Prcb.Number) )
  {
    InternalData = HalpTimerGetInternalData(HalpProfileTimer);
    guard_dispatch_icall_no_overrides(InternalData, v1, v2, v3);
  }
  HalpProfilingActive = 0;
}
