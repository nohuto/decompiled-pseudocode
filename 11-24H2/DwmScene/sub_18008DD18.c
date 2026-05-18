/*
 * XREFs of sub_18008DD18 @ 0x18008DD18
 * Callers:
 *     sub_1800DB8DB @ 0x1800DB8DB (sub_1800DB8DB.c)
 *     sub_1800E9C90 @ 0x1800E9C90 (sub_1800E9C90.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18008D988 @ 0x18008D988 (sub_18008D988.c)
 */

__int64 __fastcall sub_18008DD18(__int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    sub_180010234(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  sub_18008D988((__int64)v2, a1[1]);
  return sub_180010234((void *)a1[1], 0x38uLL);
}
