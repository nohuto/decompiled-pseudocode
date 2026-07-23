/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x1402567C0
 * Callers:
 *     MiDecommitFreePage @ 0x1402068E0 (MiDecommitFreePage.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 * Callees:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v6[4]; // [rsp+20h] [rbp-78h] BYREF
  int v7; // [rsp+40h] [rbp-58h]
  __int64 v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+80h] [rbp-18h]

  memset_0(v6, 0, 0x68uLL);
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u)
    || (unsigned int)MiGetPfnSlabType(a2) != 9
    || !a1
    || (*(_BYTE *)(a2 + 35) & 0x10) != 0
    || (*(_DWORD *)(a2 + 32) & 0x40000000) != 0
    || *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) != *((_QWORD *)qword_140E300C8
                                                                                  + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL))
    || (HIBYTE(*(_DWORD *)(a2 + 32)) & 7u) >= 5 )
  {
    return MiPfnReferenceCountIsZero(a2, v4);
  }
  v9 = 3;
  v6[2] = 0x3FFFFFFFFFLL;
  v6[3] = 0x3FFFFFFFFFLL;
  v7 = 0;
  v8 = a1;
  MiAddPageToInsertList(v6, 0LL, v4);
  return MiInsertPagesInList(v6, 0);
}
