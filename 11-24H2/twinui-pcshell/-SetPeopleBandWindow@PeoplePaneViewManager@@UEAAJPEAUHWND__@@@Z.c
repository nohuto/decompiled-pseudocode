/*
 * XREFs of ?SetPeopleBandWindow@PeoplePaneViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180413360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PeoplePaneViewManager::SetPeopleBandWindow(PeoplePaneViewManager *this, HWND a2)
{
  *((_QWORD *)this + 60) = a2;
  return 0LL;
}
