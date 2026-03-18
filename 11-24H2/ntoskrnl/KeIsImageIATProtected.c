/*
 * XREFs of KeIsImageIATProtected @ 0x1405B07E8
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F13E8 (MiApplyHotPatchToLoadedDriver.c)
 *     VfUtilIsProtectedDriver @ 0x140B834AC (VfUtilIsProtectedDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsImageIATProtected(__int64 a1)
{
  return HIBYTE(*(unsigned __int16 *)(a1 + 110)) & 1;
}
