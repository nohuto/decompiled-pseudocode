/*
 * XREFs of ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x180217360
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualTree@@UEAA@XZ @ 0x18008F0FC (--1CVisualTree@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CSubVisualTree *__fastcall CSubVisualTree::`scalar deleting destructor'(CSubVisualTree *this, char a2)
{
  *((_QWORD *)this + 9) = 0LL;
  --CSubVisualTree::s_cSubTrees;
  *(_QWORD *)this = &CSubVisualTree::`vftable';
  CVisualTree::~CVisualTree(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
