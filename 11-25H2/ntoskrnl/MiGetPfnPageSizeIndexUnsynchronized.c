/*
 * XREFs of MiGetPfnPageSizeIndexUnsynchronized @ 0x1404337D0
 * Callers:
 *     MiActivePageClaimCandidate @ 0x1402201D0 (MiActivePageClaimCandidate.c)
 *     MiSetProbePagesAhead @ 0x1402AE4D0 (MiSetProbePagesAhead.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiLegitimatePageForDriversToMap @ 0x1404336D0 (MiLegitimatePageForDriversToMap.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140678A8C (MiGetPagesRemainingInResidentPage.c)
 *     MiZeroPageMakeHot @ 0x140684F98 (MiZeroPageMakeHot.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F3FBC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiSafeLockPageAtDpc @ 0x140220D38 (MiSafeLockPageAtDpc.c)
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140220E10 (MiGetBaseResidentPage.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 */

__int64 __fastcall MiGetPfnPageSizeIndexUnsynchronized(__int64 a1, int *a2, int *a3)
{
  int v5; // r14d
  unsigned int PfnPageSizeIndex; // edi
  int v8; // r15d
  unsigned __int64 v9; // rcx
  char v10; // al
  unsigned __int8 v11; // bp
  __int64 BaseResidentPage; // rbx

  v5 = *(_BYTE *)(a1 + 34) & 7;
  PfnPageSizeIndex = 3;
  v8 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
  {
    v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
    if ( KeGetCurrentIrql() < 2u )
      v10 = MiSafeLockPage(v9, 0xAAAAAAAAAAAAAAABuLL, (__int64)a3);
    else
      v10 = MiSafeLockPageAtDpc(v9, 0xAAAAAAAAAAAAAAABuLL, (__int64)a3);
    v11 = v10;
    if ( v10 == 17 )
    {
      *a2 = 5;
      *a3 = 3;
      return PfnPageSizeIndex;
    }
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a1);
      v5 = *(_BYTE *)(BaseResidentPage + 34) & 7;
      v8 = (unsigned __int8)BYTE2(*(_DWORD *)(BaseResidentPage + 32)) >> 6;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      if ( BaseResidentPage != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockPage(a1, v11);
  }
  *a2 = v5;
  *a3 = v8;
  return PfnPageSizeIndex;
}
