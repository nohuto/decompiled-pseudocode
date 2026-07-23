/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1409D8398
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x1403C9340 (MiCopyToUserVa.c)
 *     MiProbeAndLockPages @ 0x140415B10 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x14042AF44 (IopProbeAndLockPages_0.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C58 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     MiFreeLargePageView @ 0x14099A530 (MiFreeLargePageView.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x140A2CD84 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1404234A0 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2, 0);
  return MiReturnFullProcessCharges(a1, a2);
}
