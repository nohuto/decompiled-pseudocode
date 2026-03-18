/*
 * XREFs of ??_GCRenderData@@MEAAPEAXI@Z @ 0x1801319B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x1801319FC (--1CRenderData@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CRenderData *__fastcall CRenderData::`scalar deleting destructor'(CRenderData *this, char a2)
{
  CRenderData::~CRenderData(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 304LL);
    else
      operator delete(this);
  }
  return this;
}
