/*
 * XREFs of sub_180017A30 @ 0x180017A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800173A0 @ 0x1800173A0 (sub_1800173A0.c)
 */

LPVOID __fastcall sub_180017A30(LPVOID lpMem, char a2)
{
  sub_1800173A0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
