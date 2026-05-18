/*
 * XREFs of sub_18008DDB0 @ 0x18008DDB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18008DC9C @ 0x18008DC9C (sub_18008DC9C.c)
 */

_QWORD *__fastcall sub_18008DDB0(_QWORD *lpMem, char a2)
{
  sub_18008DC9C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
