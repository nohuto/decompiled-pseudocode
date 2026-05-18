/*
 * XREFs of sub_1800C0350 @ 0x1800C0350
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_83 @ 0x180017548 (unknown_libname_83.c)
 *     sub_18005226C @ 0x18005226C (sub_18005226C.c)
 *     sub_180052350 @ 0x180052350 (sub_180052350.c)
 *     sub_180052420 @ 0x180052420 (sub_180052420.c)
 *     sub_180052440 @ 0x180052440 (sub_180052440.c)
 *     sub_18008274C @ 0x18008274C (sub_18008274C.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C0A74 @ 0x1800C0A74 (sub_1800C0A74.c)
 */

void __fastcall sub_1800C0350(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  _QWORD *v8; // rax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  _QWORD v11[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( a2[3] == 1 )
  {
    sub_1800C0438();
  }
  else
  {
    v6 = sub_18005226C(a2[4]);
    sub_1800C0A74(a1, v6, *a2, a2[1], a2[2], v7, a2[6], a2[5], *(_QWORD *)(a3 + 8));
  }
  v8 = sub_18008274C(v11, a2[4]);
  unknown_libname_83((_OWORD *)(a1 + 120), (__int64)v8);
  sub_180011A5C((__int64)v11);
  v9 = 0LL;
  v9.m128_f32[0] = (float)(int)sub_180052420(a1);
  v10 = 0LL;
  v10.m128_f32[0] = (float)(int)sub_180052350(a1);
  sub_180052440(a1, _mm_unpacklo_ps(v9, v10).m128_i64[0]);
}
