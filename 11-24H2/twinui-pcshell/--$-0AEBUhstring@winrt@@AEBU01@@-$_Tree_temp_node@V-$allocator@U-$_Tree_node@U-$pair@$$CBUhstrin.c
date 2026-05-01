/*
 * XREFs of ??$?0AEBUhstring@winrt@@AEBU01@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@AEBUhstring@winrt@@2@Z @ 0x18033C47C
 * Callers:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBU12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@0@Z @ 0x18033C830 (--$_Emplace@AEBUhstring@winrt@@AEBU12@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstr.c)
 * Callees:
 *     ??$?0$$CBUhstring@winrt@@U01@$0A@@?$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@AEBUhstring@winrt@@0@Z @ 0x18033C43C (--$-0$$CBUhstring@winrt@@U01@$0A@@-$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@AEBUhstring@winrt@@0.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@@Z @ 0x18033D10C (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct winrt::hstring *a4,
        const struct winrt::hstring *a5)
{
  __int64 i; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>();
  std::pair<winrt::hstring const,winrt::hstring>::pair<winrt::hstring const,winrt::hstring>(
    *(_QWORD *)(a1 + 8) + 32LL,
    a4,
    a5);
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + i + 24) = 0;
  return a1;
}
