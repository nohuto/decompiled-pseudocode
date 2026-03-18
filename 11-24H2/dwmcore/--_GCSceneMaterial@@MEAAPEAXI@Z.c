/*
 * XREFs of ??_GCSceneMaterial@@MEAAPEAXI@Z @ 0x1802A4A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x1802A49AC (--1CSceneMaterial@@MEAA@XZ.c)
 */

CSceneMaterial *__fastcall CSceneMaterial::`scalar deleting destructor'(CSceneMaterial *this, char a2)
{
  CSceneMaterial::~CSceneMaterial(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
