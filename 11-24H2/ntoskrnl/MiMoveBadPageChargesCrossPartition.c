/*
 * XREFs of MiMoveBadPageChargesCrossPartition @ 0x14068478C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 */

void __fastcall MiMoveBadPageChargesCrossPartition(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx

  v5 = 57216LL * (unsigned int)MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + v5 + 15256));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a3 + 16) + v5 + 15256));
  MiAcquireNonPagedResources((ULONG *)a3, 1uLL, 0LL, 1LL);
  MiReleaseNonPagedResources(a2, 1uLL);
}
