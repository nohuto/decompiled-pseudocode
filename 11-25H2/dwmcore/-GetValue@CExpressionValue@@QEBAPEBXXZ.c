/*
 * XREFs of ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x1801CB8D0
 * Callers:
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1800331E4 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003A6F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z @ 0x1802A4438 (-LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@@@Z @ 0x1802A5070 (-StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@.c)
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
