/*
 * XREFs of ?Create@CGlobalManipulationManager@@SAJPEAVCComposition@@PEAPEAVCManipulationManager@@@Z @ 0x1800EF94C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800EFA80 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1800ECABC (-Initialize@CManipulationManager@@IEAAJXZ.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800EFA14 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalManipulationManager::Create(struct CComposition *a1, struct CManipulationManager **a2)
{
  CGlobalManipulationManager *v4; // rax
  CGlobalManipulationManager *v5; // rax
  CManipulationManager *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CGlobalManipulationManager *)DefaultHeap::AllocClear(0x190uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = CGlobalManipulationManager::CGlobalManipulationManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((CGlobalManipulationManager *)((char *)v5 + 8));
    v8 = CManipulationManager::Initialize(v6);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x23u, 0LL);
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x20u, 0LL);
  }
  return v7;
}
