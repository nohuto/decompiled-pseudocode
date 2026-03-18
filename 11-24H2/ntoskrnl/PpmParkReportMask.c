/*
 * XREFs of PpmParkReportMask @ 0x1403C88E0
 * Callers:
 *     <none>
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEqualAffinityEx @ 0x1403C8980 (KeIsEqualAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x1403C8A00 (KeCpuSetReportParkedProcessors.c)
 *     MmReportParkedProcessors @ 0x1403C8D50 (MmReportParkedProcessors.c)
 *     HvlParkedVirtualProcessors @ 0x1403C8E74 (HvlParkedVirtualProcessors.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char PpmParkReportMask()
{
  __int64 v1; // r8
  __int64 v2; // r9

  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(&PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KiCopyAffinityEx(&PpmPerfReportedCoreParkingMask, PpmPerfReportedCoreParkingMask.Size, &PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      guard_dispatch_icall_no_overrides(PpmCheckTime, &PpmPerfCoreParkingMask, v1, v2);
    KeCpuSetReportParkedProcessors(&PpmPerfCoreParkingMask);
    MmReportParkedProcessors();
  }
  return 1;
}
