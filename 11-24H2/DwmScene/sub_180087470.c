/*
 * XREFs of sub_180087470 @ 0x180087470
 * Callers:
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800875A8 @ 0x1800875A8 (sub_1800875A8.c)
 */

__int64 __fastcall sub_180087470(__int64 a1, __int64 a2, float a3, float a4)
{
  __int64 v6; // rcx
  float v8; // [rsp+50h] [rbp+18h] BYREF
  float v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  sub_1800875A8(a1, a2, &v8, &v9);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    sub_18001060C(v6);
  return a1;
}
