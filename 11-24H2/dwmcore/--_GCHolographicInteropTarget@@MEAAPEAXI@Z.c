/*
 * XREFs of ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x180275960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802CFF14 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 */

CHolographicInteropTarget *__fastcall CHolographicInteropTarget::`scalar deleting destructor'(
        CHolographicInteropTarget *this,
        char a2)
{
  CHolographicInteropTarget::~CHolographicInteropTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
