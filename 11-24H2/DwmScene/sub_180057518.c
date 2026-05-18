/*
 * XREFs of sub_180057518 @ 0x180057518
 * Callers:
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 * Callees:
 *     sub_1800590A0 @ 0x1800590A0 (sub_1800590A0.c)
 *     sub_180059750 @ 0x180059750 (sub_180059750.c)
 */

_QWORD *__fastcall sub_180057518(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_180059750() )
    sub_1800590A0(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1596);
  return result;
}
