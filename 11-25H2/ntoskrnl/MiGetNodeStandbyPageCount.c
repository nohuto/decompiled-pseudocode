/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x1403BCCEC
 * Callers:
 *     MiRebuildLargePages @ 0x1403BBD60 (MiRebuildLargePages.c)
 *     MiFreeZeroPagesNeeded @ 0x1403BC590 (MiFreeZeroPagesNeeded.c)
 *     MiRebuildLargePage @ 0x1403BC60C (MiRebuildLargePage.c)
 *     MiCheckZeroFreeRebalance @ 0x1403BCA78 (MiCheckZeroFreeRebalance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeStandbyPageCount(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v3; // r10
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0LL;
  v4 = (__int64 *)(704LL * a3 + 57216LL * a2 + *(_QWORD *)(a1 + 16) + 5192LL);
  v5 = 8LL;
  do
  {
    v6 = *v4;
    v4 += 11;
    v3 += v6;
    --v5;
  }
  while ( v5 );
  return v3;
}
