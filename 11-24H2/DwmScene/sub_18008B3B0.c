/*
 * XREFs of sub_18008B3B0 @ 0x18008B3B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18008B27C @ 0x18008B27C (sub_18008B27C.c)
 */

_QWORD *__fastcall sub_18008B3B0(_QWORD *lpMem, char a2)
{
  sub_18008B27C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
