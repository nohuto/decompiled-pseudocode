/*
 * XREFs of LdrpResFileSize @ 0x1800A3598
 * Callers:
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     NtQueryInformationFile @ 0x180163440 (NtQueryInformationFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpResFileSize(char *FileHandle, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  NTSTATUS result; // eax
  int v9; // edi
  _QWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-40h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h]

  v10[0] = 3145774LL;
  v14 = 0LL;
  v11[0] = 3014700LL;
  v10[1] = L"LdrResGetRCConfig Enter";
  v11[1] = L"LdrResGetRCConfig Exit";
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v4 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v5 = 2147353477LL;
  v6 = 2147353476LL;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v7 = 2147353476LL;
    LdrpTraceLoadMUIDll(v10, *(unsigned __int8 *)v7);
  }
  if ( a2 && (unsigned __int64)(FileHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    result = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    v9 = result;
    if ( result < 0 )
      return result;
    *a2 = *((_QWORD *)&FileInformation + 1);
  }
  else
  {
    v9 = -1073741811;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v11, *(unsigned __int8 *)v6);
  }
  return v9;
}
