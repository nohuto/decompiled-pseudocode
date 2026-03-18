/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x14023C818
 * Callers:
 *     MiHardFaultPageRelease @ 0x14023EBE8 (MiHardFaultPageRelease.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // r8
  _BYTE v6[16]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v7; // [rsp+30h] [rbp-68h]
  __int64 v8; // [rsp+38h] [rbp-60h]
  int v9; // [rsp+40h] [rbp-58h]
  __int64 v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+80h] [rbp-18h]

  memset_0(v6, 0, 0x68uLL);
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u)
    || (unsigned int)MiGetPfnSlabType(a2) != 9
    || !a1
    || (*(_BYTE *)(a2 + 35) & 0x10) != 0
    || (*(_DWORD *)(a2 + 32) & 0x40000000) != 0
    || *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) != *((_QWORD *)qword_140E2FD48
                                                                                  + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL))
    || (HIBYTE(*(_DWORD *)(a2 + 32)) & 7u) >= 5 )
  {
    return MiPfnReferenceCountIsZero(a2, v4);
  }
  v11 = 3;
  v7 = 0x3FFFFFFFFFLL;
  v8 = 0x3FFFFFFFFFLL;
  v9 = 0;
  v10 = a1;
  MiAddPageToInsertList(v6, 0LL, v4);
  return MiInsertPagesInList(v6, 0LL);
}
