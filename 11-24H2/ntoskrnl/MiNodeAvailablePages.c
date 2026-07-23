/*
 * XREFs of MiNodeAvailablePages @ 0x14047E7E0
 * Callers:
 *     MiLogSlabEntryAllocateFailure @ 0x14047E460 (MiLogSlabEntryAllocateFailure.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407E8F14 (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x14033FC00 (MiNodeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeAvailablePages(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 i; // di
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rcx

  v1 = 0LL;
  for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
  {
    v1 += MiNodeFreeZeroPages(a1, i, 0x80000);
    v4 = 8LL;
    v5 = (__int64 *)(a1 + 704LL * i + 5192);
    do
    {
      v6 = *v5;
      v5 += 11;
      v1 += v6;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
