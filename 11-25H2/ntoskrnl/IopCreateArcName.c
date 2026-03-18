/*
 * XREFs of IopCreateArcName @ 0x140A73568
 * Callers:
 *     IoCreateArcName @ 0x140707CA0 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x140C0B190 (IopCreateArcNamesDisk.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D49E0 (IoBuildDeviceIoControlRequest.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14035EFF0 (IopBuildAsynchronousFsdRequest.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140476E64 (RtlStringCchPrintfW.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140592434 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140592510 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     IopVerifyDiskSignature @ 0x14070794C (IopVerifyDiskSignature.c)
 *     VhdVerifyBootDisk @ 0x140819F1C (VhdVerifyBootDisk.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     IoCreateSymbolicLink @ 0x140A1FD70 (IoCreateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  int v12; // eax
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
  __int64 v23; // rax
  unsigned __int8 *v24; // rcx
  __int64 v25; // r8
  int v26; // edx
  int v27; // eax
  int v28; // edi
  unsigned int v29; // r14d
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Object; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h] BYREF
  int v39; // [rsp+C0h] [rbp-40h]
  char v40[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF

  v38 = 0LL;
  v39 = 0;
  v3 = 0LL;
  v37 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = IoArcTableListHead;
  OutputBufferLength = 4096;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  v36 = 0LL;
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
    v8 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, &v38, 0xCu, 0, &Object, &IoStatusBlock);
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
    HIDWORD(v38) = a2;
  }
  v11 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, &v36, 0x18u, 0, &Object, &IoStatusBlock);
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
  v12 = HIDWORD(v37);
  if ( HIDWORD(v37) < 0x200 )
    v12 = 512;
  v13 = DeviceObject->DeviceType == 2;
  HIDWORD(v37) = v12;
  if ( v13 )
  {
    v34 = 0x8000LL;
    Pool2 = (void *)ExAllocatePool2(0x48uLL);
    v3 = Pool2;
    if ( Pool2 )
    {
      v15 = (IRP *)IopBuildAsynchronousFsdRequest(
                     3u,
                     (__int64)DeviceObject,
                     Pool2,
                     HIDWORD(v37),
                     &v34,
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
      v17 = (unsigned __int64)HIDWORD(v37) >> 2;
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
    v5 = (_DWORD *)ExAllocatePool2(0x40uLL);
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
    if ( !IopVerifyDiskSignature((__int64)v5, v19, &v34)
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
  RtlStringCchPrintfW(pszDest, 0x40uLL, v21, HIDWORD(v38));
  RtlInitUnicodeString(&DestinationString, pszDest);
  v22 = *(const char **)(v19 + 24);
  RtlStringCchPrintfA(v40, 0x40uLL, "\\ArcName\\%s", v22);
  Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v40);
  if ( Status >= 0 )
  {
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    RtlFreeAnsiString(&SymbolicLinkName);
    if ( DeviceObject->DeviceType == 2 )
    {
      if ( (unsigned int)InitializationPhase < 2 )
      {
        v23 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        v24 = *(unsigned __int8 **)(v19 + 24);
        v25 = *(_QWORD *)(v23 + 184) - (_QWORD)v24;
        do
        {
          v26 = v24[v25];
          v27 = *v24 - v26;
          if ( v27 )
            break;
          ++v24;
        }
        while ( v26 );
        if ( !v27 )
          DeviceObject->Flags |= 0x100u;
      }
    }
    else if ( v5[1] )
    {
      Status = 0;
      v28 = 1;
      do
      {
        LODWORD(OutputBuffer) = v28;
        v29 = v28;
        RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition%d", HIDWORD(v38), OutputBuffer);
        RtlInitUnicodeString(&DestinationString, pszDest);
        RtlStringCchPrintfA(v40, 0x40uLL, "\\ArcName\\%spartition(%d)", v22, v28);
        if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v40) >= 0 )
        {
          IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
          RtlFreeAnsiString(&SymbolicLinkName);
        }
        ++v28;
      }
      while ( v29 < v5[1] );
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
