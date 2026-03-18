/*
 * XREFs of ?GetPerformanceCounter@CBaseExpression@@QEBAPEAVCExpressionPerformanceCounter@@XZ @ 0x1802AADD0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CExpressionPerformanceCounter *__fastcall CBaseExpression::GetPerformanceCounter(CBaseExpression *this)
{
  return (struct CExpressionPerformanceCounter *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 80LL);
}
