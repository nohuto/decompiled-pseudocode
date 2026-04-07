/*
 * XREFs of ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18007A3B8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x180009A3C (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B84E0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?CleanupThemeStatics@CWindowIconic@@SAXXZ @ 0x18007A4D4 (-CleanupThemeStatics@CWindowIconic@@SAXXZ.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x18007A4E8 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?CleanupThemeStatics@CWindowList@@QEAAXXZ @ 0x18007A5C0 (-CleanupThemeStatics@CWindowList@@QEAAXXZ.c)
 *     IsOpenThemeDataPresent @ 0x18009CA90 (IsOpenThemeDataPresent.c)
 */

void __fastcall CDesktopManager::UnloadTheme(CDesktopManager *this)
{
  CWindowList *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  HMODULE v8; // rcx

  if ( (unsigned __int8)IsOpenThemeDataPresent() )
  {
    v2 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
    if ( v2 )
      CWindowList::CleanupThemeStatics(v2);
    CTopLevelWindow::CleanupThemeStatics();
    CWindowIconic::CleanupThemeStatics();
    v3 = (void *)*((_QWORD *)this + 70);
    if ( v3 )
    {
      CloseThemeData(v3);
      *((_QWORD *)this + 70) = 0LL;
    }
    v4 = (void *)*((_QWORD *)this + 137);
    if ( v4 )
    {
      CloseThemeData(v4);
      *((_QWORD *)this + 137) = 0LL;
    }
    v5 = (void *)*((_QWORD *)this + 138);
    if ( v5 )
    {
      CloseThemeData(v5);
      *((_QWORD *)this + 138) = 0LL;
    }
    v6 = (void *)*((_QWORD *)this + 139);
    if ( v6 )
    {
      CloseThemeData(v6);
      *((_QWORD *)this + 139) = 0LL;
    }
    v7 = (void *)*((_QWORD *)this + 140);
    if ( v7 )
    {
      CloseThemeData(v7);
      *((_QWORD *)this + 140) = 0LL;
    }
    v8 = (HMODULE)*((_QWORD *)this + 136);
    if ( v8 )
    {
      FreeLibrary(v8);
      *((_QWORD *)this + 136) = 0LL;
    }
  }
}
