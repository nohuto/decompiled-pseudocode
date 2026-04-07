/*
 * XREFs of ?NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z @ 0x18000D740
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800834A0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 * Callees:
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18000D7AC (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18000D964 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CContactManager::NotifyDesktopSwitch(CContactManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int refreshed; // eax

  v2 = CContactManager::Reset(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x7BDu, 0LL);
  }
  else
  {
    refreshed = CContactManager::RefreshPresentationModeSettings(this);
    v3 = refreshed;
    if ( refreshed < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, refreshed, 0x7BEu, 0LL);
  }
  return v3;
}
