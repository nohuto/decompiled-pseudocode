/*
 * XREFs of sub_1800250E0 @ 0x1800250E0
 * Callers:
 *     sub_180024BE0 @ 0x180024BE0 (sub_180024BE0.c)
 *     sub_180025C70 @ 0x180025C70 (sub_180025C70.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_1800326A4 @ 0x1800326A4 (sub_1800326A4.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_1800BADB0 @ 0x1800BADB0 (sub_1800BADB0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180025EE0 @ 0x180025EE0 (sub_180025EE0.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 */

_QWORD *__fastcall sub_1800250E0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v6; // rax

  sub_1800287EC(a1 + 24);
  v6 = (_QWORD *)sub_180025EE0(a1 + 248, a3);
  unknown_libname_81(a2, v6);
  return a2;
}
