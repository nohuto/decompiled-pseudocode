/*
 * XREFs of ?GetBrushParameters@CClipBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180293E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18006C0F8 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18006C118 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::GetBrushParameters(CClipBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // eax
  int v5; // ebx
  CMultiPrimitiveDrawListBrush *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __m128 v10; // xmm1
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v17; // rdx
  __int64 v18; // r8
  __m128 v19; // xmm2
  struct D2D_RECT_F v20; // xmm0
  struct D2D_RECT_F v22; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+40h] [rbp-10h]
  CMultiPrimitiveDrawListBrush *v24; // [rsp+70h] [rbp+20h] BYREF
  CMultiPrimitiveDrawListBrush *v25; // [rsp+80h] [rbp+30h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 336LL))(*((_QWORD *)this + 13));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xC5u, 0LL);
    goto LABEL_20;
  }
  if ( !*((_DWORD *)a2 + 10) )
  {
    v24 = 0LL;
    *(_QWORD *)&v22.right = 0LL;
    *(_QWORD *)&v22.left = &v24;
    v23 = 1;
    v5 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v22.right);
    wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)&v22);
    if ( v5 >= 0 )
    {
      v6 = v24;
      v24 = 0LL;
      v25 = v6;
      CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v25);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v25, v7, v8);
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v24);
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xCBu, 0LL);
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v24);
LABEL_20:
    CBrushDrawListGenerator::Reset(a2, v17, v18);
    return (unsigned int)v5;
  }
LABEL_5:
  v9 = *((_QWORD *)a2 + 1);
  if ( *(_BYTE *)(v9 + 52) )
  {
    v10 = (__m128)_mm_loadu_si128((const __m128i *)this + 7);
    v11 = *(float *)(v9 + 36);
    v12 = *(float *)(v9 + 40);
    v13 = *(float *)(v9 + 44);
    v22.left = *(FLOAT *)(v9 + 32);
    v22.top = v11;
    v22.right = v12;
    v22.bottom = v13;
    if ( v10.m128_f32[0] > v22.left )
      LODWORD(v22.left) = v10.m128_i32[0];
    v14 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
    if ( v14 > v11 )
      v22.top = v14;
    v15 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
    if ( v12 > v15 )
      v22.right = v15;
    v16 = _mm_shuffle_ps(v10, v10, 255).m128_f32[0];
    if ( v13 > v16 )
      v22.bottom = v16;
    if ( IsEmpty(&v22) )
    {
      v22.bottom = 0.0;
      v22.right = 0.0;
      v22.top = 0.0;
      v22.left = 0.0;
    }
  }
  else
  {
    v19 = (__m128)_mm_loadu_si128((const __m128i *)this + 7);
    LODWORD(v22.left) = v19.m128_i32[0];
    LODWORD(v22.bottom) = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
    LODWORD(v22.top) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
    LODWORD(v22.right) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  }
  v20 = v22;
  *(_BYTE *)(v9 + 52) = 1;
  v5 = 0;
  *(_DWORD *)(v9 + 48) = 50529027;
  *(struct D2D_RECT_F *)(v9 + 32) = v20;
  return (unsigned int)v5;
}
