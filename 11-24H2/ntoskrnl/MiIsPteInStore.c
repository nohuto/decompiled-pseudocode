/*
 * XREFs of MiIsPteInStore @ 0x140423310
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakeFaultPfnActive @ 0x14025A13C (MiMakeFaultPfnActive.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiComputeFaultCluster @ 0x140341F24 (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiIsStandbyPageCorrupted @ 0x140423260 (MiIsStandbyPageCorrupted.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  return (a2 & 4) != 0 && a2 >> 12 == *(_DWORD *)(a1 + 1204);
}
