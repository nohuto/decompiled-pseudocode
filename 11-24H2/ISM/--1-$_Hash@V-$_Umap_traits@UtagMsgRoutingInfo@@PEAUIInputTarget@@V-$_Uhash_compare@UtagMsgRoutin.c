/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800DBCD8
 * Callers:
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800DBD58 (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 *     ??1CallControlDeviceCollection@@UEAA@XZ @ 0x1800DBF3C (--1CallControlDeviceCollection@@UEAA@XZ.c)
 *     ??1?$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@5@@std@@QEAA@XZ @ 0x18019E6FC (--1-$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U-$equal_to@UtagMsgRo.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18019E714 (--1DWMInputRouter@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DBC00 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@PEAX@std@@@.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::~_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>(
        __int64 *a1)
{
  char *v2; // rcx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16,0>((char *)a1[1], (const struct std::nothrow_t *)0x40);
}
