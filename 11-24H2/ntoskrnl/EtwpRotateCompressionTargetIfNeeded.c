/*
 * XREFs of EtwpRotateCompressionTargetIfNeeded @ 0x14064FE08
 * Callers:
 *     EtwpCompressBuffer @ 0x14064F3BC (EtwpCompressBuffer.c)
 *     EtwpCompressPendingBuffers @ 0x14064F724 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpRotateCompressionTarget @ 0x14064FD9C (EtwpRotateCompressionTarget.c)
 */

_QWORD *__fastcall EtwpRotateCompressionTargetIfNeeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *result; // rax

  v4 = *(_QWORD *)(a1 + 1416);
  if ( !v4 )
    return EtwpRotateCompressionTarget(a1, a2, a3, a4);
  result = (_QWORD *)*(unsigned int *)(v4 + 8);
  a2 = (unsigned int)(*(_DWORD *)(a1 + 4) - (_DWORD)result);
  if ( (unsigned int)a2 <= 0x148 )
    return EtwpRotateCompressionTarget(a1, a2, a3, a4);
  return result;
}
