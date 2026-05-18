/*
 * XREFs of sub_180030A5C @ 0x180030A5C
 * Callers:
 *     sub_180030680 @ 0x180030680 (sub_180030680.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180030650 @ 0x180030650 (sub_180030650.c)
 */

void *__fastcall sub_180030A5C(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  sub_180030650(a1 - 152);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(v2);
  return v2;
}
