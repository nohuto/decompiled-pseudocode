/*
 * XREFs of PpmParkReportMask @ 0x1403A3480
 * Callers:
 *     <none>
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x1403A35A0 (KeCpuSetReportParkedProcessors.c)
 *     MmReportParkedProcessors @ 0x1403A38F0 (MmReportParkedProcessors.c)
 *     HvlParkedVirtualProcessors @ 0x1403A3A14 (HvlParkedVirtualProcessors.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
