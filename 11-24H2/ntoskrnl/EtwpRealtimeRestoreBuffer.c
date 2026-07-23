/*
 * XREFs of EtwpRealtimeRestoreBuffer @ 0x1409D442C
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x1409D427C (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     ZwReadFile @ 0x1406A7470 (ZwReadFile.c)
 */

int __fastcall EtwpRealtimeRestoreBuffer(__int64 a1, _DWORD *Buffer)
{
  LARGE_INTEGER *ByteOffset; // rbx
  __int64 QuadPart; // rdi
  int result; // eax
  unsigned int v7; // edx
  unsigned int v8; // ecx
  bool v9; // zf
  __int64 Length; // rcx
  __int64 v11; // r14
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  ByteOffset = (LARGE_INTEGER *)(a1 + 392);
  QuadPart = *(_QWORD *)(a1 + 392) + 72LL;
  IoStatusBlock = 0LL;
  if ( QuadPart > *(_QWORD *)(a1 + 400) )
    return -1073741566;
  result = ZwReadFile(*(HANDLE *)(a1 + 360), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, ByteOffset, 0LL);
  if ( result < 0 )
    return result;
  if ( IoStatusBlock.Status < 0 )
    return IoStatusBlock.Status;
  if ( IoStatusBlock.Information != 72 )
    return -1073741807;
  v7 = *(_DWORD *)(a1 + 4);
  if ( *Buffer != v7 )
    return -1073741566;
  v8 = Buffer[12];
  if ( v8 < 0x48 || v8 > v7 )
    return -1073741566;
  *((_WORD *)Buffer + 26) |= 0x10u;
  ByteOffset->QuadPart = QuadPart;
  v9 = v8 == 72;
  Length = v8 - 72;
  if ( !v9 )
  {
    v11 = (unsigned int)Length;
    if ( Length + QuadPart <= *(_QWORD *)(a1 + 400) )
    {
      result = ZwReadFile(*(HANDLE *)(a1 + 360), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer + 18, Length, ByteOffset, 0LL);
      if ( result >= 0 )
      {
        result = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 && IoStatusBlock.Information != v11 )
          result = -1073741807;
      }
      ByteOffset->QuadPart += v11;
      QuadPart = ByteOffset->QuadPart;
      goto LABEL_15;
    }
    return -1073741566;
  }
LABEL_15:
  if ( QuadPart >= *(_QWORD *)(a1 + 400) )
    ByteOffset->QuadPart = 72LL;
  return result;
}
