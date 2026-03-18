/*
 * XREFs of MiIsPteInStore @ 0x14037C500
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiComputeFaultCluster @ 0x14037A558 (MiComputeFaultCluster.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiMakeFaultPfnActive @ 0x1403FD984 (MiMakeFaultPfnActive.c)
 *     MiIsStandbyPageCorrupted @ 0x1404D54E4 (MiIsStandbyPageCorrupted.c)
 *     MiCheckCommitReleaseFromVad @ 0x14065DD60 (MiCheckCommitReleaseFromVad.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  return (a2 & 4) != 0 && a2 >> 12 == *(_DWORD *)(a1 + 1204);
}
