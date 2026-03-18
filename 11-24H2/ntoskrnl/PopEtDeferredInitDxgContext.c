/*
 * XREFs of PopEtDeferredInitDxgContext @ 0x14075D8C0
 * Callers:
 *     PopEtEnergyTrackerInitialize @ 0x14075E0CC (PopEtEnergyTrackerInitialize.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x1402678C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     IoGetDeviceObjectPointer @ 0x140967A30 (IoGetDeviceObjectPointer.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 PopEtDeferredInitDxgContext()
{
  __int64 result; // rax
  NTSTATUS DeviceObjectPointer; // ebx
  __int64 v2; // r8
  struct _DEVICE_OBJECT *v3; // rdx
  IRP *v4; // rax
  NTSTATUS v5; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+27h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp+37h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+6Fh] BYREF

  DeviceObject = 0LL;
  DestinationString = 0LL;
  memset(&Event, 0, sizeof(Event));
  result = *(unsigned int *)(PopEtGlobals + 1096);
  IoStatusBlock = 0LL;
  if ( (_DWORD)result == -1 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0xC0000000, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v2 = PopEtGlobals;
      v3 = DeviceObject;
      **(_WORD **)(PopEtGlobals + 1088) = 624;
      *(_WORD *)(*(_QWORD *)(v2 + 1088) + 2LL) = 3;
      v4 = IoBuildDeviceIoControlRequest(
             0x23E067u,
             v3,
             *(PVOID *)(v2 + 1088),
             0x270u,
             *(PVOID *)(v2 + 1088),
             0x270u,
             1u,
             &Event,
             &IoStatusBlock);
      if ( v4 )
      {
        v5 = IofCallDriver(DeviceObject, v4);
        DeviceObjectPointer = v5;
        if ( v5 >= 0 )
        {
          if ( v5 != 259
            || (DeviceObjectPointer = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL), DeviceObjectPointer >= 0) )
          {
            if ( !DeviceObjectPointer )
            {
LABEL_11:
              *(_DWORD *)(PopEtGlobals + 1096) = DeviceObjectPointer;
              return (unsigned int)DeviceObjectPointer;
            }
            DeviceObjectPointer = -1073741823;
          }
        }
      }
      else
      {
        DeviceObjectPointer = -1073741670;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(PopEtGlobals + 1088), 0x54456F50u);
    *(_QWORD *)(PopEtGlobals + 1088) = 0LL;
    goto LABEL_11;
  }
  return result;
}
