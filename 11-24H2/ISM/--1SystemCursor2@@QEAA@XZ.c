/*
 * XREFs of ??1SystemCursor2@@QEAA@XZ @ 0x1800F9044
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VSystemCursor2@@@std@@EEAAXXZ @ 0x1800FB770 (-_Destroy@-$_Ref_count_obj2@VSystemCursor2@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18007FE3C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x18009C088 (--1-$unique_ptr@VHardwareCursorVisual@SystemCursors@@U-$default_delete@VHardwareCursorVisual@Sys.c)
 *     ??1?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800D527C (--1-$_Hash@V-$_Umap_traits@KV-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$_Uhash_compare@KU-$hash@K@.c)
 */

void __fastcall SystemCursor2::~SystemCursor2(SystemCursor2 *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  std::unique_ptr<SystemCursors::HardwareCursorVisual>::~unique_ptr<SystemCursors::HardwareCursorVisual>((_QWORD *)this + 21);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 20);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>((__int64 *)this + 11);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
