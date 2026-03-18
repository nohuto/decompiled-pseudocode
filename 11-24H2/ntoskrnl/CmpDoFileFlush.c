/*
 * XREFs of CmpDoFileFlush @ 0x140490EF0
 * Callers:
 *     CmpFileFlush @ 0x140982C0C (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1406A6D70 (ZwFlushBuffersFile.c)
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
    qword_140FD8ED0 = (__int64)a1;
    dword_140FD8ED8 = result;
  }
  return result;
}
