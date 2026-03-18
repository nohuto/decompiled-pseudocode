/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x140B64034
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407F5540 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1406A3694 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(char *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return RtlpCheckFunctionPatchAppliedInOriginalImage(a1, 0LL, a3, a4, a4);
}
