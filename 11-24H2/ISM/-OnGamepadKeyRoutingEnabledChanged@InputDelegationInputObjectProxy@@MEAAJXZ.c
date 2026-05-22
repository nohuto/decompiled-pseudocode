/*
 * XREFs of ?OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180133C90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x1800815C0 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180107E48 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?SetGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180108254 (-SetGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?GetProcessId@InputSite@@QEBAIXZ @ 0x18012FF14 (-GetProcessId@InputSite@@QEBAIXZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnGamepadKeyRoutingEnabledChanged(InputSite **this)
{
  bool GesturesEnabled; // bl
  unsigned int ProcessId; // edi
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax

  GesturesEnabled = BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(this + 1));
  ProcessId = InputSite::GetProcessId(this[12]);
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  if ( GesturesEnabled )
    GamepadInterceptionHelper::SetGamepadKeyRoutingEnabled(GamepadInterceptionHelper, ProcessId);
  else
    GamepadInterceptionHelper::ClearGamepadKeyRoutingEnabled(GamepadInterceptionHelper, ProcessId);
  return 0LL;
}
