/*
 * XREFs of sub_18002B298 @ 0x18002B298
 * Callers:
 *     sub_18002B380 @ 0x18002B380 (sub_18002B380.c)
 *     sub_1800BE2D0 @ 0x1800BE2D0 (sub_1800BE2D0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180027130 @ 0x180027130 (sub_180027130.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002B298(__int64 a1)
{
  __m128 v1; // xmm0
  __int64 v3; // rdx
  float v4; // xmm6_4
  __m128 v5; // xmm7
  float v6; // xmm6_4
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
  if ( v3 )
  {
    unknown_libname_81(&v7, (_QWORD *)(v3 + 456));
    if ( v7 )
    {
      v4 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
      v5 = v1;
      v5.m128_f32[0] = v1.m128_f32[0] * v4;
      v6 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
      v1.m128_f32[0] = v1.m128_f32[0] * v6;
      sub_180027130(v7, _mm_unpacklo_ps(v1, v5).m128_i64[0]);
    }
    if ( v8 )
      sub_18001060C(v8);
  }
}
