/*
 * XREFs of sub_1800500F0 @ 0x1800500F0
 * Callers:
 *     sub_180050600 @ 0x180050600 (sub_180050600.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_180027CB0 @ 0x180027CB0 (sub_180027CB0.c)
 *     sub_180050168 @ 0x180050168 (sub_180050168.c)
 */

__int64 *__fastcall sub_1800500F0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180050168(a1 + 496);
  v4 = *a2;
  v5 = (_QWORD *)sub_180011D64(a1 + 8, &v7);
  sub_180027CB0(v4, v5);
  if ( v8 )
    sub_18001060C(v8);
  return a2;
}
