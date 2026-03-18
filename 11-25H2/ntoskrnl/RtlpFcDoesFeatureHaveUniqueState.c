/*
 * XREFs of RtlpFcDoesFeatureHaveUniqueState @ 0x14077DD24
 * Callers:
 *     RtlpFcApplyUpdateAndAddFeature @ 0x14077DBC4 (RtlpFcApplyUpdateAndAddFeature.c)
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x14077DCB8 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140A93040 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
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
