/*
 * XREFs of RtlSubAuthoritySid @ 0x140445040
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1406F8F00 (RtlIsParentOfChildAppContainer.c)
 *     PiAuCheckClientInteractive @ 0x1407259B4 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407505BC (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlGetAppContainerParent @ 0x140780B50 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 *     InitializeSidLookupTable @ 0x140796620 (InitializeSidLookupTable.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C1270 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C2AB0 (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DC538 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140820DEC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140824610 (DrvDbGetSecurityDescriptor.c)
 *     LookupSidInTable @ 0x14086B1E0 (LookupSidInTable.c)
 *     SeQueryMandatoryLabel @ 0x14086DA0C (SeQueryMandatoryLabel.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 *     SepValidateReferencedCachedHandles @ 0x140913DDC (SepValidateReferencedCachedHandles.c)
 *     RtlIsElevatedRid @ 0x1409A9FC0 (RtlIsElevatedRid.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A05EC4 (ObpVerifyCreatorAccessCheck.c)
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A5B4CC (RtlpCapabilityCheckSystemCapability.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A66A24 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A73678 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8835C (_SysCtxRegOpenCurrentUserKey.c)
 *     SepCheckCapabilities @ 0x140A8926C (SepCheckCapabilities.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9BEA8 (ExpFirmwareAccessAppContainerCheck.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
