/*
 * XREFs of ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180088610
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D4C8 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x180072744 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x180107D0C (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180107E48 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180107E9C (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?GetProcessId@InputSite@@QEBAIXZ @ 0x18012FF14 (-GetProcessId@InputSite@@QEBAIXZ.c)
 */

void __fastcall InputDelegationInputObjectProxy::OnRemovedFromInputSite(struct InputSite **this)
{
  ForegroundManager *ForegroundManager; // rax
  const char *v3; // r9
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  GamepadInterceptionHelper *v5; // rbx
  unsigned int ProcessId; // eax
  GamepadInterceptionHelper *v7; // rbx
  unsigned int v8; // eax

  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::ClearInputDelegation(ForegroundManager, this[4], *((_DWORD *)this + 15), v3);
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  GamepadInterceptionHelper::ClearGamepadInterceptionTarget(
    GamepadInterceptionHelper,
    (struct IGamepadInterceptionTarget *)((unsigned __int64)(this + 1) & -(__int64)(this != (struct InputSite **)64)));
  v5 = ISMStatics::GetGamepadInterceptionHelper();
  ProcessId = InputSite::GetProcessId(this[4]);
  GamepadInterceptionHelper::ClearGamepadKeyRoutingEnabled(v5, ProcessId);
  v7 = ISMStatics::GetGamepadInterceptionHelper();
  v8 = InputSite::GetProcessId(this[4]);
  GamepadInterceptionHelper::ClearGamepadMouseModeEnabled(v7, v8);
  this[4] = 0LL;
}
