/*
 * XREFs of sub_1800150A0 @ 0x1800150A0
 * Callers:
 *     sub_180017024 @ 0x180017024 (sub_180017024.c)
 *     sub_180023E04 @ 0x180023E04 (sub_180023E04.c)
 *     sub_180041130 @ 0x180041130 (sub_180041130.c)
 *     sub_180058DAC @ 0x180058DAC (sub_180058DAC.c)
 *     sub_1800BC61C @ 0x1800BC61C (sub_1800BC61C.c)
 *     sub_1800C2730 @ 0x1800C2730 (sub_1800C2730.c)
 *     sub_1800C2900 @ 0x1800C2900 (sub_1800C2900.c)
 *     sub_1800C2AC0 @ 0x1800C2AC0 (sub_1800C2AC0.c)
 *     sub_1800C4150 @ 0x1800C4150 (sub_1800C4150.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800150A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a1 = a3;
  a1[1] = *(_QWORD *)(a2 + 8);
  return a1;
}
