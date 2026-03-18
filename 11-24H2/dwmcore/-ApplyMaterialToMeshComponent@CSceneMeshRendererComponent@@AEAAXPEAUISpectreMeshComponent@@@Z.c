/*
 * XREFs of ?ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x1802A40CC
 * Callers:
 *     ?ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x1802A413C (-ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z @ 0x1802A4220 (-InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180205578 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator.c)
 */

void __fastcall CSceneMeshRendererComponent::ApplyMaterialToMeshComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  struct ISpectreMeshComponent *v2; // r11
  __int64 v3; // rdi
  void (__fastcall *v4)(struct ISpectreMeshComponent *, __int64); // rbx
  unsigned __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  CSceneMeshRendererComponent *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v3 = *((_QWORD *)this + 11);
  v4 = *(void (__fastcall **)(struct ISpectreMeshComponent *, __int64))(*(_QWORD *)a2 + 8LL);
  if ( v3 )
  {
    v10 = this;
    std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Find_lower_bound<unsigned __int64>(
      (__int64 *)(v3 + 80),
      &v8,
      &v10);
    v6 = v9;
    if ( *(_BYTE *)(v9 + 25) || v5 < *(_QWORD *)(v9 + 32) )
      v6 = *(_QWORD *)(v3 + 80);
    v7 = *(_QWORD *)(v6 + 40);
  }
  else
  {
    v7 = 0LL;
  }
  v4(v2, v7);
}
