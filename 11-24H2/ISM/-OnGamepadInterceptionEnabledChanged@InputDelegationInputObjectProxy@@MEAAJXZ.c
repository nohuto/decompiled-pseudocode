/*
 * XREFs of ?OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180133A80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077120 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x180107D0C (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 *     ?SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@Z @ 0x180108124 (-SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@.c)
 *     ?OnGamepadInterceptionStarted@BamoInputDelegationInputObjectProxy@@UEAAJXZ @ 0x180133B20 (-OnGamepadInterceptionStarted@BamoInputDelegationInputObjectProxy@@UEAAJXZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnGamepadInterceptionEnabledChanged(
        InputDelegationInputObjectProxy *this)
{
  BamoInputDelegationInputObjectProxy *v2; // rdi
  unsigned __int64 v3; // rsi
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  GamepadInterceptionHelper *v5; // rax

  if ( *((_BYTE *)this + 128) )
  {
    v2 = (InputDelegationInputObjectProxy *)((char *)this + 8);
    v3 = (unsigned __int64)this + 72;
    if ( BamoShellGesturesClientProxy::GetTouchEnabled((InputDelegationInputObjectProxy *)((char *)this + 8)) )
    {
      GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
      if ( GamepadInterceptionHelper::SetGamepadInterceptionTarget(
             GamepadInterceptionHelper,
             (struct IGamepadInterceptionTarget *)(v3 & -(__int64)(this != 0LL))) )
      {
        BamoInputDelegationInputObjectProxy::OnGamepadInterceptionStarted(v2);
      }
    }
    else
    {
      v5 = ISMStatics::GetGamepadInterceptionHelper();
      GamepadInterceptionHelper::ClearGamepadInterceptionTarget(
        v5,
        (struct IGamepadInterceptionTarget *)(v3 & -(__int64)(this != 0LL)));
    }
  }
  return 0LL;
}
