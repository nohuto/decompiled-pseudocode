/*
 * XREFs of ??1CExternalLayer@@UEAA@XZ @ 0x1800F8D84
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800A82C0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x180138E78 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x180206E20 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x18020A500 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x180210170 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ??1CResampleLayer@@UEAA@XZ @ 0x18021408C (--1CResampleLayer@@UEAA@XZ.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x180214DE0 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x180221480 (--_ECExternalLayer@@UEAAPEAXI@Z.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x18022CAF0 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_GCValueColorTransformLayer@@UEAAPEAXI@Z @ 0x180264030 (--_GCValueColorTransformLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExternalLayer::~CExternalLayer(CExternalLayer *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &CExternalLayer::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
