/*
 * XREFs of ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800EE38C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800EFA80 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z @ 0x18024AC84 (--0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CSceneResourceManager::Create(struct CComposition *a1, struct CSceneResourceManager **a2)
{
  CSceneResourceManager *v4; // rax
  unsigned int v5; // ebx
  struct CSceneResourceManager *v7; // rax

  v4 = (CSceneResourceManager *)DefaultHeap::AllocClear(0x58uLL);
  if ( v4 && (v7 = CSceneResourceManager::CSceneResourceManager(v4, a1)) != 0LL )
  {
    *a2 = v7;
    return 0;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x18u, 0LL);
  }
  return v5;
}
