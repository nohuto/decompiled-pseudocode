/*
 * XREFs of ??1?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ @ 0x180213BBC
 * Callers:
 *     ??_GCImageLegacyMilBrush@@UEAAPEAXI@Z @ 0x180213B70 (--_GCImageLegacyMilBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::~CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[23]);
  this[23] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[24]);
  this[24] = 0LL;
  CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>::~CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>(this);
}
