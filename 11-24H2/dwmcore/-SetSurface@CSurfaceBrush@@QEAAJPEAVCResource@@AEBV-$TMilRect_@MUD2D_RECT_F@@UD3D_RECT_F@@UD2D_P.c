/*
 * XREFs of ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBV3@PEBVCSurfaceRenderStrategy@1@@Z @ 0x180133850
 * Callers:
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1801ED864 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003DB50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180079C30 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x180134180 (-FindCommonRenderStrategy@CSurfaceBrush@@KAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurface(
        unsigned __int64 a1,
        CMILRefCountImpl *this,
        struct D2D_RECT_F *a3,
        struct D2D_RECT_F *a4,
        const struct CSurfaceBrush::CSurfaceRenderStrategy *a5)
{
  struct D2D_RECT_F *v5; // rbx
  unsigned int v6; // esi
  char v7; // r15
  const struct CSurfaceBrush::CSurfaceRenderStrategy *CommonRenderStrategy; // r12
  const struct D2D_RECT_F *v11; // rdx
  float *v12; // rdx
  unsigned int v13; // edx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v16; // rcx
  int v17; // eax
  int v18; // r13d
  __int64 (__fastcall *v19)(CMILRefCountImpl *); // rax
  struct D2D_RECT_F *v20; // [rsp+38h] [rbp-39h]
  _QWORD v21[5]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp+7h] BYREF

  v5 = a3;
  v20 = a4;
  LOBYTE(a3) = 0;
  v6 = 0;
  v7 = 0;
  if ( this != *(CMILRefCountImpl **)(a1 + 128) )
  {
    CommonRenderStrategy = a5;
    v7 = 1;
    if ( !a5 )
    {
      CommonRenderStrategy = CSurfaceBrush::FindCommonRenderStrategy(this);
      if ( !CommonRenderStrategy )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x15Bu, 0LL);
        return v6;
      }
    }
    if ( this )
    {
      Count = CPtrArray<CVisual>::GetCount((_QWORD *)this + 4);
      v17 = CPtrArrayBase::InsertAt(v16, a1, Count);
      v18 = v17;
      v6 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xD9u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x160u, 0LL);
        return v6;
      }
      v19 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)this + 8LL);
      if ( v19 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(this);
      else
        v19(this);
    }
    CResource::UnRegisterNotifierInternal((CResource *)a1, *(struct CResource **)(a1 + 128));
    *(_QWORD *)(a1 + 128) = this;
    *(_QWORD *)(a1 + 136) = CommonRenderStrategy;
    LOBYTE(a3) = v5->right <= v5->left || v5->bottom <= v5->top;
    a4 = v20;
  }
  if ( (v5->left != *(float *)(a1 + 176)
     || v5->top != *(float *)(a1 + 180)
     || v5->right != *(float *)(a1 + 184)
     || v5->bottom != *(float *)(a1 + 188))
    && (!IsEmpty(v5) || !IsEmpty(v11))
    && (!TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v5->left)
     || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v12)) )
  {
    if ( (float)(v5->right - v5->left) != (float)(*(float *)(a1 + 184) - *(float *)(a1 + 176))
      || (float)(v5->bottom - v5->top) != (float)(*(float *)(a1 + 188) - *(float *)(a1 + 180)) )
    {
      LOBYTE(a3) = 1;
    }
    v7 = 1;
    *(struct D2D_RECT_F *)(a1 + 176) = *v5;
  }
  if ( (_BYTE)a3 || v7 || a4 )
  {
    v21[1] = 0LL;
    v23 = 0LL;
    v21[0] = &CRectanglesShape::`vftable';
    v21[2] = v22;
    v21[3] = v22;
    v21[4] = &v23;
    if ( (_BYTE)a3 )
    {
      v13 = 0;
    }
    else
    {
      if ( a4 )
      {
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v21, a4, (__int64)a3);
        *(_QWORD *)(a1 + 192) = v21;
      }
      v13 = v7 != 0 ? 6 : 1;
    }
    CBrush::NotifyOnChanged(a1, v13, a1);
    *(_QWORD *)(a1 + 192) = 0LL;
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v21);
  }
  return v6;
}
