/*
 * XREFs of HalpTimerStopProfileInterrupt @ 0x140547884
 * Callers:
 *     HalpTimerSelectRoles @ 0x140539098 (HalpTimerSelectRoles.c)
 *     DefaultDisableMonitoring @ 0x140549B10 (DefaultDisableMonitoring.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerStopProfileInterrupt()
{
  __int64 InternalData; // rax

  if ( HalpProfileTimer && ((*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !KeGetPcr()->Prcb.Number) )
  {
    InternalData = HalpTimerGetInternalData(HalpProfileTimer);
    guard_dispatch_icall_no_overrides(InternalData);
  }
  HalpProfilingActive = 0;
}
