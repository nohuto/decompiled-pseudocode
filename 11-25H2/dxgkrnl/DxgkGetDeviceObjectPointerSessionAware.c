/*
 * XREFs of DxgkGetDeviceObjectPointerSessionAware @ 0x14005865C
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x14026D140 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ @ 0x140272254 (-HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ.c)
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x140351880 (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetDeviceObjectPointerSessionAware(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        PVOID *a3,
        PDEVICE_OBJECT *a4)
{
  NTSTATUS v6; // ebx
  struct _FILE_OBJECT *v7; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  void *FileHandle; // [rsp+90h] [rbp+10h] BYREF

  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  KeEnterCriticalRegion();
  v6 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x40040u);
  if ( v6 >= 0 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v6 >= 0 )
    {
      v7 = (struct _FILE_OBJECT *)Object;
      *a3 = Object;
      *a4 = IoGetRelatedDeviceObject(v7);
    }
    ZwClose(FileHandle);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
