/*
 * XREFs of ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180087DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D738 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x180072A14 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A8AC4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x180105EDC (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180106018 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010606C (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAA_NXZ @ 0x18013259C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801325D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@.c)
 */

void __fastcall InputDelegationInputObjectProxy::OnRemovedFromInputSite(struct InputSite **this)
{
  ForegroundManager *ForegroundManager; // rax
  const char *v3; // r9
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  struct GamepadInterceptionHelper *v5; // rax
  struct InputSite *v6; // rbx
  GamepadInterceptionHelper *v7; // rsi
  unsigned int ProcessId; // eax
  __int64 v9; // rcx
  struct GamepadInterceptionHelper *v10; // rax
  struct InputSite *v11; // rbx
  GamepadInterceptionHelper *v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rcx

  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::ClearInputDelegation(ForegroundManager, this[4], *((_DWORD *)this + 15), v3);
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  GamepadInterceptionHelper::ClearGamepadInterceptionTarget(
    GamepadInterceptionHelper,
    (struct IGamepadInterceptionTarget *)((unsigned __int64)(this + 1) & -(__int64)(this != (struct InputSite **)64)));
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::GetImpl'::`2'::impl) )
  {
    v5 = ISMStatics::GetGamepadInterceptionHelper();
    v6 = this[4];
    v7 = v5;
    ProcessId = *((_DWORD *)v6 + 10);
    if ( !ProcessId )
    {
      v9 = *((_QWORD *)v6 + 61);
      if ( v9 != *((_QWORD *)v6 + 62) )
      {
        ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)v9 + 32LL)
                                                                                                  + 16LL));
        *((_DWORD *)v6 + 10) = ProcessId;
      }
    }
    GamepadInterceptionHelper::ClearGamepadKeyRoutingEnabled(v7, ProcessId);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl) )
  {
    v10 = ISMStatics::GetGamepadInterceptionHelper();
    v11 = this[4];
    v12 = v10;
    v13 = *((_DWORD *)v11 + 10);
    if ( !v13 )
    {
      v14 = *((_QWORD *)v11 + 61);
      if ( v14 != *((_QWORD *)v11 + 62) )
      {
        v13 = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)v14 + 32LL)
                                                                                            + 16LL));
        *((_DWORD *)v11 + 10) = v13;
      }
    }
    GamepadInterceptionHelper::ClearGamepadMouseModeEnabled(v12, v13);
  }
  this[4] = 0LL;
}
