/*
 * XREFs of sub_18001D7D4 @ 0x18001D7D4
 * Callers:
 *     sub_18001D678 @ 0x18001D678 (sub_18001D678.c)
 *     sub_1800C6324 @ 0x1800C6324 (sub_1800C6324.c)
 *     sub_1800D1320 @ 0x1800D1320 (sub_1800D1320.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_18001D7D4(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    sub_1800119FC();
  return 32 * a1;
}
