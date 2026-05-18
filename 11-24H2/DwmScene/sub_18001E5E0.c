/*
 * XREFs of sub_18001E5E0 @ 0x18001E5E0
 * Callers:
 *     sub_18003CD80 @ 0x18003CD80 (sub_18003CD80.c)
 *     sub_18003D2CC @ 0x18003D2CC (sub_18003D2CC.c)
 *     sub_18003D4D8 @ 0x18003D4D8 (sub_18003D4D8.c)
 *     sub_1800400C0 @ 0x1800400C0 (sub_1800400C0.c)
 *     sub_1800402AC @ 0x1800402AC (sub_1800402AC.c)
 *     sub_18005DFA8 @ 0x18005DFA8 (sub_18005DFA8.c)
 *     sub_18005E200 @ 0x18005E200 (sub_18005E200.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 *     sub_180068250 @ 0x180068250 (sub_180068250.c)
 *     sub_1800684A0 @ 0x1800684A0 (sub_1800684A0.c)
 *     sub_18008DA68 @ 0x18008DA68 (sub_18008DA68.c)
 *     sub_180090AFC @ 0x180090AFC (sub_180090AFC.c)
 *     sub_180090D40 @ 0x180090D40 (sub_180090D40.c)
 *     sub_180090E90 @ 0x180090E90 (sub_180090E90.c)
 *     sub_1800CF78C @ 0x1800CF78C (sub_1800CF78C.c)
 *     sub_1800CFAC4 @ 0x1800CFAC4 (sub_1800CFAC4.c)
 *     sub_1800D0EC4 @ 0x1800D0EC4 (sub_1800D0EC4.c)
 *     sub_1800D10CC @ 0x1800D10CC (sub_1800D10CC.c)
 *     sub_1800D14F4 @ 0x1800D14F4 (sub_1800D14F4.c)
 *     sub_1800D17D0 @ 0x1800D17D0 (sub_1800D17D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E5E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 i; // rcx
  __int64 v5; // rax

  v3 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v3 < a3; i = 0x100000001B3LL * (v5 ^ i) )
  {
    v5 = *(unsigned __int8 *)(v3 + a2);
    ++v3;
  }
  return i;
}
