/*
 * XREFs of ZwQueryLicenseValue @ 0x1406A9FB0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlGetProductInfo @ 0x1405EBC70 (RtlGetProductInfo.c)
 *     RtlIsFeatureEnabledForEnterprise @ 0x1405EC610 (RtlIsFeatureEnabledForEnterprise.c)
 *     DifZwQueryLicenseValueWrapper @ 0x140644630 (DifZwQueryLicenseValueWrapper.c)
 *     RtlpGetWindowsPolicy @ 0x1406F847C (RtlpGetWindowsPolicy.c)
 *     SepIsLockedDown @ 0x14078E558 (SepIsLockedDown.c)
 *     ExGetExpirationDate @ 0x1407B8318 (ExGetExpirationDate.c)
 *     ExpGenuinePolicyPostProcess @ 0x1407B8DD0 (ExpGenuinePolicyPostProcess.c)
 *     MmCreateMirror @ 0x1407EC490 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A5B55C (RtlpGetPolicyValueForSystemCapability.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140C0DC08 (InitializeDynamicPartitioningPolicy.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140C2F5F4 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140C46D90 (WheapLoadPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ValueName);
}
