/*
 * XREFs of MiClearFileOnlyPfn @ 0x140251428
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiQueueExtentPfnDeletion @ 0x1404C8730 (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiClearFileOnlyPfn(__int64 a1)
{
  __int128 *v2; // rcx
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-20h]
  unsigned __int64 v7; // [rsp+38h] [rbp-18h]
  __int128 v8; // [rsp+40h] [rbp-10h]
  int v9; // [rsp+60h] [rbp+10h]

  v8 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0x8000000000000000uLL;
  LODWORD(v8) = 4521984;
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
    MiSetPfnIdentity((__int64)&v5, 3u);
  *((_QWORD *)&v8 + 1) |= 0x40000000000000uLL;
  v9 = v8;
  HIBYTE(v9) = BYTE3(v8) | 0x10;
  LODWORD(v8) = v9;
  if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 )
    BYTE3(v8) |= 0x40u;
  v2 = &v5;
  *((_QWORD *)&v8 + 1) |= 0x20000000000000uLL;
  v3 = 6LL;
  do
  {
    *(_QWORD *)((char *)v2 + a1 - (_QWORD)&v5) = *(_QWORD *)v2;
    v2 = (__int128 *)((char *)v2 + 8);
    --v3;
  }
  while ( v3 );
  return MiQueueExtentPfnDeletion(a1);
}
