/*
 * XREFs of sub_18006C4CC @ 0x18006C4CC
 * Callers:
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_18005D7CC @ 0x18005D7CC (sub_18005D7CC.c)
 *     sub_18005D8E0 @ 0x18005D8E0 (sub_18005D8E0.c)
 * Callees:
 *     sub_18006AE18 @ 0x18006AE18 (sub_18006AE18.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006C4CC(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+58h] [rbp+10h]

  v6 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_18006AE18(&v5, *(_QWORD **)(a1 + 40), *(_QWORD **)(a1 + 48), a2, a3);
  return a2;
}
