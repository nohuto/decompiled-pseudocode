/*
 * XREFs of SeCompareSigningLevels @ 0x14091E260
 * Callers:
 *     MiCreateSystemSection @ 0x14049DE3C (MiCreateSystemSection.c)
 *     MiWriteSegmentSignatureFlags @ 0x1404AECDC (MiWriteSegmentSignatureFlags.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407667E0 (PsCheckProcessFileSigningLevel.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     NtSetCachedSigningLevel2 @ 0x140865810 (NtSetCachedSigningLevel2.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     SeGetImageRequiredSigningLevel @ 0x14091DE58 (SeGetImageRequiredSigningLevel.c)
 *     PsConvertToGuiThread @ 0x14091E000 (PsConvertToGuiThread.c)
 *     MiValidateExistingImage @ 0x14093F22C (MiValidateExistingImage.c)
 *     MiValidateSectionSigningPolicy @ 0x140945CA8 (MiValidateSectionSigningPolicy.c)
 *     SepIsImageInMinTcbList @ 0x1409BB558 (SepIsImageInMinTcbList.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x1409BB8F4 (SepCheckAndSetAuditModeForProcess.c)
 *     SepIsMinTCB @ 0x1409BB9B4 (SepIsMinTCB.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     SeQuerySigningPolicy @ 0x1409BD120 (SeQuerySigningPolicy.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCompareSigningLevels(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140F044E0 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
