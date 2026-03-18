/*
 * XREFs of ??_ECSceneMesh@@MEAAPEAXI@Z @ 0x1802A38A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x1802A37F8 (--1CSceneMesh@@MEAA@XZ.c)
 */

CSceneMesh *__fastcall CSceneMesh::`vector deleting destructor'(CSceneMesh *this, char a2)
{
  CSceneMesh::~CSceneMesh(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
