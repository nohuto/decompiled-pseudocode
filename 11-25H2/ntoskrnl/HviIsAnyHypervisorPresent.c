/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1404A3870
 * Callers:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404A3798 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHardwareFeatures @ 0x1404A37E0 (HviGetHardwareFeatures.c)
 *     KiRestoreFeatureBits @ 0x1404CA7A8 (KiRestoreFeatureBits.c)
 *     HvlPhase1Initialize @ 0x14057F2B0 (HvlPhase1Initialize.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1405B98E0 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405B99C8 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x1405BA08C (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1405BA280 (KiIsTsaMitigationSupported.c)
 *     HviGetHypervisorInterface @ 0x140657838 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140657AE0 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase0Initialize @ 0x140702968 (HvlPhase0Initialize.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14077E404 (RtlpInitFunctionOverrideCapabilities.c)
 *     KiConfigureAmdTprLowerInterruptDelayWorkaround @ 0x140B47F64 (KiConfigureAmdTprLowerInterruptDelayWorkaround.c)
 *     KiSetFeatureBits @ 0x140B49BD0 (KiSetFeatureBits.c)
 *     ViFilterIsDeviceExcluded @ 0x140B8D4A0 (ViFilterIsDeviceExcluded.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140BFAC08 (InitializeDynamicPartitioningPolicy.c)
 *     KiComputeDispatchInterruptCost @ 0x140C16508 (KiComputeDispatchInterruptCost.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140C18EEC (KiIntSteerDetermineSteeringEnabled.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
