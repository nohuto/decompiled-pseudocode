/*
 * XREFs of sub_18003E0B8 @ 0x18003E0B8
 * Callers:
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 * Callees:
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     sub_18003C848 @ 0x18003C848 (sub_18003C848.c)
 *     sub_18003D5EC @ 0x18003D5EC (sub_18003D5EC.c)
 *     sub_18003EBBC @ 0x18003EBBC (sub_18003EBBC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 **__fastcall sub_18003E0B8(__int64 **a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = sub_18001B098(216LL);
  if ( v5 )
    v4 = (__int64 *)sub_18003D5EC(v5, a2);
  sub_18003C848(a1, v4);
  sub_1800284DC((__int64)(*a1 + 2), (__int64)v7);
  sub_18003EBBC(*a1);
  sub_180010F44((__int64)v7);
  return a1;
}
