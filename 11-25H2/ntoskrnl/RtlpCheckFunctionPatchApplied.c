/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x140B53EE4
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407E56B0 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1406984B4 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(char *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return RtlpCheckFunctionPatchAppliedInOriginalImage(a1, 0LL, a3, a4, a4);
}
