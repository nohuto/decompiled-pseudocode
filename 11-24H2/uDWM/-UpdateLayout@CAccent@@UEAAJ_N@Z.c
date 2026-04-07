/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A1630
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180020B10 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180021010 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180022998 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180062FC0 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x180065B58 (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180065C8C (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180065CF4 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18006602C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINT.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800665AC (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800721D0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAccent::UpdateLayout(CAccent *this)
{
  int updated; // edi
  __int64 v3; // rdx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // ecx
  __m128i v8; // xmm0
  int v9; // eax
  float v10; // xmm0_4
  D3DVALUE SolidFillOpacity; // xmm0_4
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int128 v14[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( CAccent::_AnyTransparentBackground(this) )
  {
    if ( (unsigned int)(*((_DWORD *)this + 60) - 3) > 1 )
    {
      v5 = 0;
      v6 = *((_DWORD *)this + 137) - *((_DWORD *)this + 135);
      v7 = *((_DWORD *)this + 136) - *((_DWORD *)this + 134);
      *(_QWORD *)&v14[0] = 0LL;
      if ( v7 >= 0 )
        v5 = v7;
      v8 = _mm_cvtsi32_si128(v5);
      v9 = 0;
      LODWORD(v10) = _mm_cvtepi32_ps(v8).m128_u32[0];
      if ( v6 >= 0 )
        v9 = v6;
      *((float *)v14 + 2) = v10 + 0.0;
      *((float *)v14 + 3) = (float)v9 + 0.0;
      SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
      updated = CAccent::_UpdateSolidFill(this, this, *((_DWORD *)this + 78), v14, SolidFillOpacity);
      if ( updated < 0 )
      {
        v3 = 419LL;
        goto LABEL_4;
      }
    }
    else
    {
      updated = CAccent::_UpdateAcrylicBlurBehind(this);
      if ( updated < 0 )
      {
        v3 = 409LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    updated = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
    if ( updated < 0 )
    {
      v3 = 405LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  if ( (*((_BYTE *)this + 244) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas(this);
    if ( updated < 0 )
    {
      v3 = 424LL;
      goto LABEL_4;
    }
    updated = CAccent::_UpdateBorderShadowParts((struct CAtlasedImage **)this);
    if ( updated < 0 )
    {
      v3 = 425LL;
      goto LABEL_4;
    }
    updated = CAccent::_UpdateBorderShadowForAccent(this);
    if ( updated < 0 )
    {
      v3 = 426LL;
      goto LABEL_4;
    }
  }
  updated = CCanvasVisual::UpdateLayout(this);
  if ( updated < 0 )
  {
    v3 = 429LL;
    goto LABEL_4;
  }
  v12 = *((_QWORD *)this + 44);
  if ( v12 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 80LL))(v12, (char *)this + 72);
  VisualCollection::GetIterator((__int64)this + 144, (__int64)v14);
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)v14) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14[0] + 8LL) + 8LL * HIDWORD(v14[0]));
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 2LL);
  }
  return 0LL;
}
