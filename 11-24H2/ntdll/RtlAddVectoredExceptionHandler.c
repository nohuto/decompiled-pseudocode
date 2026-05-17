/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x18010B9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlAddVectoredExceptionHandler(int a1, __int64 a2)
{
  return RtlpAddVectoredHandler(a1, a2, 0);
}
