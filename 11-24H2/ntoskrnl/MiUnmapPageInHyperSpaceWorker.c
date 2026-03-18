/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x140266854
 * Callers:
 *     MiReadWriteAnyLevelShadowPte @ 0x1402666A8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiBuildMappedCluster @ 0x14036ABB8 (MiBuildMappedCluster.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1404293F0 (MiMirrorOmitPagesFromCopy.c)
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 *     MiInitializeImageHeaderPage @ 0x14048E2E4 (MiInitializeImageHeaderPage.c)
 *     MiInitializeSelfmap @ 0x1404A6DD0 (MiInitializeSelfmap.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiPersistMdl @ 0x1404C7C68 (MiPersistMdl.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiApplyDebuggerPatches @ 0x1404F6A1C (MiApplyDebuggerPatches.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiStackTheftFreezeProcessors @ 0x140675374 (MiStackTheftFreezeProcessors.c)
 *     MiPersistPage @ 0x14067B918 (MiPersistPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x14068D440 (MiReplicatePteChangeToProcess.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406931D8 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx

  v3 = a2;
  v4 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  result = CLFS_LSN_NULL_EXT;
  v6 = (a3 & 0x10000000) != 0 ? 16LL : 1LL;
  do
  {
    *v4++ = CLFS_LSN_NULL_EXT;
    --v6;
  }
  while ( v6 );
  if ( (_BYTE)v3 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = v3;
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(v3);
  }
  return result;
}
