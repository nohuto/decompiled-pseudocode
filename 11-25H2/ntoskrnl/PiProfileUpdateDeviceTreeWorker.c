/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x140721440
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140A3E3F0 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1LL);
  PipForDeviceNodeSubtree(IopRootDeviceNode, PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1LL);
  ExFreePoolWithTag(P, 0);
}
