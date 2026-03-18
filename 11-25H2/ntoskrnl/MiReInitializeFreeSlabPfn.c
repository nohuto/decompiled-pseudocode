/*
 * XREFs of MiReInitializeFreeSlabPfn @ 0x1402C60D4
 * Callers:
 *     MiGetRepurposedSlabStandbyPage @ 0x1402C5DA4 (MiGetRepurposedSlabStandbyPage.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiFreePageToSlabAllocator @ 0x1403B7474 (MiFreePageToSlabAllocator.c)
 *     MiRepurposeStandbySlabPage @ 0x1403B9694 (MiRepurposeStandbySlabPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiReInitializeFreeSlabPfn(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  unsigned __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h]

  v2 = a1;
  a1[1] = (*(_DWORD *)(a2 + 128) != 2) - 2LL;
  *a1 = 0LL;
  v3 = a1[3] & 0xFFFFFF0000000000uLL;
  v4 = a1 + 2;
  v2[3] = v3;
  *v4 = CLFS_LSN_NULL_EXT;
  if ( (*((_BYTE *)v2 + 34) & 7) == 1 )
    MiSetOriginalPtePfnFromFreeList(v4);
  v6 = *((_DWORD *)v2 + 8);
  BYTE2(v6) = BYTE2(v6) & 0xF8 | 5;
  result = v6;
  *((_DWORD *)v2 + 8) = v6;
  return result;
}
