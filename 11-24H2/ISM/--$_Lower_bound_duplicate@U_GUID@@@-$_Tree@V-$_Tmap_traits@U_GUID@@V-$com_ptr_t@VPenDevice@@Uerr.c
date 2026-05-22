/*
 * XREFs of ??$_Lower_bound_duplicate@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@HapticDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEBU_GUID@@@Z @ 0x1801893BC
 * Callers:
 *     ??$_Emplace@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@HapticDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801890C8 (--$_Emplace@AEBU_GUID@@AEAV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@-$_Tree@V-$.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@HapticDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x18018E150 (-find@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@.c)
 * Callees:
 *     memcmp_0 @ 0x1801CF190 (memcmp_0.c)
 */

bool __fastcall std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,HapticDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Lower_bound_duplicate<_GUID>(
        __int64 a1,
        __int64 a2,
        const void *a3)
{
  char v3; // bl

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
    return memcmp_0(a3, (const void *)(a2 + 32), 0x10uLL) >= 0;
  return v3;
}
