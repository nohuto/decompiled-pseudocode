/*
 * XREFs of ??_GCSceneComponent@@MEAAPEAXI@Z @ 0x1802ACC10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSceneComponent@@MEAA@XZ @ 0x1802ACBD8 (--1CSceneComponent@@MEAA@XZ.c)
 */

CSceneComponent *__fastcall CSceneComponent::`scalar deleting destructor'(CSceneComponent *this, char a2)
{
  CSceneComponent::~CSceneComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
