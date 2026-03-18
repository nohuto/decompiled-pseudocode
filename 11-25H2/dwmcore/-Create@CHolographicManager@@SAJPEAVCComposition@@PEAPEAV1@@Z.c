/*
 * XREFs of ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180235098
 * Callers:
 *     ?CreateHolographicManager@@YAJPEAVCComposition@@PEAPEAUIHolographicManager@@@Z @ 0x1800FCED4 (-CreateHolographicManager@@YAJPEAVCComposition@@PEAPEAUIHolographicManager@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x1802D768C (--0CHolographicManager@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CHolographicManager::Create(struct CComposition *a1, struct CHolographicManager **a2)
{
  CHolographicManager *v4; // rax
  CHolographicManager *v5; // rax
  CHolographicManager *v6; // rdi
  unsigned int v7; // ebx
  HANDLE Event; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CHolographicManager *)DefaultHeap::AllocClear(0xF8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = CHolographicManager::CHolographicManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((CHolographicManager *)((char *)v5 + 16));
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v6 + 29) = Event;
    v7 = -2147467259;
    if ( Event )
    {
      *a2 = v6;
      return Event == 0LL ? 0x80004005 : 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x19u, 0LL);
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CHolographicManager *)((char *)v6 + 8));
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v7;
}
