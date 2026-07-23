/*
 * XREFs of EtwpRealtimeRestoreState @ 0x140AA9B94
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1409D3A4C (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1406A7470 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1406A74B0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpEventWriteTemplateBackingFile @ 0x1407A77C4 (EtwpEventWriteTemplateBackingFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeRestoreState(__int64 a1)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  __int64 v4; // rdx
  int UsedProcessorCount; // eax
  __int64 v6; // rax
  void *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int128 v10; // xmm0
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int FileInformationClass; // [rsp+20h] [rbp-69h]
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-31h] BYREF
  _DWORD Buffer[4]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+90h] [rbp+7h]
  __int64 v21; // [rsp+98h] [rbp+Fh]
  __int64 v22; // [rsp+A0h] [rbp+17h]
  __int64 v23; // [rsp+A8h] [rbp+1Fh]
  unsigned __int64 v24; // [rsp+B0h] [rbp+27h]
  __int128 FileInformation; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+47h]

  v26 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  memset_0(Buffer, 0, 0x48uLL);
  result = ZwQueryInformationFile(
             *(HANDLE *)(a1 + 360),
             &IoStatusBlock,
             &FileInformation,
             0x18u,
             FileStandardInformation);
  if ( result >= 0 )
  {
    if ( !*((_QWORD *)&FileInformation + 1) )
      return 0;
    if ( *((__int64 *)&FileInformation + 1) < 72 )
      return -1073741566;
    v3 = *(void **)(a1 + 360);
    ByteOffset.QuadPart = 0LL;
    result = ZwReadFile(v3, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
    if ( result < 0 )
      return result;
    result = IoStatusBlock.Status;
    if ( IoStatusBlock.Status < 0 )
      return result;
    if ( IoStatusBlock.Information != 72 )
      return -1073741807;
    if ( Buffer[0] != 1933995090 )
      return -1073741566;
    if ( Buffer[2] != 1 )
      return -1073741566;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1, v4);
    if ( Buffer[3] != UsedProcessorCount )
      return -1073741566;
    if ( !v20 )
      return -1073741566;
    if ( v21 > v23 )
      return -1073741566;
    if ( v22 > v23 )
      return -1073741566;
    if ( v22 == v21 )
      return -1073741566;
    if ( (unsigned __int64)v23 < 0x48 )
      return -1073741566;
    v6 = *(_QWORD *)(a1 + 416);
    if ( v23 > v6 || v24 > v6 || *((__int64 *)&FileInformation + 1) < v23 )
      return -1073741566;
    v7 = *(void **)(a1 + 360);
    Buffer[0] = 0;
    result = ZwWriteFile(v7, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
    if ( result >= 0 )
    {
      v8 = v24;
      v9 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 236));
      v10 = v19;
      *(_DWORD *)(a1 + 424) = v20;
      *(_QWORD *)(a1 + 392) = v21;
      *(_QWORD *)(a1 + 384) = v22;
      *(_QWORD *)(a1 + 400) = v23;
      v11 = *(_QWORD *)(a1 + 416) - v8;
      *(_QWORD *)(a1 + 408) = v8;
      *(_OWORD *)(a1 + 432) = v10;
      if ( v11 <= v9 && *(int *)(a1 + 16) >= 0 )
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
          EtwpEventWriteTemplateBackingFile(
            v13,
            v12,
            v14,
            (unsigned __int16 *)(a1 + 136),
            FileInformationClass,
            *(_DWORD *)(a1 + 12));
      }
      return 0;
    }
  }
  return result;
}
