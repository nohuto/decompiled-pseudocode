/*
 * XREFs of ??_GCHolographicExclusiveView@@EEAAPEAXI@Z @ 0x1802DAD50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CHolographicExclusiveView@@EEAA@XZ @ 0x1802DAD10 (--1CHolographicExclusiveView@@EEAA@XZ.c)
 */

CHolographicExclusiveView *__fastcall CHolographicExclusiveView::`scalar deleting destructor'(
        CHolographicExclusiveView *this,
        char a2)
{
  CHolographicExclusiveView::~CHolographicExclusiveView(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
