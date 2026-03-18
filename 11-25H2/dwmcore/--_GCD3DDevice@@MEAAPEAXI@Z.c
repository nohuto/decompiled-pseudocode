/*
 * XREFs of ??_GCD3DDevice@@MEAAPEAXI@Z @ 0x18022EA40
 * Callers:
 *     ??_ECD3DDevice@@OBA@EAAPEAXI@Z @ 0x1802C5BC0 (--_ECD3DDevice@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18022EA8C (--1CD3DDevice@@MEAA@XZ.c)
 */

CD3DDevice *__fastcall CD3DDevice::`scalar deleting destructor'(CD3DDevice *this, char a2)
{
  CD3DDevice::~CD3DDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
