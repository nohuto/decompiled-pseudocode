/*
 * XREFs of MiMakePageFilePte @ 0x14039F4D8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x140229ECC (MiUpdatePfnBackingStore.c)
 *     MiDetermineModifiedPageListHead @ 0x14022D670 (MiDetermineModifiedPageListHead.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140366180 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiGetKernelStackSwapSupport @ 0x1403679DC (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x140367BDC (MiFindPageFileWriteCluster.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     MiSetStoreVirtualPagefileValue @ 0x14039D920 (MiSetStoreVirtualPagefileValue.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A6C718 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 << 32;
  if ( qword_140E2DB80 )
  {
    if ( (qword_140E2DB80 & v1) != 0 )
      return v1 | 0x10;
    else
      return qword_140E2DB80 | v1;
  }
  return v1;
}
