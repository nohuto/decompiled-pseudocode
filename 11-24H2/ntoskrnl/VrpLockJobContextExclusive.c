/*
 * XREFs of VrpLockJobContextExclusive @ 0x14092A064
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408293FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14082991C (VrpHandleIoctlModifyFlags.c)
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092974C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092A298 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A63480 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall VrpLockJobContextExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire(a1 + 16, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
