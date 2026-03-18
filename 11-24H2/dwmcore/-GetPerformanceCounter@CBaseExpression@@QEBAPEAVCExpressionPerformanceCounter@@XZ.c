/*
 * XREFs of ?GetPerformanceCounter@CBaseExpression@@QEBAPEAVCExpressionPerformanceCounter@@XZ @ 0x1802A11E8
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CExpressionPerformanceCounter *__fastcall CBaseExpression::GetPerformanceCounter(CBaseExpression *this)
{
  return (struct CExpressionPerformanceCounter *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 80LL);
}
