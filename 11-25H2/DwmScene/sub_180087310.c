/*
 * XREFs of sub_180087310 @ 0x180087310
 * Callers:
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180087448 @ 0x180087448 (sub_180087448.c)
 */

__int64 __fastcall sub_180087310(__int64 a1, __int64 a2, float a3, float a4)
{
  __int64 v6; // rcx
  float v8; // [rsp+50h] [rbp+18h] BYREF
  float v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  sub_180087448(a1, a2, &v8, &v9);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    sub_18001050C(v6);
  return a1;
}
