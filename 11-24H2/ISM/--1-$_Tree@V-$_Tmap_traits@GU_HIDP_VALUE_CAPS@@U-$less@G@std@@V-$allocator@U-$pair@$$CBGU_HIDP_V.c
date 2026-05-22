/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180184974
 * Callers:
 *     ??1?$_Optional_destruct_base@UHapticsTrigger@@$0A@@std@@QEAA@XZ @ 0x180184954 (--1-$_Optional_destruct_base@UHapticsTrigger@@$0A@@std@@QEAA@XZ.c)
 *     ??1HapticsTrigger@@QEAA@XZ @ 0x180184AC4 (--1HapticsTrigger@@QEAA@XZ.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x180199EC8 (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@1@@Z @ 0x18018459C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned short,_HIDP_VALUE_CAPS,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>,0>>::~_Tree<std::_Tmap_traits<unsigned short,_HIDP_VALUE_CAPS,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>,0>>(
        char **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,_HIDP_VALUE_CAPS>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((char **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x68);
}
