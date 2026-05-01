/*
 * XREFs of ?OnViewUncloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CB020
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802B8504 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z @ 0x1803CB154 (-PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnViewUncloaking(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  __int64 v4; // r9
  int v5; // r8d
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = MeetNowExperienceManager::PositionFlyout((char *)this - 56, *(_QWORD *)((char *)a2 + 44));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v5 = 92;
  v6 = *((_DWORD *)this + 94);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          v5 = 90;
      }
      else
      {
        v5 = 88;
      }
    }
    else
    {
      v5 = 91;
    }
  }
  else
  {
    v5 = 89;
  }
  v9 = CExperienceManagerAnimationHelper::Begin(
         (__int64)this + 48,
         *((ExperienceManagerUtils **)this + 19),
         v5 | 0x200000u,
         v4,
         v11,
         v12,
         v13,
         (__int64)this + 336);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1FF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  return 0LL;
}
