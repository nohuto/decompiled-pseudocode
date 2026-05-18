/*
 * XREFs of sub_1800BEDD0 @ 0x1800BEDD0
 * Callers:
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C0BD4 @ 0x1800C0BD4 (sub_1800C0BD4.c)
 *     sub_1800C13C0 @ 0x1800C13C0 (sub_1800C13C0.c)
 *     sub_1800C3440 @ 0x1800C3440 (sub_1800C3440.c)
 *     sub_1800C4150 @ 0x1800C4150 (sub_1800C4150.c)
 *     sub_1800C6220 @ 0x1800C6220 (sub_1800C6220.c)
 *     sub_1800CA960 @ 0x1800CA960 (sub_1800CA960.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 *__fastcall sub_1800BEDD0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7[0] = v5;
  sub_18000E954(v7);
  return a1;
}
