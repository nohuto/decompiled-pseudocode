/*
 * XREFs of ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x1801C83F0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x1802A4EE4 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionPerformanceCounter::AddDurationSample(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = a2;
  if ( (unsigned __int64)a2 < 6 )
  {
    ++*(_DWORD *)(a1 + 4LL * a2);
    *(_QWORD *)(a1 + 8LL * a2 + 24) += a3;
  }
  return result;
}
