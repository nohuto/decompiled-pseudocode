/*
 * XREFs of ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x180133770
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Delete@CResource@@IEAAXXZ @ 0x180132B80 (-Delete@CResource@@IEAAXXZ.c)
 *     ?DestroyDelayDeleteResources@CComposition@@QEAAXXZ @ 0x1801335D0 (-DestroyDelayDeleteResources@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x180133814 (--1CGeometry@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CRectangleGeometry *__fastcall CRectangleGeometry::`vector deleting destructor'(CRectangleGeometry *this, char a2)
{
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 200LL);
    else
      operator delete(this);
  }
  return this;
}
