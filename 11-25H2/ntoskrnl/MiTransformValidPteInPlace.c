/*
 * XREFs of MiTransformValidPteInPlace @ 0x1403FF3E4
 * Callers:
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiShadowTopLevelPxes @ 0x1403FE210 (MiShadowTopLevelPxes.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiMakeLargePageTable @ 0x1404F59B4 (MiMakeLargePageTable.c)
 *     MiPfnRangeIsZero @ 0x14066276C (MiPfnRangeIsZero.c)
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x140681BB0 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiTransformValidPteUsingAccessedBit @ 0x1403FF444 (MiTransformValidPteUsingAccessedBit.c)
 *     MiTransformValidPteViaIpi @ 0x1406787F8 (MiTransformValidPteViaIpi.c)
 */

__int64 __fastcall MiTransformValidPteInPlace(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 result; // rax

  result = MiTransformValidPteUsingAccessedBit(a1, a5);
  if ( !(_DWORD)result )
    return MiTransformValidPteViaIpi(a1, a2, a3, a4);
  return result;
}
