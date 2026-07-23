/*
 * XREFs of IopGetBootDiskInformation @ 0x140C0C6AC
 * Callers:
 *     IoGetBootDiskInformation @ 0x140708070 (IoGetBootDiskInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D49E0 (IoBuildDeviceIoControlRequest.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     RtlEqualString @ 0x1404884F0 (RtlEqualString.c)
 *     RtlStringCchPrintfA @ 0x140592510 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     IopVerifyDiskSignature @ 0x14070794C (IopVerifyDiskSignature.c)
 *     IoGetConfigurationInformation @ 0x1407080D0 (IoGetConfigurationInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140822F90 (IoGetDeviceObjectPointer.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetBootDiskInformation(__int64 a1, unsigned int a2)
{
  int v4; // r12d
  bool v6; // cf
  __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD **v9; // r13
  const CHAR *v10; // rdx
  ULONG v11; // eax
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v13; // r15
  IRP *v14; // rax
  NTSTATUS Status; // eax
  ULONG OutputBufferLength; // r14d
  _DWORD *Pool2; // rbx
  IRP *v18; // rdi
  NTSTATUS v19; // edi
  int v20; // eax
  _QWORD *i; // r14
  char v22; // al
  __int64 v23; // r15
  __int64 v24; // r13
  int v25; // [rsp+58h] [rbp-B0h] BYREF
  ULONG DiskCount; // [rsp+5Ch] [rbp-ACh]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-A0h] BYREF
  struct _KEVENT FileObject_8; // [rsp+70h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  _QWORD **v32; // [rsp+A0h] [rbp-68h]
  __int64 v33; // [rsp+A8h] [rbp-60h]
  _QWORD **v34; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING ObjectName; // [rsp+B8h] [rbp-50h] BYREF
  STRING String1; // [rsp+C8h] [rbp-40h] BYREF
  STRING SourceString; // [rsp+D8h] [rbp-30h] BYREF
  STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  STRING String2; // [rsp+F8h] [rbp-10h] BYREF
  __int128 OutputBuffer; // [rsp+108h] [rbp+0h] BYREF
  __int64 v41; // [rsp+118h] [rbp+10h]
  char pszDest[128]; // [rsp+128h] [rbp+20h] BYREF
  CHAR v43[128]; // [rsp+1A8h] [rbp+A0h] BYREF

  v33 = a1;
  v41 = 0LL;
  DestinationString = 0LL;
  DeviceObject = 0LL;
  SourceString = 0LL;
  FileObject = 0LL;
  ObjectName = 0LL;
  String1 = 0LL;
  IoStatusBlock = 0LL;
  OutputBuffer = 0LL;
  memset(&FileObject_8, 0, sizeof(FileObject_8));
  String2 = 0LL;
  v4 = 0;
  v25 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  if ( (unsigned int)InitializationPhase >= 2 )
    return 3221225865LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  v6 = a2 < 0x40;
  v7 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v8 = 0LL;
  if ( !v6 )
    v8 = a1;
  v9 = *(_QWORD ***)(v7 + 232);
  v10 = *(const CHAR **)(v7 + 184);
  v34 = v9;
  v32 = (_QWORD **)**v9;
  RtlInitAnsiString(&DestinationString, v10);
  RtlInitAnsiString(&String2, *(PCSZ *)(v7 + 192));
  v11 = 0;
  for ( LODWORD(v27) = 0; v11 < DiskCount; LODWORD(v27) = v11 )
  {
    RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\Harddisk%d\\Partition0", v11);
    RtlInitAnsiString(&SourceString, pszDest);
    if ( RtlAnsiStringToUnicodeString(&ObjectName, &SourceString, 1u) < 0 )
      goto LABEL_55;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x80u, &FileObject, &DeviceObject);
    RtlFreeAnsiString(&ObjectName);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_55;
    v13 = DeviceObject;
    v14 = IoBuildDeviceIoControlRequest(
            0x70000u,
            DeviceObject,
            0LL,
            0,
            &OutputBuffer,
            0x18u,
            0,
            &FileObject_8,
            &IoStatusBlock);
    if ( !v14 )
      goto LABEL_11;
    LOWORD(FileObject_8.Header.Lock) = 0;
    FileObject_8.Header.WaitListHead.Blink = &FileObject_8.Header.WaitListHead;
    FileObject_8.Header.Size = 6;
    FileObject_8.Header.WaitListHead.Flink = &FileObject_8.Header.WaitListHead;
    FileObject_8.Header.SignalState = 0;
    Status = IofCallDriver(v13, v14);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&FileObject_8, Suspended, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      for ( OutputBufferLength = 4096; ; OutputBufferLength *= 2 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, OutputBufferLength, 0x6F426F49uLL);
        if ( !Pool2 )
          break;
        v18 = IoBuildDeviceIoControlRequest(
                0x70050u,
                v13,
                0LL,
                0,
                Pool2,
                OutputBufferLength,
                0,
                &FileObject_8,
                &IoStatusBlock);
        if ( !v18 )
          break;
        KeResetEvent(&FileObject_8);
        v19 = IofCallDriver(v13, v18);
        if ( v19 == 259 )
        {
          KeWaitForSingleObject(&FileObject_8, Suspended, 0, 0, 0LL);
          v19 = IoStatusBlock.Status;
        }
        if ( v19 != -1073741789 )
          goto LABEL_23;
        ExFreePoolWithTag(Pool2, 0);
      }
      v19 = -1073741670;
LABEL_23:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
      if ( v19 >= 0 )
      {
        v20 = HIDWORD(v41);
        if ( HIDWORD(v41) < 0x200 )
          v20 = 512;
        HIDWORD(v41) = v20;
        for ( i = *v9; i != v9; i = (_QWORD *)*i )
        {
          if ( v32 != v9 || DiskCount != 1 || *Pool2 )
          {
            v22 = IopVerifyDiskSignature((__int64)Pool2, (__int64)i, &v25);
            v4 = v25;
            if ( !v22 )
              continue;
          }
          v23 = 0LL;
          if ( Pool2[1] )
          {
            v24 = v33;
            do
            {
              if ( !v4 && !*Pool2 )
                v4 = Pool2[2];
              if ( Pool2[36 * v23 + 18] )
              {
                RtlStringCchPrintfA(v43, 0x80uLL, "%spartition(%d)", (const char *)i[3], Pool2[36 * v23 + 18]);
                RtlInitAnsiString(&String1, v43);
                if ( RtlEqualString(&String1, &DestinationString, 1u) )
                {
                  *(_DWORD *)(v24 + 16) = v4;
                  *(_QWORD *)v24 = *(_QWORD *)&Pool2[36 * v23 + 14];
                  if ( v8 )
                  {
                    if ( *Pool2 == 1 )
                    {
                      *(_BYTE *)(v8 + 56) = 1;
                      *(_OWORD *)(v8 + 24) = *(_OWORD *)(Pool2 + 2);
                    }
                    else
                    {
                      *(_BYTE *)(v8 + 56) = 0;
                    }
                  }
                }
                if ( RtlEqualString(&String1, &String2, 1u) )
                {
                  *(_DWORD *)(v24 + 20) = v4;
                  *(_QWORD *)(v24 + 8) = *(_QWORD *)&Pool2[36 * v23 + 14];
                  if ( *Pool2 == 1 )
                  {
                    if ( v8 )
                    {
                      *(_BYTE *)(v8 + 57) = 1;
                      *(_OWORD *)(v8 + 40) = *(_OWORD *)(Pool2 + 2);
                    }
                  }
                  else if ( v8 )
                  {
                    *(_BYTE *)(v8 + 57) = 0;
                  }
                }
              }
              v23 = (unsigned int)(v23 + 1);
            }
            while ( (unsigned int)v23 < Pool2[1] );
            v9 = v34;
            v25 = v4;
          }
        }
LABEL_54:
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_55;
      }
      if ( Pool2 )
        goto LABEL_54;
    }
    else
    {
LABEL_11:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    }
LABEL_55:
    v11 = v27 + 1;
  }
  return 0LL;
}
