/*
 * XREFs of EtwpRotateCompressionTarget @ 0x14064569C
 * Callers:
 *     EtwpCompressBuffer @ 0x140644CB4 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x140645708 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x14031B820 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1403E49BC (EtwpEnqueueAvailableBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x1403E4D34 (EtwpDequeueFreeBuffer.c)
 */

__int64 __fastcall EtwpRotateCompressionTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax

  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 1416) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1416) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1416), 5u);
  }
  result = *(unsigned int *)(a1 + 1432);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1, a2, a3, a4);
    v4 = result;
  }
  *(_QWORD *)(a1 + 1416) = v4;
  return result;
}
