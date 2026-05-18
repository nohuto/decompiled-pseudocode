/*
 * XREFs of sub_18008BC10 @ 0x18008BC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18008BBD0 @ 0x18008BBD0 (sub_18008BBD0.c)
 */

_QWORD *__fastcall sub_18008BC10(_QWORD *lpMem, char a2)
{
  sub_18008BBD0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
