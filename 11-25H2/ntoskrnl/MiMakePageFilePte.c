/*
 * XREFs of MiMakePageFilePte @ 0x14022828C
 * Callers:
 *     MiDetermineModifiedPageListHead @ 0x14021BAB0 (MiDetermineModifiedPageListHead.c)
 *     MiSetStoreVirtualPagefileValue @ 0x140226180 (MiSetStoreVirtualPagefileValue.c)
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x1402CC130 (MiUpdatePfnBackingStore.c)
 *     MiGetKernelStackSwapSupport @ 0x1403D9714 (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x1403D9914 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1403DB600 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A6A1E8 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 << 32;
  if ( qword_140E2D940 )
  {
    if ( (qword_140E2D940 & v1) != 0 )
      return v1 | 0x10;
    else
      return qword_140E2D940 | v1;
  }
  return v1;
}
