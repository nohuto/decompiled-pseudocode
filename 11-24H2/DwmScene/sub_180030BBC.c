/*
 * XREFs of sub_180030BBC @ 0x180030BBC
 * Callers:
 *     sub_1800307E0 @ 0x1800307E0 (sub_1800307E0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800307B0 @ 0x1800307B0 (sub_1800307B0.c)
 */

void *__fastcall sub_180030BBC(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  sub_1800307B0(a1 - 152);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(v2);
  return v2;
}
