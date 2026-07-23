/*
 * XREFs of IopCreateArcName @ 0x140A6FCE0
 * Callers:
 *     IoCreateArcName @ 0x140711930 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x140C1E3A4 (IopCreateArcNamesDisk.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14025DD60 (IopBuildAsynchronousFsdRequest.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140592BBC (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140592C98 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IopVerifyDiskSignature @ 0x1407115DC (IopVerifyDiskSignature.c)
 *     VhdVerifyBootDisk @ 0x14082A54C (VhdVerifyBootDisk.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     IoCreateSymbolicLink @ 0x140A1E270 (IoCreateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateArcName(PDEVICE_OBJECT DeviceObject, int a2)
{
  void *v3; // r12
  int v4; // r15d
  _DWORD *v5; // rsi
  __int64 v6; // rax
  ULONG OutputBufferLength; // edi
  IRP *v8; // rbx
  NTSTATUS Status; // ebx
  IRP *v11; // rbx
  unsigned int v12; // eax
  bool v13; // zf
  void *Pool2; // rax
  IRP *v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  char v18; // bl
  __int64 v19; // rdi
  IRP *v20; // rbx
  const wchar_t *v21; // r8
  const char *v22; // r15
  unsigned __int8 *v23; // rcx
  __int64 v24; // r8
  int v25; // edx
  int v26; // eax
  int v27; // edi
  unsigned int v28; // r14d
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Object; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h] BYREF
  int v38; // [rsp+C0h] [rbp-40h]
  char v39[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF

  v37 = 0LL;
  v38 = 0;
  v3 = 0LL;
  v36 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = IoArcTableListHead;
  OutputBufferLength = 4096;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  v35 = 0LL;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  while ( (__int64 *)v6 != &IoArcTableListHead )
  {
    if ( *(PDEVICE_OBJECT *)(v6 + 64) == DeviceObject )
      return 0LL;
    v6 = *(_QWORD *)v6;
  }
  if ( a2 == -1 )
  {
    v8 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, &v37, 0xCu, 0, &Object, &IoStatusBlock);
    if ( !v8 )
      return (unsigned int)-1073741670;
    KeInitializeEvent(&Object, NotificationEvent, 0);
    Status = IofCallDriver(DeviceObject, v8);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      return (unsigned int)Status;
  }
  else
  {
    HIDWORD(v37) = a2;
  }
  v11 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, &v35, 0x18u, 0, &Object, &IoStatusBlock);
  if ( !v11 )
    return (unsigned int)-1073741670;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  Status = IofCallDriver(DeviceObject, v11);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    return (unsigned int)Status;
  v12 = HIDWORD(v36);
  if ( HIDWORD(v36) < 0x200 )
    v12 = 512;
  v13 = DeviceObject->DeviceType == 2;
  HIDWORD(v36) = v12;
  if ( v13 )
  {
    v33 = 0x8000LL;
    Pool2 = (void *)ExAllocatePool2(0x48uLL, v12, 0x20206F49u);
    v3 = Pool2;
    if ( Pool2 )
    {
      v15 = (IRP *)IopBuildAsynchronousFsdRequest(
                     3u,
                     (__int64)DeviceObject,
                     Pool2,
                     HIDWORD(v36),
                     &v33,
                     (__int64)&IoStatusBlock);
      if ( !v15 )
      {
        Status = -1073741670;
        goto LABEL_44;
      }
      v15->UserEvent = &Object;
      IopQueueThreadIrp((__int64)v15);
      v15->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
      KeInitializeEvent(&Object, NotificationEvent, 0);
      Status = IofCallDriver(DeviceObject, v15);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
LABEL_44:
        ExFreePoolWithTag(v3, 0);
        return (unsigned int)Status;
      }
      v16 = 0LL;
      v17 = (unsigned __int64)HIDWORD(v36) >> 2;
      if ( v17 )
      {
        do
          v4 += *((_DWORD *)v3 + v16++);
        while ( v16 < v17 );
      }
      v4 = -v4;
LABEL_24:
      v18 = 1;
      goto LABEL_25;
    }
    return (unsigned int)-1073741670;
  }
  while ( 1 )
  {
    v5 = (_DWORD *)ExAllocatePool2(0x40uLL, OutputBufferLength, 0x6F426F49u);
    if ( !v5 )
      return (unsigned int)-1073741670;
    v20 = IoBuildDeviceIoControlRequest(
            0x70050u,
            DeviceObject,
            0LL,
            0,
            v5,
            OutputBufferLength,
            0,
            &Object,
            &IoStatusBlock);
    if ( !v20 )
    {
      Status = -1073741670;
      goto LABEL_61;
    }
    KeResetEvent(&Object);
    Status = IofCallDriver(DeviceObject, v20);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status != -1073741789 )
      break;
    ExFreePoolWithTag(v5, 0);
    OutputBufferLength *= 2;
  }
  if ( Status < 0 )
  {
LABEL_61:
    ExFreePoolWithTag(v5, 0);
    goto LABEL_31;
  }
  if ( *v5 == 2 || !*v5 && !v5[1] && !v5[2] )
  {
    v4 = v5[3];
    goto LABEL_24;
  }
  v18 = 0;
LABEL_25:
  v19 = IoArcTableListHead;
  while ( 2 )
  {
    if ( (__int64 *)v19 == &IoArcTableListHead )
    {
      Status = -1073741637;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(v19 + 72) || *(_QWORD *)(v19 + 64) )
      goto LABEL_28;
    if ( v18 )
    {
      if ( !*(_BYTE *)(v19 + 36) && *(_DWORD *)(v19 + 32) == v4 )
        break;
      goto LABEL_28;
    }
    if ( !IopVerifyDiskSignature((__int64)v5, v19, &v33)
      || *(_QWORD *)(v19 + 56) && !VhdVerifyBootDisk(DeviceObject)
      || !*v5 && *(_DWORD *)(v19 + 32) != v5[3] )
    {
LABEL_28:
      v19 = *(_QWORD *)v19;
      continue;
    }
    break;
  }
  *(_QWORD *)(v19 + 64) = DeviceObject;
  v21 = L"\\Device\\CdRom%d";
  if ( DeviceObject->DeviceType != 2 )
    v21 = L"\\Device\\Harddisk%d\\Partition0";
  RtlStringCchPrintfW(pszDest, 0x40uLL, v21, HIDWORD(v37));
  RtlInitUnicodeString(&DestinationString, pszDest);
  v22 = *(const char **)(v19 + 24);
  RtlStringCchPrintfA(v39, 0x40uLL, "\\ArcName\\%s", v22);
  Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v39);
  if ( Status >= 0 )
  {
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    RtlFreeAnsiString(&SymbolicLinkName);
    if ( DeviceObject->DeviceType == 2 )
    {
      if ( (unsigned int)InitializationPhase < 2 )
      {
        v23 = *(unsigned __int8 **)(v19 + 24);
        v24 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v23;
        do
        {
          v25 = v23[v24];
          v26 = *v23 - v25;
          if ( v26 )
            break;
          ++v23;
        }
        while ( v25 );
        if ( !v26 )
          DeviceObject->Flags |= 0x100u;
      }
    }
    else if ( v5[1] )
    {
      Status = 0;
      v27 = 1;
      do
      {
        LODWORD(OutputBuffer) = v27;
        v28 = v27;
        RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition%d", HIDWORD(v37), OutputBuffer);
        RtlInitUnicodeString(&DestinationString, pszDest);
        RtlStringCchPrintfA(v39, 0x40uLL, "\\ArcName\\%spartition(%d)", v22, v27);
        if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v39) >= 0 )
        {
          IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
          RtlFreeAnsiString(&SymbolicLinkName);
        }
        ++v27;
      }
      while ( v28 < v5[1] );
    }
  }
LABEL_30:
  if ( v5 )
    goto LABEL_61;
LABEL_31:
  if ( v3 )
    goto LABEL_44;
  return (unsigned int)Status;
}
