/*
 * XREFs of sub_1800238EC @ 0x1800238EC
 * Callers:
 *     sub_180024CC0 @ 0x180024CC0 (sub_180024CC0.c)
 *     sub_1800257F0 @ 0x1800257F0 (sub_1800257F0.c)
 *     sub_1800258E0 @ 0x1800258E0 (sub_1800258E0.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_180034D98 @ 0x180034D98 (sub_180034D98.c)
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 *     sub_18003573C @ 0x18003573C (sub_18003573C.c)
 *     sub_18009537C @ 0x18009537C (sub_18009537C.c)
 * Callees:
 *     sub_18002330C @ 0x18002330C (sub_18002330C.c)
 */

float __fastcall sub_1800238EC(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  sub_18002330C((__int64)&v3, (__int64)&v2);
  return v3;
}
