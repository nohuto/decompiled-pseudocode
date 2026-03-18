/*
 * XREFs of ??_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z @ 0x180172AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x180110430 (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z @ 0x180170C08 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z.c)
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180171E40 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
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
