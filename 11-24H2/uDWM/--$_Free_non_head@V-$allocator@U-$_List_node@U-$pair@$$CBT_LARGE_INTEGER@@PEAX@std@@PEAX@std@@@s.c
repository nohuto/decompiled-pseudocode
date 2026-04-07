/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D12C0
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800D161C (--1-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@U-$hash@T_LAR.c)
 *     ??1?$list@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@2@@std@@QEAA@XZ @ 0x1800D16A8 (--1-$list@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@V-$allocator@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800F44D8 (-clear@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@U-$hash@T.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<_LARGE_INTEGER const,void *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,void *>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
      v2 = v3;
    }
    while ( v3 );
  }
}
