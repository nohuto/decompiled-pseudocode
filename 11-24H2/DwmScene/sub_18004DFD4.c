/*
 * XREFs of sub_18004DFD4 @ 0x18004DFD4
 * Callers:
 *     sub_18004DF80 @ 0x18004DF80 (sub_18004DF80.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18004DF48 @ 0x18004DF48 (sub_18004DF48.c)
 */

void *__fastcall sub_18004DFD4(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 144);
  sub_18004DF48(a1 - 144);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(v2);
  return v2;
}
