/*
 * XREFs of ?_Close@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A60B4
 * Callers:
 *     ?Close@RetailDemoExperienceManager@@UEAAJXZ @ 0x1803A4DC0 (-Close@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1803A52C0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RetailDemoExperienceManager::_Close(RetailDemoExperienceManager *this)
{
  __int64 v1; // rcx
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 30);
  if ( !v1 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDE,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      v3);
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 344LL))(v1, 0LL);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v2,
      v3);
}
