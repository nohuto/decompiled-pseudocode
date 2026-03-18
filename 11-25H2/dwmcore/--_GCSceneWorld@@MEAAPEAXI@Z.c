/*
 * XREFs of ??_GCSceneWorld@@MEAAPEAXI@Z @ 0x1802B4B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x1802B4A5C (--1CSceneWorld@@MEAA@XZ.c)
 */

CSceneWorld *__fastcall CSceneWorld::`scalar deleting destructor'(CSceneWorld *this, char a2)
{
  CSceneWorld::~CSceneWorld(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
