/*
 * XREFs of ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180133020
 * Callers:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180069460 (-Delete@CResource@@IEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?DestroyDelayDeleteResources@CComposition@@QEAAXXZ @ 0x180132F20 (-DestroyDelayDeleteResources@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180133CBC (--1CVisualTree@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
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
