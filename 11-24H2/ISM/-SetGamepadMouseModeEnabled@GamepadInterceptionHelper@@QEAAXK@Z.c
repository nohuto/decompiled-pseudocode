/*
 * XREFs of ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x1801082B8
 * Callers:
 *     ?OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180133CF0 (-OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800245F0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix@@@details@wil@@QEAA_NXZ @ 0x1800CE894 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_Li.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3F1C (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ??$_Emplace@AEBK@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@KPEAX@std@@_N@1@AEBK@Z @ 0x180106C18 (--$_Emplace@AEBK@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@IEAA-A.c)
 *     ?EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ @ 0x1801759B0 (-EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamepadInterceptionHelper::SetGamepadMouseModeEnabled(GamepadInterceptionHelper *this, int a2)
{
  __int64 v3; // rsi
  ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  _QWORD *i; // rbx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = a2;
  if ( !IsEdition(253345LL) )
  {
    v3 = *((_QWORD *)this + 12);
    std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
      (__int64 *)this + 11,
      (__int64)&v10,
      &v9);
    if ( v10 == *((_QWORD *)this + 11) )
      std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Emplace<unsigned long const &>(
        (__int64 *)this + 11,
        (__int64)v8,
        &v9);
    if ( !v3 )
    {
      ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
      ControllerNavigationManager::EnableControllerMouseMode(ControllerNavigationManager);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::GetImpl'::`2'::impl) )
      {
        v6 = (_QWORD *)*((_QWORD *)this + 7);
        for ( i = (_QWORD *)*((_QWORD *)this + 6); i != v6; ++i )
        {
          LOBYTE(v5) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 32LL))(*i, v5);
        }
      }
    }
  }
}
