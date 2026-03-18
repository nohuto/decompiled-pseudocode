/*
 * XREFs of MiGetPfnPageSizeIndexUnsynchronized @ 0x140463848
 * Callers:
 *     MiSetProbePagesAhead @ 0x140284570 (MiSetProbePagesAhead.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402855E0 (MiLegitimatePageForDriversToMap.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiActivePageClaimCandidate @ 0x140306540 (MiActivePageClaimCandidate.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140684318 (MiGetPagesRemainingInResidentPage.c)
 *     MiZeroPageMakeHot @ 0x1406903F8 (MiZeroPageMakeHot.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140307100 (MiGetBaseResidentPage.c)
 *     MiSafeLockPageAtDpc @ 0x1403072A0 (MiSafeLockPageAtDpc.c)
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
      v10 = MiSafeLockPage(v9, 0xAAAAAAAAAAAAAAABuLL, (__int64)a3);
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
