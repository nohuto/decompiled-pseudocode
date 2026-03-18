/*
 * XREFs of ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x180044690
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEmptyRegionDrawListBrush@@UEAA@XZ @ 0x1800446E4 (--1CEmptyRegionDrawListBrush@@UEAA@XZ.c)
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180044720 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x18004573C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CEmptyRegionDrawListBrush *__fastcall CEmptyRegionDrawListBrush::`scalar deleting destructor'(
        CEmptyRegionDrawListBrush *this,
        char a2)
{
  struct CEmptyRegionDrawListBrush *v4; // rcx
  CObjectCache *ObjectCache; // rax

  CEmptyRegionDrawListBrush::~CEmptyRegionDrawListBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 160LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      CObjectCache::Free(ObjectCache, this);
    }
  }
  return this;
}
