/*
 * XREFs of HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x14054E7A0
 * Callers:
 *     HalpDmaAllocateDomain @ 0x14054E10C (HalpDmaAllocateDomain.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 */

__int64 __fastcall HalpDmaGetReservedRegionsForHybridPassthroughDomain(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 i; // r9
  __int64 v5; // rdx

  v1 = HalpDmaDomainHybridPassthroughReservedRegionsCount;
  v2 = 0;
  v3 = HalpMmAllocCtxAlloc(a1, (unsigned int)(32 * HalpDmaDomainHybridPassthroughReservedRegionsCount));
  if ( v3 )
  {
    for ( i = HalpDmaDomainHybridPassthroughReservedRegions; i; i = *(_QWORD *)i )
    {
      v5 = 32LL * v2++;
      *(_QWORD *)(v5 + v3 + 8) = *(_QWORD *)(i + 8);
      *(_QWORD *)(v5 + v3 + 16) = *(_QWORD *)(i + 16);
      *(_BYTE *)(v5 + v3 + 24) = *(_BYTE *)(i + 24);
      *(_QWORD *)(v5 + v3) = v3 + 32LL * v2;
    }
    *(_QWORD *)(32LL * (unsigned int)(v1 - 1) + v3) = 0LL;
  }
  return v3;
}
