/*
 * XREFs of ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x180171DB0
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180170E80 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x180170DF4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ??1CPrimitiveGroupDrawListBrush@@UEAA@XZ @ 0x180171E04 (--1CPrimitiveGroupDrawListBrush@@UEAA@XZ.c)
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180171E40 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CPrimitiveGroupDrawListBrush *__fastcall CPrimitiveGroupDrawListBrush::`vector deleting destructor'(
        CPrimitiveGroupDrawListBrush *this,
        char a2)
{
  struct CPrimitiveGroupDrawListBrush *v4; // rcx
  CObjectCache *ObjectCache; // rax

  CPrimitiveGroupDrawListBrush::~CPrimitiveGroupDrawListBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 88LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      CObjectCache::Free(ObjectCache, this);
    }
  }
  return this;
}
