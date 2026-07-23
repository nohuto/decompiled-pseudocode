/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x180092750
 * Callers:
 *     EtwpLogger @ 0x1800B6AE0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x18015D778 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlGetSystemTimePrecise @ 0x1800912F0 (RtlGetSystemTimePrecise.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180092A9C (EtwpAddReloggedHeaderExtensionEvents.c)
 *     EtwpAddProviderTrackingInfo @ 0x180092B6C (EtwpAddProviderTrackingInfo.c)
 *     EtwpWriteRemainingCompressedData @ 0x180092BE8 (EtwpWriteRemainingCompressedData.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x180092CAC (EtwpFinalizeRelogFileHeaderStats.c)
 *     NtReadFile @ 0x1801632E0 (NtReadFile.c)
 *     NtWriteFile @ 0x180163320 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x180163700 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x180163B40 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v3; // zf
  ULONG Length; // r15d
  LARGE_INTEGER *Buffer; // r14
  int v8; // esi
  int v9; // eax
  NTSTATUS v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // rdx
  int v14; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 FileInformation; // [rsp+58h] [rbp-21h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK v18; // [rsp+78h] [rbp-1h] BYREF
  __int128 FsInformation; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+1Fh]

  v2 = 0;
  v3 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
  ByteOffset.QuadPart = 0LL;
  v20 = 0LL;
  LODWORD(FileInformation) = 0;
  IoStatusBlock = 0LL;
  v14 = 0;
  FsInformation = 0LL;
  if ( !v3 )
  {
    v8 = EtwpWriteRemainingCompressedData(a1, &FileInformation, &v14);
    if ( v8 < 0 )
      goto LABEL_19;
    *(_DWORD *)(a1 + 376) += FileInformation;
    *(_DWORD *)(a1 + 372) += v14;
  }
  if ( *(_QWORD *)(a1 + 448) != a1 + 448
    || *(_QWORD *)(a1 + 464) != a1 + 464
    || *(_QWORD *)(a1 + 504)
    || (*(_DWORD *)(a1 + 308) & 0x1000) != 0 )
  {
    Length = *(_DWORD *)(a1 + 192);
    goto LABEL_4;
  }
  v8 = ZwQueryVolumeInformationFile(*(HANDLE *)(a1 + 128), &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
  if ( v8 >= 0 )
  {
    Length = -HIDWORD(v20) & (HIDWORD(v20) + 7);
LABEL_4:
    Buffer = (LARGE_INTEGER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( !Buffer )
    {
      v8 = -1073741801;
      return RtlNtStatusToDosError(v8);
    }
    v8 = NtReadFile(*(HANDLE *)(a1 + 128), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v8 < 0 )
      goto LABEL_18;
    if ( Length >= Buffer->LowPart )
      Length = Buffer->LowPart;
    if ( !a2 )
    {
      Buffer[14].HighPart = *(_DWORD *)(a1 + 188);
      Buffer[17].HighPart = *(_DWORD *)(a1 + 376);
      Buffer[19].LowPart += *(_DWORD *)(a1 + 368);
      Buffer[47].HighPart += *(_DWORD *)(a1 + 372);
      v9 = *(_DWORD *)(a1 + 308);
      if ( (v9 & 0x10000) != 0 )
      {
        if ( (v9 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, (_DWORD)Buffer, Length, FileInformation, v14);
      }
      else
      {
        Buffer[15] = RtlGetSystemTimePrecise();
      }
    }
    Buffer[6].LowPart = Buffer->HighPart;
    EtwpAddReloggedHeaderExtensionEvents(a1, Buffer, Length);
    EtwpAddProviderTrackingInfo(a1, Buffer, Length);
    v10 = NtWriteFile(*(HANDLE *)(a1 + 128), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v8 = v10;
    if ( a2 )
      goto LABEL_18;
    if ( v10 < 0 )
      goto LABEL_18;
    v11 = *(_DWORD *)(a1 + 308);
    if ( (v11 & 0x4000020) == 0 )
      goto LABEL_18;
    v18 = 0LL;
    if ( (v11 & 0x4000000) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 344);
    }
    else
    {
      v12 = *(unsigned int *)(a1 + 192) * (unsigned __int64)*(unsigned int *)(a1 + 376);
      if ( v12 >= *(unsigned int *)(a1 + 304) * ((-(__int64)((v11 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
LABEL_18:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
        goto LABEL_19;
      }
    }
    FileInformation = v12;
    if ( v12 )
      v8 = ZwSetInformationFile(*(HANDLE *)(a1 + 128), &v18, &FileInformation, 8u, FileEndOfFileInformation);
    goto LABEL_18;
  }
LABEL_19:
  if ( v8 )
    return RtlNtStatusToDosError(v8);
  return v2;
}
