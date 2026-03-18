/*
 * XREFs of EtwpRotateCompressionTarget @ 0x14065169C
 * Callers:
 *     EtwpCompressBuffer @ 0x140650CB4 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x140651708 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14024D1E0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x14034F8C0 (EtwpGetLoggerTimeStamp.c)
 *     EtwpDequeueFreeBuffer @ 0x1404EF438 (EtwpDequeueFreeBuffer.c)
 */

_QWORD *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1416) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1416) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1416), 5LL);
  }
  result = (_QWORD *)*(unsigned int *)(a1 + 1432);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1416) = v1;
  return result;
}
