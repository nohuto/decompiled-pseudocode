/*
 * XREFs of ?IsSystemUiVisible@CActionCenterExperienceManager@@UEAAHXZ @ 0x18036E8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CActionCenterExperienceManager::IsSystemUiVisible(CActionCenterExperienceManager *this)
{
  return *((_DWORD *)this + 32) == 2;
}
