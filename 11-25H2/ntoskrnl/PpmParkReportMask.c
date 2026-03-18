/*
 * XREFs of PpmParkReportMask @ 0x14026BAE0
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEqualAffinityEx @ 0x14026BB80 (KeIsEqualAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x14026BC00 (KeCpuSetReportParkedProcessors.c)
 *     MmReportParkedProcessors @ 0x14026BF50 (MmReportParkedProcessors.c)
 *     HvlParkedVirtualProcessors @ 0x14026C074 (HvlParkedVirtualProcessors.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char PpmParkReportMask()
{
  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(&PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KiCopyAffinityEx(&PpmPerfReportedCoreParkingMask, PpmPerfReportedCoreParkingMask.Size, &PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      guard_dispatch_icall_no_overrides(PpmCheckTime, &PpmPerfCoreParkingMask);
    KeCpuSetReportParkedProcessors(&PpmPerfCoreParkingMask);
    MmReportParkedProcessors();
  }
  return 1;
}
