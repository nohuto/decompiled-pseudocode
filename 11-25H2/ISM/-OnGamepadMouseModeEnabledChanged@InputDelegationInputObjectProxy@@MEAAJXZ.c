/*
 * XREFs of ?OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180131960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A8AC4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010606C (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x1801064B4 (-SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ @ 0x180130E50 (-GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnGamepadMouseModeEnabledChanged(
        InputDelegationInputObjectProxy *this)
{
  bool TailButtonLongPressedEventsRequired; // al
  __int64 v3; // rdi
  bool v4; // si
  int ProcessId; // ebx
  __int64 v6; // rax
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax

  TailButtonLongPressedEventsRequired = BamoPenEventsClientProxy::GetTailButtonLongPressedEventsRequired((InputDelegationInputObjectProxy *)((char *)this + 8));
  v3 = *((_QWORD *)this + 12);
  v4 = TailButtonLongPressedEventsRequired;
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
    GamepadInterceptionHelper::SetGamepadMouseModeEnabled(GamepadInterceptionHelper, ProcessId);
  else
    GamepadInterceptionHelper::ClearGamepadMouseModeEnabled(GamepadInterceptionHelper, ProcessId);
  return 0LL;
}
