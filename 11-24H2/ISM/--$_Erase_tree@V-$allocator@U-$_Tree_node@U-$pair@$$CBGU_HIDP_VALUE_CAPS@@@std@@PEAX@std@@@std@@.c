/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@1@@Z @ 0x18018459C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@1@@Z @ 0x18018459C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180184974 (--1-$_Tree@V-$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGU_HIDP_V.c)
 *     ??$_Assign@UHapticsTrigger@@@?$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAX$$QEAUHapticsTrigger@@@Z @ 0x1801991C8 (--$_Assign@UHapticsTrigger@@@-$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAX$$QEAUHaptic.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@1@@Z @ 0x18018459C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,_HIDP_VALUE_CAPS>,void *>>>(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  char *v3; // rbx
  char *v6; // rcx

  v3 = a3;
  while ( !v3[25] )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,_HIDP_VALUE_CAPS>,void *>>>(
      a1,
      a2,
      *((_QWORD *)v3 + 2));
    v6 = v3;
    v3 = *(char **)v3;
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x68);
  }
}
