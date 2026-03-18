/*
 * XREFs of ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x180210F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180044720 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x18021103C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CColorDrawListBrush *__fastcall CColorDrawListBrush::`vector deleting destructor'(CColorDrawListBrush *this, char a2)
{
  CObjectCache *ObjectCache; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 72LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(this);
      CObjectCache::Free(ObjectCache, this);
    }
  }
  return this;
}
