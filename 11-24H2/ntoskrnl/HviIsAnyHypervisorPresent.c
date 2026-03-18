/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1404A37D0
 * Callers:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404A36F8 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHardwareFeatures @ 0x1404A3740 (HviGetHardwareFeatures.c)
 *     HvlPhase1Initialize @ 0x140582A60 (HvlPhase1Initialize.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1405BD72C (KiDetectAmdNonArchSsbdSupport.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405BD814 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x1405BDED8 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1405BE0CC (KiIsTsaMitigationSupported.c)
 *     KiApplyProcessorErrata @ 0x1405C0334 (KiApplyProcessorErrata.c)
 *     HviGetHypervisorInterface @ 0x140663AF8 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140663DA0 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase0Initialize @ 0x14070E848 (HvlPhase0Initialize.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14078D6B8 (RtlpInitFunctionOverrideCapabilities.c)
 *     KiConfigureAmdTprLowerInterruptDelayWorkaround @ 0x140B57F04 (KiConfigureAmdTprLowerInterruptDelayWorkaround.c)
 *     ViFilterIsDeviceExcluded @ 0x140B9D480 (ViFilterIsDeviceExcluded.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140C0BC08 (InitializeDynamicPartitioningPolicy.c)
 *     KiComputeDispatchInterruptCost @ 0x140C27598 (KiComputeDispatchInterruptCost.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140C29FFC (KiIntSteerDetermineSteeringEnabled.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
