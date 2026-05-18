/*
 * XREFs of sub_1800C04B0 @ 0x1800C04B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_83 @ 0x180017608 (unknown_libname_83.c)
 *     sub_1800523CC @ 0x1800523CC (sub_1800523CC.c)
 *     sub_1800524B0 @ 0x1800524B0 (sub_1800524B0.c)
 *     sub_180052580 @ 0x180052580 (sub_180052580.c)
 *     sub_1800525A0 @ 0x1800525A0 (sub_1800525A0.c)
 *     sub_1800828AC @ 0x1800828AC (sub_1800828AC.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C0BD4 @ 0x1800C0BD4 (sub_1800C0BD4.c)
 */

void __fastcall sub_1800C04B0(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  _QWORD *v8; // rax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  _QWORD v11[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( a2[3] == 1 )
  {
    sub_1800C0598();
  }
  else
  {
    v6 = sub_1800523CC(a2[4]);
    sub_1800C0BD4(a1, v6, *a2, a2[1], a2[2], v7, a2[6], a2[5], *(_QWORD *)(a3 + 8));
  }
  v8 = sub_1800828AC(v11, a2[4]);
  unknown_libname_83((_OWORD *)(a1 + 120), (__int64)v8);
  sub_180011B5C((__int64)v11);
  v9 = 0LL;
  v9.m128_f32[0] = (float)(int)sub_180052580(a1);
  v10 = 0LL;
  v10.m128_f32[0] = (float)(int)sub_1800524B0(a1);
  sub_1800525A0(a1, _mm_unpacklo_ps(v9, v10).m128_i64[0]);
}
