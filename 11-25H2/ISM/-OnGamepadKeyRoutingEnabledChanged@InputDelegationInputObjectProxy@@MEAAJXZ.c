/*
 * XREFs of ?OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x1801318D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x180081520 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A8AC4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180106018 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?SetGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180106450 (-SetGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnGamepadKeyRoutingEnabledChanged(
        InputDelegationInputObjectProxy *this)
{
  bool GesturesEnabled; // al
  __int64 v3; // rdi
  bool v4; // si
  unsigned int ProcessId; // ebx
  __int64 v6; // rax
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax

  GesturesEnabled = BamoMagnifierControllerProxy::GetGesturesEnabled((InputDelegationInputObjectProxy *)((char *)this + 8));
  v3 = *((_QWORD *)this + 12);
  v4 = GesturesEnabled;
  ProcessId = *(_DWORD *)(v3 + 40);
  if ( !ProcessId )
  {
    v6 = *(_QWORD *)(v3 + 488);
    if ( v6 != *(_QWORD *)(v3 + 496) )
    {
      ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)v6 + 32LL)
                                                                                                + 16LL));
      *(_DWORD *)(v3 + 40) = ProcessId;
    }
  }
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  if ( v4 )
    GamepadInterceptionHelper::SetGamepadKeyRoutingEnabled(GamepadInterceptionHelper, ProcessId);
  else
    GamepadInterceptionHelper::ClearGamepadKeyRoutingEnabled(GamepadInterceptionHelper, ProcessId);
  return 0LL;
}
