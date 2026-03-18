/*
 * XREFs of MiGetNextVad @ 0x1402614BC
 * Callers:
 *     MiWalkLeap @ 0x140210900 (MiWalkLeap.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402FC120 (MiReturnLockedVadOrNextVa.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140404528 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140477174 (MiDeleteEmptyPageTableCommit.c)
 *     MiLeapPrefetch @ 0x1404BF28C (MiLeapPrefetch.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DC33C (MiCoalescePlaceholderAllocations.c)
 *     MiUnlockVadRange @ 0x1408E8A30 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MiMapAllImageScpPages @ 0x1408F9404 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x1408F9980 (MiCommitInitialVadMetadataBits.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiUpdateVadBits @ 0x140A764A0 (MiUpdateVadBits.c)
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
