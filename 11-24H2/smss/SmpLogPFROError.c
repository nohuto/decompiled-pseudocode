/*
 * XREFs of SmpLogPFROError @ 0x140016F38
 * Callers:
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x14000C8F4 (RtlStringCbPrintfExW.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpGetTime @ 0x14000ECB8 (SmpGetTime.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

bool __fastcall SmpLogPFROError(__int64 a1, const wchar_t *a2, int a3)
{
  ULONG v6; // ebx
  NTSTATUS v7; // eax
  int v8; // r8d
  int v9; // edx
  NTSTATUS v11; // edi
  NTSTATUS v12; // edi
  const wchar_t *v13; // r11
  wchar_t *v14; // rdi
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebx
  __int64 ShareAccess; // [rsp+30h] [rbp-D0h]
  ULONG CreateDisposition[2]; // [rsp+38h] [rbp-C8h]
  ULONG CreateOptions[2]; // [rsp+40h] [rbp-C0h]
  PVOID EaBuffer; // [rsp+48h] [rbp-B8h]
  __int64 EaLength; // [rsp+50h] [rbp-B0h]
  size_t pcbRemaining; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+D0h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-10h]
  wchar_t pszDest[256]; // [rsp+100h] [rbp+0h] BYREF

  pcbRemaining = 0LL;
  v6 = 48;
  IoStatusBlock = 0LL;
  TimeFields = 0LL;
  if ( !SmpLogFileHandle )
  {
    v29 = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    FileInformation = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"(*";
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = NtCreateFile(&SmpLogFileHandle, 0x120002u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 0, 3u, 0x64u, 0LL, 0);
    if ( v7 < 0 )
    {
      v8 = v7;
      v9 = 12274;
LABEL_4:
      SmpLogFileHandle = 0LL;
      SmpLogFailure((__int64)"SmpLogPFROError", v9, v8);
      return 0;
    }
    v11 = NtQueryInformationFile(SmpLogFileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v11 < 0 )
    {
      NtClose(SmpLogFileHandle);
      v8 = v11;
      v9 = 12291;
      goto LABEL_4;
    }
    v25 = *((_QWORD *)&FileInformation + 1);
    v12 = NtSetInformationFile(SmpLogFileHandle, &IoStatusBlock, &v25, 8u, FilePositionInformation);
    if ( v12 < 0 )
    {
      NtClose(SmpLogFileHandle);
      v8 = v12;
      v9 = 12309;
      goto LABEL_4;
    }
  }
  SmpGetTime(&TimeFields);
  v13 = L"$&";
  v14 = pszDest;
  if ( *a2 )
    v13 = a2;
  LODWORD(EaLength) = TimeFields.Minute;
  LODWORD(EaBuffer) = TimeFields.Hour;
  CreateOptions[0] = TimeFields.Year;
  CreateDisposition[0] = TimeFields.Day;
  LODWORD(ShareAccess) = TimeFields.Month;
  v15 = RtlStringCbPrintfExW(
          pszDest,
          0x200uLL,
          0LL,
          &pcbRemaining,
          0,
          L"%d/%d/%d %d:%d:%d - PFRO Error: %wZ, %wZ, 0x%x\r\n",
          ShareAccess,
          *(_QWORD *)CreateDisposition,
          *(_QWORD *)CreateOptions,
          EaBuffer,
          EaLength,
          TimeFields.Second,
          a1,
          v13,
          a3);
  if ( v15 >= 0 )
  {
    v6 = 512 - pcbRemaining;
  }
  else
  {
    SmpLogFailure((__int64)"SmpLogPFROError", 12341, v15);
    v14 = L"Error logging PFRO error";
  }
  v16 = NtWriteFile(SmpLogFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v14, v6, 0LL, 0LL);
  v17 = v16;
  if ( v16 < 0 )
    SmpLogFailure((__int64)"SmpLogPFROError", 12364, v16);
  return v17 >= 0;
}
