/*
 * XREFs of sub_180017A70 @ 0x180017A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800173EC @ 0x1800173EC (sub_1800173EC.c)
 */

LPVOID __fastcall sub_180017A70(LPVOID lpMem, char a2)
{
  sub_1800173EC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
