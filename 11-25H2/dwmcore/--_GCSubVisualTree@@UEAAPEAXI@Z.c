/*
 * XREFs of ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x1802233D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180133CBC (--1CVisualTree@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CSubVisualTree *__fastcall CSubVisualTree::`scalar deleting destructor'(CSubVisualTree *this, __int64 a2)
{
  char v2; // di

  *((_QWORD *)this + 9) = 0LL;
  --CSubVisualTree::s_cSubTrees;
  v2 = a2;
  *(_QWORD *)this = &CSubVisualTree::`vftable';
  CVisualTree::~CVisualTree(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
