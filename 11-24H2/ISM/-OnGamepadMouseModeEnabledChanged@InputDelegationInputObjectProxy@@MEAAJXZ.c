/*
 * XREFs of ?OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180133CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180107E9C (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x1801082B8 (-SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?GetProcessId@InputSite@@QEBAIXZ @ 0x18012FF14 (-GetProcessId@InputSite@@QEBAIXZ.c)
 *     ?GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ @ 0x180133250 (-GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnGamepadMouseModeEnabledChanged(InputSite **this)
{
  bool TailButtonLongPressedEventsRequired; // bl
  int ProcessId; // edi
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax

  TailButtonLongPressedEventsRequired = BamoPenEventsClientProxy::GetTailButtonLongPressedEventsRequired((BamoPenEventsClientProxy *)(this + 1));
  ProcessId = InputSite::GetProcessId(this[12]);
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  if ( TailButtonLongPressedEventsRequired )
    GamepadInterceptionHelper::SetGamepadMouseModeEnabled(GamepadInterceptionHelper, ProcessId);
  else
    GamepadInterceptionHelper::ClearGamepadMouseModeEnabled(GamepadInterceptionHelper, ProcessId);
  return 0LL;
}
