/*
 * XREFs of MiRemoveSlabEntry @ 0x140414068
 * Callers:
 *     MiFreeSlabEntries @ 0x1402D3B04 (MiFreeSlabEntries.c)
 *     MiDemoteSlabEntry @ 0x140442F50 (MiDemoteSlabEntry.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x140687540 (MiDeleteSlabEntriesForIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x14068781C (MiEstablishDefragSlabEntries.c)
 *     MmUpdateSlabRangeType @ 0x140C596EC (MmUpdateSlabRangeType.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x140413F84 (MiUpdateSlabTypeAvailablePages.c)
 *     MiClearHintSlabEntry @ 0x14041415C (MiClearHintSlabEntry.c)
 */

__int64 __fastcall MiRemoveSlabEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx

  v6 = LODWORD(MiPageSizes[(*(_DWORD *)(a2 + 136) >> 4) & 3]);
  RtlRbRemoveNode((unsigned __int64 *)a2, (unsigned __int64 *)a3);
  if ( *(_DWORD *)(a2 + 128) == 8 )
  {
    v9 = *(_QWORD *)(a3 + 24);
    if ( *(_QWORD *)(v9 + 8) != a3 + 24 || (v10 = *(_QWORD **)(a3 + 32), *v10 != a3 + 24) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  MiClearHintSlabEntry(a2, a3);
  *(_QWORD *)(a2 + 96) -= *(unsigned int *)(a3 + 84);
  MiUpdateSlabTypeAvailablePages(a1, *(_DWORD *)(a2 + 128), -(__int64)*(unsigned int *)(a3 + 84));
  if ( (*(_DWORD *)(a3 + 92) & 2) != 0 )
  {
    *(_QWORD *)(a2 + 112) -= v6;
    v7 = 19664LL;
  }
  else
  {
    v7 = 19672LL;
  }
  _InterlockedAdd64((volatile signed __int64 *)(v7 + a1), -v6);
  result = *(_QWORD *)(a2 + 120) - 1LL;
  *(_QWORD *)(a2 + 120) = result;
  return result;
}
