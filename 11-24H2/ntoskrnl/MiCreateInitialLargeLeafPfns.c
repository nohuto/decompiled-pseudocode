/*
 * XREFs of MiCreateInitialLargeLeafPfns @ 0x140431268
 * Callers:
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 *     MxInsertFreePages @ 0x140C54EE0 (MxInsertFreePages.c)
 * Callees:
 *     MiInitializePfnEntriesRaw @ 0x1404313E0 (MiInitializePfnEntriesRaw.c)
 */

unsigned __int64 __fastcall MiCreateInitialLargeLeafPfns(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned __int64 result; // rax
  __int64 v14; // rdi
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h]
  unsigned int v18; // [rsp+90h] [rbp+28h]

  v15 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v9 = 6LL;
  v10 = MiPageSizes[a3];
  do
  {
    *(_QWORD *)((char *)&v15 + v7) = *(_QWORD *)((char *)&unk_140E2FF80 + v7);
    v7 += 8LL;
    --v9;
  }
  while ( v9 );
  *((_QWORD *)&v17 + 1) = ((unsigned __int64)a5 << 43) ^ (*((_QWORD *)&v17 + 1) ^ ((unsigned __int64)a5 << 43)) & 0xFFE007FFFFFFFFFFuLL;
  v11 = 48 * a1 - 0x220000000000LL;
  if ( a6 )
    *((_QWORD *)&v16 + 1) |= 0x8000000000000000uLL;
  v12 = v10 - 1;
  v18 = v17;
  BYTE2(v18) = (a4 << 6) | BYTE2(v17) & 0x3F;
  result = v18;
  LODWORD(v17) = v18;
  do
  {
    if ( (v12 & a1) == 0 )
    {
      if ( !--a2 )
        return result;
      ++a1;
      v11 += 48LL;
    }
    if ( ((a1 ^ (a1 + a2 - 1)) & ~(v10 - 1)) != 0 )
      v14 = v10 - (a1 & v12);
    else
      v14 = a2;
    MiInitializePfnEntriesRaw(v11, &v15, v14);
    a1 += v14;
    result = 0xFFFFDE0000000000uLL;
    v11 = 48 * a1 - 0x220000000000LL;
    a2 -= v14;
  }
  while ( a2 );
  return result;
}
