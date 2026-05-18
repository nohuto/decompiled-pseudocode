/*
 * XREFs of sub_1800C1AE8 @ 0x1800C1AE8
 * Callers:
 *     sub_1800C12F8 @ 0x1800C12F8 (sub_1800C12F8.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C1AE8(int a1, char a2)
{
  int v2; // edx

  if ( (unsigned int)(a1 - 23) <= 1 )
    v2 = 2;
  else
    v2 = (a2 & 8) != 0;
  return sub_1800BD710(a1, v2);
}
