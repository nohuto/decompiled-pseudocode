/*
 * XREFs of RtlSubAuthoritySid @ 0x14044F1F0
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1406EF480 (RtlIsParentOfChildAppContainer.c)
 *     PiAuCheckClientInteractive @ 0x14071BEA4 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407461D8 (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlGetAppContainerParent @ 0x1407719D0 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 *     InitializeSidLookupTable @ 0x140787140 (InitializeSidLookupTable.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14078BDF4 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407B1650 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407B3370 (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407CC828 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407CDA54 (CmpHiveRootSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408107AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408140A8 (DrvDbGetSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     SeQueryMandatoryLabel @ 0x140903F5C (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x140918AA0 (LookupSidInTable.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14095AF24 (_SysCtxRegOpenCurrentUserKey.c)
 *     SepValidateReferencedCachedHandles @ 0x140983B48 (SepValidateReferencedCachedHandles.c)
 *     RtlIsElevatedRid @ 0x1409994B0 (RtlIsElevatedRid.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A06724 (ObpVerifyCreatorAccessCheck.c)
 *     RtlCapabilityCheck @ 0x140A09AE0 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A09EA8 (RtlpCapabilityCheckSystemCapability.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6AB54 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A77500 (_PnpGetPropertiesSecurityDescriptor.c)
 *     SepCheckCapabilities @ 0x140A87D3C (SepCheckCapabilities.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9AD58 (ExpFirmwareAccessAppContainerCheck.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
