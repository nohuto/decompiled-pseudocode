/*
 * XREFs of FsRtlGetVirtualDiskNestingLevel @ 0x140493A20
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x140493C00 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __stdcall FsRtlGetVirtualDiskNestingLevel(
        PDEVICE_OBJECT DeviceObject,
        PULONG NestingLevel,
        PULONG NestingFlags)
{
  unsigned __int64 DeviceType; // rax
  ULONG MaximumVirtualDiskNestingLevel; // esi
  ULONG v8; // edi
  __int64 v9; // rcx
  signed __int8 v10; // r12
  IRP *v11; // rax
  int Status; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v15; // edx
  struct _KEVENT Object; // [rsp+50h] [rbp-29h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  __int128 OutputBuffer; // [rsp+80h] [rbp+7h] BYREF
  ULONG v20; // [rsp+90h] [rbp+17h]

  DeviceType = DeviceObject->DeviceType;
  Object.Header.Reserved1 = 0;
  MaximumVirtualDiskNestingLevel = 0;
  v8 = 1;
  IoStatusBlock = 0LL;
  if ( (unsigned int)DeviceType > 0x24 )
    return -1073741808;
  v9 = 0x100000018CLL;
  if ( !_bittest64(&v9, DeviceType) )
    return -1073741808;
  LOWORD(Object.Header.Lock) = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.Size = 6;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  Object.Header.SignalState = 0;
  v10 = _interlockedbittestandset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 4u);
  InputBuffer = 1LL;
  v20 = 0;
  OutputBuffer = 0LL;
  v11 = IoBuildDeviceIoControlRequest(
          0x2D1190u,
          DeviceObject,
          &InputBuffer,
          8u,
          &OutputBuffer,
          0x14u,
          0,
          &Object,
          &IoStatusBlock);
  if ( !v11 )
  {
    Status = -1073741670;
    goto LABEL_9;
  }
  Status = IofCallDriver(DeviceObject, v11);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( IoStatusBlock.Information >= 0x14 && (_DWORD)OutputBuffer == 1 )
    {
      if ( v20 <= FsRtlQueryMaximumVirtualDiskNestingLevel() )
      {
        if ( v20 )
          MaximumVirtualDiskNestingLevel = v20;
      }
      else
      {
        MaximumVirtualDiskNestingLevel = FsRtlQueryMaximumVirtualDiskNestingLevel();
      }
      if ( BYTE4(OutputBuffer) )
        v8 = 0;
      v15 = v8;
      v8 |= 2u;
      if ( (BYTE12(OutputBuffer) & 2) == 0 )
        v8 = v15;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  if ( Status != -1073741670 )
LABEL_8:
    Status = 0;
LABEL_9:
  *NestingLevel = MaximumVirtualDiskNestingLevel;
  if ( NestingFlags )
    *NestingFlags = v8;
  CurrentThread = KeGetCurrentThread();
  if ( v10 )
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return Status;
}
