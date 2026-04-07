/*
 * XREFs of ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x18000AEFC
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000AD88 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180025CB4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180050824 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 */

bool __fastcall CAccent::_IsAnimationNeeded(CAccent *this)
{
  int v4; // r8d

  return *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
      && !CDesktopManager::CheckAnyPreference(0x10u)
      && *((_DWORD *)this + 79)
      && !CAccent::_AnyTransparentBackground(this)
      && (unsigned int)(v4 - 2) > 3;
}
