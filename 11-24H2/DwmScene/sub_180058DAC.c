/*
 * XREFs of sub_180058DAC @ 0x180058DAC
 * Callers:
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 */

_QWORD *__fastcall sub_180058DAC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_18004094C(a1 + 8, &v4);
  sub_1800150A0(a2, (__int64)&v4, v4);
  if ( v5 )
    sub_18001060C(v5);
  return a2;
}
