/*
 * XREFs of ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180012188
 * Callers:
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180012170 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800D9B5C (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180049728 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTouchVisual::UnRegisterGlobalTimer(CTouchVisual *this)
{
  if ( *((_BYTE *)this + 240) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 240) = 0;
  }
  return 0LL;
}
