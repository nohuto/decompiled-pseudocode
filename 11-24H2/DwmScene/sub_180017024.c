/*
 * XREFs of sub_180017024 @ 0x180017024
 * Callers:
 *     sub_180018010 @ 0x180018010 (sub_180018010.c)
 *     sub_1800B90C0 @ 0x1800B90C0 (sub_1800B90C0.c)
 *     sub_1800B9420 @ 0x1800B9420 (sub_1800B9420.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     sub_1800BF090 @ 0x1800BF090 (sub_1800BF090.c)
 *     sub_1800C3440 @ 0x1800C3440 (sub_1800C3440.c)
 *     sub_1800C50C0 @ 0x1800C50C0 (sub_1800C50C0.c)
 *     sub_1800C849C @ 0x1800C849C (sub_1800C849C.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 */

_QWORD *__fastcall sub_180017024(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  sub_1800150A0(a1, (__int64)a2, *a2);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    sub_18001060C(v4);
  return a1;
}
