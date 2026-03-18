/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiBuildMappedCluster @ 0x14040DB84 (MiBuildMappedCluster.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiInitializeSelfmap @ 0x14040F5E4 (MiInitializeSelfmap.c)
 *     MiInitializeImageHeaderPage @ 0x14040F8D4 (MiInitializeImageHeaderPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14040FC0C (MiReadWriteAnyLevelShadowPte.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140430070 (MiMirrorOmitPagesFromCopy.c)
 *     MiPersistMdl @ 0x1404C7140 (MiPersistMdl.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiApplyDebuggerPatches @ 0x1404F41FC (MiApplyDebuggerPatches.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiStackTheftFreezeProcessors @ 0x140669914 (MiStackTheftFreezeProcessors.c)
 *     MiPersistPage @ 0x140670158 (MiPersistPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x140681BB0 (MiReplicatePteChangeToProcess.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140687D78 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
