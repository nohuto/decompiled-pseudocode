/*
 * XREFs of EtwpGetFirstBuffer @ 0x1404EBFE4
 * Callers:
 *     EtwpBugCheckMultiPartCallback @ 0x140643FC0 (EtwpBugCheckMultiPartCallback.c)
 *     EtwpPreserveLogger @ 0x1407A067C (EtwpPreserveLogger.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1409E3A80 (EtwpFindAndLockBufferForFlushing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetFirstBuffer(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = a1 + 80;
  result = 0LL;
  if ( *(_QWORD *)v1 != v1 )
    return *(_QWORD *)v1;
  return result;
}
