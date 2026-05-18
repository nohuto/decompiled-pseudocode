/*
 * XREFs of sub_180083930 @ 0x180083930
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18008388C @ 0x18008388C (sub_18008388C.c)
 */

_QWORD *__fastcall sub_180083930(_QWORD *lpMem, char a2)
{
  sub_18008388C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
