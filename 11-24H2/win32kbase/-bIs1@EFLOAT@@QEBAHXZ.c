/*
 * XREFs of ?bIs1@EFLOAT@@QEBAHXZ @ 0x140068648
 * Callers:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1400683E0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     vConvertXformToMatrix @ 0x140068490 (vConvertXformToMatrix.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1(EFLOAT *this)
{
  return *(float *)this == 1.0;
}
