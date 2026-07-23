/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x14072B3D0
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140A39170 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1LL);
  PipForDeviceNodeSubtree(IopRootDeviceNode, PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1LL);
  ExFreePoolWithTag(P, 0);
}
