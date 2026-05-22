/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001BE80
 * Callers:
 *     _std::unordered_map_unsigned_long_Win32kInterop::TargetingInfo_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo_____::try_emplace___::_1_::dtor$0 @ 0x1801C9FF0 (_std--unordered_map_unsigned_long_Win32kInterop--TargetingInfo_std--hash_unsigned_long__std--equ.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$1 @ 0x1801CA9C0 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x180036D1C (--1TargetingInfo@Win32kInterop@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    Win32kInterop::TargetingInfo::~TargetingInfo((Win32kInterop::TargetingInfo *)(v2 + 24));
  v3 = *(char **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x28);
}
