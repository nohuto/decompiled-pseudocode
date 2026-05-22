/*
 * XREFs of ?OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z @ 0x1800CB9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GameControllerRawInputProvider::OnGamepadInterceptionTargetProcessChanged(
        GameControllerRawInputProvider *this,
        int a2)
{
  *((_DWORD *)this + 36) = a2;
  GameControllerRawInputProvider::UpdateFocusPids((GameControllerRawInputProvider *)((char *)this - 24));
}
