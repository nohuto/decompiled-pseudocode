/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801FE024
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800F9BEC (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x1801AF4C8 (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x1801FE064 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@-$_Tr.c)
 */

__int64 std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear()
{
  _QWORD *v0; // rbx
  __int64 result; // rax

  v0 = (_QWORD *)CPointerDeviceCache::s_deviceCache;
  result = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
             &CPointerDeviceCache::s_deviceCache,
             &CPointerDeviceCache::s_deviceCache,
             *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8));
  v0[1] = v0;
  *v0 = v0;
  v0[2] = v0;
  qword_180406740 = 0LL;
  return result;
}
