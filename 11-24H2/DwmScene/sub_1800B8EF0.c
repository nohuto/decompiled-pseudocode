/*
 * XREFs of sub_1800B8EF0 @ 0x1800B8EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800B8838 @ 0x1800B8838 (sub_1800B8838.c)
 */

_QWORD *__fastcall sub_1800B8EF0(_QWORD *lpMem, char a2)
{
  sub_1800B8838(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
