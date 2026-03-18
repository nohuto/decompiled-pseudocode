/*
 * XREFs of PsReferencePartitionSafe @ 0x1403D4B60
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiObtainFreePages @ 0x1402D17D4 (MiObtainFreePages.c)
 *     MiScanPagefiles @ 0x1402D2B08 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402D3414 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiCheckZeroFreeRebalance @ 0x1403D3018 (MiCheckZeroFreeRebalance.c)
 *     MiWakeLargePageRebuild @ 0x1403D3D0C (MiWakeLargePageRebuild.c)
 *     PsGetNextPartition @ 0x1403D42FC (PsGetNextPartition.c)
 *     MmQueryMemoryListInformation @ 0x1403D447C (MmQueryMemoryListInformation.c)
 *     PfpLogApplicationEvent @ 0x1403D4840 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1403D4A6C (PfLogForegroundProcess.c)
 *     MiPartitionObjectToPartition @ 0x14041217C (MiPartitionObjectToPartition.c)
 *     MiLaunchZeroParent @ 0x140415C50 (MiLaunchZeroParent.c)
 *     MiLaunchZeroWorkers @ 0x140416850 (MiLaunchZeroWorkers.c)
 *     CcGetPartitionWithCreate @ 0x1404DEB40 (CcGetPartitionWithCreate.c)
 *     MiReferencePagePartition @ 0x140673404 (MiReferencePagePartition.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FE2A8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     PsReferencePartitionByHandle @ 0x140934434 (PsReferencePartitionByHandle.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     MiContractWsSwapPageFile @ 0x140A07248 (MiContractWsSwapPageFile.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
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
