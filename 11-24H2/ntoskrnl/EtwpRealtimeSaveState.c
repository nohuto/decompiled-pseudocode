/*
 * XREFs of EtwpRealtimeSaveState @ 0x140AA5D18
 * Callers:
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1406A74B0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall EtwpRealtimeSaveState(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 v3; // rdx
  int v4; // ecx
  __int128 v5; // xmm0
  __int64 v6; // rax
  int UsedProcessorCount; // eax
  void *v8; // rcx
  void *v9; // rcx
  char FileInformation[8]; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  _DWORD Buffer[4]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+94h] [rbp+1Bh]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  __int64 v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  __int64 v21; // [rsp+B0h] [rbp+37h]

  v2 = -1073741823;
  IoStatusBlock = 0LL;
  memset_0(Buffer, 0, 0x48uLL);
  ByteOffset.QuadPart = 0LL;
  if ( (*(_DWORD *)(a1 + 816) & 1) == 0 )
    goto LABEL_6;
  if ( !*(_QWORD *)(a1 + 360) )
    goto LABEL_5;
  v4 = *(_DWORD *)(a1 + 424);
  if ( !v4 )
    goto LABEL_5;
  v5 = *(_OWORD *)(a1 + 432);
  v18 = *(_QWORD *)(a1 + 392);
  v19 = *(_QWORD *)(a1 + 384);
  v17 = *(_DWORD *)(a1 + 4);
  v20 = *(_QWORD *)(a1 + 400);
  v6 = *(_QWORD *)(a1 + 408);
  v16 = v4;
  v21 = v6;
  v15 = v5;
  Buffer[0] = 1933995090;
  Buffer[2] = 1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1, v3);
  v8 = *(void **)(a1 + 360);
  Buffer[1] = 0;
  Buffer[3] = UsedProcessorCount;
  v2 = ZwWriteFile(v8, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
  if ( v2 < 0 )
  {
LABEL_5:
    *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
    *(_DWORD *)(a1 + 424) = 0;
    *(_QWORD *)(a1 + 408) = 0LL;
LABEL_6:
    v9 = *(void **)(a1 + 360);
    FileInformation[0] = 1;
    ZwSetInformationFile(v9, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
  }
  return (unsigned int)v2;
}
