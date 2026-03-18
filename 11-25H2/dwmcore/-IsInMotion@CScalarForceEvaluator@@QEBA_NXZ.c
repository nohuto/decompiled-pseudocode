/*
 * XREFs of ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1801CCB94
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801CC5C0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsInMotion@CScalarForce@@UEBA_NXZ @ 0x180230E90 (-IsInMotion@CScalarForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CExpressionForce@@UEBA_NXZ @ 0x1802B95C0 (-IsInMotion@CExpressionForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x1802B9BC0 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScalarForceEvaluator::IsInMotion(CScalarForceEvaluator *this)
{
  return *((float *)this + 14) <= COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm)
      || *((float *)this + 15) <= COERCE_FLOAT(*((_DWORD *)this + 5) & _xmm);
}
