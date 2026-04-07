/*
 * XREFs of ?ToggleLockBackstopImpl@CAnalogCompositorManager@@AEAAJ_N@Z @ 0x1800985E8
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180055EC4 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogCompositorManager::ToggleLockBackstopImpl(CAnalogCompositorManager *this, char a2)
{
  *((_BYTE *)this + 72) = a2;
  return CAnalogCompositorManager::UpdateHolographicLockState(this);
}
