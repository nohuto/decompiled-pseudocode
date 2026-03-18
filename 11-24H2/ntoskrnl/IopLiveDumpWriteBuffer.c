/*
 * XREFs of IopLiveDumpWriteBuffer @ 0x14049B10C
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x14049ADE4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059E850 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpWriteSecondaryData @ 0x14059F11C (IopLiveDumpWriteSecondaryData.c)
 * Callees:
 *     SecureDump_Encrypt_DmpData @ 0x1405A1A10 (SecureDump_Encrypt_DmpData.c)
 *     IopLiveDumpTraceWriteBuffer @ 0x1405A348C (IopLiveDumpTraceWriteBuffer.c)
 *     ZwWriteFile @ 0x1406A6510 (ZwWriteFile.c)
 */

__int64 __fastcall IopLiveDumpWriteBuffer(
        HANDLE FileHandle,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        __int64 a5,
        char a6)
{
  LARGE_INTEGER *v6; // rbx
  __int64 v7; // rdi
  bool v10; // zf
  NTSTATUS Status; // ecx
  __int64 result; // rax
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-20h] BYREF

  v13 = 0LL;
  v6 = ByteOffset;
  v7 = Length;
  v10 = (*(_DWORD *)(a5 + 80) & 0x20000) == 0;
  IoStatusBlock = 0LL;
  if ( !v10 )
  {
    LOBYTE(ByteOffset) = a6;
    IopLiveDumpTraceWriteBuffer(Buffer, Length, v6->QuadPart, ByteOffset);
  }
  if ( !*(_BYTE *)(a5 + 984)
    || a6
    || (result = SecureDump_Encrypt_DmpData((_DWORD)Buffer, v7, (_DWORD)Buffer, v7, (__int64)&v13), (int)result >= 0) )
  {
    Status = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v7, v6, 0LL);
    if ( Status >= 0 )
    {
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
        v6->QuadPart += v7;
    }
    return (unsigned int)Status;
  }
  return result;
}
