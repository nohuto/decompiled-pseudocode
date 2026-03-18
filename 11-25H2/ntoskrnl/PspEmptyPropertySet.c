/*
 * XREFs of PspEmptyPropertySet @ 0x1408F56C4
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1404364A0 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
