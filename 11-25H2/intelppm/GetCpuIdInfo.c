/*
 * XREFs of GetCpuIdInfo @ 0x14000FF30
 * Callers:
 *     IsTurboModeSupported @ 0x1400064B4 (IsTurboModeSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x140006520 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x140006594 (IsHwpSupported.c)
 *     IsACountMCountSupported @ 0x14000663C (IsACountMCountSupported.c)
 *     IsProcGV3Capable @ 0x1400066A4 (IsProcGV3Capable.c)
 *     IsHwpNativeInterruptSupported @ 0x1400292EC (IsHwpNativeInterruptSupported.c)
 *     IsHgsInterruptSupported @ 0x140029368 (IsHgsInterruptSupported.c)
 *     IsPackageThermStatusSupported @ 0x140029DD0 (IsPackageThermStatusSupported.c)
 *     IsMonitorMWaitSupported @ 0x14002A254 (IsMonitorMWaitSupported.c)
 *     InitEnergyCountersMsrEx @ 0x14002A5D0 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x14002A690 (ProbeFixedFunctionCounters.c)
 *     ConnectHwpInterrupt @ 0x14002A970 (ConnectHwpInterrupt.c)
 *     IsHwpFastMsrSupported @ 0x14002AF88 (IsHwpFastMsrSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x14002B004 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x14002B080 (IsHwpPackageControlSupported.c)
 *     IsRdtResourcePrioritizationSupported @ 0x14002B148 (IsRdtResourcePrioritizationSupported.c)
 *     GetHwDebugRegisters @ 0x14002B330 (GetHwDebugRegisters.c)
 *     IsOverclockingStatusSupported @ 0x14002B5B0 (IsOverclockingStatusSupported.c)
 *     InitMonitorMWaitSupport @ 0x14002B638 (InitMonitorMWaitSupport.c)
 *     GetCPUFamilyAndModel @ 0x140048008 (GetCPUFamilyAndModel.c)
 *     InitDriver @ 0x14004903C (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
