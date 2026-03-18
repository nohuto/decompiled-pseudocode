/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x14072D3C0
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeLockTree @ 0x140A08C10 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A145FC (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140A438E0 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1LL);
  PipForDeviceNodeSubtree(IopRootDeviceNode, PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1LL);
  ExFreePoolWithTag(P, 0);
}
