/*
 * XREFs of ??_ECHolographicExclusiveMode@@MEAAPEAXI@Z @ 0x1802DA9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CHolographicExclusiveMode@@MEAA@XZ @ 0x1802DA974 (--1CHolographicExclusiveMode@@MEAA@XZ.c)
 */

CHolographicExclusiveMode *__fastcall CHolographicExclusiveMode::`vector deleting destructor'(
        CHolographicExclusiveMode *this,
        char a2)
{
  CHolographicExclusiveMode::~CHolographicExclusiveMode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
