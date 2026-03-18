/*
 * XREFs of ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180133150
 * Callers:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180132B80 (-Delete@CResource@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1801332EC (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::`scalar deleting destructor'(CSpriteVisual *this, char a2)
{
  CSpriteVisual::~CSpriteVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 680LL);
    else
      operator delete(this);
  }
  return this;
}
