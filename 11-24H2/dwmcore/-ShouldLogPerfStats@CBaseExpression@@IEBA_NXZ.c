/*
 * XREFs of ?ShouldLogPerfStats@CBaseExpression@@IEBA_NXZ @ 0x1802A12C0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18029B124 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::ShouldLogPerfStats(CBaseExpression *this)
{
  bool result; // al

  if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 4LL) & 0x40000000) != 0 )
    return 1;
  result = 0;
  if ( CCommonRegistryData::LogExpressionPerfStats )
    return 1;
  return result;
}
