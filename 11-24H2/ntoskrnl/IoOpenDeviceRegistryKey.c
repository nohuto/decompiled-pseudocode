/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x1409CAEC0
 * Callers:
 *     DifIoOpenDeviceRegistryKeyWrapper @ 0x140629A40 (DifIoOpenDeviceRegistryKeyWrapper.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140727390 (PipDmgGetDeviceDmarRegistryValue.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     _CmOpenDeviceRegKey @ 0x1408C6880 (_CmOpenDeviceRegKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409CAFD4 (IopApplyMutableTagToRegistryKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceRegistryKey(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  _DWORD *DeviceNode; // rax
  int v8; // eax
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // ebx

  if ( !DeviceObject )
    return -1073741811;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  if ( (DevInstKeyType & 1) != 0 )
  {
    v8 = 17;
    goto LABEL_7;
  }
  if ( (DevInstKeyType & 2) == 0 )
    return -1073741811;
  v8 = 18;
LABEL_7:
  v9 = v8 | 0x200;
  if ( (DevInstKeyType & 4) == 0 )
    v9 = v8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v11 = CmOpenDeviceRegKey(
          *(__int64 *)&PiPnpRtlCtx,
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 6),
          v9,
          0,
          DesiredAccess,
          1,
          (__int64)DeviceRegKey,
          0LL);
  if ( v11 >= 0 )
  {
    if ( DeviceRegKey )
      IopApplyMutableTagToRegistryKey(*DeviceRegKey);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  return v11;
}
