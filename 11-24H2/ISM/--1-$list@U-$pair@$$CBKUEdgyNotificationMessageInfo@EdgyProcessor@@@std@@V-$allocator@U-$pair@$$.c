/*
 * XREFs of ??1?$list@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18015355C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_EdgyProcessor::EdgyNotificationMessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__EdgyProcessor::EdgyNotificationMessageInfo____0___::_Hash_std::_Umap_traits_unsigned_long_EdgyProcessor::EdgyNotificationMessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__EdgyProcessor::EdgyNotificationMessageInfo____0____::_1_::dtor$0 @ 0x1801D7B5E (_std--_Hash_std--_Umap_traits_unsigned_long_EdgyProcessor--EdgyNotificationMessageI_ea_1801D7B5E.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180152B34 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProce.c)
 */

void __fastcall std::list<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>::~list<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x30);
}
