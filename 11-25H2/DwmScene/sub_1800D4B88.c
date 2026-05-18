/*
 * XREFs of sub_1800D4B88 @ 0x1800D4B88
 * Callers:
 *     sub_1800D3878 @ 0x1800D3878 (sub_1800D3878.c)
 *     sub_1800D3B6C @ 0x1800D3B6C (sub_1800D3B6C.c)
 *     sub_1800D3FE0 @ 0x1800D3FE0 (sub_1800D3FE0.c)
 * Callees:
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 */

char __fastcall sub_1800D4B88(unsigned int a1)
{
  if ( a1 <= 0x4000000 && a1 )
    return 1;
  sub_18001C99C(&stru_1801B8648, 3);
  return 0;
}
