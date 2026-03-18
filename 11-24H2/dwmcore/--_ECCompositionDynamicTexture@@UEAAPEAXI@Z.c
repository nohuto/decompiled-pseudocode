/*
 * XREFs of ??_ECCompositionDynamicTexture@@UEAAPEAXI@Z @ 0x1802954E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionDynamicTexture@@UEAA@XZ @ 0x1802954AC (--1CCompositionDynamicTexture@@UEAA@XZ.c)
 */

struct CResource **__fastcall CCompositionDynamicTexture::`vector deleting destructor'(
        struct CResource **this,
        char a2)
{
  CCompositionDynamicTexture::~CCompositionDynamicTexture(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
