/*
 * XREFs of ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x1801064B4
 * Callers:
 *     ?OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180131960 (-OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180024020 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D0ACC (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ??$_Emplace@AEBK@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@KPEAX@std@@_N@1@AEBK@Z @ 0x180104E18 (--$_Emplace@AEBK@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@IEAA-A.c)
 *     ?EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ @ 0x180174B04 (-EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ.c)
 */

void __fastcall GamepadInterceptionHelper::SetGamepadMouseModeEnabled(GamepadInterceptionHelper *this, int a2)
{
  __int64 v3; // rdi
  ControllerNavigationManager *ControllerNavigationManager; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  if ( !IsEdition(253345LL) )
  {
    v3 = *((_QWORD *)this + 12);
    std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
      (__int64 *)this + 11,
      (__int64)&v7,
      &v6);
    if ( v7 == *((_QWORD *)this + 11) )
      std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Emplace<unsigned long const &>(
        (__int64 *)this + 11,
        (__int64)v5,
        &v6);
    if ( !v3 )
    {
      ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
      ControllerNavigationManager::EnableControllerMouseMode(ControllerNavigationManager);
    }
  }
}
