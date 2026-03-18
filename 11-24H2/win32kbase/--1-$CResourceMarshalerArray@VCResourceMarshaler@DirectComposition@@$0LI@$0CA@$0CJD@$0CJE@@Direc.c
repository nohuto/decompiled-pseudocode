/*
 * XREFs of ??1?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA@XZ @ 0x1402249A8
 * Callers:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1400EF080 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400FED00 (-ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ??1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ @ 0x140106B08 (--1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_GCGeometry2DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14011E080 (--_GCGeometry2DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14011FD70 (--_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?ReleaseAllReferences@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140126A70 (-ReleaseAllReferences@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@.c)
 *     ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140148460 (--_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?ReleaseAllReferences@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140229A00 (-ReleaseAllReferences@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel.c)
 *     ?ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140229B40 (-ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationC.c)
 *     ?ReleaseAllReferences@CMeshGeometry2DMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140229C70 (-ReleaseAllReferences@CMeshGeometry2DMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ??1CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA@XZ @ 0x14022CBC4 (--1CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ @ 0x14022CBEC (--1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x14022CC20 (--1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x14022CC48 (--1CTextVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECAtlasedRectsGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022CE40 (--_ECAtlasedRectsGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022CF00 (--_GCLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x14001A314 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::~CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>(
        DirectComposition::CMarshaledArrayBase *a1)
{
  DirectComposition::CMarshaledArrayBase::Clear(a1);
}
