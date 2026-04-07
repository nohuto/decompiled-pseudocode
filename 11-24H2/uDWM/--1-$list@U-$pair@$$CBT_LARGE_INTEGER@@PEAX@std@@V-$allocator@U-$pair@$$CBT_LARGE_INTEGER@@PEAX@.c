/*
 * XREFs of ??1?$list@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@2@@std@@QEAA@XZ @ 0x1800D16A8
 * Callers:
 *     _CWindowData::CWindowData_::_1_::dtor$6 @ 0x1800F649A (_CWindowData--CWindowData_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D12C0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@s.c)
 */

void __fastcall std::list<std::pair<_LARGE_INTEGER const,void *>>::~list<std::pair<_LARGE_INTEGER const,void *>>(
        void **a1)
{
  std::_List_node<std::pair<_LARGE_INTEGER const,void *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,void *>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
