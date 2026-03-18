/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D5C0
 * Callers:
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18014B770 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x18014D880 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?GetBounds@CBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D8B0 (-GetBounds@CBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DB30 (-GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DBC0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18014DEF4 (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 *     ?GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DF60 (-GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(CSpriteVisual *this, struct D2D_RECT_F *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  CSurfaceBrush *v7; // rcx
  struct D2D_SIZE_F *v8; // rdx
  __int64 (__fastcall *v9)(CSurfaceBrush *, struct D2D_SIZE_F *); // rax
  int Bounds; // eax
  bool (__fastcall *v11)(CWindowNode *__hidden); // rax
  bool ShouldHitTest; // al
  __int64 v14; // rcx
  __int64 i; // rcx
  __m128 v16; // xmm1
  float v17; // xmm3_4
  float v18; // xmm2_4
  bool v19; // al
  float v20; // xmm4_4
  BOOL v21; // ecx
  CDropShadow *DropShadow; // rax
  int v23; // eax
  struct D2D_RECT_F v24; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  a2->bottom = 0.0;
  a2->right = 0.0;
  a2->top = 0.0;
  a2->left = 0.0;
  v7 = (CSurfaceBrush *)*((_QWORD *)this + 32);
  if ( v7 )
  {
    v8 = (struct D2D_SIZE_F *)((char *)this + 144);
    v9 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct D2D_SIZE_F *))(*(_QWORD *)v7 + 184LL);
    if ( (char *)v9 == (char *)CBrush::GetBounds )
    {
      Bounds = CBrush::GetBounds(v7, v8, a2, a4);
    }
    else if ( v9 == CSurfaceBrush::GetBounds )
    {
      Bounds = CSurfaceBrush::GetBounds(v7, v8);
    }
    else
    {
      Bounds = (char *)v9 == (char *)CNineGridBrush::GetBounds
             ? CNineGridBrush::GetBounds(v7, v8, a2)
             : ((__int64 (__fastcall *)(CSurfaceBrush *, struct D2D_SIZE_F *, struct D2D_RECT_F *))v9)(v7, v8, a2);
    }
    v4 = Bounds;
    if ( Bounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bounds, 0xE70u, 0LL);
  }
  v11 = *(bool (__fastcall **)(CWindowNode *__hidden))(*(_QWORD *)this + 296LL);
  if ( v11 == CWindowNode::ShouldHitTest )
    ShouldHitTest = CWindowNode::ShouldHitTest(this);
  else
    ShouldHitTest = v11(this);
  if ( ShouldHitTest )
  {
    v14 = *((_QWORD *)this + 28);
    if ( (*(_DWORD *)(v14 + 4) & 0x100000) != 0 )
    {
      for ( i = v14 + 12; (*(_DWORD *)i & 0x7F000000) != 0xC000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
        ;
      v16 = *(__m128 *)(i + 4);
      LODWORD(v24.left) = v16.m128_i32[0];
      LODWORD(v17) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
      LODWORD(v18) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
      v24.top = v17;
      v24.right = _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
      v24.bottom = v18;
      if ( v24.right > v16.m128_f32[0] && v18 > v17 )
      {
        v19 = IsEmpty(a2);
        v21 = v20 <= v16.m128_f32[0] || v18 <= v17;
        if ( v19 )
        {
          if ( v21 )
          {
            a2->bottom = 0.0;
            a2->right = 0.0;
            a2->top = 0.0;
            a2->left = 0.0;
          }
          else
          {
            *a2 = v24;
          }
        }
        else if ( !v21 )
        {
          if ( a2->left > v16.m128_f32[0] )
            LODWORD(a2->left) = v16.m128_i32[0];
          if ( a2->top > v17 )
            a2->top = v17;
          if ( v20 > a2->right )
            a2->right = v20;
          if ( v18 > a2->bottom )
            a2->bottom = v18;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xC3u, 0LL);
  }
  else if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    v24 = 0LL;
    DropShadow = CSpriteVisual::GetDropShadow(this);
    v23 = CDropShadow::GetBounds(DropShadow);
    v4 = v23;
    if ( v23 >= 0 )
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&a2->left, &v24.left);
    else
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xC9u, 0LL);
  }
  return (unsigned int)v4;
}
