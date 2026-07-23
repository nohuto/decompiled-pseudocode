/*
 * XREFs of IopCreateArcNamesCd @ 0x140C0AC5C
 * Callers:
 *     IopCreateArcNames @ 0x140C0AB18 (IopCreateArcNames.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D49E0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x140592510 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     IoGetConfigurationInformation @ 0x1407080D0 (IoGetConfigurationInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140822F90 (IoGetDeviceObjectPointer.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     IoCreateSymbolicLink @ 0x140A1FD70 (IoCreateSymbolicLink.c)
 *     IoBuildSynchronousFsdRequest @ 0x140A361D0 (IoBuildSynchronousFsdRequest.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     IopFetchConfigurationInformation @ 0x140C0B624 (IopFetchConfigurationInformation.c)
 */

__int64 __fastcall IopCreateArcNamesCd(__int64 a1)
{
  WCHAR **v1; // rdi
  ULONG v2; // r13d
  ULONG CdRomCount; // r15d
  unsigned int ConfigurationInformation; // eax
  WCHAR *v6; // rcx
  PZZWSTR v7; // rbx
  unsigned int v8; // esi
  const WCHAR *v9; // r12
  __int64 v10; // r10
  unsigned __int8 *v11; // rax
  __int64 v12; // r9
  WCHAR *v13; // r11
  int v14; // r8d
  int v15; // edx
  char *Pool2; // rdi
  LONG LockNV; // r14d
  int v18; // esi
  __int64 v19; // rax
  NTSTATUS DeviceObjectPointer; // esi
  struct _DEVICE_OBJECT *v21; // r14
  IRP *v22; // rax
  IRP *v23; // rax
  NTSTATUS Status; // eax
  unsigned __int64 v25; // rax
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  int v30; // ecx
  struct _KEVENT Object; // [rsp+58h] [rbp-B0h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+70h] [rbp-98h]
  PZZWSTR DestinationString[3]; // [rsp+78h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp-78h] BYREF
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp-70h] BYREF
  STRING SourceString; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-58h] BYREF
  LARGE_INTEGER StartingOffset[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING SymbolicLinkName; // [rsp+E0h] [rbp-28h] BYREF
  STRING v42; // [rsp+F0h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp-8h] BYREF
  int v44; // [rsp+108h] [rbp+0h]
  char pszDest[128]; // [rsp+118h] [rbp+10h] BYREF
  CHAR v46[128]; // [rsp+198h] [rbp+90h] BYREF

  v1 = *(WCHAR ***)(a1 + 232);
  v40 = a1;
  v2 = 0;
  SourceString = 0LL;
  DeviceObject = 0LL;
  FileObject = 0LL;
  v42 = 0LL;
  p_Blink = 0LL;
  SymbolicLinkName = 0LL;
  IoStatusBlock = 0LL;
  Object.Header.WaitListHead = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  CdRomCount = IoGetConfigurationInformation()->CdRomCount;
  Timeout.QuadPart = 0LL;
  v44 = 0;
  *(GUID *)&StartingOffset[0].LowPart = GUID_DEVINTERFACE_CDROM;
  ConfigurationInformation = IopFetchConfigurationInformation(DestinationString, (GUID *)StartingOffset);
  v6 = *v1;
  v7 = DestinationString[0];
  v8 = ConfigurationInformation >> 31;
  v9 = DestinationString[0];
  if ( *v1 == (WCHAR *)v1 )
    goto LABEL_45;
  v10 = *(_QWORD *)(a1 + 184);
  do
  {
    v11 = (unsigned __int8 *)*((_QWORD *)v6 + 3);
    v12 = v10 - (_QWORD)v11;
    DestinationString[0] = v6;
    v13 = v6;
    do
    {
      v14 = v11[v12];
      v15 = *v11 - v14;
      if ( v15 )
        break;
      ++v11;
    }
    while ( v14 );
    if ( !v15 )
      break;
    v6 = *(WCHAR **)v6;
    v13 = 0LL;
    DestinationString[0] = 0LL;
  }
  while ( v6 != (WCHAR *)v1 );
  if ( !v13 )
    goto LABEL_45;
  Pool2 = (char *)ExAllocatePool2(0x48uLL, 0x800uLL, 0x20206F49uLL);
  if ( !Pool2 )
    goto LABEL_45;
  LockNV = 0;
  Object.Header.LockNV = 0;
  if ( (_BYTE)v8 )
    CdRomCount += 5;
  v18 = 0;
  while ( 1 )
  {
    if ( v2 >= CdRomCount )
      goto LABEL_44;
    if ( v9 && *v9 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v9);
      v19 = -1LL;
      do
        ++v19;
      while ( v9[v19] );
      v9 += v19 + 1;
      DeviceObjectPointer = IoGetDeviceObjectPointer(
                              (PUNICODE_STRING)&DestinationString[1],
                              0x80u,
                              &FileObject,
                              &DeviceObject);
      if ( DeviceObjectPointer < 0 )
        goto LABEL_37;
      v21 = DeviceObject;
      v22 = IoBuildDeviceIoControlRequest(
              0x2D1080u,
              DeviceObject,
              0LL,
              0,
              &Timeout,
              0xCu,
              0,
              (PKEVENT)&Object.Header.WaitListHead,
              &IoStatusBlock);
      if ( !v22 )
        goto LABEL_51;
      LOWORD(Object.Header.WaitListHead.Flink) = 0;
      p_Blink = &Object.Header.WaitListHead.Blink;
      BYTE2(Object.Header.WaitListHead.Flink) = 6;
      Object.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&Object.Header.WaitListHead.Blink;
      HIDWORD(Object.Header.WaitListHead.Flink) = 0;
      DeviceObjectPointer = IofCallDriver(v21, v22);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Object.Header.WaitListHead, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer < 0
        || (RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", Timeout.HighPart),
            RtlInitAnsiString(&SourceString, pszDest),
            DeviceObjectPointer = RtlAnsiStringToUnicodeString(
                                    (PUNICODE_STRING)&DestinationString[1],
                                    &SourceString,
                                    1u),
            DeviceObjectPointer < 0) )
      {
LABEL_37:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        goto LABEL_39;
      }
      v18 = 0;
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", LockNV);
      Object.Header.LockNV = LockNV + 1;
      RtlInitAnsiString(&SourceString, pszDest);
      if ( RtlAnsiStringToUnicodeString((PUNICODE_STRING)&DestinationString[1], &SourceString, 1u) < 0 )
      {
LABEL_51:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        DeviceObjectPointer = -1073741670;
LABEL_39:
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)DeviceObjectPointer;
      }
      if ( IoGetDeviceObjectPointer((PUNICODE_STRING)&DestinationString[1], 0x80u, &FileObject, &DeviceObject) < 0 )
        goto LABEL_43;
      v21 = DeviceObject;
    }
    StartingOffset[0].QuadPart = 0x8000LL;
    v23 = IoBuildSynchronousFsdRequest(
            3u,
            v21,
            Pool2,
            0x800u,
            StartingOffset,
            (PKEVENT)&Object.Header.WaitListHead,
            &IoStatusBlock);
    if ( v23 )
    {
      LOWORD(Object.Header.WaitListHead.Flink) = 0;
      HIDWORD(Object.Header.WaitListHead.Flink) = 0;
      p_Blink = &Object.Header.WaitListHead.Blink;
      Object.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&Object.Header.WaitListHead.Blink;
      BYTE2(Object.Header.WaitListHead.Flink) = 6;
      Status = IofCallDriver(v21, v23);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object.Header.WaitListHead, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v25 = 0LL;
        v26 = 0LL;
        do
        {
          v27 = _mm_loadu_si128((const __m128i *)&Pool2[4 * v25]);
          v25 += 4LL;
          v28 = _mm_add_epi32(v27, v26);
          v26 = v28;
        }
        while ( v25 < 0x200 );
        v29 = _mm_add_epi32(v28, _mm_srli_si128(v28, 8));
        v18 = _mm_cvtsi128_si32(_mm_add_epi32(v29, _mm_srli_si128(v29, 4)));
      }
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    v30 = v18 + *((_DWORD *)DestinationString[0] + 8);
    v18 = 0;
    if ( !v30 )
      break;
    RtlFreeAnsiString((PUNICODE_STRING)&DestinationString[1]);
    LockNV = Object.Header.LockNV;
    ++v2;
  }
  RtlStringCchPrintfA(v46, 0x80uLL, "\\ArcName\\%s", *(const char **)(v40 + 184));
  RtlInitAnsiString(&v42, v46);
  DeviceObjectPointer = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &v42, 1u);
  if ( DeviceObjectPointer < 0 )
  {
    ExFreePoolWithTag(Pool2, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    RtlFreeAnsiString((PUNICODE_STRING)&DestinationString[1]);
    return (unsigned int)DeviceObjectPointer;
  }
  IoCreateSymbolicLink(&SymbolicLinkName, (PUNICODE_STRING)&DestinationString[1]);
  RtlFreeAnsiString(&SymbolicLinkName);
LABEL_43:
  RtlFreeAnsiString((PUNICODE_STRING)&DestinationString[1]);
LABEL_44:
  ExFreePoolWithTag(Pool2, 0);
LABEL_45:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return 0LL;
}
