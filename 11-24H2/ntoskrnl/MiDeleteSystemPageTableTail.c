/*
 * XREFs of MiDeleteSystemPageTableTail @ 0x14045A5D0
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiFreeUnmappedPageTables @ 0x14045A680 (MiFreeUnmappedPageTables.c)
 *     MiReturnSystemCharges @ 0x14045A7E8 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiDeleteSystemPageTableTail(__int64 a1)
{
  unsigned int *v1; // rbx
  __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v1 = *(unsigned int **)(a1 + 184);
  v5 = 0LL;
  v8 = 0LL;
  v3 = *((_QWORD *)v1 + 4);
  v6 = 0LL;
  v7 = 0LL;
  if ( v3 )
  {
    MiFlushTbList(v3);
    MiReleaseProcessorFlushList();
    *((_QWORD *)v1 + 4) = 0LL;
  }
  if ( *((_QWORD *)v1 + 3) )
  {
    MiFreeUnmappedPageTables(v1 + 2, &v5);
    if ( *((_QWORD *)&v6 + 1) )
    {
      if ( qword_140E3D898 )
        MiReturnSystemCharges(
          *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 174LL)),
          *((_QWORD *)&v6 + 1),
          *((_QWORD *)&v6 + 1) - *((_QWORD *)&v5 + 1),
          *v1);
    }
  }
  return 0LL;
}
