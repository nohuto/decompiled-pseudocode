/*
 * XREFs of sub_18000DBF0 @ 0x18000DBF0
 * Callers:
 *     sub_18000FB98 @ 0x18000FB98 (sub_18000FB98.c)
 * Callees:
 *     sub_18000CFEC @ 0x18000CFEC (sub_18000CFEC.c)
 */

void __fastcall __noreturn sub_18000DBF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_18000CFEC(
    a1,
    3111LL,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    a4,
    v4,
    retaddr,
    0x8000FFFF);
}
