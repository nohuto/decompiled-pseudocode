/*
 * XREFs of ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1400943C8
 * Callers:
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14009377C (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140094C20 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1400F6490 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     xxxSetBridgeWindowChild @ 0x1402AB1C0 (xxxSetBridgeWindowChild.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1402C8554 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x140063770 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHost(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v3) )
    return *(unsigned int *)(v3 + 24);
  return v1;
}
