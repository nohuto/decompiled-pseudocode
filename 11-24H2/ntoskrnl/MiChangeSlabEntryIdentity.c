/*
 * XREFs of MiChangeSlabEntryIdentity @ 0x140687690
 * Callers:
 *     MiReplenishSlabAllocatorByIdentity @ 0x1404B74A4 (MiReplenishSlabAllocatorByIdentity.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x140688670 (MiDeleteSlabEntriesForIdentity.c)
 * Callees:
 *     MiClearHintSlabEntry @ 0x14043C470 (MiClearHintSlabEntry.c)
 *     MiSetSlabTypeIdentifiers @ 0x140487BBC (MiSetSlabTypeIdentifiers.c)
 */

char __fastcall MiChangeSlabEntryIdentity(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 *v7; // r10
  __int16 v8; // r11
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 **v12; // rcx

  v2 = a2 + 24;
  v5 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v5 + 8) != v2 )
    goto LABEL_8;
  v6 = *(_QWORD **)(v2 + 8);
  if ( *v6 != v2 )
    goto LABEL_8;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  MiClearHintSlabEntry(a1, a2);
  v9 = *(_DWORD *)(a2 + 92);
  if ( (_BYTE)v8 == 0xFF )
  {
    LOBYTE(v8) = 64;
    v10 = v9 & 0xFFFFFFFB;
  }
  else
  {
    v10 = ((unsigned __int16)v9 ^ (unsigned __int16)(8 * v8)) & 0x1F8 ^ v9 | 4;
  }
  *(_DWORD *)(a2 + 92) = v10;
  v11 = *(_QWORD *)(a1 + 88) + 16LL * (unsigned __int8)v8;
  v12 = *(__int64 ***)(v11 + 8);
  if ( *v12 != (__int64 *)v11 )
LABEL_8:
    __fastfail(3u);
  *v7 = v11;
  v7[1] = (__int64)v12;
  *v12 = v7;
  *(_QWORD *)(v11 + 8) = v7;
  return MiSetSlabTypeIdentifiers(
           *(_QWORD *)(a2 + 40),
           LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]),
           *(_DWORD *)(a1 + 128),
           v8,
           (*(_DWORD *)(a2 + 92) >> 1) & 1);
}
