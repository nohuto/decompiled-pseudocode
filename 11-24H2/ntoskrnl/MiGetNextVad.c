/*
 * XREFs of MiGetNextVad @ 0x140291ACC
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiWalkLeap @ 0x140339C60 (MiWalkLeap.c)
 *     MiReturnLockedVadOrNextVa @ 0x140345020 (MiReturnLockedVadOrNextVa.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C752C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140473714 (MiDeleteEmptyPageTableCommit.c)
 *     MiLeapPrefetch @ 0x1404BA7C0 (MiLeapPrefetch.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     MiUnlockVadRange @ 0x1408D9210 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MiMapAllImageScpPages @ 0x14091BCE0 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x14091C25C (MiCommitInitialVadMetadataBits.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiUpdateVadBits @ 0x140A705BC (MiUpdateVadBits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetNextVad(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 i; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = *(_QWORD **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v1 = (unsigned __int64)v2;
        v2 = (_QWORD *)*v2;
      }
      while ( v2 );
    }
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(_QWORD *)v1 == a1 )
        break;
      a1 = v1;
    }
  }
  return v1;
}
