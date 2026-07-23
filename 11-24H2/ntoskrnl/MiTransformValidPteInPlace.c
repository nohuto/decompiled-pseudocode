/*
 * XREFs of MiTransformValidPteInPlace @ 0x14038D668
 * Callers:
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiShadowTopLevelPxes @ 0x14038D4CC (MiShadowTopLevelPxes.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiMakeLargePageTable @ 0x1404F5A48 (MiMakeLargePageTable.c)
 *     MiPfnRangeIsZero @ 0x14066F480 (MiPfnRangeIsZero.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x14068E570 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiTransformValidPteUsingAccessedBit @ 0x14038D6C8 (MiTransformValidPteUsingAccessedBit.c)
 *     MiTransformValidPteViaIpi @ 0x1406851A8 (MiTransformValidPteViaIpi.c)
 */

__int64 __fastcall MiTransformValidPteInPlace(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 result; // rax

  result = MiTransformValidPteUsingAccessedBit(a1, a5);
  if ( !(_DWORD)result )
    return MiTransformValidPteViaIpi(a1, a2, a3, a4);
  return result;
}
