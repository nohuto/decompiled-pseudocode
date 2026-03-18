/*
 * XREFs of MiTransformValidPteViaIpi @ 0x14068404C
 * Callers:
 *     MiTransformValidPteInPlace @ 0x14039404C (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     Feature_Servicing_Mm_GlobalBitFlipNoBreakMake__private_IsEnabledDeviceUsageNoInline @ 0x1406838F8 (Feature_Servicing_Mm_GlobalBitFlipNoBreakMake__private_IsEnabledDeviceUsageNoInline.c)
 *     MiWritePteHighLevel @ 0x14068410C (MiWritePteHighLevel.c)
 */

__int64 __fastcall MiTransformValidPteViaIpi(volatile __int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v9; // rbx
  __int64 v10; // r8

  if ( _bittest64(&MiFlags, 0x27u)
    && KeGetCurrentPrcb()->Number < (unsigned int)KeNumberProcessors_0
    && (!_bittest64(&MiFlags, 0x28u)
     || !(unsigned int)Feature_Servicing_Mm_GlobalBitFlipNoBreakMake__private_IsEnabledDeviceUsageNoInline()) )
  {
    return MiWritePteHighLevel(a1, a2, a3, a4);
  }
  v9 = a3 | 0x20;
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  _InterlockedExchange64(a1, v9);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow();
  return MiIssueFlushTbEntire(2LL, 0xFFFFFFFFLL, v10);
}
