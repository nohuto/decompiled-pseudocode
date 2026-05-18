/*
 * XREFs of sub_180080558 @ 0x180080558
 * Callers:
 *     sub_180080BB8 @ 0x180080BB8 (sub_180080BB8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_180027CB0 @ 0x180027CB0 (sub_180027CB0.c)
 *     sub_1800805D0 @ 0x1800805D0 (sub_1800805D0.c)
 */

__int64 *__fastcall sub_180080558(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_1800805D0(a1 + 496);
  v4 = *a2;
  v5 = (_QWORD *)sub_180011D64(a1 + 8, &v7);
  sub_180027CB0(v4, v5);
  if ( v8 )
    sub_18001060C(v8);
  return a2;
}
