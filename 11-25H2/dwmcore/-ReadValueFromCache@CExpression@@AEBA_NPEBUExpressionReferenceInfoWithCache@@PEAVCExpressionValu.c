/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEBA_NPEBUExpressionReferenceInfoWithCache@@PEAVCExpressionValue@@@Z @ 0x1802A4E60
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180299664 (-SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z @ 0x1802A4394 (-AdjustPropertyTypeWithMask@CExpression@@AEBA-AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z.c)
 *     ?LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z @ 0x1802A4438 (-LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z.c)
 */

char __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        const struct ExpressionReferenceInfoWithCache *a2,
        struct CExpressionValue *a3,
        const char *a4)
{
  __int64 v8; // r8
  unsigned int v9; // eax

  if ( !*((_BYTE *)a2 + 24) )
    return 0;
  v8 = *((_QWORD *)this + 42) + *((unsigned int *)a2 + 5);
  v9 = *((_DWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 3) == 1 )
    v9 = CExpression::AdjustPropertyTypeWithMask((__int64)this, v9);
  CExpressionValue::SetValue((__int64)a3, v9, v8, a4);
  if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 4LL) & 0x40000000) != 0 )
    CExpression::LogCacheAccess(this, 1, *((unsigned int *)a2 + 5), a3);
  return 1;
}
