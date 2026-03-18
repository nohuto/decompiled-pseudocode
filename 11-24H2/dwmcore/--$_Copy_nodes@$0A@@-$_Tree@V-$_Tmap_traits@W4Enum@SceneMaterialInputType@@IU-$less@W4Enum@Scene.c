/*
 * XREFs of ??$_Copy_nodes@$0A@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@PEAU21@0@Z @ 0x1802A4828
 * Callers:
 *     ??$?0V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x1802A4768 (--$-0V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std.c)
 *     ??$_Copy_nodes@$0A@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@PEAU21@0@Z @ 0x1802A4828 (--$_Copy_nodes@$0A@@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@Scene.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801A60B0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802292D4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@.c)
 *     ??$_Copy_nodes@$0A@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@PEAU21@0@Z @ 0x1802A4828 (--$_Copy_nodes@$0A@@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@Scene.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Copy_nodes<0>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  __int64 v8; // rbx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v10[0] = a1;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v10[1] = 0LL;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)(v8 + 28) = *(_QWORD *)(a2 + 28);
    *(_QWORD *)v8 = v4;
    *(_QWORD *)(v8 + 8) = v4;
    *(_QWORD *)(v8 + 16) = v4;
    *(_WORD *)(v8 + 24) = 0;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>((__int64)v10);
    *(_QWORD *)(v8 + 8) = a3;
    *(_BYTE *)(v8 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v4 + 25) )
      v4 = v8;
    *(_QWORD *)v8 = std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Copy_nodes<0>(
                      a1,
                      *(_QWORD *)a2,
                      v8);
    *(_QWORD *)(v8 + 16) = std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Copy_nodes<0>(
                             a1,
                             *(_QWORD *)(a2 + 16),
                             v8);
  }
  return v4;
}
