/*
 * XREFs of ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x1801EDDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1801EDE3C (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::`vector deleting destructor'(CGdiSpriteBitmap *this, char a2)
{
  CGdiSpriteBitmap::~CGdiSpriteBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 480LL);
    else
      operator delete(this);
  }
  return this;
}
