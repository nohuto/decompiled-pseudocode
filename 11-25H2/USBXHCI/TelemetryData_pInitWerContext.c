/*
 * XREFs of TelemetryData_pInitWerContext @ 0x14007FE64
 * Callers:
 *     TelemetryData_SubmitReport @ 0x14007FAA8 (TelemetryData_SubmitReport.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140044844 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 *     memset @ 0x140059AC0 (memset.c)
 *     RegFreeInfo @ 0x14008039C (RegFreeInfo.c)
 *     RegRetrieveValueInfo @ 0x1400803C4 (RegRetrieveValueInfo.c)
 */

__int64 __fastcall TelemetryData_pInitWerContext(__int64 a1)
{
  int v2; // ebx
  _DWORD *v3; // rbx
  unsigned int v4; // eax
  size_t v5; // r8
  __int64 v6; // rsi
  NTSTATUS PersistedStateLocation; // ebx
  void *Pool2; // rdi
  NTSTATUS v9; // eax
  __int64 v11; // [rsp+78h] [rbp-90h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  _DWORD *v13; // [rsp+88h] [rbp-80h]
  void *FileHandle; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v15[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v20; // [rsp+108h] [rbp+0h] BYREF
  wchar_t pszDest[264]; // [rsp+138h] [rbp+30h] BYREF

  v15[0] = 2883628LL;
  *(_QWORD *)&ValueName.Length = 2883628LL;
  v15[1] = L"LiveKernelReportsPath";
  ValueName.Buffer = L"LiveKernelReportsPath";
  FileHandle = 0LL;
  *(&v20.Length + 1) = 0;
  *(&v20.Attributes + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(pszDest, 0, 0x208uLL);
  LODWORD(v11) = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0
    && (v13 = 0LL, v2 = RegRetrieveValueInfo(KeyHandle, &ValueName), ZwClose(KeyHandle), v2 >= 0)
    && (v3 = v13) != 0LL
    && v13[1] == 1 )
  {
    v4 = v13[2];
    v5 = 518LL;
    if ( v4 <= 0x206 )
      v5 = v4;
    v6 = a1 + 104;
    memmove((void *)(a1 + 104), v13 + 3, v5);
    RegFreeInfo(v3);
  }
  else
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"LiveKernelReports",
                               0LL,
                               L"\\SystemRoot\\LiveKernelReports",
                               1LL,
                               0LL,
                               0,
                               &v11);
    if ( PersistedStateLocation != -2147483643 || (unsigned int)v11 > 0x104 )
      return (unsigned int)PersistedStateLocation;
    Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)v11, 1952531540LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"LiveKernelReports",
                               0LL,
                               L"\\SystemRoot\\LiveKernelReports",
                               1LL,
                               Pool2,
                               v11,
                               &v11);
    if ( PersistedStateLocation < 0 )
    {
      ExFreePoolWithTag(Pool2, 0x74614454u);
      return (unsigned int)PersistedStateLocation;
    }
    v6 = a1 + 104;
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(a1 + 104), 0x208uLL, L"%ws", Pool2);
    ExFreePoolWithTag(Pool2, 0x74614454u);
  }
  *(_WORD *)(a1 + 622) = 0;
  PersistedStateLocation = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%ws\\%ws", v6, a1 + 624);
  if ( PersistedStateLocation >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, pszDest);
    v20.Length = 48;
    v20.RootDirectory = 0LL;
    v20.Attributes = 576;
    v20.ObjectName = &DestinationString;
    *(_OWORD *)&v20.SecurityDescriptor = 0LL;
    v9 = IoCreateFile(
           &FileHandle,
           0x10000000u,
           &v20,
           &IoStatusBlock,
           0LL,
           0x80u,
           3u,
           2u,
           1u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x100u);
    PersistedStateLocation = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741771 || IoStatusBlock.Information == 4 )
        return 0;
    }
    else
    {
      ZwClose(FileHandle);
    }
  }
  return (unsigned int)PersistedStateLocation;
}
