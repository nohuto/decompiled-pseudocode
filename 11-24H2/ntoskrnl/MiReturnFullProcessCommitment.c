/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1409DE7C8
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiMakeHyperRangeAccessible @ 0x1402DFB90 (MiMakeHyperRangeAccessible.c)
 *     MiCopyToUserVa @ 0x1403E2DBC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiProbeAndLockPages @ 0x140420120 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x140438384 (IopProbeAndLockPages_0.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F9378 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 *     MiFreeLargePageView @ 0x1409B0830 (MiFreeLargePageView.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x140A37CD0 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x140430F60 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2, 0);
  return MiReturnFullProcessCharges(a1, a2);
}
