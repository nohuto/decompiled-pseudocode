/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800B48F8
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800B4530 (-ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?OnDockDeviceArrival@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18017E188 (-OnDockDeviceArrival@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?OnDockDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18017E308 (-OnDockDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017E424 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18017E8CC (-OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 *     ?OnDockableDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18017EA80 (-OnDockableDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801C4038 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801C54C0 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18007E914 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _DWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
    a1,
    &v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *v4 < *(_DWORD *)(v9 + 32) )
    v6 = *a1;
  *v5 = v6;
  return v5;
}
