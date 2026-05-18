/*
 * XREFs of sub_18001F54C @ 0x18001F54C
 * Callers:
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18001F4BC @ 0x18001F4BC (sub_18001F4BC.c)
 */

void *__fastcall sub_18001F54C(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  sub_18001F4BC(a1 - 152);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(v2);
  return v2;
}
