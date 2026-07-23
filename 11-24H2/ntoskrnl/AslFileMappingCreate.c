/*
 * XREFs of AslFileMappingCreate @ 0x140941554
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1408016C4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x1408034C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803EB0 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140804270 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbGetDatabaseMatch @ 0x1409410B0 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x1409413E0 (SdbpCheckKObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlFileMapInitializeByNtPath @ 0x1404C31AC (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     AslFileNotFound @ 0x1406F95F0 (AslFileNotFound.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     AslStringDuplicate @ 0x140942210 (AslStringDuplicate.c)
 *     AslFileMappingDelete @ 0x140944898 (AslFileMappingDelete.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x140A8D8CC (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingCreate(__int64 *a1, const WCHAR *a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  NTSTATUS v13; // ebx
  void *v14; // rax
  HANDLE *v15; // rsi
  int v16; // eax
  const char *v17; // r9
  int v18; // r8d
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]

  v26 = 0LL;
  FileInformation = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v11 = AslAlloc(v10, 88LL);
  v12 = v11;
  if ( !v11 )
  {
    v13 = -1073741801;
    goto LABEL_13;
  }
  v13 = AslStringDuplicate(v11, a2);
  if ( v13 < 0 )
  {
    v17 = "AslStringDuplicate failed [%x]";
    v18 = 121;
  }
  else
  {
    v14 = 0LL;
    if ( a3 != (void *)-1LL )
      v14 = a3;
    v15 = (HANDLE *)(v12 + 8);
    if ( v14 )
    {
      *(_OWORD *)v15 = 0LL;
      *(_OWORD *)(v12 + 24) = 0LL;
      *(_OWORD *)(v12 + 40) = 0LL;
      *(_QWORD *)(v12 + 56) = 0LL;
      *(_BYTE *)(v12 + 56) = 0;
      *v15 = v14;
    }
    else
    {
      v16 = RtlFileMapInitializeByNtPath(v12 + 8, &DestinationString);
      v13 = v16;
      if ( v16 < 0 )
      {
        if ( !AslFileNotFound(v16) )
        {
          v19 = (unsigned int)(v13 + 1073741805);
          if ( (unsigned int)v19 <= 0x30 && (v20 = 0x1000000008001LL, _bittest64(&v20, v19)) || v13 == -1073741638 )
          {
            v21 = 161;
            v22 = 3;
          }
          else
          {
            v21 = 159;
            v22 = 1;
          }
          AslLogCallPrintf(
            v22,
            (unsigned int)"AslFileMappingCreate",
            v21,
            (unsigned int)"RtlFileMapInitializeByFilePath failed %S [%x]");
        }
        goto LABEL_12;
      }
    }
    v13 = ZwQueryInformationFile(*v15, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v13 >= 0 )
    {
      if ( a4 )
      {
        *(_QWORD *)(v12 + 40) = a5;
        *(_BYTE *)(v12 + 59) = 1;
        *(_QWORD *)(v12 + 32) = a4;
      }
      *(_QWORD *)(v12 + 24) = *((_QWORD *)&FileInformation + 1);
      if ( a4 )
      {
        if ( !*((_QWORD *)&FileInformation + 1) )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslFileMappingCreate",
            206,
            (unsigned int)"File size is 0 bytes yet ImageViewBase was present");
          v13 = -1073741811;
          goto LABEL_12;
        }
        if ( (int)AslpFileMappingGetFileKind(v12 + 8, v12 + 64) < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslFileMappingCreate",
            213,
            (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]");
          *(_DWORD *)(v12 + 64) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v12 + 64) = (*((_QWORD *)&FileInformation + 1) != 0LL) + 1;
      }
      *a1 = v12;
      v13 = 0;
      goto LABEL_13;
    }
    v17 = "NtQueryInformationFile failed [%x]";
    v18 = 181;
  }
  AslLogCallPrintf(1, (unsigned int)"AslFileMappingCreate", v18, (_DWORD)v17);
LABEL_12:
  AslFileMappingDelete(v12);
LABEL_13:
  if ( DestinationString.Buffer != a2 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v13;
}
