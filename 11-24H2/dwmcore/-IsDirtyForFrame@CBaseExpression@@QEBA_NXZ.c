/*
 * XREFs of ?IsDirtyForFrame@CBaseExpression@@QEBA_NXZ @ 0x1800132F0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsDirtyForFrame(CBaseExpression *this)
{
  return *((_QWORD *)this + 29) > *((_QWORD *)this + 22);
}
