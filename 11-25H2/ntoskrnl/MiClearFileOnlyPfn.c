/*
 * XREFs of MiClearFileOnlyPfn @ 0x14066EDA0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiCopyPfnEntryRaw @ 0x140441F40 (MiCopyPfnEntryRaw.c)
 *     MiQueueExtentPfnDeletion @ 0x1404F35A4 (MiQueueExtentPfnDeletion.c)
 */

void __fastcall MiClearFileOnlyPfn(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-30h] BYREF
  __int64 v3; // [rsp+30h] [rbp-20h]
  unsigned __int64 v4; // [rsp+38h] [rbp-18h]
  __int128 v5; // [rsp+40h] [rbp-10h]
  int v6; // [rsp+60h] [rbp+10h]

  v5 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0x8000000000000000uLL;
  LODWORD(v5) = 4521984;
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
    MiSetPfnIdentity((__int64)&v2, 3u);
  *((_QWORD *)&v5 + 1) |= 0x40000000000000uLL;
  v6 = v5;
  HIBYTE(v6) = BYTE3(v5) | 0x10;
  LODWORD(v5) = v6;
  if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 )
    BYTE3(v5) |= 0x40u;
  *((_QWORD *)&v5 + 1) |= 0x20000000000000uLL;
  MiCopyPfnEntryRaw(a1, (__int64 *)&v2);
  MiQueueExtentPfnDeletion((_QWORD *)a1);
}
