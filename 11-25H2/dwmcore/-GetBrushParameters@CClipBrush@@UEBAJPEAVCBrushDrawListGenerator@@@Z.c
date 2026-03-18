/*
 * XREFs of ?GetBrushParameters@CClipBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18029F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180126AE0 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180126B00 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::GetBrushParameters(CClipBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ebx
  CMultiPrimitiveDrawListBrush *v7; // rax
  __int64 v8; // rdx
  __m128 v9; // xmm1
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  __m128 v16; // xmm2
  struct D2D_RECT_F v17; // xmm0
  struct D2D_RECT_F v19; // [rsp+30h] [rbp-20h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  CMultiPrimitiveDrawListBrush *v21; // [rsp+70h] [rbp+20h] BYREF
  CMultiPrimitiveDrawListBrush *v22; // [rsp+80h] [rbp+30h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 336LL))(*((_QWORD *)this + 13));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xC5u, 0LL);
    goto LABEL_20;
  }
  if ( !*((_DWORD *)a2 + 10) )
  {
    v21 = 0LL;
    *(_QWORD *)&v19.right = 0LL;
    *(_QWORD *)&v19.left = &v21;
    v20 = 1;
    v6 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v19.right, v5);
    wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)&v19);
    if ( v6 >= 0 )
    {
      v7 = v21;
      v21 = 0LL;
      v22 = v7;
      CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v22);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v22);
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v21);
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xCBu, 0LL);
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v21);
LABEL_20:
    CBrushDrawListGenerator::Reset(a2);
    return (unsigned int)v6;
  }
LABEL_5:
  v8 = *((_QWORD *)a2 + 1);
  if ( *(_BYTE *)(v8 + 52) )
  {
    v9 = (__m128)_mm_loadu_si128((const __m128i *)this + 7);
    v10 = *(float *)(v8 + 36);
    v11 = *(float *)(v8 + 40);
    v12 = *(float *)(v8 + 44);
    v19.left = *(FLOAT *)(v8 + 32);
    v19.top = v10;
    v19.right = v11;
    v19.bottom = v12;
    if ( v9.m128_f32[0] > v19.left )
      LODWORD(v19.left) = v9.m128_i32[0];
    v13 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    if ( v13 > v10 )
      v19.top = v13;
    v14 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    if ( v11 > v14 )
      v19.right = v14;
    v15 = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
    if ( v12 > v15 )
      v19.bottom = v15;
    if ( IsEmpty(&v19) )
    {
      v19.bottom = 0.0;
      v19.right = 0.0;
      v19.top = 0.0;
      v19.left = 0.0;
    }
  }
  else
  {
    v16 = (__m128)_mm_loadu_si128((const __m128i *)this + 7);
    LODWORD(v19.left) = v16.m128_i32[0];
    LODWORD(v19.bottom) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
    LODWORD(v19.top) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
    LODWORD(v19.right) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
  }
  v17 = v19;
  *(_BYTE *)(v8 + 52) = 1;
  v6 = 0;
  *(_DWORD *)(v8 + 48) = 50529027;
  *(struct D2D_RECT_F *)(v8 + 32) = v17;
  return (unsigned int)v6;
}
