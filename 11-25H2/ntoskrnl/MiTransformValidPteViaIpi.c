/*
 * XREFs of MiTransformValidPteViaIpi @ 0x1406787F8
 * Callers:
 *     MiTransformValidPteInPlace @ 0x1403FF3E4 (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiIssueFlushTbEntire @ 0x14026F7B8 (MiIssueFlushTbEntire.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiWritePteHighLevel @ 0x140678880 (MiWritePteHighLevel.c)
 */

__int64 __fastcall MiTransformValidPteViaIpi(volatile __int64 *a1, __int64 a2, __int64 a3)
{
  if ( _bittest64(&MiFlags, 0x27u) && KeGetCurrentPrcb()->Number < (unsigned int)KeNumberProcessors_0 )
    return MiWritePteHighLevel(a1, a2, a3);
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  _InterlockedExchange64(a1, a3 | 0x20);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow();
  return MiIssueFlushTbEntire(2LL, -1);
}
