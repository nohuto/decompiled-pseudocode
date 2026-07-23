/*
 * XREFs of MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14
 * Callers:
 *     MiSetProbePagesAhead @ 0x140239B00 (MiSetProbePagesAhead.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiActivePageClaimCandidate @ 0x140310420 (MiActivePageClaimCandidate.c)
 *     MiLegitimatePageForDriversToMap @ 0x14041DB10 (MiLegitimatePageForDriversToMap.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140685444 (MiGetPagesRemainingInResidentPage.c)
 *     MiZeroPageMakeHot @ 0x1406914C8 (MiZeroPageMakeHot.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140310FE0 (MiGetBaseResidentPage.c)
 *     MiSafeLockPageAtDpc @ 0x140311180 (MiSafeLockPageAtDpc.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 */

__int64 __fastcall MiGetPfnPageSizeIndexUnsynchronized(__int64 a1, int *a2, int *a3)
{
  int v5; // r14d
  unsigned int PfnPageSizeIndex; // edi
  int v8; // r15d
  ULONG_PTR v9; // rcx
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
      v10 = MiSafeLockPage(v9);
    else
      v10 = MiSafeLockPageAtDpc(v9);
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
