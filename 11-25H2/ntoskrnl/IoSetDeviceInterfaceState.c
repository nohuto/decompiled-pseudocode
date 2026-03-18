/*
 * XREFs of IoSetDeviceInterfaceState @ 0x140969D40
 * Callers:
 *     DifIoSetDeviceInterfaceStateWrapper @ 0x14061ECF0 (DifIoSetDeviceInterfaceStateWrapper.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14083AC54 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x14095DA64 (PiSwDeviceInterfaceSetState.c)
 *     PnpDisableDeviceInterfaces @ 0x1409A18E0 (PnpDisableDeviceInterfaces.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v5 = IopProcessSetInterfaceState(&SymbolicLinkName->Length, Enable, 1);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v5 < 0 )
    return Enable != 0 ? v5 : 0;
  return v5;
}
