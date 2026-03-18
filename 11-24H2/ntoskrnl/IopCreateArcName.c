/*
 * XREFs of IopCreateArcName @ 0x140A75840
 * Callers:
 *     IoCreateArcName @ 0x140713DA0 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x140C1C364 (IopCreateArcNamesDisk.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402678C0 (IoBuildDeviceIoControlRequest.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403754A0 (IopBuildAsynchronousFsdRequest.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140476998 (RtlStringCchPrintfW.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140595B8C (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140595C68 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     IopVerifyDiskSignature @ 0x140713A4C (IopVerifyDiskSignature.c)
 *     VhdVerifyBootDisk @ 0x140829D1C (VhdVerifyBootDisk.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     IoCreateSymbolicLink @ 0x140A298B0 (IoCreateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v15; // rdx
  IRP *v16; // rbx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  char v20; // bl
  __int64 v21; // rdi
  IRP *v22; // rbx
  const wchar_t *v23; // r8
  const char *v24; // r15
  unsigned __int8 *v25; // rcx
  __int64 v26; // r8
  int v27; // edx
  int v28; // eax
  int v29; // edi
  unsigned int v30; // r14d
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Object; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h] BYREF
  int v40; // [rsp+C0h] [rbp-40h]
  char v41[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF

  v39 = 0LL;
  v40 = 0;
  v3 = 0LL;
  v38 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = IoArcTableListHead;
  OutputBufferLength = 4096;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  v37 = 0LL;
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
    v8 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, &v39, 0xCu, 0, &Object, &IoStatusBlock);
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
    HIDWORD(v39) = a2;
  }
  v11 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, &v37, 0x18u, 0, &Object, &IoStatusBlock);
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
  v12 = HIDWORD(v38);
  if ( HIDWORD(v38) < 0x200 )
    v12 = 512;
  v13 = DeviceObject->DeviceType == 2;
  HIDWORD(v38) = v12;
  if ( v13 )
  {
    v35 = 0x8000LL;
    Pool2 = (void *)ExAllocatePool2(0x48uLL);
    v3 = Pool2;
    if ( Pool2 )
    {
      v16 = (IRP *)IopBuildAsynchronousFsdRequest(
                     3u,
                     (__int64)DeviceObject,
                     Pool2,
                     HIDWORD(v38),
                     &v35,
                     (__int64)&IoStatusBlock);
      if ( !v16 )
      {
        Status = -1073741670;
        goto LABEL_44;
      }
      v16->UserEvent = &Object;
      IopQueueThreadIrp((__int64)v16, v15, v17);
      v16->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
      KeInitializeEvent(&Object, NotificationEvent, 0);
      Status = IofCallDriver(DeviceObject, v16);
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
      v18 = 0LL;
      v19 = (unsigned __int64)HIDWORD(v38) >> 2;
      if ( v19 )
      {
        do
          v4 += *((_DWORD *)v3 + v18++);
        while ( v18 < v19 );
      }
      v4 = -v4;
LABEL_24:
      v20 = 1;
      goto LABEL_25;
    }
    return (unsigned int)-1073741670;
  }
  while ( 1 )
  {
    v5 = (_DWORD *)ExAllocatePool2(0x40uLL);
    if ( !v5 )
      return (unsigned int)-1073741670;
    v22 = IoBuildDeviceIoControlRequest(
            0x70050u,
            DeviceObject,
            0LL,
            0,
            v5,
            OutputBufferLength,
            0,
            &Object,
            &IoStatusBlock);
    if ( !v22 )
    {
      Status = -1073741670;
      goto LABEL_61;
    }
    KeResetEvent(&Object);
    Status = IofCallDriver(DeviceObject, v22);
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
  v20 = 0;
LABEL_25:
  v21 = IoArcTableListHead;
  while ( 2 )
  {
    if ( (__int64 *)v21 == &IoArcTableListHead )
    {
      Status = -1073741637;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(v21 + 72) || *(_QWORD *)(v21 + 64) )
      goto LABEL_28;
    if ( v20 )
    {
      if ( !*(_BYTE *)(v21 + 36) && *(_DWORD *)(v21 + 32) == v4 )
        break;
      goto LABEL_28;
    }
    if ( !IopVerifyDiskSignature((__int64)v5, v21, &v35)
      || *(_QWORD *)(v21 + 56) && !VhdVerifyBootDisk(DeviceObject)
      || !*v5 && *(_DWORD *)(v21 + 32) != v5[3] )
    {
LABEL_28:
      v21 = *(_QWORD *)v21;
      continue;
    }
    break;
  }
  *(_QWORD *)(v21 + 64) = DeviceObject;
  v23 = L"\\Device\\CdRom%d";
  if ( DeviceObject->DeviceType != 2 )
    v23 = L"\\Device\\Harddisk%d\\Partition0";
  RtlStringCchPrintfW(pszDest, 0x40uLL, v23, HIDWORD(v39));
  RtlInitUnicodeString(&DestinationString, pszDest);
  v24 = *(const char **)(v21 + 24);
  RtlStringCchPrintfA(v41, 0x40uLL, "\\ArcName\\%s", v24);
  Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v41);
  if ( Status >= 0 )
  {
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    RtlFreeAnsiString(&SymbolicLinkName);
    if ( DeviceObject->DeviceType == 2 )
    {
      if ( (unsigned int)InitializationPhase < 2 )
      {
        v25 = *(unsigned __int8 **)(v21 + 24);
        v26 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v25;
        do
        {
          v27 = v25[v26];
          v28 = *v25 - v27;
          if ( v28 )
            break;
          ++v25;
        }
        while ( v27 );
        if ( !v28 )
          DeviceObject->Flags |= 0x100u;
      }
    }
    else if ( v5[1] )
    {
      Status = 0;
      v29 = 1;
      do
      {
        LODWORD(OutputBuffer) = v29;
        v30 = v29;
        RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition%d", HIDWORD(v39), OutputBuffer);
        RtlInitUnicodeString(&DestinationString, pszDest);
        RtlStringCchPrintfA(v41, 0x40uLL, "\\ArcName\\%spartition(%d)", v24, v29);
        if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v41) >= 0 )
        {
          IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
          RtlFreeAnsiString(&SymbolicLinkName);
        }
        ++v29;
      }
      while ( v30 < v5[1] );
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
