/*
 * XREFs of ZwQueryLicenseValue @ 0x1406A9010
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140355ABC (SepDesktopAppxSubProcessToken.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140541F70 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlGetProductInfo @ 0x1405EE690 (RtlGetProductInfo.c)
 *     RtlIsFeatureEnabledForEnterprise @ 0x1405EF030 (RtlIsFeatureEnabledForEnterprise.c)
 *     DifZwQueryLicenseValueWrapper @ 0x140646070 (DifZwQueryLicenseValueWrapper.c)
 *     RtlpGetWindowsPolicy @ 0x1406FA83C (RtlpGetWindowsPolicy.c)
 *     SepIsLockedDown @ 0x14078E628 (SepIsLockedDown.c)
 *     ExGetExpirationDate @ 0x1407B7EC8 (ExGetExpirationDate.c)
 *     ExpGenuinePolicyPostProcess @ 0x1407B8980 (ExpGenuinePolicyPostProcess.c)
 *     MmCreateMirror @ 0x1407EBEC0 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A62C5C (RtlpGetPolicyValueForSystemCapability.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140C0BC08 (InitializeDynamicPartitioningPolicy.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140C2D4D4 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140C44C40 (WheapLoadPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
