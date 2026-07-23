/*
 * XREFs of EtwpRotateCompressionTarget @ 0x14064FD9C
 * Callers:
 *     EtwpCompressBuffer @ 0x14064F3BC (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x14064FE08 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14027D7F0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x14036DDA0 (EtwpGetLoggerTimeStamp.c)
 *     EtwpDequeueFreeBuffer @ 0x1404EC950 (EtwpDequeueFreeBuffer.c)
 */

_QWORD *__fastcall EtwpRotateCompressionTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *result; // rax

  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 1416) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1416) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1416), 5u);
  }
  result = (_QWORD *)*(unsigned int *)(a1 + 1432);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1, a2, a3, a4);
    v4 = result;
  }
  *(_QWORD *)(a1 + 1416) = v4;
  return result;
}
