/*
 * XREFs of sub_18008DBB8 @ 0x18008DBB8
 * Callers:
 *     sub_1800DB77B @ 0x1800DB77B (sub_1800DB77B.c)
 *     sub_1800E9B30 @ 0x1800E9B30 (sub_1800E9B30.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18008D828 @ 0x18008D828 (sub_18008D828.c)
 */

__int64 __fastcall sub_18008DBB8(__int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    sub_180010134(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  sub_18008D828((__int64)v2, a1[1]);
  return sub_180010134((void *)a1[1], 0x38uLL);
}
