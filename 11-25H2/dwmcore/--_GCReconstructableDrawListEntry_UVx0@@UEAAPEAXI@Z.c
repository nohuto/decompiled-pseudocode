/*
 * XREFs of ??_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z @ 0x180043A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180044720 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z @ 0x180045960 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z.c)
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18014C070 (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CReconstructableDrawListEntry_UVx0 *__fastcall CReconstructableDrawListEntry_UVx0::`scalar deleting destructor'(
        CReconstructableDrawListEntry_UVx0 *this,
        char a2)
{
  struct CReconstructableDrawListEntry_UVx0 *v4; // rcx
  CObjectCache *ObjectCache; // rax

  CReconstructableDrawListEntry::~CReconstructableDrawListEntry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 104LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      CObjectCache::Free(ObjectCache, this);
    }
  }
  return this;
}
