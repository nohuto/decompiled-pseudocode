/*
 * XREFs of ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x1802910C0
 * Callers:
 *     ??_ECSpectreCallbackRenderer@@W7EAAPEAXI@Z @ 0x1802910B0 (--_ECSpectreCallbackRenderer@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180044720 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSpectreCallbackRenderer@@UEAA@XZ @ 0x180291088 (--1CSpectreCallbackRenderer@@UEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z @ 0x1802B79AC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z.c)
 */

CSpectreCallbackRenderer *__fastcall CSpectreCallbackRenderer::`scalar deleting destructor'(
        CSpectreCallbackRenderer *this,
        char a2)
{
  struct CSpectreCallbackRenderer *v4; // rcx
  CObjectCache *ObjectCache; // rax

  CSpectreCallbackRenderer::~CSpectreCallbackRenderer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      CObjectCache::Free(ObjectCache, this);
    }
  }
  return this;
}
