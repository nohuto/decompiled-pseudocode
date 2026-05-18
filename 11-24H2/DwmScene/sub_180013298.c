/*
 * XREFs of sub_180013298 @ 0x180013298
 * Callers:
 *     sub_180013770 @ 0x180013770 (sub_180013770.c)
 *     sub_18002A92C @ 0x18002A92C (sub_18002A92C.c)
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 *     sub_18008FF00 @ 0x18008FF00 (sub_18008FF00.c)
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800132FC @ 0x1800132FC (sub_1800132FC.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

void *__fastcall sub_180013298(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  void *Src; // rax
  size_t Size; // r10
  size_t v7; // r11

  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a2 + 16)) < *(_QWORD *)(a3 + 16) )
    sub_180011BA0();
  sub_1800138F8(a2);
  Src = (void *)sub_1800138F8(v4);
  sub_1800132FC(a1, Size, Src, v7);
  return a1;
}
