/*
 * XREFs of ?IsInputTargetThreadInInputSwitchHost@CControlCenterExperienceManager@@UEAAJKPEAH@Z @ 0x180375290
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CControlCenterExperienceManager::IsInputTargetThreadInInputSwitchHost(
        CControlCenterExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int *a3)
{
  int v3; // ebx
  int v5; // esi
  ExperienceManagerUtils *v6; // rcx
  HWND v7; // rax

  v3 = 0;
  *a3 = 0;
  v5 = (int)a2;
  v6 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v6, a2);
    LOBYTE(v3) = v5 == GetWindowThreadProcessId(v7, 0LL);
    *a3 = v3;
  }
  return 0LL;
}
