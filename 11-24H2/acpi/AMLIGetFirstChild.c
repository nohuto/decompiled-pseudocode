/*
 * XREFs of AMLIGetFirstChild @ 0x140040FA0
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x140040B24 (ACPIGpeBuildEventMasks.c)
 *     EnableDisableCMOSRegions @ 0x140040CC0 (EnableDisableCMOSRegions.c)
 *     ACPIBuildMissingChildren @ 0x140040DF0 (ACPIBuildMissingChildren.c)
 *     EnableDisableIPMIRegions @ 0x14009EEB0 (EnableDisableIPMIRegions.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 * Callees:
 *     AMLIGetFirstChildNoLock @ 0x140040FEC (AMLIGetFirstChildNoLock.c)
 */

__int64 __fastcall AMLIGetFirstChild(__int64 a1)
{
  __int64 v2; // rdx
  __int64 ChildNoLock; // rbx
  KIRQL v4; // dl

  LOBYTE(v2) = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ChildNoLock = AMLIGetFirstChildNoLock(a1, v2);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return ChildNoLock;
}
