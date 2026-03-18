/*
 * XREFs of UsbhAcpiEvalAcpiMethodEx @ 0x1C0029AD0
 * Callers:
 *     UsbhGetAcpiPortAttributes @ 0x1C002B2AC (UsbhGetAcpiPortAttributes.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     memmove @ 0x1C0023580 (memmove.c)
 *     memset @ 0x1C0023880 (memset.c)
 */

__int64 __fastcall UsbhAcpiEvalAcpiMethodEx(__int64 a1, unsigned __int16 *a2, int a3, _DWORD *a4)
{
  PDEVICE_OBJECT *v7; // rax
  size_t v8; // rbx
  PDEVICE_OBJECT *v9; // rdi
  __int64 v10; // r13
  __int64 result; // rax
  const void *v12; // rdx
  IRP *v13; // rbx
  NTSTATUS Status; // ebx
  struct _KEVENT Event; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  _DWORD InputBuffer[72]; // [rsp+80h] [rbp-80h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v7 = (PDEVICE_OBJECT *)FdoExt(a1);
  v8 = *a2;
  v9 = v7;
  v10 = (unsigned int)(v8 + 1);
  if ( (unsigned __int64)(v10 + 5) > 0x100 )
    return 3221225485LL;
  memset(InputBuffer, 0, 0x114uLL);
  v12 = (const void *)*((_QWORD *)a2 + 1);
  InputBuffer[0] = 1181312321;
  InputBuffer[65] = 276;
  memmove(&InputBuffer[1], v12, v8);
  *((_BYTE *)&InputBuffer[1] + v8) = 46;
  *(_DWORD *)((char *)&InputBuffer[1] + v10) = a3;
  *((_BYTE *)&InputBuffer[1] + (unsigned int)(v8 + 5)) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v13 = IoBuildDeviceIoControlRequest(0x32C018u, v9[151], InputBuffer, 0x114u, a4, 0x414u, 0, &Event, &IoStatusBlock);
  if ( !v13 )
    return 3221225626LL;
  ObfReferenceObject(v9[151]);
  Status = IofCallDriver(v9[151], v13);
  if ( Status == 259 )
  {
    Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( !Status )
      Status = IoStatusBlock.Status;
  }
  ObfDereferenceObject(v9[151]);
  if ( Status < 0 )
    return (unsigned int)Status;
  result = 3222536207LL;
  if ( *a4 == 1114596673 )
  {
    if ( a4[2] )
      return (unsigned int)Status;
  }
  return result;
}
