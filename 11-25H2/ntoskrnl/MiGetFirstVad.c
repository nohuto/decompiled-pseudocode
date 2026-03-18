/*
 * XREFs of MiGetFirstVad @ 0x14047FEF0
 * Callers:
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403D8D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     MiUnlockVadRange @ 0x1408D97C0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiMapAllImageScpPages @ 0x1409045F8 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140906C50 (MiCommitInitialVadMetadataBits.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiGetFirstVad(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 1368);
  if ( !v1 )
    return 0LL;
  do
  {
    result = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( v1 );
  return result;
}
