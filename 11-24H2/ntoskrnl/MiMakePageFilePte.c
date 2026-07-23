/*
 * XREFs of MiMakePageFilePte @ 0x140215C78
 * Callers:
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiSetStoreVirtualPagefileValue @ 0x1402FAC20 (MiSetStoreVirtualPagefileValue.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x1402FD13C (MiUpdatePfnBackingStore.c)
 *     MiDetermineModifiedPageListHead @ 0x140300F80 (MiDetermineModifiedPageListHead.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1403C3E30 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiGetKernelStackSwapSupport @ 0x1403C3FE0 (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x1403C41E0 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A65F60 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 << 32;
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & v1) != 0 )
      return v1 | 0x10;
    else
      return qword_140E2DCC0 | v1;
  }
  return v1;
}
