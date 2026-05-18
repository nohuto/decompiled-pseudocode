/*
 * XREFs of sub_1800892E0 @ 0x1800892E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18008923C @ 0x18008923C (sub_18008923C.c)
 */

_QWORD *__fastcall sub_1800892E0(_QWORD *lpMem, char a2)
{
  sub_18008923C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
