/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180574508
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@?$map@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x180574028 (--$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 * Callees:
 *     ??1ExeData@@QEAA@XZ @ 0x180574584 (--1ExeData@@QEAA@XZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    ExeData::~ExeData((ExeData *)(v2 + 40));
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,std::unordered_map<winrt::hstring,std::wstring>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,std::unordered_map<winrt::hstring,std::wstring>>,void *>>>(a1);
}
