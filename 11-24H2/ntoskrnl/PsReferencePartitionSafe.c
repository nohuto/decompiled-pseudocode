/*
 * XREFs of PsReferencePartitionSafe @ 0x140262AE0
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     MiWakeLargePageRebuild @ 0x140261C8C (MiWakeLargePageRebuild.c)
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     PfpLogApplicationEvent @ 0x1402627C0 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1402629EC (PfLogForegroundProcess.c)
 *     MiLaunchZeroParent @ 0x140271AB0 (MiLaunchZeroParent.c)
 *     MiLaunchZeroWorkers @ 0x140271D90 (MiLaunchZeroWorkers.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiCheckZeroFreeRebalance @ 0x14033F29C (MiCheckZeroFreeRebalance.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiScanPagefiles @ 0x140353D80 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14035468C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiPartitionObjectToPartition @ 0x1403945BC (MiPartitionObjectToPartition.c)
 *     CcGetPartitionWithCreate @ 0x1404D8560 (CcGetPartitionWithCreate.c)
 *     MiReferencePagePartition @ 0x1406745D4 (MiReferencePagePartition.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FEA18 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     MiContractWsSwapPageFile @ 0x140A03778 (MiContractWsSwapPageFile.c)
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
