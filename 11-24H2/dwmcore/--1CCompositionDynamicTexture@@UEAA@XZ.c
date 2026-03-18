/*
 * XREFs of ??1CCompositionDynamicTexture@@UEAA@XZ @ 0x1802954AC
 * Callers:
 *     ??_ECCompositionDynamicTexture@@UEAAPEAXI@Z @ 0x1802954E0 (--_ECCompositionDynamicTexture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 */

void __fastcall CCompositionDynamicTexture::~CCompositionDynamicTexture(struct CResource **this)
{
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)(this + 11));
  CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>(this);
}
