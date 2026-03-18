/*
 * XREFs of ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801AEBE0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18029B124 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

LONGLONG __fastcall QpcStopwatch::GetElapsed(QpcStopwatch *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)this )
    return 0LL;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  return PerformanceCount.QuadPart - *(_QWORD *)this;
}
