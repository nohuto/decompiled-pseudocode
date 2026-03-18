/*
 * XREFs of SeCompareSigningLevels @ 0x1409354F0
 * Callers:
 *     MiCreateSystemSection @ 0x14044C348 (MiCreateSystemSection.c)
 *     MiWriteSegmentSignatureFlags @ 0x1404AD270 (MiWriteSegmentSignatureFlags.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407761B0 (PsCheckProcessFileSigningLevel.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     NtSetCachedSigningLevel2 @ 0x140889860 (NtSetCachedSigningLevel2.c)
 *     SeGetImageRequiredSigningLevel @ 0x1409350E8 (SeGetImageRequiredSigningLevel.c)
 *     PsConvertToGuiThread @ 0x140935290 (PsConvertToGuiThread.c)
 *     MiValidateExistingImage @ 0x140943A54 (MiValidateExistingImage.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     MiValidateSectionSigningPolicy @ 0x1409579F8 (MiValidateSectionSigningPolicy.c)
 *     SepIsImageInMinTcbList @ 0x140A1B9DC (SepIsImageInMinTcbList.c)
 *     SeQuerySigningPolicy @ 0x140A1BB40 (SeQuerySigningPolicy.c)
 *     SepIsMinTCB @ 0x140A1BD1C (SepIsMinTCB.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x140A1C0F8 (SepCheckAndSetAuditModeForProcess.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCompareSigningLevels(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140F048C0 )
    return guard_dispatch_icall_no_overrides(a1, a2, qword_140F048C0, a4);
  return result;
}
