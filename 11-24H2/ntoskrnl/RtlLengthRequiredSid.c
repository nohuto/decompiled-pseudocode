/*
 * XREFs of RtlLengthRequiredSid @ 0x14086B5A0
 * Callers:
 *     EtwpApplyPayloadFilterInternal @ 0x1403E84E0 (EtwpApplyPayloadFilterInternal.c)
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1404AACB0 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14064A634 (WdipAccessCheck.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     PiAuAllocateAndInitializeSid @ 0x140725930 (PiAuAllocateAndInitializeSid.c)
 *     PiAuCheckClientInteractive @ 0x1407259B4 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407505BC (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlAllocateAndInitializeSidEx @ 0x140780A1C (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x140780B50 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C1270 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C2AB0 (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DC538 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140824610 (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     RtlpValidateSidBuffer @ 0x14086B55C (RtlpValidateSidBuffer.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14086B5C0 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     IopCreateUmdfDirectory @ 0x140C1E628 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140C2F240 (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140C34034 (PopNetInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C375B0 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepVariableInitialization @ 0x140C39A60 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140C4C7B4 (CmpInitializeTrustedInstallerSid.c)
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
