/*
 * XREFs of ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18001E6D8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B36AC (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x18001E7FC (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180050CC0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::UnloadTheme(CDesktopManager *this)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  HMODULE v8; // rcx

  if ( (unsigned __int8)IsOpenThemeDataPresent() )
  {
    v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
    if ( v2 && *(_QWORD *)(v2 + 536) )
    {
      (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      *(_QWORD *)(v2 + 536) = 0LL;
    }
    CTopLevelWindow::CleanupThemeStatics();
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages, 1);
    v3 = (void *)*((_QWORD *)this + 69);
    if ( v3 )
    {
      CloseThemeData(v3);
      *((_QWORD *)this + 69) = 0LL;
    }
    v4 = (void *)*((_QWORD *)this + 71);
    if ( v4 )
    {
      CloseThemeData(v4);
      *((_QWORD *)this + 71) = 0LL;
    }
    v5 = (void *)*((_QWORD *)this + 72);
    if ( v5 )
    {
      CloseThemeData(v5);
      *((_QWORD *)this + 72) = 0LL;
    }
    v6 = (void *)*((_QWORD *)this + 73);
    if ( v6 )
    {
      CloseThemeData(v6);
      *((_QWORD *)this + 73) = 0LL;
    }
    v7 = (void *)*((_QWORD *)this + 74);
    if ( v7 )
    {
      CloseThemeData(v7);
      *((_QWORD *)this + 74) = 0LL;
    }
    v8 = (HMODULE)*((_QWORD *)this + 70);
    if ( v8 )
    {
      FreeLibrary(v8);
      *((_QWORD *)this + 70) = 0LL;
    }
  }
}
