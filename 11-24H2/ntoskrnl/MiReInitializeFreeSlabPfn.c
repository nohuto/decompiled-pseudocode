/*
 * XREFs of MiReInitializeFreeSlabPfn @ 0x140218778
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x140218448 (MiGetRepurposedSlabStandbyPage.c)
 *     MiFreePageToSlabAllocator @ 0x140250F18 (MiFreePageToSlabAllocator.c)
 *     MiRepurposeStandbySlabPage @ 0x1403F80A4 (MiRepurposeStandbySlabPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiReInitializeFreeSlabPfn(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r8
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h]

  v4 = a1;
  a1[1] = (*(_DWORD *)(a2 + 128) != 2) - 2LL;
  *a1 = 0LL;
  v5 = a1[3] & 0xFFFFFF0000000000uLL;
  v6 = a1 + 2;
  v4[3] = v5;
  *v6 = CLFS_LSN_NULL_EXT;
  if ( (*((_BYTE *)v4 + 34) & 7) == 1 )
    MiSetOriginalPtePfnFromFreeList(v6, a2, v4, a4);
  v8 = *((_DWORD *)v4 + 8);
  BYTE2(v8) = BYTE2(v8) & 0xF8 | 5;
  result = v8;
  *((_DWORD *)v4 + 8) = v8;
  return result;
}
