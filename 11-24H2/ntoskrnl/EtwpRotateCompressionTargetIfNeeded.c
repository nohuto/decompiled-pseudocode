/*
 * XREFs of EtwpRotateCompressionTargetIfNeeded @ 0x140651708
 * Callers:
 *     EtwpCompressBuffer @ 0x140650CB4 (EtwpCompressBuffer.c)
 *     EtwpCompressPendingBuffers @ 0x14065101C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpRotateCompressionTarget @ 0x14065169C (EtwpRotateCompressionTarget.c)
 */

_QWORD *__fastcall EtwpRotateCompressionTargetIfNeeded(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 1416);
  if ( !v1 )
    return EtwpRotateCompressionTarget(a1);
  result = (_QWORD *)*(unsigned int *)(v1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - (_DWORD)result) <= 0x148 )
    return EtwpRotateCompressionTarget(a1);
  return result;
}
