/*
 * XREFs of EtwpGetFirstBuffer @ 0x1404ECB34
 * Callers:
 *     EtwpBugCheckMultiPartCallback @ 0x14064E610 (EtwpBugCheckMultiPartCallback.c)
 *     EtwpPreserveLogger @ 0x1407AFE9C (EtwpPreserveLogger.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1409DC5E0 (EtwpFindAndLockBufferForFlushing.c)
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
