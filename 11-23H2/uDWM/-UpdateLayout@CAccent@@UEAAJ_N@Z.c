/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18002D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180011E18 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x18001966C (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800196A8 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x18002B530 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18002D7F4 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180050824 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18006B514 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800A126C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800A14F8 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800A1630 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 */

__int64 __fastcall CAccent::UpdateLayout(CAccent *this)
{
  unsigned int v2; // eax
  int v3; // edx
  int v4; // ecx
  __m128i v5; // xmm0
  int v6; // eax
  float v7; // xmm0_4
  float SolidFillOpacity; // xmm0_4
  int updated; // edi
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-30h]
  __m128i v16; // [rsp+30h] [rbp-20h] BYREF
  __int16 v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( !CAccent::_AnyTransparentBackground(this) )
  {
    updated = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
    if ( updated >= 0 )
      goto LABEL_8;
    v14 = 412LL;
    goto LABEL_17;
  }
  if ( (unsigned int)(*((_DWORD *)this + 72) - 3) <= 1 )
  {
    updated = CAccent::_UpdateAcrylicBlurBehind(this);
    if ( updated >= 0 )
      goto LABEL_8;
    v14 = 416LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated,
      v15);
    return (unsigned int)updated;
  }
  v2 = 0;
  v3 = *((_DWORD *)this + 149) - *((_DWORD *)this + 147);
  v4 = *((_DWORD *)this + 148) - *((_DWORD *)this + 146);
  v16.m128i_i64[0] = 0LL;
  if ( v4 >= 0 )
    v2 = v4;
  v5 = _mm_cvtsi32_si128(v2);
  v6 = 0;
  LODWORD(v7) = _mm_cvtepi32_ps(v5).m128_u32[0];
  if ( v3 >= 0 )
    v6 = v3;
  *(float *)&v16.m128i_i32[2] = v7 + 0.0;
  *(float *)&v16.m128i_i32[3] = (float)v6 + 0.0;
  SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
  updated = CAccent::_UpdateSolidFill(this, this, *((_DWORD *)this + 90), &v16, SolidFillOpacity);
  if ( updated < 0 )
  {
    v14 = 426LL;
    goto LABEL_17;
  }
LABEL_8:
  if ( (*((_BYTE *)this + 292) & 0xE0) == 0 )
    goto LABEL_9;
  updated = CAccent::_EnsureBorderShadowAtlas(this);
  if ( updated < 0 )
  {
    v14 = 431LL;
    goto LABEL_17;
  }
  updated = CAccent::_UpdateBorderShadowParts(this);
  if ( updated < 0 )
  {
    v14 = 432LL;
    goto LABEL_17;
  }
  updated = CAccent::_UpdateBorderShadowForAccent(this);
  if ( updated < 0 )
  {
    v14 = 433LL;
    goto LABEL_17;
  }
LABEL_9:
  updated = CCanvasVisual::UpdateLayout(this);
  if ( updated < 0 )
  {
    v14 = 436LL;
    goto LABEL_17;
  }
  v10 = *((_QWORD *)this + 50);
  if ( v10 )
  {
    updated = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 104LL))(v10, (char *)this + 128);
    if ( updated < 0 )
    {
      v14 = 441LL;
      goto LABEL_17;
    }
  }
  v11 = *((_DWORD *)this + 20);
  v17 = 0;
  v16.m128i_i64[1] = v11 | 0xFFFFFFFF00000000uLL;
  v16.m128i_i64[0] = (__int64)this + 32;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v16) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v16.m128i_i64[0] + 16) + 8LL * v16.m128i_u32[3]);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 2LL);
  }
  return 0LL;
}
