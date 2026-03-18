/*
 * XREFs of IoSetDeviceInterfaceState @ 0x1408B40B0
 * Callers:
 *     DifIoSetDeviceInterfaceStateWrapper @ 0x14062ACB0 (DifIoSetDeviceInterfaceStateWrapper.c)
 *     PiSwDeviceInterfaceSetState @ 0x1408B22B0 (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1409FB394 (PiSwDeviceInterfacesUpdateState.c)
 *     PnpDisableDeviceInterfaces @ 0x140A10ED8 (PnpDisableDeviceInterfaces.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  LOBYTE(v5) = 1;
  LOBYTE(v6) = Enable;
  v7 = IopProcessSetInterfaceState(SymbolicLinkName, v6, v5);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v7 < 0 )
    return Enable != 0 ? v7 : 0;
  return v7;
}
