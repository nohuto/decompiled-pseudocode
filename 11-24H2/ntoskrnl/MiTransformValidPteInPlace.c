/*
 * XREFs of MiTransformValidPteInPlace @ 0x14039404C
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiShadowTopLevelPxes @ 0x140393EB0 (MiShadowTopLevelPxes.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiMakeLargePageTable @ 0x1404F8168 (MiMakeLargePageTable.c)
 *     MiPfnRangeIsZero @ 0x14066E2AC (MiPfnRangeIsZero.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x14068D440 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiTransformValidPteUsingAccessedBit @ 0x1403940AC (MiTransformValidPteUsingAccessedBit.c)
 *     MiTransformValidPteViaIpi @ 0x14068404C (MiTransformValidPteViaIpi.c)
 */

__int64 __fastcall MiTransformValidPteInPlace(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 result; // rax

  result = MiTransformValidPteUsingAccessedBit(a1, a5);
  if ( !(_DWORD)result )
    return MiTransformValidPteViaIpi(a1, a2, a3, a4);
  return result;
}
