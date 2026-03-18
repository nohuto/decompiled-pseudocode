/*
 * XREFs of ??_GCSynchronousSuperWetInk@@EEAAPEAXI@Z @ 0x1802B0AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x1802B0A38 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 */

void **__fastcall CSynchronousSuperWetInk::`scalar deleting destructor'(void **this, char a2)
{
  CSynchronousSuperWetInk::~CSynchronousSuperWetInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
