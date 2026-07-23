/*
 * XREFs of IoVolumeDeviceToDosName @ 0x140950A40
 * Callers:
 *     IopValidateJunctionTarget @ 0x140710FC8 (IopValidateJunctionTarget.c)
 *     IopQueryNameInternal @ 0x140950DC0 (IopQueryNameInternal.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IoGetDeviceObjectPointer @ 0x1409504C0 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoVolumeDeviceToDosName(PVOID VolumeDeviceObject, PUNICODE_STRING DosName)
{
  unsigned __int64 v2; // rax
  _WORD *Pool2; // rdi
  __int64 v6; // rcx
  void *OutputBuffer; // rsi
  IRP *v8; // rax
  int Status; // ebx
  IRP *v10; // rax
  ULONG OutputBufferLength; // ebx
  IRP *v12; // rax
  unsigned __int16 v13; // ax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+1Fh] BYREF

  v2 = *((unsigned int *)VolumeDeviceObject + 18);
  DeviceObject = 0LL;
  v20 = 0LL;
  FileObject = 0LL;
  Pool2 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( (unsigned int)v2 <= 0x24 )
  {
    v6 = 0x1080000084LL;
    if ( _bittest64(&v6, v2) )
    {
      OutputBuffer = (void *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x20643244u);
      if ( !OutputBuffer )
        return -1073741670;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v8 = IoBuildDeviceIoControlRequest(
             0x4D0008u,
             (PDEVICE_OBJECT)VolumeDeviceObject,
             0LL,
             0,
             OutputBuffer,
             0x200u,
             0,
             &Event,
             &IoStatusBlock);
      if ( !v8 )
      {
        Status = -1073741670;
LABEL_24:
        ExFreePoolWithTag(OutputBuffer, 0);
        return Status;
      }
      Status = IofCallDriver((PDEVICE_OBJECT)VolumeDeviceObject, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
        goto LABEL_24;
      RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
      Status = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
      if ( Status >= 0 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v10 = IoBuildDeviceIoControlRequest(
                0x6D0030u,
                DeviceObject,
                OutputBuffer,
                0x200u,
                &v20,
                8u,
                0,
                &Event,
                &IoStatusBlock);
        if ( v10 )
        {
          Status = IofCallDriver(DeviceObject, v10);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( (int)(Status + 0x80000000) >= 0 && Status != -2147483643 )
            goto LABEL_20;
          OutputBufferLength = v20 + 8;
          if ( (unsigned int)(v20 + 8) > 0xFFFF )
          {
            Status = -1073741306;
            goto LABEL_20;
          }
          Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, OutputBufferLength, 0x20643244u);
          if ( Pool2 )
          {
            KeInitializeEvent(&Event, NotificationEvent, 0);
            v12 = IoBuildDeviceIoControlRequest(
                    0x6D0030u,
                    DeviceObject,
                    OutputBuffer,
                    0x200u,
                    Pool2,
                    OutputBufferLength,
                    0,
                    &Event,
                    &IoStatusBlock);
            if ( v12 )
            {
              Status = IofCallDriver(DeviceObject, v12);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                Status = IoStatusBlock.Status;
              }
              if ( Status >= 0 )
              {
                v13 = *Pool2 - 4;
                DosName->Buffer = Pool2;
                DosName->Length = v13;
                DosName->MaximumLength = v13 + 2;
                memmove(Pool2, Pool2 + 2, v13);
                Pool2 = 0LL;
                Status = 0;
                DosName->Buffer[(unsigned __int64)DosName->Length >> 1] = 0;
              }
              goto LABEL_20;
            }
          }
        }
        Status = -1073741670;
      }
LABEL_20:
      if ( FileObject )
        ObfDereferenceObject(FileObject);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      goto LABEL_24;
    }
  }
  return -1073741811;
}
