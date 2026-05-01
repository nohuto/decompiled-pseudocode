/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@@Z @ 0x180644EE8
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@@Z @ 0x180644EE8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@-$.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180649880 (--1-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KUhstring.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x180295B84 (--_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@@Z @ 0x180644EE8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@@std@@@-$.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,winrt::hstring>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 **v6; // rbx

  v3 = (volatile signed __int32 *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,winrt::hstring>,void *>>>(
        a1,
        a2,
        *((_QWORD *)v3 + 2));
      v6 = (volatile signed __int32 **)v3;
      v3 = *(volatile signed __int32 **)v3;
      winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion::`scalar deleting destructor'(v6 + 4);
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x30);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
