/*
 * XREFs of ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A6AEC
 * Callers:
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1803A52C0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803A57B0 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?Show@RetailDemoExperienceManager@@UEAAJXZ @ 0x1803A5F40 (-Show@RetailDemoExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetTopmost@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A6998 (-_SetTopmost@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetWindowBand@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A6A9C (-_SetWindowBand@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RetailDemoExperienceManager::_Show(RetailDemoExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 25);
  if ( !v2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB3,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      v4);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, 0LL);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      v4);
  RetailDemoExperienceManager::_SetTopmost(this);
  RetailDemoExperienceManager::_SetWindowBand(this);
  if ( *((_BYTE *)this + 380) )
    RetailDemoExperienceManager::_Dock(this);
  else
    RetailDemoExperienceManager::_Float(this);
}
