/*
 * XREFs of ??$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@?$map@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@_N@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x1802AD914
 * Callers:
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1802AE170 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801022BC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180197D2C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRendererComponent@@V-$com_.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180234784 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1802591E0 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@W4Enum@SceneMaterialInputType@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x1802AD8C0 (--$_Find_lower_bound@W4Enum@SceneMaterialInputType@@@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMateria.c)
 */

__int64 __fastcall std::map<enum SceneMaterialInputType::Enum,unsigned int>::_Try_emplace<enum SceneMaterialInputType::Enum const &,>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  _DWORD *v6; // r8
  __int64 v7; // rbx
  SIZE_T size_of; // rax
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Find_lower_bound<enum SceneMaterialInputType::Enum>(
    a1,
    &v14,
    a3);
  if ( *(_BYTE *)(v15 + 25) || *v6 < *(_DWORD *)(v15 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    v13 = (unsigned __int64)a1;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v10 = *a3;
    v11 = v9;
    *(_DWORD *)(v9 + 32) = 0;
    *(_DWORD *)(v9 + 28) = v10;
    *(_QWORD *)v9 = v7;
    *(_QWORD *)(v9 + 8) = v7;
    *(_QWORD *)(v9 + 16) = v7;
    *(_WORD *)(v9 + 24) = 0;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>((__int64)&v13);
    v13 = v14;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      (__int64)&v13,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
