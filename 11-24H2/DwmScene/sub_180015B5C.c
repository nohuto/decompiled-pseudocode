/*
 * XREFs of sub_180015B5C @ 0x180015B5C
 * Callers:
 *     sub_180018010 @ 0x180018010 (sub_180018010.c)
 *     sub_180052088 @ 0x180052088 (sub_180052088.c)
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     sub_1800BF624 @ 0x1800BF624 (sub_1800BF624.c)
 *     sub_1800C849C @ 0x1800C849C (sub_1800C849C.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_180015BD4 @ 0x180015BD4 (sub_180015BD4.c)
 *     sub_180027CB0 @ 0x180027CB0 (sub_180027CB0.c)
 */

__int64 *__fastcall sub_180015B5C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180015BD4(a1 + 496);
  v4 = *a2;
  v5 = sub_180011D64(a1 + 8, &v7);
  sub_180027CB0(v4, v5);
  if ( v8 )
    sub_18001060C(v8);
  return a2;
}
