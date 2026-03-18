/*
 * XREFs of RtlLengthRequiredSid @ 0x140867110
 * Callers:
 *     EtwpApplyPayloadFilterInternal @ 0x14032B140 (EtwpApplyPayloadFilterInternal.c)
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1404B0420 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14064C074 (WdipAccessCheck.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     PiAuAllocateAndInitializeSid @ 0x140727DA0 (PiAuAllocateAndInitializeSid.c)
 *     PiAuCheckClientInteractive @ 0x140727E24 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075229C (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlAllocateAndInitializeSidEx @ 0x140780AEC (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x140780C20 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B1BC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C0E20 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C187C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DBFE8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140823ED0 (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     RtlpValidateSidBuffer @ 0x1408670C8 (RtlpValidateSidBuffer.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140867130 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     IopCreateUmdfDirectory @ 0x140C1C5E8 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140C2D120 (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140C31EF4 (PopNetInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C35470 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepVariableInitialization @ 0x140C37920 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140C4A618 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
