/*
 * XREFs of sub_180013198 @ 0x180013198
 * Callers:
 *     sub_180013670 @ 0x180013670 (sub_180013670.c)
 *     sub_18002A7CC @ 0x18002A7CC (sub_18002A7CC.c)
 *     sub_1800431B4 @ 0x1800431B4 (sub_1800431B4.c)
 *     sub_18008FDA0 @ 0x18008FDA0 (sub_18008FDA0.c)
 * Callees:
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 *     sub_1800131FC @ 0x1800131FC (sub_1800131FC.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

void *__fastcall sub_180013198(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  void *Src; // rax
  size_t Size; // r10
  size_t v7; // r11

  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a2 + 16)) < *(_QWORD *)(a3 + 16) )
    sub_180011AA0();
  sub_1800137F8(a2);
  Src = (void *)sub_1800137F8(v4);
  sub_1800131FC(a1, Size, Src, v7);
  return a1;
}
