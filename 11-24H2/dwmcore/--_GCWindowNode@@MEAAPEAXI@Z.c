/*
 * XREFs of ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180048970
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800489BC (--1CWindowNode@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CWindowNode *__fastcall CWindowNode::`scalar deleting destructor'(CWindowNode *this, char a2)
{
  CWindowNode::~CWindowNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 904LL);
    else
      operator delete(this);
  }
  return this;
}
