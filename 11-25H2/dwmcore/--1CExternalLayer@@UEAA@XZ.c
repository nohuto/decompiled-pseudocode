/*
 * XREFs of ??1CExternalLayer@@UEAA@XZ @ 0x180080544
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180028A60 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x18007FC58 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DCA0C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x1802137E0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x180216880 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x18021BD10 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ??1CResampleLayer@@UEAA@XZ @ 0x18021F47C (--1CResampleLayer@@UEAA@XZ.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x180220660 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x18022C5E0 (--_ECExternalLayer@@UEAAPEAXI@Z.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x1802387A0 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExternalLayer::~CExternalLayer(CExternalLayer *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &CExternalLayer::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
