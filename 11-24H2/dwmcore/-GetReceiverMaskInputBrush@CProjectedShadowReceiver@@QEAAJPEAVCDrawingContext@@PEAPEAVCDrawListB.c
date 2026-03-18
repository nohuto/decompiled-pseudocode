/*
 * XREFs of ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18006C5CC
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006B870 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18006CC04 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014F8C0 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x180168640 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802DB5A4 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 *     ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z @ 0x1802DB71C (-CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowReceiver::GetReceiverMaskInputBrush(
        CEffectIntermediateProducer **this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  int v3; // ebx
  CBrush *EffectiveMaskBrush; // r15
  CShadowMaskProducer **v8; // rdi
  int v9; // eax
  struct CDrawListBrush *v10; // rax
  int DrawListBrush; // eax
  CEffectIntermediateProducer *v13; // r8
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  char v15; // [rsp+48h] [rbp-61h]
  const char *v16; // [rsp+50h] [rbp-59h] BYREF
  int v17; // [rsp+58h] [rbp-51h]
  __int128 v18; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v19[8]; // [rsp+70h] [rbp-39h] BYREF
  struct CDrawListBrush *v20; // [rsp+78h] [rbp-31h]
  __int64 v21; // [rsp+80h] [rbp-29h]

  v3 = 0;
  *a3 = 0LL;
  EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush((CProjectedShadowReceiver *)this);
  if ( !CBrush::GetBrushGraph(EffectiveMaskBrush) )
  {
    v8 = this + 15;
    if ( !this[15] )
    {
      CBrushDrawListGenerator::CBrushDrawListGenerator(
        (CBrushDrawListGenerator *)v19,
        a2,
        (const struct D2D_SIZE_F *)this[9] + 18);
      v9 = (*(__int64 (__fastcall **)(CBrush *, _BYTE *))(*(_QWORD *)EffectiveMaskBrush + 336LL))(
             EffectiveMaskBrush,
             v19);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC2u, 0LL);
LABEL_5:
        CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v19);
        return (unsigned int)v3;
      }
      if ( v21 )
      {
        Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(this + 15);
        v13 = this[9];
        v14 = 0LL;
        v16 = "DWM ProjectedShadow Receiver Mask";
        v18 = DirectX::g_XMZero;
        v15 = 0;
        v17 = 33;
        v3 = ((__int64 (__fastcall *)(const char **, struct CDrawingContext *, char *, CBrush *, __int64 *, _BYTE, __int128 *, CEffectIntermediateProducer **))CShadowMaskProducer::Create)(
               &v16,
               a2,
               (char *)v13 + 144,
               EffectiveMaskBrush,
               &v14,
               0,
               &v18,
               this + 15);
        CShapePtr::~CShapePtr((CShapePtr *)&v14);
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xD1u, 0LL);
          goto LABEL_5;
        }
      }
      else
      {
        v10 = v20;
        v20 = 0LL;
        v14 = 0LL;
        *a3 = v10;
        std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v14);
      }
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v19);
    }
    if ( *v8 )
    {
      DrawListBrush = CShadowMaskProducer::CreateDrawListBrush(*v8, a3);
      v3 = DrawListBrush;
      if ( DrawListBrush < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListBrush, 0xDDu, 0LL);
    }
  }
  return (unsigned int)v3;
}
