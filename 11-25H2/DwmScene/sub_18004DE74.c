/*
 * XREFs of sub_18004DE74 @ 0x18004DE74
 * Callers:
 *     sub_18004DE20 @ 0x18004DE20 (sub_18004DE20.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18004DDE8 @ 0x18004DDE8 (sub_18004DDE8.c)
 */

void *__fastcall sub_18004DE74(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 144);
  sub_18004DDE8(a1 - 144);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(v2);
  return v2;
}
