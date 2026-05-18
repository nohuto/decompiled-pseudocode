/*
 * XREFs of sub_180052160 @ 0x180052160
 * Callers:
 *     sub_180026D60 @ 0x180026D60 (sub_180026D60.c)
 *     sub_1800691C0 @ 0x1800691C0 (sub_1800691C0.c)
 * Callees:
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 *     sub_180050B40 @ 0x180050B40 (sub_180050B40.c)
 *     sub_1800526B8 @ 0x1800526B8 (sub_1800526B8.c)
 */

__int64 __fastcall sub_180052160(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    sub_1800526B8(a1 + 136, 0LL);
  v5 = a2;
  sub_180050B40((__int64 *)(a1 + 112), &v5);
  v5 = a2;
  return sub_180027D7C((__int64 *)(a1 + 80), &v5);
}
