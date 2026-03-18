/*
 * XREFs of ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x180283A20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x1802839B8 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::`scalar deleting destructor'(
        CMagnifierRenderTarget *this,
        char a2)
{
  CMagnifierRenderTarget::~CMagnifierRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
