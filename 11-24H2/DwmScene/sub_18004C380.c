/*
 * XREFs of sub_18004C380 @ 0x18004C380
 * Callers:
 *     sub_1800424B8 @ 0x1800424B8 (sub_1800424B8.c)
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 *     sub_180043870 @ 0x180043870 (sub_180043870.c)
 *     sub_180043D74 @ 0x180043D74 (sub_180043D74.c)
 *     sub_180043E04 @ 0x180043E04 (sub_180043E04.c)
 *     sub_18004D4BC @ 0x18004D4BC (sub_18004D4BC.c)
 *     sub_18005B954 @ 0x18005B954 (sub_18005B954.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_18004B240 @ 0x18004B240 (sub_18004B240.c)
 */

_QWORD *__fastcall sub_18004C380(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  sub_18004094C(a1, &v5);
  sub_18004B240(a2, (__int64)&v5, &v7);
  if ( v6 )
    sub_18001060C(v6);
  return a2;
}
