/*
 * XREFs of SbpStartLanman @ 0x140C60D70
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IoGetDeviceObjectPointer @ 0x1409504C0 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 SbpStartLanman()
{
  void *v0; // rsi
  void *v1; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v3; // r14
  NTSTATUS Status; // edi
  char *OutputBuffer; // rax
  struct _DEVICE_OBJECT *v6; // rdx
  PIRP v7; // rax
  IRP *v8; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v10; // rcx
  __int64 Pool2; // rax
  struct _DEVICE_OBJECT *v12; // rdx
  PIRP v13; // rax
  IRP *v14; // rdx
  struct _IO_STACK_LOCATION *v15; // rax
  struct _DEVICE_OBJECT *v16; // rcx
  struct _KEVENT Object; // [rsp+58h] [rbp-29h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-11h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-1h] BYREF
  _OWORD InputBuffer[2]; // [rsp+90h] [rbp+Fh] BYREF
  int v23; // [rsp+B0h] [rbp+2Fh]

  DeviceObject = 0LL;
  v23 = 0;
  memset(&Object, 0, sizeof(Object));
  FileObject = 0LL;
  v0 = 0LL;
  IoStatusBlock = 0LL;
  v1 = 0LL;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&LanmanRedirectorName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v3 = FileObject;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_12;
  OutputBuffer = (char *)ExAllocatePool2(0x40uLL, 0x8CuLL, 0x42626D53uLL);
  v1 = OutputBuffer;
  if ( !OutputBuffer )
    goto LABEL_3;
  *((_DWORD *)OutputBuffer + 15) = -1;
  *((_DWORD *)OutputBuffer + 4) = 5;
  *(_DWORD *)OutputBuffer = 3600;
  *((_DWORD *)OutputBuffer + 2) = 16;
  *((_DWORD *)OutputBuffer + 1) = 250;
  *((_DWORD *)OutputBuffer + 3) = 600;
  *((_DWORD *)OutputBuffer + 5) = 45;
  *((_DWORD *)OutputBuffer + 9) = 10;
  *((_DWORD *)OutputBuffer + 6) = 512;
  *((_DWORD *)OutputBuffer + 7) = 17;
  *((_DWORD *)OutputBuffer + 8) = 6144;
  *((_DWORD *)OutputBuffer + 10) = 500;
  *((_DWORD *)OutputBuffer + 12) = 500;
  *((_DWORD *)OutputBuffer + 11) = 10;
  *((_DWORD *)OutputBuffer + 14) = 45;
  *((_DWORD *)OutputBuffer + 18) = 5;
  v6 = DeviceObject;
  *((_DWORD *)OutputBuffer + 13) = 40;
  *((_DWORD *)OutputBuffer + 16) = 3;
  *((_DWORD *)OutputBuffer + 17) = 20;
  *(_QWORD *)(OutputBuffer + 76) = 60LL;
  *((_DWORD *)OutputBuffer + 21) = 1;
  *((_DWORD *)OutputBuffer + 22) = 1;
  *((_DWORD *)OutputBuffer + 23) = 1;
  *((_DWORD *)OutputBuffer + 24) = 1;
  *((_DWORD *)OutputBuffer + 25) = 1;
  *((_DWORD *)OutputBuffer + 26) = 1;
  *((_DWORD *)OutputBuffer + 27) = 1;
  *((_DWORD *)OutputBuffer + 28) = 1;
  *((_DWORD *)OutputBuffer + 29) = 1;
  *((_DWORD *)OutputBuffer + 30) = 1;
  *((_DWORD *)OutputBuffer + 31) = 1;
  *((_DWORD *)OutputBuffer + 32) = 1;
  *(_QWORD *)(OutputBuffer + 132) = 1LL;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  LOWORD(Object.Header.Lock) = 1;
  Object.Header.Size = 6;
  Object.Header.SignalState = 0;
  v7 = IoBuildDeviceIoControlRequest(
         0x80140191,
         v6,
         InputBuffer,
         0x24u,
         OutputBuffer,
         0x8Cu,
         0,
         &Object,
         &IoStatusBlock);
  v8 = v7;
  if ( !v7 )
    goto LABEL_3;
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  v10 = DeviceObject;
  CurrentStackLocation[-1].FileObject = v3;
  CurrentStackLocation[-1].MajorFunction = 13;
  Status = IofCallDriver(v10, v8);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x96uLL, 0x42626D53uLL);
    v0 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_BYTE *)(Pool2 + 81) |= 1u;
      v12 = DeviceObject;
      *(_BYTE *)(Pool2 + 116) = 1;
      *(_WORD *)(Pool2 + 12) = 222;
      *(_BYTE *)(Pool2 + 80) = 31;
      *(_DWORD *)(Pool2 + 84) = 604800;
      *(_DWORD *)(Pool2 + 88) = 10;
      *(_DWORD *)(Pool2 + 92) = 30;
      *(_DWORD *)(Pool2 + 96) = 30;
      *(_DWORD *)(Pool2 + 20) = 28800;
      *(_DWORD *)(Pool2 + 24) = 28800;
      *(_DWORD *)(Pool2 + 32) = 20;
      *(_DWORD *)(Pool2 + 40) = 20;
      *(_DWORD *)(Pool2 + 64) = 20;
      *(_DWORD *)(Pool2 + 72) = 20;
      *(_DWORD *)(Pool2 + 52) = 512;
      *(_DWORD *)(Pool2 + 68) = 512;
      *(_WORD *)(Pool2 + 118) = 26;
      *(_DWORD *)(Pool2 + 28) = 0x8000;
      *(_DWORD *)(Pool2 + 36) = 5;
      *(_DWORD *)(Pool2 + 44) = 2048;
      *(_DWORD *)(Pool2 + 48) = 32;
      *(_DWORD *)(Pool2 + 56) = 0x1000000;
      *(_DWORD *)(Pool2 + 60) = 0x100000;
      *(_OWORD *)(Pool2 + 120) = *(_OWORD *)L"\\Device\\vmsmb";
      *(_QWORD *)(Pool2 + 136) = *(_QWORD *)L"vmsmb";
      *(_WORD *)(Pool2 + 144) = aDeviceVmsmb[12];
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      LOWORD(Object.Header.Lock) = 1;
      Object.Header.Size = 6;
      Object.Header.SignalState = 0;
      v13 = IoBuildDeviceIoControlRequest(0x1403A0u, v12, (PVOID)Pool2, 0x96u, 0LL, 0, 0, &Object, &IoStatusBlock);
      v14 = v13;
      if ( v13 )
      {
        v15 = v13->Tail.Overlay.CurrentStackLocation;
        v16 = DeviceObject;
        v15[-1].FileObject = v3;
        v15[-1].MajorFunction = 13;
        Status = IofCallDriver(v16, v14);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        goto LABEL_12;
      }
    }
LABEL_3:
    Status = -1073741670;
  }
LABEL_12:
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x42626D53u);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x42626D53u);
  return (unsigned int)Status;
}
