/*
 * XREFs of CsrCaptureTimeout @ 0x18012FF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CsrCaptureTimeout(int a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( a1 == -1 )
    return 0LL;
  result = a2;
  *a2 = -10000LL * a1;
  return result;
}
