/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014BF30
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C0020 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetPixelColor@CGdiSpriteBitmap@@QEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x18005AFF0 (-GetPixelColor@CGdiSpriteBitmap@@QEBA-AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C600 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C750 (-HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C84C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014CBC0 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z @ 0x1801B2650 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801C6EE0 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x18021E09C (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CSurfaceBrush **this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  CRectanglesShape *v4; // r14
  unsigned int v6; // ebx
  bool *v7; // rsi
  bool (__fastcall *v10)(CWindowNode *__hidden); // rax
  bool v11; // zf
  CSurfaceBrush *v12; // rcx
  const struct D2D_SIZE_F *v13; // rdx
  __int64 (__fastcall *v14)(CPrimitiveGroup *__hidden, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *); // rax
  int v15; // eax
  __m128 x_low; // xmm2
  __m128i y_low; // xmm4
  CSurfaceBrush *v19; // rax
  __m128 v20; // xmm9
  __m128i v21; // xmm7
  __m128i v22; // xmm6
  __m128 v23; // xmm8
  float y; // xmm0_4
  __int64 Count; // rax
  _QWORD *v26; // rcx
  CGdiSpriteBitmap *v27; // rcx
  CGeometry *v28; // rcx
  bool v29; // al
  float v30; // xmm0_4
  void (__fastcall *v31)(CRectanglesShape *, __int64); // rax
  bool v32; // r9
  int v33; // ecx
  __m128 v34; // rt1
  D3DVALUE r; // xmm1_4
  const struct D2D_RECT_F *TouchTargetBounds; // rax
  float v37; // [rsp+30h] [rbp-A8h]
  float v38; // [rsp+30h] [rbp-A8h]
  D2D_POINT_2U v39; // [rsp+38h] [rbp-A0h] BYREF
  struct _D3DCOLORVALUE v40; // [rsp+40h] [rbp-98h] BYREF

  v4 = 0LL;
  v6 = 0;
  v7 = a4;
  *a4 = 0;
  v10 = (bool (__fastcall *)(CWindowNode *__hidden))*((_QWORD *)*this + 37);
  if ( v10 != CWindowNode::ShouldHitTest )
  {
    v11 = !v10((CWindowNode *)this);
LABEL_4:
    if ( !v11 && !*v7 )
    {
      v12 = this[32];
      if ( v12 )
      {
        v13 = (const struct D2D_SIZE_F *)(this + 18);
        v14 = *(__int64 (__fastcall **)(CPrimitiveGroup *__hidden, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v12 + 208LL);
        if ( v14 == CSurfaceBrush::HitTest )
        {
          v15 = CSurfaceBrush::HitTest(v12, v13, a3, v7);
        }
        else if ( (char *)v14 == (char *)CMaskBrush::HitTest )
        {
          v15 = CMaskBrush::HitTest(v12, v13, a3, v7);
        }
        else
        {
          v15 = v14 == CPrimitiveGroup::HitTest ? CPrimitiveGroup::HitTest(v12, v13, a3, v7) : v14(v12, v13, a3, v7);
        }
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x138Eu, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x28Cu, 0LL);
          return v6;
        }
      }
    }
    goto LABEL_18;
  }
  if ( !*((_BYTE *)this + 753) )
  {
    v11 = this[100] == 0LL;
    goto LABEL_4;
  }
LABEL_18:
  if ( *v7 || *((_BYTE *)this + 753) || !this[100] )
    return v6;
  v19 = this[89];
  LOBYTE(a4) = 0;
  v20 = (__m128)COERCE_UNSIGNED_INT((float)(int)v19);
  v21 = (__m128i)COERCE_UNSIGNED_INT((float)SHIDWORD(v19));
  v22 = (__m128i)COERCE_UNSIGNED_INT((float)(int)HIDWORD(this[90]));
  v23 = (__m128)COERCE_UNSIGNED_INT((float)(int)this[90]);
  if ( a3->x >= v20.m128_f32[0] && v23.m128_f32[0] > a3->x )
  {
    y = a3->y;
    if ( y >= *(float *)v21.m128i_i32 && *(float *)v22.m128i_i32 > y )
    {
      *v7 = 1;
      x_low = (__m128)LODWORD(a3->x);
      y_low = (__m128i)LODWORD(a3->y);
      goto LABEL_13;
    }
  }
  *v7 = 0;
  x_low = (__m128)LODWORD(a3->x);
  y_low = (__m128i)LODWORD(a3->y);
  if ( !a2 )
    goto LABEL_12;
  TouchTargetBounds = (const struct D2D_RECT_F *)CVisual::GetTouchTargetBounds(this, &v40, a3, a4);
  if ( !IsPointInRect(a3, TouchTargetBounds) )
    goto LABEL_12;
  *v7 = 1;
  if ( v20.m128_f32[0] <= x_low.m128_f32[0] )
  {
    if ( x_low.m128_f32[0] >= v23.m128_f32[0] )
    {
      x_low = v23;
      x_low.m128_f32[0] = v23.m128_f32[0] - 1.0;
    }
  }
  else
  {
    x_low = v20;
  }
  if ( *(float *)v21.m128i_i32 > *(float *)y_low.m128i_i32 )
  {
    y_low = v21;
    goto LABEL_13;
  }
  LOBYTE(a4) = 1;
  if ( *(float *)y_low.m128i_i32 >= *(float *)v22.m128i_i32 )
  {
    y_low = v22;
    *(float *)y_low.m128i_i32 = *(float *)v22.m128i_i32 - 1.0;
  }
  else
  {
LABEL_12:
    if ( !(_BYTE)a4 )
    {
LABEL_35:
      if ( ((_BYTE)this[112] & 0x10) != 0 )
      {
        v28 = this[101];
        *(_QWORD *)&v40.r = 0LL;
        LOBYTE(v40.b) = 0;
        if ( v28
          && (CGeometry::GetShapeData(v28, (const struct D2D_SIZE_F *)this + 18, (CRectanglesShape **)&v40),
              (v4 = *(CRectanglesShape **)&v40.r) != 0LL) )
        {
          CShapePtr::FillContainsPoint((CShapePtr *)&v40, a3, v7);
          v4 = *(CRectanglesShape **)&v40.r;
        }
        else
        {
          v29 = 0;
          if ( a3->x >= v20.m128_f32[0] && v23.m128_f32[0] > a3->x )
          {
            v30 = a3->y;
            if ( v30 >= *(float *)v21.m128i_i32 )
              v29 = *(float *)v22.m128i_i32 > v30;
          }
          *v7 = v29;
        }
        if ( LOBYTE(v40.b) && v4 )
        {
          v31 = **(void (__fastcall ***)(CRectanglesShape *, __int64))v4;
          if ( (char *)v31 == (char *)CRectanglesShape::`scalar deleting destructor' )
          {
            CRectanglesShape::~CRectanglesShape(v4);
            CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v4);
          }
          else if ( (char *)v31 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(v4);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v4);
          }
          else if ( (char *)v31 == (char *)CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v4, 1);
          }
          else
          {
            v31(v4, 1LL);
          }
        }
      }
      return v6;
    }
  }
LABEL_13:
  if ( ((_BYTE)this[112] & 8) != 0 && (_mm_cvtsi128_si32(*(__m128i *)((char *)this + 772)) & 0xA) != 0 )
  {
    if ( (_mm_cvtsi128_si32((__m128i)x_low) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v33 = (int)x_low.m128_f32[0];
      x_low.m128_f32[0] = (float)(int)x_low.m128_f32[0] - x_low.m128_f32[0];
      x_low = _mm_cmple_ss(x_low, (__m128)LODWORD(FLOAT_N0_5));
      v39.x = v33 - _mm_cvtsi128_si32((__m128i)x_low);
    }
    else
    {
      v37 = x_low.m128_f32[0] + 6291456.25;
      v39.x = (int)(LODWORD(v37) << 10) >> 11;
    }
    if ( (_mm_cvtsi128_si32(y_low) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      x_low.m128_f32[0] = (float)(int)*(float *)y_low.m128i_i32 - *(float *)y_low.m128i_i32;
      v34.m128_f32[0] = FLOAT_N0_5;
      v39.y = (int)*(float *)y_low.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(x_low, v34));
    }
    else
    {
      v38 = *(float *)y_low.m128i_i32 + 6291456.25;
      v39.y = (int)(LODWORD(v38) << 10) >> 11;
    }
    Count = CPtrArray<CVisual>::GetCount(this + 104);
    if ( Count )
    {
      if ( Count == 1 )
        v27 = (CGdiSpriteBitmap *)(*v26 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v27 = *(CGdiSpriteBitmap **)((*v26 & 0xFFFFFFFFFFFFFFFCuLL) + 16);
    }
    else
    {
      v27 = 0LL;
    }
    CGdiSpriteBitmap::GetPixelColor(v27, &v40, &v39);
    if ( (*((_DWORD *)this + 193) & 2) != 0 )
    {
      if ( HIDWORD(*(unsigned __int64 *)((char *)this + 780)) )
      {
        r = v40.r;
        v40.r = v40.b;
        v40.b = r;
      }
      *v7 = !CColorKey::IsColorKey((CColorKey *)(this + 106), &v40);
    }
    if ( !*v7 )
      goto LABEL_35;
    if ( (*((_DWORD *)this + 193) & 8) != 0 )
    {
      v32 = v40.a > 0.0;
      *v7 = v40.a > 0.0;
      if ( !v32 )
        goto LABEL_35;
    }
  }
  return v6;
}
