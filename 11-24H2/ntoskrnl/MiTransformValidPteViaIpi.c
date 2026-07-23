/*
 * XREFs of MiTransformValidPteViaIpi @ 0x1406851A8
 * Callers:
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     MiWritePteHighLevel @ 0x140685238 (MiWritePteHighLevel.c)
 */

__int64 __fastcall MiTransformValidPteViaIpi(volatile __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( _bittest64(&MiFlags, 0x27u)
    && KeGetCurrentPrcb()->Number < (unsigned int)KeNumberProcessors_0
    && !_bittest64(&MiFlags, 0x28u) )
  {
    return MiWritePteHighLevel(a1, a2, a3);
  }
  v5 = a3 | 0x20;
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  _InterlockedExchange64(a1, v5);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow((__int64)a1, v5, v6, v7);
  return MiIssueFlushTbEntire(2LL, 0xFFFFFFFFLL, v6);
}
