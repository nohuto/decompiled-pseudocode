/*
 * XREFs of sub_180095958 @ 0x180095958
 * Callers:
 *     sub_1800959B8 @ 0x1800959B8 (sub_1800959B8.c)
 *     sub_1800959C4 @ 0x1800959C4 (sub_1800959C4.c)
 * Callees:
 *     sub_18009656C @ 0x18009656C (sub_18009656C.c)
 */

__int64 __fastcall sub_180095958(void **a1)
{
  void *v2; // rcx

  sub_18009656C();
  v2 = *a1;
  *a1 = 0LL;
  return sub_180010234(v2, 0x10uLL);
}
