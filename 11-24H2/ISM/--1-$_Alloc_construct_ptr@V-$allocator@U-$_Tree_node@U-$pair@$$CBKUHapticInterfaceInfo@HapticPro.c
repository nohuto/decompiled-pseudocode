/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800C8110
 * Callers:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800C8164 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUHapticInterfaceInfo@HapticProcesso.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_long_const__HapticProcessor::HapticInterfaceInfo__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned_long_const__HapticProcessor::HapticInterfaceInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$1 @ 0x1801D4FB5 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_unsigned_long_const__HapticProces.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x50);
}
