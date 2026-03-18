/*
 * XREFs of ?ConfirmSpace@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_K@Z @ 0x1400E1FA4
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x14007F914 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CBatchSharedMemoryPool::ConfirmSpace(
        DirectComposition::CBatchSharedMemoryPool *this,
        __int64 a2)
{
  __int64 v3; // rcx
  bool v4; // zf
  __int64 v5; // rcx

  v3 = a2 + *((_QWORD *)this + 4);
  v4 = *((_BYTE *)this + 64) == 0;
  *((_QWORD *)this + 4) = v3;
  if ( !v4 || *((_QWORD *)this + 5) != v3 )
    return 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_QWORD *)this + 6) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( v5 )
      MmUnmapViewOfSection(v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  return 1;
}
