/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3F1C
 * Callers:
 *     ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x1800D3590 (-AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x1800D3708 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D3840 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x1800D39B0 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x1800D3EBC (-UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800DE920 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z @ 0x1800DEA70 (-OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180107E48 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180107E9C (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x180108018 (-IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z.c)
 *     ?SetGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180108254 (-SetGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x1801082B8 (-SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@KPEAX@std@@@1@AEBK@Z @ 0x1800D34B4 (--$_Find_lower_bound@K@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _DWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Find_lower_bound<unsigned long>(
    a1,
    &v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *v4 < *(_DWORD *)(v9 + 28) )
    v6 = *a1;
  *v5 = v6;
  return v5;
}
