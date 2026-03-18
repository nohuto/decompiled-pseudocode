/*
 * XREFs of ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x180113AB0
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A05AC (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180298BE8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TM.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180112A10 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBV3@PEBVCSurfaceRenderStrategy@1@@Z @ 0x180113FBC (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?SetVerticalAlignment@CSurfaceBrush@@QEAAJM@Z @ 0x1801142CC (-SetVerticalAlignment@CSurfaceBrush@@QEAAJM@Z.c)
 *     ?SetHorizontalAlignment@CSurfaceBrush@@QEAAJM@Z @ 0x1801142F4 (-SetHorizontalAlignment@CSurfaceBrush@@QEAAJM@Z.c)
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x1802560B8 (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::GenerateSurfaceBrush(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct D2D_RECT_F *a4,
        struct IBitmapRealization *a5)
{
  struct IBitmapRealization *v5; // r14
  CMILRefCountImpl *v7; // rbx
  CSurfaceBrush *v8; // rdi
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  CSurfaceBrush *v13; // rax
  CSurfaceBrush *v14; // rax
  CSurfaceBrush *v15; // rbp
  int v16; // eax
  CMILRefCountImpl *v18; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  v7 = 0LL;
  a5 = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  *(_QWORD *)v5 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, struct IBitmapRealization **))(*(_QWORD *)a3 + 64LL))(a3, &a5);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x49Au, 0LL);
    goto LABEL_12;
  }
  v12 = CBitmapResource::Create(*(struct CComposition **)(a1 + 24), a5, &v18);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x49Bu, 0LL);
    goto LABEL_10;
  }
  v13 = (CSurfaceBrush *)DefaultHeap::AllocClear(0xD0uLL);
  if ( !v13
    || (v14 = CSurfaceBrush::CSurfaceBrush(v13, *(struct CComposition **)(a1 + 24)), v15 = v14, (v8 = v14) == 0LL) )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x49Eu, 0LL);
LABEL_10:
    v7 = v18;
    goto LABEL_12;
  }
  CMILRefCountImpl::AddReference((CSurfaceBrush *)((char *)v14 + 8));
  v7 = v18;
  v16 = CSurfaceBrush::SetSurface((unsigned __int64)v8, v18, a4, 0LL, 0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x4A0u, 0LL);
  }
  else
  {
    *((_DWORD *)v8 + 30) = 0;
    CBrush::NotifyOnChanged((__int64)v8, 0, (__int64)v8);
    CSurfaceBrush::SetHorizontalAlignment(v8, 0.0);
    CSurfaceBrush::SetVerticalAlignment(v8, 0.0);
    v8 = 0LL;
    *(_QWORD *)v5 = v15;
  }
LABEL_12:
  if ( v7 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( a5 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)a5 + 16LL))(a5);
  if ( v8 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8);
  return v11;
}
