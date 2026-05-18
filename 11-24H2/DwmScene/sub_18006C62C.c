/*
 * XREFs of sub_18006C62C @ 0x18006C62C
 * Callers:
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 *     sub_18005D92C @ 0x18005D92C (sub_18005D92C.c)
 *     sub_18005DA40 @ 0x18005DA40 (sub_18005DA40.c)
 * Callees:
 *     sub_18006AF78 @ 0x18006AF78 (sub_18006AF78.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006C62C(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+58h] [rbp+10h]

  v6 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_18006AF78(&v5, *(_QWORD **)(a1 + 40), *(_QWORD **)(a1 + 48), a2, a3);
  return a2;
}
