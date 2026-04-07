/*
 * XREFs of ?SignalDesktopModeSwitchImpl@CAnalogCompositorManager@@AEAAJ_K@Z @ 0x180086F40
 * Callers:
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18006FBCC (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogCompositorManager::SignalDesktopModeSwitchImpl(CAnalogCompositorManager *this, __int64 a2)
{
  *((_QWORD *)this + 8) = a2;
  return CAnalogCompositorManager::UpdateHolographicLockState(this);
}
