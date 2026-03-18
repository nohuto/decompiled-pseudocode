/*
 * XREFs of RtlLengthRequiredSid @ 0x140918FE0
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1403F03A0 (EtwpApplyPayloadFilterInternal.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1404AF6B0 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1406400B4 (WdipAccessCheck.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     PiAuAllocateAndInitializeSid @ 0x14071BE20 (PiAuAllocateAndInitializeSid.c)
 *     PiAuCheckClientInteractive @ 0x14071BEA4 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407461D8 (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlAllocateAndInitializeSidEx @ 0x14077189C (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x1407719D0 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14078BDF4 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407B1650 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407B3370 (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407CC828 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407CDA54 (CmpHiveRootSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408140A8 (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     RtlpValidateSidBuffer @ 0x140918F98 (RtlpValidateSidBuffer.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140919000 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140C0B414 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140C1C01C (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140C20E04 (PopNetInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C241A4 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepVariableInitialization @ 0x140C26650 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140C3931C (CmpInitializeTrustedInstallerSid.c)
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
