/*
 * XREFs of ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1402ADF1C
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1401FCC98 (_SetMagnificationInputTransform.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall VerifyMagInputDimensions(const struct tagRECT *a1)
{
  const struct tagRECT *v1; // rcx

  if ( !IsRectEmptyInl(a1) && !IsRectEmptyInl(v1 + 1) )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
