/*
 * XREFs of sub_180050BE0 @ 0x180050BE0
 * Callers:
 *     sub_180051658 @ 0x180051658 (sub_180051658.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

void **__fastcall sub_180050BE0(void **a1, void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_18000B77C(v4);
  return a1;
}
