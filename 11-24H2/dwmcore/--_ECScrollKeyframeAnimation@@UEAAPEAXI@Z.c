/*
 * XREFs of ??_ECScrollKeyframeAnimation@@UEAAPEAXI@Z @ 0x1802AD9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x180225BBC (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 */

CScrollKeyframeAnimation *__fastcall CScrollKeyframeAnimation::`vector deleting destructor'(
        CScrollKeyframeAnimation *this,
        char a2)
{
  CScrollKeyframeAnimation::~CScrollKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
