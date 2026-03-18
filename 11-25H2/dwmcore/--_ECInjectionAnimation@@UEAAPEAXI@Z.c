/*
 * XREFs of ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x1802A5F80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x1802A5F4C (--1CInjectionAnimation@@UEAA@XZ.c)
 */

void **__fastcall CInjectionAnimation::`vector deleting destructor'(void **this, char a2)
{
  CInjectionAnimation::~CInjectionAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
