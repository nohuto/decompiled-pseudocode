/*
 * XREFs of SeCompareSigningLevels @ 0x1409FA8D0
 * Callers:
 *     MiCreateSystemSection @ 0x140443248 (MiCreateSystemSection.c)
 *     MiWriteSegmentSignatureFlags @ 0x1404A7950 (MiWriteSegmentSignatureFlags.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407763D0 (PsCheckProcessFileSigningLevel.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     NtSetCachedSigningLevel2 @ 0x14088D710 (NtSetCachedSigningLevel2.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     MiValidateSectionSigningPolicy @ 0x14093C388 (MiValidateSectionSigningPolicy.c)
 *     MiValidateExistingImage @ 0x14098DCCC (MiValidateExistingImage.c)
 *     SepIsImageInMinTcbList @ 0x1409F9F4C (SepIsImageInMinTcbList.c)
 *     SeQuerySigningPolicy @ 0x1409FA0B0 (SeQuerySigningPolicy.c)
 *     SepIsMinTCB @ 0x1409FA28C (SepIsMinTCB.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x1409FA668 (SepCheckAndSetAuditModeForProcess.c)
 *     SeGetImageRequiredSigningLevel @ 0x1409FA728 (SeGetImageRequiredSigningLevel.c)
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCompareSigningLevels(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140F04B60 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
