/*
 * XREFs of sub_18008B250 @ 0x18008B250
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18008B11C @ 0x18008B11C (sub_18008B11C.c)
 */

_QWORD *__fastcall sub_18008B250(_QWORD *lpMem, char a2)
{
  sub_18008B11C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
