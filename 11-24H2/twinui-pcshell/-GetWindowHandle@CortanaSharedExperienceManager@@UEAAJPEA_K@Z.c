/*
 * XREFs of ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x18037B460
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetHwnd@CortanaSharedExperienceManager@@AEAAPEAUHWND__@@XZ @ 0x18037EFA4 (-_GetHwnd@CortanaSharedExperienceManager@@AEAAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::GetWindowHandle(CortanaSharedExperienceManager *this, HWND *a2)
{
  HWND Hwnd; // rax

  Hwnd = CortanaSharedExperienceManager::_GetHwnd(this);
  *a2 = Hwnd;
  return Hwnd == 0LL ? 0x8007139F : 0;
}
