/*
 * XREFs of sub_180091280 @ 0x180091280
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180091028 @ 0x180091028 (sub_180091028.c)
 */

_QWORD *__fastcall sub_180091280(_QWORD *lpMem, char a2)
{
  sub_180091028(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
