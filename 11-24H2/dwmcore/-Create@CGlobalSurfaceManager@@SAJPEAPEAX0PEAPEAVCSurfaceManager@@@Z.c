/*
 * XREFs of ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1800EF368
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800EFA80 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x1800EF460 (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1802259C0 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CGlobalSurfaceManager::Create(void **a1, void **a2, struct CSurfaceManager **a3)
{
  CGlobalSurfaceManager *v6; // rax
  CGlobalSurfaceManager *v7; // rbx
  CGlobalSurfaceManager *v8; // rax
  CGlobalSurfaceManager *v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (CGlobalSurfaceManager *)DefaultHeap::AllocClear(0x210uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v6, 0, 0x210uLL);
  v8 = CGlobalSurfaceManager::CGlobalSurfaceManager(v7);
  v9 = v8;
  if ( v8 )
  {
    CMILRefCountImpl::AddReference((CGlobalSurfaceManager *)((char *)v8 + 8));
    v11 = CGlobalSurfaceManager::Initialize(v9, a1, a2);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x52u, 0LL);
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v9);
    }
    else
    {
      *a3 = v9;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x4Fu, 0LL);
  }
  return v10;
}
