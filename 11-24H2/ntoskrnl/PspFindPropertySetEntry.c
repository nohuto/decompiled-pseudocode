/*
 * XREFs of PspFindPropertySetEntry @ 0x14042D300
 * Callers:
 *     PspInsertProperty @ 0x14042D15C (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14042D240 (PspRemoveProperty.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PspFindPropertySetEntry(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; result != a1; result = (_QWORD *)*result )
  {
    if ( result[2] == a2 )
      return result;
  }
  return 0LL;
}
