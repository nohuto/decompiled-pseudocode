/*
 * XREFs of PspEmptyPropertySet @ 0x1408A7B34
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x14042D240 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
