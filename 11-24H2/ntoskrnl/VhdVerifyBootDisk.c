/*
 * XREFs of VhdVerifyBootDisk @ 0x140829D1C
 * Callers:
 *     IopCreateArcName @ 0x140A75840 (IopCreateArcName.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x1402678C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

bool __fastcall VhdVerifyBootDisk(PDEVICE_OBJECT DeviceObject)
{
  bool v1; // bl
  __int64 v3; // rax
  ULONG OutputBufferLength; // ebp
  void *OutputBuffer; // rdi
  IRP *v6; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v1 = 0;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( DeviceObject )
  {
    if ( NtVhdBootFile )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( *(_WORD *)(NtVhdBootFile + 2 * v3) );
      OutputBufferLength = 2 * v3 + 2;
      OutputBuffer = (void *)ExAllocatePool2(0x40uLL);
      if ( OutputBuffer )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v6 = IoBuildDeviceIoControlRequest(
               0x2D5928u,
               DeviceObject,
               0LL,
               0,
               OutputBuffer,
               OutputBufferLength,
               0,
               &Event,
               &IoStatusBlock);
        if ( v6 )
        {
          Status = IofCallDriver(DeviceObject, v6);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status >= 0 )
            v1 = wcsicmp((const wchar_t *)OutputBuffer, (const wchar_t *)(NtVhdBootFile + 2)) == 0;
        }
        ExFreePoolWithTag(OutputBuffer, 0x42646856u);
      }
    }
  }
  return v1;
}
