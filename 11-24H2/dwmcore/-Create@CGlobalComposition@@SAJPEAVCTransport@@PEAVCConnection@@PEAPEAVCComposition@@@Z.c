/*
 * XREFs of ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z @ 0x1800ED334
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800ED258 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800EFA80 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1802633E4 (--0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 */

__int64 __fastcall CGlobalComposition::Create(struct CTransport *a1, struct CConnection *a2, struct CComposition **a3)
{
  CGlobalComposition *v6; // rax
  CDrawListCache *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (CGlobalComposition *)DefaultHeap::AllocClear(0x1998uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  g_pComposition = CGlobalComposition::CGlobalComposition(v6, a1, a2);
  v7 = g_pComposition;
  v8 = CComposition::Initialize(g_pComposition);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2Eu, 0LL);
    if ( v7 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v7);
  }
  else
  {
    *a3 = v7;
  }
  return v9;
}
