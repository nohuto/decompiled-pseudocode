/*
 * XREFs of sub_1800C03E4 @ 0x1800C03E4
 * Callers:
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     sub_1800C849C @ 0x1800C849C (sub_1800C849C.c)
 * Callees:
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C03E4(__int64 a1, __int64 *a2, unsigned int a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v5[0] = 0LL;
  if ( v5 != a2 )
  {
    v5[0] = *a2;
    *a2 = 0LL;
  }
  sub_1800C0438(a1, v5, &v6, a3);
  return sub_18000E954(a2);
}
