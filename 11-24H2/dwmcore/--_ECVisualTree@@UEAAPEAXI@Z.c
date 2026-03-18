/*
 * XREFs of ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1801336D0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Delete@CResource@@IEAAXXZ @ 0x180132B80 (-Delete@CResource@@IEAAXXZ.c)
 *     ?DestroyDelayDeleteResources@CComposition@@QEAAXXZ @ 0x1801335D0 (-DestroyDelayDeleteResources@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??1CVisualTree@@UEAA@XZ @ 0x18008F0FC (--1CVisualTree@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CVisualTree *__fastcall CVisualTree::`vector deleting destructor'(CVisualTree *this, char a2)
{
  CVisualTree::~CVisualTree(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 2632LL);
    else
      operator delete(this);
  }
  return this;
}
