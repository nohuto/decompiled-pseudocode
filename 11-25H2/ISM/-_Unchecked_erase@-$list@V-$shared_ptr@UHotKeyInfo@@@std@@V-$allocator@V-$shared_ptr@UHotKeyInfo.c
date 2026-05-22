/*
 * XREFs of ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801C5880
 * Callers:
 *     ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801C18A0 (--$_Assign_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@V-$sha.c)
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801C2C64 (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x1801C32C4 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801C20C4 (--$_Freenode@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_Lis.c)
 */

__int64 *__fastcall std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(__int64 a1, char *a2, __int64 *a3)
{
  __int64 **v5; // rax
  __int64 v6; // rsi
  __int64 *v7; // rbx

  if ( a2 != (char *)a3 )
  {
    v5 = (__int64 **)*((_QWORD *)a2 + 1);
    v6 = 0LL;
    *v5 = a3;
    a3[1] = (__int64)v5;
    do
    {
      v7 = *(__int64 **)a2;
      std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        a1,
        a2);
      ++v6;
      a2 = (char *)v7;
    }
    while ( v7 != a3 );
    *(_QWORD *)(a1 + 8) -= v6;
  }
  return a3;
}
