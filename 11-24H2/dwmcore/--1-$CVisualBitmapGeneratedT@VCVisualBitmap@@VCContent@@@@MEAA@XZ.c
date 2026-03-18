/*
 * XREFs of ??1?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@MEAA@XZ @ 0x18024A3B4
 * Callers:
 *     ??1CVisualBitmap@@MEAA@XZ @ 0x1801E5EE4 (--1CVisualBitmap@@MEAA@XZ.c)
 *     ??_ECSceneModelTransform@@UEAAPEAXI@Z @ 0x180275D80 (--_ECSceneModelTransform@@UEAAPEAXI@Z.c)
 *     ??1CCompositionDynamicTexture@@UEAA@XZ @ 0x1802954AC (--1CCompositionDynamicTexture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::~CResource((CResource *)this);
}
