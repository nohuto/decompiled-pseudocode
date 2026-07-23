/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x14049E730
 * Callers:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x14049E658 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHardwareFeatures @ 0x14049E6A0 (HviGetHardwareFeatures.c)
 *     HvlPhase1Initialize @ 0x14057FDE0 (HvlPhase1Initialize.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1405BAD5C (KiDetectAmdNonArchSsbdSupport.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405BAE44 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x1405BB508 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1405BB6FC (KiIsTsaMitigationSupported.c)
 *     KiApplyProcessorErrata @ 0x1405BD910 (KiApplyProcessorErrata.c)
 *     HviGetHypervisorInterface @ 0x1406623E8 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140662690 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase0Initialize @ 0x14070C3D8 (HvlPhase0Initialize.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14078D5E8 (RtlpInitFunctionOverrideCapabilities.c)
 *     SepSecureBootCorrectBcd @ 0x140793ED4 (SepSecureBootCorrectBcd.c)
 *     NtFilterBootOption @ 0x140AD74D0 (NtFilterBootOption.c)
 *     KiConfigureAmdTprLowerInterruptDelayWorkaround @ 0x140B59F84 (KiConfigureAmdTprLowerInterruptDelayWorkaround.c)
 *     ViFilterIsDeviceExcluded @ 0x140B9F480 (ViFilterIsDeviceExcluded.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140C0DC08 (InitializeDynamicPartitioningPolicy.c)
 *     KiComputeDispatchInterruptCost @ 0x140C29574 (KiComputeDispatchInterruptCost.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140C2C11C (KiIntSteerDetermineSteeringEnabled.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
