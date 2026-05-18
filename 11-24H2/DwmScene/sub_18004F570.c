/*
 * XREFs of sub_18004F570 @ 0x18004F570
 * Callers:
 *     sub_18004FB10 @ 0x18004FB10 (sub_18004FB10.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800819AC @ 0x1800819AC (sub_1800819AC.c)
 */

LPVOID __fastcall sub_18004F570(LPVOID lpMem, char a2)
{
  sub_1800819AC();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
