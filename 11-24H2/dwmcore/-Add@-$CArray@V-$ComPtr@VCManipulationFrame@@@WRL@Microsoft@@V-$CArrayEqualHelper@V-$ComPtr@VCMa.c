/*
 * XREFs of ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18021F5C8
 * Callers:
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190634 (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x180146A68 (-InternalAddRef@-$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180192730 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
        int *a1,
        CEffectCompilationTask **a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v5; // esi
  char *v7; // rcx
  CEffectCompilationTask **v8; // rcx
  int v9; // ebx
  char *v10; // rax

  v2 = a1[2];
  v5 = 1;
  if ( (int)v2 + 1 <= 0 )
    return 0;
  if ( (_DWORD)v2 == a1[3] )
  {
    if ( (int)v2 > 0x3FFFFFFF || v2 > 0xFFFFFFFFFFFFFFFLL )
      return 0;
    v9 = 2;
    if ( a1[3] >= 2 )
      v9 = v2 + ((int)v2 >> 1);
    v10 = (char *)((_DWORD)v2 ? DefaultHeap::Realloc(*(void **)a1, 8LL * v9) : DefaultHeap::AllocClear(8LL * v9));
    if ( !v10 )
      return 0;
    a1[3] = v9;
    *(_QWORD *)a1 = v10;
  }
  v7 = *(char **)a1;
  a1[2] = v2 + 1;
  v8 = (CEffectCompilationTask **)&v7[8 * v2];
  if ( v8 )
  {
    *v8 = *a2;
    Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(v8);
  }
  return v5;
}
