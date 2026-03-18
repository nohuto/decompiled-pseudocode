/*
 * XREFs of ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x1801F8B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CNaturalAnimation@@UEAA@XZ @ 0x1801F8B9C (--1CNaturalAnimation@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::`scalar deleting destructor'(CNaturalAnimation *this, char a2)
{
  CNaturalAnimation::~CNaturalAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 576LL);
    else
      operator delete(this);
  }
  return this;
}
