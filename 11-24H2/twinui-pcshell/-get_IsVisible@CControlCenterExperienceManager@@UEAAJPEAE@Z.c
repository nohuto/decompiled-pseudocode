/*
 * XREFs of ?get_IsVisible@CControlCenterExperienceManager@@UEAAJPEAE@Z @ 0x1802272B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CControlCenterExperienceManager::get_IsVisible(CControlCenterExperienceManager *this, bool *a2)
{
  *a2 = *((_DWORD *)this + 34) == 2;
  return 0LL;
}
