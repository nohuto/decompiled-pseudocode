/*
 * XREFs of ??1?$map@KV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801C2B1C
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$8 @ 0x1801D213F (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<unsigned long,std::list<HotKeyInfo>>::~map<unsigned long,std::list<HotKeyInfo>>(char **a1)
{
  std::_Tree<std::_Tmap_traits<unsigned long,std::list<HotKeyInfo>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<HotKeyInfo>>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,std::list<HotKeyInfo>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<HotKeyInfo>>>,0>>(a1);
}
