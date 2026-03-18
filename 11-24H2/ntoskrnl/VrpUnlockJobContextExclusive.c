/*
 * XREFs of VrpUnlockJobContextExclusive @ 0x140929B2C
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408293FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14082991C (VrpHandleIoctlModifyFlags.c)
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092974C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092A298 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A63480 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void __fastcall VrpUnlockJobContextExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
