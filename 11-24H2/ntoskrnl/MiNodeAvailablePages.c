/*
 * XREFs of MiNodeAvailablePages @ 0x1403D29E0
 * Callers:
 *     MiLogSlabEntryAllocateFailure @ 0x1403D2660 (MiLogSlabEntryAllocateFailure.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407E8944 (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1403D3160 (MiNodeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeAvailablePages(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 i; // di
  __int64 *v5; // rax
  __int64 v6; // rcx

  v2 = 0LL;
  for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
  {
    LOBYTE(a2) = i;
    v2 += MiNodeFreeZeroPages(a1, a2, 0x80000LL);
    a2 = 8LL;
    v5 = (__int64 *)(a1 + 704LL * i + 5192);
    do
    {
      v6 = *v5;
      v5 += 11;
      v2 += v6;
      --a2;
    }
    while ( a2 );
  }
  return v2;
}
