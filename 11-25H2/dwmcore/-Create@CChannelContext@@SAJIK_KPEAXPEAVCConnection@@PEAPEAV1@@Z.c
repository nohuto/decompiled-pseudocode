/*
 * XREFs of ?Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z @ 0x1801F3CDC
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z @ 0x1801F3BB0 (-OpenChannel@CComposition@@IEAAJIK_KPEAX@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_ECChannelContext@@EEAAPEAXI@Z @ 0x1800C0A10 (--_ECChannelContext@@EEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAXPEAVCConnection@@@Z @ 0x1801F3E44 (--0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAXPEAVCConnection@@@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x1801F4280 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z @ 0x1801F4558 (--0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannelContext::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned __int64 a3,
        void *a4,
        struct CConnection *a5,
        struct CChannelContext **a6)
{
  unsigned int v8; // ebx
  int ProcessAttribution; // eax
  CChannelContext *v11; // rcx
  struct CProcessAttribution *v12; // rdi
  CChannelContext *v13; // rbp
  CResourceTable *v15; // rax
  CResourceTable *v16; // rax
  CResourceTable *v17; // rsi
  void *v18; // [rsp+20h] [rbp-28h]
  CDrawListCache *v19; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0;
  v19 = 0LL;
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(qword_1804070A0, a2, a3, &v19);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT(ProcessAttribution, retaddr);
  v11 = (CChannelContext *)DefaultHeap::AllocClear(0x88uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v18 = a4;
  v12 = v19;
  v13 = CChannelContext::CChannelContext(v11, a1, a2, v19, v18, a5);
  if ( v13 )
  {
    v15 = (CResourceTable *)DefaultHeap::AllocClear(0x50uLL);
    if ( !v15 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v16 = CResourceTable::CResourceTable(v15, a1, v12);
    v17 = v16;
    if ( v16 )
    {
      (**(void (__fastcall ***)(CResourceTable *))v16)(v16);
      *((_QWORD *)v13 + 6) = v17;
      *a6 = v13;
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x31u, 0LL);
      CChannelContext::`vector deleting destructor'(v13, 1);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Eu, 0LL);
  }
  if ( v12 )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v12);
  return v8;
}
