/*
 * XREFs of ?SetMute@SessionInfoItem@GamingAudio@@QEAAJH@Z @ 0x180368494
 * Callers:
 *     ?SetMute@AppList@GamingAudio@@QEAAJHH@Z @ 0x1803683D8 (-SetMute@AppList@GamingAudio@@QEAAJHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingAudio::SessionInfoItem::SetMute(GamingAudio::SessionInfoItem *this, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  v4 = *((_QWORD *)this + 93);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, a2, 0LL);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *((_DWORD *)this + 17) = v3;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE9,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
