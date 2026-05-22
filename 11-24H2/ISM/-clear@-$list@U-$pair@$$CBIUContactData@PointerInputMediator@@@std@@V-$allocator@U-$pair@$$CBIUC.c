/*
 * XREFs of ?clear@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@QEAAXXZ @ 0x180014D74
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180014CF0 (-clear@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180014970 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@PE.c)
 */

char **__fastcall std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::clear(char ***a1)
{
  char **v1; // rdx
  char *v3; // rdx
  char **result; // rax
  char *v5; // rbx

  v1 = *a1;
  *(_QWORD *)(*a1)[1] = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v5 = *(char **)v3;
      std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>(
        (__int64)a1,
        v3);
      v3 = v5;
    }
    while ( v5 );
  }
  **a1 = (char *)*a1;
  result = *a1;
  (*a1)[1] = (char *)*a1;
  a1[1] = 0LL;
  return result;
}
