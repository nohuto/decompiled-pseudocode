/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180649790
 * Callers:
 *     ??1?$unordered_map@Uhstring@winrt@@U12@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAA@XZ @ 0x18064A0DC (--1-$unordered_map@Uhstring@winrt@@U12@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@.c)
 *     ??1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18064A1E0 (--1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180645008 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@st.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>(
        __int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16,0>((void *)a1[1], (const struct std::nothrow_t *)0x20);
}
