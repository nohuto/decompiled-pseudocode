/*
 * XREFs of ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBV3@PEBVCSurfaceRenderStrategy@1@@Z @ 0x180113FBC
 * Callers:
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x180113AB0 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x180023120 (-FindCommonRenderStrategy@CSurfaceBrush@@KAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800ABA50 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurface(
        unsigned __int64 a1,
        CMILRefCountImpl *this,
        struct D2D_RECT_F *a3,
        struct D2D_RECT_F *a4,
        void **a5)
{
  bool v6; // r8
  unsigned int v7; // esi
  char v8; // r15
  void **CommonRenderStrategy; // r12
  const struct D2D_RECT_F *v12; // rdx
  float *v13; // rdx
  unsigned int v14; // edx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v17; // rcx
  int v18; // eax
  int v19; // r13d
  __int64 (__fastcall *v20)(CMILRefCountImpl *); // rax
  struct D2D_RECT_F *v21; // [rsp+38h] [rbp-39h]
  _QWORD v22[5]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v23[16]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v24; // [rsp+78h] [rbp+7h] BYREF

  v21 = a4;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( this != *(CMILRefCountImpl **)(a1 + 128) )
  {
    CommonRenderStrategy = a5;
    v8 = 1;
    if ( !a5 )
    {
      CommonRenderStrategy = CSurfaceBrush::FindCommonRenderStrategy(this);
      if ( !CommonRenderStrategy )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x15Bu, 0LL);
        return v7;
      }
    }
    if ( this )
    {
      Count = CPtrArray<CVisual>::GetCount((_QWORD *)this + 4);
      v18 = CPtrArrayBase::InsertAt(v17, a1, Count);
      v19 = v18;
      v7 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xD9u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x160u, 0LL);
        return v7;
      }
      v20 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)this + 8LL);
      if ( v20 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(this);
      else
        v20(this);
    }
    CResource::UnRegisterNotifierInternal((CResource *)a1, *(struct CResource **)(a1 + 128));
    *(_QWORD *)(a1 + 128) = this;
    *(_QWORD *)(a1 + 136) = CommonRenderStrategy;
    v6 = a3->right <= a3->left || a3->bottom <= a3->top;
    a4 = v21;
  }
  if ( (a3->left != *(float *)(a1 + 176)
     || a3->top != *(float *)(a1 + 180)
     || a3->right != *(float *)(a1 + 184)
     || a3->bottom != *(float *)(a1 + 188))
    && (!IsEmpty(a3) || !IsEmpty(v12))
    && (!TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&a3->left)
     || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v13)) )
  {
    if ( (float)(a3->right - a3->left) != (float)(*(float *)(a1 + 184) - *(float *)(a1 + 176))
      || (float)(a3->bottom - a3->top) != (float)(*(float *)(a1 + 188) - *(float *)(a1 + 180)) )
    {
      v6 = 1;
    }
    v8 = 1;
    *(struct D2D_RECT_F *)(a1 + 176) = *a3;
  }
  if ( v6 || v8 || a4 )
  {
    v22[1] = 0LL;
    v24 = 0LL;
    v22[0] = &CRectanglesShape::`vftable';
    v22[2] = v23;
    v22[3] = v23;
    v22[4] = &v24;
    if ( v6 )
    {
      v14 = 0;
    }
    else
    {
      if ( a4 )
      {
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v22, a4);
        *(_QWORD *)(a1 + 192) = v22;
      }
      v14 = v8 != 0 ? 6 : 1;
    }
    CBrush::NotifyOnChanged(a1, v14, a1);
    *(_QWORD *)(a1 + 192) = 0LL;
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v22);
  }
  return v7;
}
