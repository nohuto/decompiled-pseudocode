/*
 * XREFs of sub_1800C1C48 @ 0x1800C1C48
 * Callers:
 *     sub_1800C1458 @ 0x1800C1458 (sub_1800C1458.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C1C48(int a1, char a2)
{
  int v2; // edx

  if ( (unsigned int)(a1 - 23) <= 1 )
    v2 = 2;
  else
    v2 = (a2 & 8) != 0;
  return sub_1800BD870(a1, v2);
}
