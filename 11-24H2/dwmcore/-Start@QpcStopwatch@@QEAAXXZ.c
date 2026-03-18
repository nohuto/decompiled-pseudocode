/*
 * XREFs of ?Start@QpcStopwatch@@QEAAXXZ @ 0x18021BE64
 * Callers:
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180012630 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18029B124 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall QpcStopwatch::Start(QpcStopwatch *this)
{
  BOOL v2; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCount.QuadPart = 0LL;
  v2 = QueryPerformanceCounter(&PerformanceCount);
  *(_QWORD *)this = PerformanceCount.QuadPart & -(__int64)v2;
}
