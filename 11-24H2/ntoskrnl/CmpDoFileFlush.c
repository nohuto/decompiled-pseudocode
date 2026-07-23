/*
 * XREFs of CmpDoFileFlush @ 0x14048BB7C
 * Callers:
 *     CmpFileFlush @ 0x14096B41C (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1406A7D10 (ZwFlushBuffersFile.c)
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
    qword_140FD9EE0 = (__int64)a1;
    dword_140FD9EE8 = result;
  }
  return result;
}
