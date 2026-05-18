/*
 * XREFs of sub_180050D40 @ 0x180050D40
 * Callers:
 *     sub_1800517B8 @ 0x1800517B8 (sub_1800517B8.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

void **__fastcall sub_180050D40(void **a1, void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_18000BB4C(v4);
  return a1;
}
