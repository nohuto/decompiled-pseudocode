/*
 * XREFs of RtlpFcDoesFeatureHaveUniqueState @ 0x14078CEF4
 * Callers:
 *     RtlpFcApplyUpdateAndAddFeature @ 0x14078CE14 (RtlpFcApplyUpdateAndAddFeature.c)
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x14078CE88 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140A9731C (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpFcDoesFeatureHaveUniqueState(_DWORD *a1)
{
  return *a1
      && ((a1[1] & 0x3F00) != 0
       || (((unsigned __int8)a1[1] | (unsigned __int8)(a1[1] >> 10)) & 0x30) != 0
       || (a1[1] & 0x40) != 0);
}
