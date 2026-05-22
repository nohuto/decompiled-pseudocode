/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180147330
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1801483BC (--1-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??1?$list@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180148548 (--1-$list@U-$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKUMessage.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801473CC (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX.c)
 */

_QWORD *__fastcall std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
