/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x1800C0DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceTable@@UEAA@XZ @ 0x1800C0E0C (--1CResourceTable@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CResourceTable *__fastcall CResourceTable::`vector deleting destructor'(CResourceTable *this, char a2)
{
  CResourceTable::~CResourceTable(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 80LL);
    else
      operator delete(this);
  }
  return this;
}
