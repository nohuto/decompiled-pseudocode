/*
 * XREFs of ??1?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@MEAA@XZ @ 0x180255704
 * Callers:
 *     ??1CVisualBitmap@@MEAA@XZ @ 0x1801EFBF4 (--1CVisualBitmap@@MEAA@XZ.c)
 *     ??_ECSceneModelTransform@@UEAAPEAXI@Z @ 0x1802807B0 (--_ECSceneModelTransform@@UEAAPEAXI@Z.c)
 *     ??1CCompositionDynamicTexture@@UEAA@XZ @ 0x1802A0E68 (--1CCompositionDynamicTexture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::~CResource((CResource *)this);
}
