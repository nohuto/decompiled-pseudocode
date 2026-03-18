/*
 * XREFs of ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140068628
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14003A050 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     vConvertXformToMatrix @ 0x140068490 (vConvertXformToMatrix.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1401C34B0 (-bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIsZero(EFLOAT *this)
{
  return *(float *)this == 0.0;
}
