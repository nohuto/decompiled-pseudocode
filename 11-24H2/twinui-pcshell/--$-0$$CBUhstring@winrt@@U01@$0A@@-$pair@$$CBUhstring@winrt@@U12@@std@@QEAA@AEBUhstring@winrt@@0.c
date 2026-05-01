/*
 * XREFs of ??$?0$$CBUhstring@winrt@@U01@$0A@@?$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@AEBUhstring@winrt@@0@Z @ 0x18033C43C
 * Callers:
 *     ??$?0AEBUhstring@winrt@@AEBU01@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@AEBUhstring@winrt@@2@Z @ 0x18033C47C (--$-0AEBUhstring@winrt@@AEBU01@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstrin.c)
 *     ??$emplace@AEBUhstring@winrt@@AEBU12@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@_N@1@AEBUhstring@winrt@@0@Z @ 0x1806463A8 (--$emplace@AEBUhstring@winrt@@AEBU12@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_comp.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::pair<winrt::hstring const,winrt::hstring>::pair<winrt::hstring const,winrt::hstring>(
        __int64 a1,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  winrt::hstring::hstring((winrt::hstring *)a1, a2);
  winrt::hstring::hstring((winrt::hstring *)(a1 + 8), a3);
  return a1;
}
