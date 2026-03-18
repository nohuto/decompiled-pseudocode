/*
 * XREFs of ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x180285B20
 * Callers:
 *     ??_ECSpectreCallbackRenderer@@W7EAAPEAXI@Z @ 0x180285B10 (--_ECSpectreCallbackRenderer@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180171E40 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSpectreCallbackRenderer@@UEAA@XZ @ 0x180285AE8 (--1CSpectreCallbackRenderer@@UEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z @ 0x1802ADDBC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z.c)
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
