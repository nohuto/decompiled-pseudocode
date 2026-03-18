/*
 * XREFs of AslFileMappingCreate @ 0x140A75D30
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1407F10C4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x1407F2ED0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407F38C0 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407F3C80 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckKObject @ 0x14082BD7C (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x140A75B28 (SdbGetDatabaseMatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlFileMapInitializeByNtPath @ 0x1404C9B8C (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14069B360 (ZwQueryInformationFile.c)
 *     AslFileNotFound @ 0x1406EFB40 (AslFileNotFound.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x140829000 (AslStringDuplicate.c)
 *     AslFileMappingDelete @ 0x14082ADE8 (AslFileMappingDelete.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     AslpFileMappingGetFileKind @ 0x140A8C0CC (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingCreate(__int64 *a1, const WCHAR *a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v10; // rcx
  wchar_t **v11; // rax
  __int64 v12; // rdi
  int v13; // ebx
  void *v14; // rax
  HANDLE *v15; // rsi
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]

  v23 = 0LL;
  FileInformation = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v11 = (wchar_t **)AslAlloc(v10, 0x58uLL);
  v12 = (__int64)v11;
  if ( !v11 )
  {
    v13 = -1073741801;
    goto LABEL_13;
  }
  v13 = AslStringDuplicate(v11, a2);
  if ( v13 >= 0 )
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
          v17 = (unsigned int)(v13 + 1073741805);
          if ( (unsigned int)v17 <= 0x30 && (v18 = 0x1000000008001LL, _bittest64(&v18, v17)) || v13 == -1073741638 )
            v19 = 3LL;
          else
            v19 = 1LL;
          AslLogCallPrintf(v19);
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
          AslLogCallPrintf(1LL);
          v13 = -1073741811;
          goto LABEL_12;
        }
        if ( (int)AslpFileMappingGetFileKind(v12 + 8, v12 + 64) < 0 )
        {
          AslLogCallPrintf(1LL);
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
  }
  AslLogCallPrintf(1LL);
LABEL_12:
  AslFileMappingDelete(v12);
LABEL_13:
  if ( DestinationString.Buffer != a2 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v13;
}
