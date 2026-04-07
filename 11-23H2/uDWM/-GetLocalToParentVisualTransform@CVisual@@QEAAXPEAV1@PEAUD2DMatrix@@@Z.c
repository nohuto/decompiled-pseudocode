/*
 * XREFs of ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x18000C148
 * Callers:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180003878 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000C51C (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180040E00 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::GetLocalToParentVisualTransform(CVisual *this, struct CVisual *a2, struct D2DMatrix *a3)
{
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  CVisual *v8; // rax
  _DWORD v9[16]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v10[64]; // [rsp+60h] [rbp-9h] BYREF

  *(_QWORD *)((char *)a3 + 52) = 0LL;
  *(_QWORD *)((char *)a3 + 44) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *(_QWORD *)((char *)a3 + 12) = 0LL;
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_DWORD *)a3 + 10) = 1065353216;
  *((_DWORD *)a3 + 5) = 1065353216;
  *(_DWORD *)a3 = 1065353216;
  do
  {
    if ( CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v10) )
      D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)v10);
    v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 30));
    v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 31));
    v9[11] = 0;
    v9[9] = 0;
    v9[8] = 0;
    v9[7] = 0;
    v9[6] = 0;
    v9[4] = 0;
    v9[3] = 0;
    v9[2] = 0;
    v9[1] = 0;
    v9[14] = 0;
    v9[15] = 1065353216;
    v9[10] = 1065353216;
    v9[5] = 1065353216;
    v9[0] = 1065353216;
    v9[12] = _mm_cvtepi32_ps(v6).m128_u32[0];
    v9[13] = _mm_cvtepi32_ps(v7).m128_u32[0];
    D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)v9);
    v8 = (CVisual *)(*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 88LL))(this);
    this = v8;
  }
  while ( v8 && (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v8 + 88LL))(v8) && this != a2 );
}
