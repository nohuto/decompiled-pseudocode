/*
 * XREFs of ??_ECHolographicViewer@@MEAAPEAXI@Z @ 0x1802D3750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CHolographicViewer@@MEAA@XZ @ 0x1802D36F4 (--1CHolographicViewer@@MEAA@XZ.c)
 */

CHolographicViewer *__fastcall CHolographicViewer::`vector deleting destructor'(CHolographicViewer *this, char a2)
{
  CHolographicViewer::~CHolographicViewer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
