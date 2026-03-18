/*
 * XREFs of ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x180284BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801E4DA8 (--1CDDARenderTarget@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CDDARenderTarget *__fastcall CDDARenderTarget::`vector deleting destructor'(CDDARenderTarget *this, char a2)
{
  CDDARenderTarget::~CDDARenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
