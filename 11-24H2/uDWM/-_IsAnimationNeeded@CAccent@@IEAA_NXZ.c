/*
 * XREFs of ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180066834
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800659E4 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180014F00 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180034C10 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180065C8C (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 */

bool __fastcall CAccent::_IsAnimationNeeded(CAccent *this)
{
  int v4; // r8d

  return CDesktopManager::IsWindowAnimationEnabled()
      && !(unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u)
      && *((_DWORD *)this + 67)
      && !CAccent::_AnyTransparentBackground(this)
      && (unsigned int)(v4 - 2) > 3;
}
