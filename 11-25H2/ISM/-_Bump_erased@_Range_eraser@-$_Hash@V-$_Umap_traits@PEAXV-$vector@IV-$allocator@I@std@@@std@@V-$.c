/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800F0718
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800F10F0 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAXV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_com.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180031214 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAXV-$vector@IV-$allocator@I@std@@@std@@@std@@P.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  char *v1; // rdx
  __int64 result; // rax

  v1 = (char *)a1[2];
  a1[2] = *(_QWORD *)v1;
  std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>>>(
    (__int64)a1,
    v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
