/*
 * XREFs of sub_18004F650 @ 0x18004F650
 * Callers:
 *     sub_18004FB50 @ 0x18004FB50 (sub_18004FB50.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18008179C @ 0x18008179C (sub_18008179C.c)
 */

LPVOID __fastcall sub_18004F650(LPVOID lpMem, char a2)
{
  sub_18008179C();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
