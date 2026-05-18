/*
 * XREFs of sub_1800BEBEC @ 0x1800BEBEC
 * Callers:
 *     sub_1800BEF30 @ 0x1800BEF30 (sub_1800BEF30.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C2A60 @ 0x1800C2A60 (sub_1800C2A60.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800BC51C @ 0x1800BC51C (sub_1800BC51C.c)
 */

_QWORD *__fastcall sub_1800BEBEC(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  sub_1800BC51C(a1, a2);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    sub_18001050C(v4);
  return a1;
}
