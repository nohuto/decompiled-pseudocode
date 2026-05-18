/*
 * XREFs of sub_180025240 @ 0x180025240
 * Callers:
 *     sub_180024D40 @ 0x180024D40 (sub_180024D40.c)
 *     sub_180025DD0 @ 0x180025DD0 (sub_180025DD0.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_1800BAF10 @ 0x1800BAF10 (sub_1800BAF10.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 */

_QWORD *__fastcall sub_180025240(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v6; // rax

  sub_18002894C(a1 + 24);
  v6 = (_QWORD *)sub_180026040(a1 + 248, a3);
  unknown_libname_81(a2, v6);
  return a2;
}
