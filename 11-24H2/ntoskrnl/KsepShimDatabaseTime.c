/*
 * XREFs of KsepShimDatabaseTime @ 0x140A61BF8
 * Callers:
 *     KsepShimDbChanged @ 0x1404A5F7C (KsepShimDbChanged.c)
 * Callees:
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x14048E6F8 (KsepLogError.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1406A6630 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 */

__int64 __fastcall KsepShimDatabaseTime(PCWSTR SourceString, _QWORD *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v14; // [rsp+98h] [rbp+2Fh]
  __int64 v15; // [rsp+A8h] [rbp+3Fh]

  *a2 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v15 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v14 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v6 + 1] = v3;
    v7 = KsepDebugFlag;
    KsepHistoryErrors[2 * v6] = 590724;
    if ( (v7 & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: ZwOpenFile failed opening DB file!\n");
    KsepLogError(0LL, (__int64)"KSE: ZwOpenFile failed opening DB file!\n");
  }
  else
  {
    v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    if ( v4 < 0 )
    {
      v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v8 + 1] = v4;
      KsepHistoryErrors[2 * v8] = 590737;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: ZwQueryInformationFile failed getting DB file!\n");
      KsepLogError(0LL, (__int64)"KSE: ZwQueryInformationFile failed getting DB file!\n");
    }
    else
    {
      *a2 = v14;
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
