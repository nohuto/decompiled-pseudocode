/*
 * XREFs of ??0?$unordered_set@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@Uguid@winrt@@@4@@std@@QEAA@XZ @ 0x180049AA8
 * Callers:
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x1800C1AF4 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800C2984 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18001D514 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUhstring@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_set<winrt::guid>::unordered_set<winrt::guid>(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  void *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  v3 = v2;
  v9 = v2;
  if ( (unsigned __int64)(*(__int64 *)(a1 + 32) >> 3) >= 0x10 )
  {
    std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>>>>(
      0LL,
      *(unsigned __int64 **)(a1 + 32),
      (unsigned __int64 *)&v9);
  }
  else
  {
    v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
    v5 = *(void **)(a1 + 24);
    v6 = (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v5) >> 3;
    if ( v6 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(8 * v6));
    *(_QWORD *)(a1 + 24) = v4;
    v7 = v4 + 16;
    *(_QWORD *)(a1 + 32) = v4 + 16;
    *(_QWORD *)(a1 + 40) = v4 + 16;
    while ( v4 != v7 )
      *v4++ = v3;
  }
  return a1;
}
