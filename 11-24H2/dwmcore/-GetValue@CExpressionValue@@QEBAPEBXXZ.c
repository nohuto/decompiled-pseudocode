/*
 * XREFs of ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x1801BA4B0
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180152FAC (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18023DC94 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z @ 0x18029A678 (-LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@@@Z @ 0x18029B2B0 (-StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@.c)
 * Callees:
 *     <none>
 */

CExpressionValue *__fastcall CExpressionValue::GetValue(CExpressionValue *this)
{
  if ( *((_DWORD *)this + 18) == 11 )
    return (CExpressionValue *)*((_QWORD *)this + 8);
  else
    return this;
}
