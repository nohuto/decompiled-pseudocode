/*
 * XREFs of ??_ECSceneModelTransform@@UEAAPEAXI@Z @ 0x180275D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@MEAA@XZ @ 0x18024A3B4 (--1-$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CSceneModelTransform::`vector deleting destructor'(struct CResource **this, char a2)
{
  CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
