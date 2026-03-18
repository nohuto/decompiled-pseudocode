/*
 * XREFs of ??1CCompositionDynamicTexture@@UEAA@XZ @ 0x1802A0E68
 * Callers:
 *     ??_ECCompositionDynamicTexture@@UEAAPEAXI@Z @ 0x1802A0E90 (--_ECCompositionDynamicTexture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 */

void __fastcall CCompositionDynamicTexture::~CCompositionDynamicTexture(struct CResource **this)
{
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)(this + 11));
  CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>(this);
}
