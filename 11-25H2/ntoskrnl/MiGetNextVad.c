/*
 * XREFs of MiGetNextVad @ 0x1402A96D8
 * Callers:
 *     MiReturnLockedVadOrNextVa @ 0x1402A77E4 (MiReturnLockedVadOrNextVa.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiWalkLeap @ 0x1402B50C0 (MiWalkLeap.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403D8D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14047A134 (MiDeleteEmptyPageTableCommit.c)
 *     MiLeapPrefetch @ 0x1404C0B80 (MiLeapPrefetch.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     MiUnlockVadRange @ 0x1408D97C0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     MiMapAllImageScpPages @ 0x1409045F8 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140906C50 (MiCommitInitialVadMetadataBits.c)
 *     MiReturnPageTablePageCommitment @ 0x1409E3F50 (MiReturnPageTablePageCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiUpdateVadBits @ 0x140A75570 (MiUpdateVadBits.c)
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
