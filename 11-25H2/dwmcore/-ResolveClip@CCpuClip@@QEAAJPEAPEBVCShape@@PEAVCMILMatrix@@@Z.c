/*
 * XREFs of ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180196A70
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x180047920 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180047F70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800753B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x180196748 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1802598B0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CCpuClip::ResolveClip(CCpuClip *this, const struct CShape **a2, struct CMILMatrix *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // xmm1_4
  float dy; // xmm6_4
  float dx; // xmm5_4
  __m128 v10; // xmm0
  __int64 result; // rax
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  char v17; // al
  int v18; // eax
  unsigned __int64 v19; // [rsp+30h] [rbp-49h]
  __m256i v20; // [rsp+40h] [rbp-39h]
  __m128 v21; // [rsp+60h] [rbp-19h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+78h] [rbp-1h] BYREF

  v6 = 0;
  if ( !a3 || *((_BYTE *)this + 108) )
  {
    if ( *((_QWORD *)this + 2) || (v18 = CCpuClip::ConvertContextDependentClipToLocal(this), v6 = v18, v18 >= 0) )
    {
      *a2 = (const struct CShape *)*((_QWORD *)this + 2);
      if ( a3 )
      {
        *(_QWORD *)a3 = 1065353216LL;
        *((_QWORD *)a3 + 1) = 0LL;
        *((_DWORD *)a3 + 4) = 0;
        *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
        *(_QWORD *)((char *)a3 + 28) = 0LL;
        *((_DWORD *)a3 + 9) = 0;
        *((_QWORD *)a3 + 5) = 1065353216LL;
        *((_QWORD *)a3 + 6) = 0LL;
        *((_DWORD *)a3 + 14) = 0;
        *((_DWORD *)a3 + 15) = 1065353216;
        v17 = *((_BYTE *)a3 + 65);
        *((_BYTE *)a3 + 64) = -86;
        *((_BYTE *)a3 + 65) = v17 & 0xC0 | 0x29;
      }
      return v6;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x85u, 0LL);
      return v6;
    }
  }
  else
  {
    *a2 = *(const struct CShape **)this;
    v7 = *((_DWORD *)this + 9);
    matrix.m11 = *((FLOAT *)this + 8);
    *(_QWORD *)&matrix.m[0][1] = __PAIR64__(*((_DWORD *)this + 12), v7);
    *(_QWORD *)&matrix.m[1][1] = __PAIR64__(*((_DWORD *)this + 20), *((_DWORD *)this + 13));
    matrix.dy = *((FLOAT *)this + 21);
    D2D1InvertMatrix(&matrix);
    dy = matrix.dy;
    dx = matrix.dx;
    *(_OWORD *)&v20.m256i_u64[1] = 0LL;
    v10 = (__m128)v19;
    v21.m128_u64[1] = 0x3F80000000000000LL;
    result = 0LL;
    v10.m128_f32[0] = matrix.m11;
    v20.m256i_i64[3] = 1065353216LL;
    v12 = *(__m128 *)v20.m256i_i8;
    v12.m128_f32[0] = matrix.m21;
    v13 = _mm_shuffle_ps(v10, v10, 225);
    v14 = _mm_shuffle_ps(v12, v12, 225);
    v13.m128_f32[0] = matrix.m12;
    v14.m128_f32[0] = matrix.m22;
    *(__m128 *)a3 = _mm_shuffle_ps(v13, v13, 225);
    *((__m128 *)a3 + 1) = _mm_shuffle_ps(v14, v14, 225);
    v15 = v21;
    *((_OWORD *)a3 + 2) = *(_OWORD *)&v20.m256i_u64[2];
    v15.m128_f32[0] = dx;
    v16 = _mm_shuffle_ps(v15, v15, 225);
    v16.m128_f32[0] = dy;
    *((__m128 *)a3 + 3) = _mm_shuffle_ps(v16, v16, 225);
    *((_DWORD *)a3 + 16) = 10248;
  }
  return result;
}
