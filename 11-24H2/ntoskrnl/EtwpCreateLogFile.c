/*
 * XREFs of EtwpCreateLogFile @ 0x1409D51BC
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1406A7CD0 (ZwQueryVolumeInformationFile.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     EtwpSendSessionNotification @ 0x1409D4E48 (EtwpSendSessionNotification.c)
 *     EtwpUpdateFileHeader @ 0x1409D5658 (EtwpUpdateFileHeader.c)
 *     EtwpExpandFileName @ 0x1409D5FA4 (EtwpExpandFileName.c)
 *     EtwpDelayCreate @ 0x1409D61B0 (EtwpDelayCreate.c)
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140A8A8A8 (EtwpEventWriteTemplateAdmin.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2, _DWORD *a3)
{
  char v3; // r12
  __int64 v6; // r13
  char *v7; // rax
  char *v8; // rsi
  __int64 v9; // r8
  int v10; // r14d
  int v11; // ecx
  struct _SECURITY_CLIENT_CONTEXT *ClientContext; // rax
  HANDLE v13; // rsi
  unsigned int v14; // r15d
  bool v15; // r14
  __int64 v16; // rdx
  char v17; // r13
  bool v18; // zf
  void *v19; // r12
  char *v20; // rax
  char *v21; // r14
  __int128 v22; // xmm1
  NTSTATUS updated; // r15d
  int v24; // r8d
  wchar_t *Buffer; // rsi
  int v27; // eax
  char *v28; // rax
  char *v29; // r14
  UNICODE_STRING v30; // xmm1
  char v31; // [rsp+40h] [rbp-79h]
  int v32; // [rsp+44h] [rbp-75h]
  PSECURITY_CLIENT_CONTEXT v33; // [rsp+48h] [rbp-71h]
  HANDLE FileHandle; // [rsp+50h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  _DWORD *v36; // [rsp+68h] [rbp-51h]
  struct _IO_STATUS_BLOCK v37; // [rsp+70h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-39h] BYREF
  __int128 FileInformation; // [rsp+90h] [rbp-29h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-19h]
  __int64 v41; // [rsp+B0h] [rbp-9h]
  __int128 FsInformation; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v43; // [rsp+C8h] [rbp+Fh]

  v3 = 0;
  v36 = a3;
  v31 = 0;
  FileHandle = 0LL;
  v33 = 0LL;
  v41 = 0LL;
  v32 = 0;
  FileInformation = 0LL;
  v40 = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 4) == 0 )
    return 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFFC);
  if ( !*(_QWORD *)(a1 + 160) && !*(_QWORD *)(a1 + 192) )
    return 0LL;
  v6 = a1 + 184;
  if ( !*(_QWORD *)(a1 + 192) )
    v6 = a1 + 152;
  v7 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v7, a1 + 688);
  if ( v8 )
    v8[10] = 1;
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
    v9 = *(unsigned int *)(a1 + 296);
  else
    v9 = 0LL;
  EtwpExpandFileName(0LL, v6, v9, a1 + 136, *(_QWORD *)(a1 + 1360) == EtwpHostSiloState);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
  KeAbPostRelease(a1 + 688);
  v10 = *(_DWORD *)(a1 + 12);
  v11 = v10;
  if ( (v10 & 4) != 0 )
    v31 = 1;
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
    v3 = 1;
  else
    v11 = *(_DWORD *)(a1 + 12);
  if ( a2 && *(_QWORD *)(a1 + 720) )
  {
    ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(a1 + 704);
    v10 = v11;
    v33 = (PSECURITY_CLIENT_CONTEXT)(a1 + 704);
  }
  else
  {
    ClientContext = 0LL;
  }
  v13 = FileHandle;
  v14 = 0;
  v15 = (v10 & 0x4000000) == 0;
  while ( !v13 )
  {
    v43 = 0LL;
    FsInformation = 0LL;
    v37 = 0LL;
    v27 = EtwpDelayCreate((__int64)&FileHandle, 0, v3, ClientContext);
    v13 = FileHandle;
    updated = v27;
    if ( v27 < 0 )
      goto LABEL_34;
    updated = ZwQueryVolumeInformationFile(FileHandle, &v37, &FsInformation, 0x18u, FileFsSizeInformation);
    if ( updated < 0 )
      goto LABEL_34;
    v14 = HIDWORD(v43);
    ClientContext = v33;
    v32 = HIDWORD(v43);
    if ( !v31 && v15 )
    {
      ClientContext = v33;
      if ( ((HIDWORD(v43) - 1) & *(_DWORD *)(a1 + 4)) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 && (*(_DWORD *)(a1 + 816) & 2) == 0 )
        {
          updated = -1073741306;
LABEL_34:
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CREATE_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              a1 + 152,
              (unsigned int)&ETW_EVENT_CREATE_FILE_FAILED,
              v24,
              a1 + 136,
              a1 + 152,
              updated,
              *(_DWORD *)(a1 + 12));
          goto LABEL_41;
        }
        v15 = 0;
        ZwClose(v13);
        ClientContext = v33;
        v13 = 0LL;
        FileHandle = 0LL;
      }
    }
  }
  v41 = 0x2000LL;
  FileInformation = 0LL;
  v40 = 0LL;
  ZwSetInformationFile(v13, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
  if ( *(_QWORD *)(a1 + 800) )
  {
    EtwpFinalizeHeader(a1, 0LL);
    v17 = 0;
  }
  else
  {
    v17 = 1;
  }
  v18 = *(_QWORD *)(a1 + 192) == 0LL;
  v19 = *(void **)(a1 + 800);
  *(_QWORD *)(a1 + 800) = v13;
  if ( !v18 )
  {
    v20 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v20, a1 + 688);
    if ( v21 )
      v21[10] = 1;
    v22 = *(_OWORD *)(a1 + 184);
    DestinationString = *(UNICODE_STRING *)(a1 + 152);
    *(_OWORD *)(a1 + 152) = v22;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
    KeAbPostRelease(a1 + 688);
    RtlInitUnicodeString((PUNICODE_STRING)(a1 + 184), 0LL);
    v13 = FileHandle;
  }
  LOBYTE(v16) = v31;
  updated = EtwpUpdateFileHeader(a1, v16, v14);
  if ( updated < 0 )
  {
    *(_QWORD *)(a1 + 800) = v19;
    goto LABEL_34;
  }
  if ( !v17 )
    EtwpSendSessionNotification(a1, 1, 0);
  v13 = 0LL;
  FileHandle = 0LL;
  if ( v19 )
    ZwClose(v19);
LABEL_41:
  if ( v13 )
  {
    ZwClose(v13);
    if ( *(_QWORD *)(a1 + 800) )
    {
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
        goto LABEL_43;
      v28 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
      v29 = v28;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v28, a1 + 688);
      if ( v29 )
        v29[10] = 1;
      v30 = DestinationString;
      *(_OWORD *)(a1 + 184) = *(_OWORD *)(a1 + 152);
      *(UNICODE_STRING *)(a1 + 152) = v30;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
      KeAbPostRelease(a1 + 688);
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
  }
  Buffer = DestinationString.Buffer;
LABEL_43:
  if ( v36 )
    *v36 = v32;
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 184));
  if ( Buffer )
    ExFreePool(Buffer);
  return (unsigned int)updated;
}
