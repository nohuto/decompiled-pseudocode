/*
 * XREFs of ?GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180298A70
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A05AC (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z @ 0x1802E46CC (-Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMas.c)
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802E4844 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlurIntermediate(__int64 a1, float a2, _QWORD *a3, __int64 a4)
{
  int v5; // r8d
  int v7; // esi
  __int64 v8; // r9
  int v9; // ebx
  int v10; // eax
  char v12; // [rsp+30h] [rbp-11h]
  CRectanglesShape *v13; // [rsp+48h] [rbp+7h] BYREF
  char v14; // [rsp+50h] [rbp+Fh]
  const char *v15; // [rsp+58h] [rbp+17h] BYREF
  int v16; // [rsp+60h] [rbp+1Fh]
  __int128 v17; // [rsp+68h] [rbp+27h] BYREF
  __int128 v18; // [rsp+78h] [rbp+37h] BYREF

  *a3 = 0LL;
  v5 = (int)CProjectedShadow::s_cpMaskForBlur;
  v7 = a1;
  v18 = _xmm;
  if ( !CProjectedShadow::s_cpMaskForBlur )
  {
    CProjectedShadow::s_cpMaskForBlur = 0LL;
    v13 = 0LL;
    v15 = "DWM ProjectedShadow ApproxBlur Mask";
    v8 = *((_QWORD *)g_pComposition + 91);
    v12 = 0;
    v17 = DirectX::g_XMZero;
    v14 = 0;
    v16 = 35;
    v9 = ((__int64 (__fastcall *)(const char **, __int64, void *, __int64, CRectanglesShape **, char, __int128 *, CEffectIntermediateProducer **))CShadowMaskProducer::Create)(
           &v15,
           a1,
           &unk_1803C6C68,
           v8,
           &v13,
           v12,
           &v17,
           &CProjectedShadow::s_cpMaskForBlur);
    CShapePtr::~CShapePtr(&v13);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x312u, 0LL);
      return (unsigned int)v9;
    }
    v5 = (int)CProjectedShadow::s_cpMaskForBlur;
  }
  v15 = "DWM ProjectedShadow ApproxBlur Blur";
  v16 = 35;
  v10 = CShadowMaskCachingBlurProducer::Create(
          (unsigned int)&v15,
          v7,
          v5,
          (unsigned int)&v18,
          LODWORD(a2),
          (__int64)a3,
          a4);
  v9 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x31Du, 0LL);
  return (unsigned int)v9;
}
