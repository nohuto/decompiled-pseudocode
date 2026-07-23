/*
 * XREFs of SshpSessionManagerWriteBytes @ 0x140A57DDC
 * Callers:
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A579F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 * Callees:
 *     ZwWriteFile @ 0x1406A74B0 (ZwWriteFile.c)
 */

NTSTATUS __fastcall SshpSessionManagerWriteBytes(void *a1, unsigned int a2, void *a3, ULONG Length)
{
  __int64 v4; // rbx
  NTSTATUS result; // eax
  LARGE_INTEGER v6; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK v7; // [rsp+58h] [rbp-20h] BYREF

  v6.QuadPart = a2;
  v4 = Length;
  v7 = 0LL;
  result = ZwWriteFile(a1, 0LL, 0LL, 0LL, &v7, a3, Length, &v6, 0LL);
  if ( result >= 0 && v7.Information != v4 )
    return -1073741807;
  return result;
}
