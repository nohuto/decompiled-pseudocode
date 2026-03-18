/*
 * XREFs of ??_GCSceneNode@@MEAAPEAXI@Z @ 0x1802A56B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSceneNode@@MEAA@XZ @ 0x1802A5644 (--1CSceneNode@@MEAA@XZ.c)
 */

CSceneNode *__fastcall CSceneNode::`scalar deleting destructor'(CSceneNode *this, char a2)
{
  CSceneNode::~CSceneNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
