/*
 * XREFs of CmpDoFileFlush @ 0x140491E3C
 * Callers:
 *     CmpFileFlush @ 0x1409F9B2C (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14069BAA0 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall CmpDoFileFlush(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return -1073741823;
  result = ZwFlushBuffersFile(a1, &IoStatusBlock);
  if ( result < 0 )
  {
    CmRegistryIODebug = 4;
    qword_140FD8F00 = (__int64)a1;
    dword_140FD8F08 = result;
  }
  return result;
}
