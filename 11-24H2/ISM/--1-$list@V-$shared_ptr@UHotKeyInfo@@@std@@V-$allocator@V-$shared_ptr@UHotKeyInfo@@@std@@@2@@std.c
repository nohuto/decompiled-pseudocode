/*
 * XREFs of ??1?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1801CA328
 * Callers:
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$1 @ 0x1801D9CF6 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$1.c)
 *     _HotKeyProcessor::RegisterHotKey_::_1_::dtor$1 @ 0x1801D9D1A (_HotKeyProcessor--RegisterHotKey_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801C9808 (--$_Freenode@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_Lis.c)
 */

void __fastcall std::list<std::shared_ptr<HotKeyInfo>>::~list<std::shared_ptr<HotKeyInfo>>(char **a1)
{
  char **v1; // rdx
  char *v3; // rdx
  char *v4; // rbx

  v1 = (char **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        (__int64)a1,
        v3);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
