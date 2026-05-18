/*
 * XREFs of sub_1800BED4C @ 0x1800BED4C
 * Callers:
 *     sub_1800BF090 @ 0x1800BF090 (sub_1800BF090.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800BC67C @ 0x1800BC67C (sub_1800BC67C.c)
 */

_QWORD *__fastcall sub_1800BED4C(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  sub_1800BC67C(a1, a2);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    sub_18001060C(v4);
  return a1;
}
