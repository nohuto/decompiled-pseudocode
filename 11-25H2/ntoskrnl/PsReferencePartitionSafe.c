/*
 * XREFs of PsReferencePartitionSafe @ 0x1403BE990
 * Callers:
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiScanPagefiles @ 0x140379364 (MiScanPagefiles.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1403B3478 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiCheckZeroFreeRebalance @ 0x1403BCA78 (MiCheckZeroFreeRebalance.c)
 *     MiWakeLargePageRebuild @ 0x1403BDA30 (MiWakeLargePageRebuild.c)
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     MmQueryMemoryListInformation @ 0x1403BE2A8 (MmQueryMemoryListInformation.c)
 *     PfpLogApplicationEvent @ 0x1403BE670 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1403BE89C (PfLogForegroundProcess.c)
 *     MiObtainFreePages @ 0x1403BF484 (MiObtainFreePages.c)
 *     MiPartitionObjectToPartition @ 0x1404156EC (MiPartitionObjectToPartition.c)
 *     MiLaunchZeroParent @ 0x1404186A8 (MiLaunchZeroParent.c)
 *     MiLaunchZeroWorkers @ 0x14041898C (MiLaunchZeroWorkers.c)
 *     CcGetPartitionWithCreate @ 0x1404DF450 (CcGetPartitionWithCreate.c)
 *     MiReferencePagePartition @ 0x1406679A4 (MiReferencePagePartition.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407EE418 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     PsReferencePartitionByHandle @ 0x14093B9BC (PsReferencePartitionByHandle.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MiContractWsSwapPageFile @ 0x140A0514C (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

char __fastcall PsReferencePartitionSafe(__int64 a1)
{
  signed __int64 v1; // rax
  signed __int64 v2; // rtt

  _m_prefetchw((const void *)(a1 + 40));
  v1 = *(_QWORD *)(a1 + 40);
  while ( (unsigned __int64)(v1 + 1) > 1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  if ( v1 )
    __fastfail(0xEu);
  return 0;
}
