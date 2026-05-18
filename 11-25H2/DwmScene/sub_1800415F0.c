/*
 * XREFs of sub_1800415F0 @ 0x1800415F0
 * Callers:
 *     sub_18005B618 @ 0x18005B618 (sub_18005B618.c)
 * Callees:
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 *     sub_18007BAD0 @ 0x18007BAD0 (sub_18007BAD0.c)
 */

__int64 __fastcall sub_1800415F0(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a1 + 120) )
    sub_18007BAD0();
  v5 = a2;
  return sub_180027D7C((__int64 *)(a1 + 80), &v5);
}
