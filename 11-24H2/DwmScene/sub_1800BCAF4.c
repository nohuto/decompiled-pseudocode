/*
 * XREFs of sub_1800BCAF4 @ 0x1800BCAF4
 * Callers:
 *     sub_1800BCB24 @ 0x1800BCB24 (sub_1800BCB24.c)
 *     sub_1800BCB30 @ 0x1800BCB30 (sub_1800BCB30.c)
 * Callees:
 *     sub_1800BC36C @ 0x1800BC36C (sub_1800BC36C.c)
 */

__int64 __fastcall sub_1800BCAF4(void **a1)
{
  sub_1800BC36C((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x48uLL);
}
