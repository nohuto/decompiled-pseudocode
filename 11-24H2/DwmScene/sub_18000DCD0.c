/*
 * XREFs of sub_18000DCD0 @ 0x18000DCD0
 * Callers:
 *     sub_18000FC98 @ 0x18000FC98 (sub_18000FC98.c)
 * Callees:
 *     sub_18000D0D4 @ 0x18000D0D4 (sub_18000D0D4.c)
 */

void __fastcall __noreturn sub_18000DCD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_18000D0D4(
    a1,
    3127LL,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    a4,
    v4,
    retaddr,
    0x8000FFFF);
}
