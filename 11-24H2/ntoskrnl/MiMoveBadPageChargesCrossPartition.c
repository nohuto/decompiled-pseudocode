/*
 * XREFs of MiMoveBadPageChargesCrossPartition @ 0x1406835E0
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140688F24 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x14068B4FC (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 */

void __fastcall MiMoveBadPageChargesCrossPartition(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx

  v5 = 57216LL * (unsigned int)MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + v5 + 15256));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a3 + 16) + v5 + 15256));
  MiAcquireNonPagedResources((ULONG *)a3, 1uLL, 0LL, 1u);
  MiReleaseNonPagedResources(a2, 1uLL);
}
