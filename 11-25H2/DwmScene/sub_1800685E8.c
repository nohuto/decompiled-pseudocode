/*
 * XREFs of sub_1800685E8 @ 0x1800685E8
 * Callers:
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_1800C8968 @ 0x1800C8968 (sub_1800C8968.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_180068660 @ 0x180068660 (sub_180068660.c)
 */

__int64 *__fastcall sub_1800685E8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180068660(a1 + 496);
  v4 = *a2;
  v5 = (_QWORD *)sub_180011C64(a1 + 8, &v7);
  sub_180027B50(v4, v5);
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
