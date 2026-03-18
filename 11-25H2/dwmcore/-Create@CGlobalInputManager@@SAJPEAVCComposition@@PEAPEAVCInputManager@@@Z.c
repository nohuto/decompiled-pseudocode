/*
 * XREFs of ?Create@CGlobalInputManager@@SAJPEAVCComposition@@PEAPEAVCInputManager@@@Z @ 0x1800FD114
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x1801BCA10 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180257D90 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CGlobalInputManager::Create(struct CComposition *a1, struct CInputManager **a2)
{
  CInputManager *v4; // rax
  CInputManager *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CInputManager *)DefaultHeap::AllocClear(0x138uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CInputManager::CInputManager(v4, a1);
  *((_QWORD *)v5 + 38) = 0LL;
  *(_QWORD *)v5 = &CGlobalInputManager::`vftable';
  CMILRefCountImpl::AddReference((CInputManager *)((char *)v5 + 8));
  v6 = CGlobalInputManager::Initialize(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x21u, 0LL);
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v5);
  }
  else
  {
    *a2 = v5;
  }
  return v7;
}
