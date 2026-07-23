/*
 * XREFs of IopStoreBootDriveLetter @ 0x140C1F3DC
 * Callers:
 *     IopMarkBootPartition @ 0x140C1EDB0 (IopMarkBootPartition.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     IoGetDeviceObjectPointer @ 0x1409504C0 (IoGetDeviceObjectPointer.c)
 *     RtlWriteRegistryValue @ 0x1409B6290 (RtlWriteRegistryValue.c)
 *     RtlGetHostNtSystemRoot @ 0x140A9BB90 (RtlGetHostNtSystemRoot.c)
 */

__int64 __fastcall IopStoreBootDriveLetter(__int64 a1)
{
  NTSTATUS DeviceObjectPointer; // ebx
  IRP *v3; // rax
  UNICODE_STRING *HostNtSystemRoot; // rdi
  unsigned __int16 v5; // ax
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+Fh] BYREF
  struct _KEVENT Object; // [rsp+78h] [rbp+1Fh] BYREF
  char OutputBuffer; // [rsp+C8h] [rbp+6Fh] BYREF
  int ValueData; // [rsp+D0h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D8h] [rbp+7Fh] BYREF

  ValueData = 0;
  DeviceObject = 0LL;
  DestinationString = 0LL;
  OutputBuffer = 0;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  FileObject = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.SignalState = 0;
    v3 = IoBuildDeviceIoControlRequest(0x6DC044u, DeviceObject, 0LL, 0, &OutputBuffer, 1u, 0, &Object, &IoStatusBlock);
    if ( v3 )
    {
      DeviceObjectPointer = IofCallDriver(DeviceObject, v3);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer >= 0 )
      {
        HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
        HostNtSystemRoot->MaximumLength = 520;
        HostNtSystemRoot->Buffer = (wchar_t *)(MmWriteableSharedUserData + 48);
        DeviceObjectPointer = RtlUnicodeStringPrintf(HostNtSystemRoot, L"%C:%S", (unsigned int)OutputBuffer, a1);
        if ( DeviceObjectPointer >= 0 )
        {
          v5 = HostNtSystemRoot->Length - 2;
          HostNtSystemRoot->Length = v5;
          HostNtSystemRoot->Buffer[(unsigned __int64)v5 >> 1] = 0;
          ValueData = OutputBuffer;
          DeviceObjectPointer = RtlWriteRegistryValue(2u, 0LL, L"SystemBootDriveLetter", 4u, &ValueData, 4u);
        }
      }
    }
    else
    {
      DeviceObjectPointer = -1073741670;
    }
  }
  if ( FileObject )
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  return (unsigned int)DeviceObjectPointer;
}
