/*
 * XREFs of sub_18005B0C0 @ 0x18005B0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18005AE94 @ 0x18005AE94 (sub_18005AE94.c)
 */

_QWORD *__fastcall sub_18005B0C0(_QWORD *lpMem, char a2)
{
  sub_18005AE94(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
