/*
 * XREFs of sub_18008DF10 @ 0x18008DF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18008DDFC @ 0x18008DDFC (sub_18008DDFC.c)
 */

_QWORD *__fastcall sub_18008DF10(_QWORD *lpMem, char a2)
{
  sub_18008DDFC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
