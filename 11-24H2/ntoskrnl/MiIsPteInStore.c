/*
 * XREFs of MiIsPteInStore @ 0x1402E5460
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiComputeFaultCluster @ 0x1402E5DF8 (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiMakeFaultPfnActive @ 0x140462FB4 (MiMakeFaultPfnActive.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiIsStandbyPageCorrupted @ 0x1404D4DBC (MiIsStandbyPageCorrupted.c)
 *     MiCheckCommitReleaseFromVad @ 0x140669880 (MiCheckCommitReleaseFromVad.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  return (a2 & 4) != 0 && a2 >> 12 == *(_DWORD *)(a1 + 1204);
}
