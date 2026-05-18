/*
 * XREFs of sub_180010320 @ 0x180010320
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180017418 @ 0x180017418 (sub_180017418.c)
 */

LPVOID __fastcall sub_180010320(LPVOID lpMem, char a2)
{
  sub_180017418();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
