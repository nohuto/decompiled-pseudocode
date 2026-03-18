/*
 * XREFs of RtlSubAuthoritySid @ 0x14044FDD0
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1406FB2C0 (RtlIsParentOfChildAppContainer.c)
 *     PiAuCheckClientInteractive @ 0x140727E24 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075229C (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlGetAppContainerParent @ 0x140780C20 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     InitializeSidLookupTable @ 0x140796510 (InitializeSidLookupTable.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B1BC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C0E20 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C187C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DBFE8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408206AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140823ED0 (DrvDbGetSecurityDescriptor.c)
 *     LookupSidInTable @ 0x140866BD0 (LookupSidInTable.c)
 *     SeQueryMandatoryLabel @ 0x1408696DC (SeQueryMandatoryLabel.c)
 *     SepValidateReferencedCachedHandles @ 0x1408F2790 (SepValidateReferencedCachedHandles.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
 *     RtlIsElevatedRid @ 0x1409B2C30 (RtlIsElevatedRid.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A09994 (ObpVerifyCreatorAccessCheck.c)
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A62BCC (RtlpCapabilityCheckSystemCapability.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6D364 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A79378 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8BE6C (_SysCtxRegOpenCurrentUserKey.c)
 *     SepCheckCapabilities @ 0x140A8CD3C (SepCheckCapabilities.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140AA0B18 (ExpFirmwareAccessAppContainerCheck.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
