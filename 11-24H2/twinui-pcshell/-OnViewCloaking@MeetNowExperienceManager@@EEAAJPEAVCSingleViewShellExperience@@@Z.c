/*
 * XREFs of ?OnViewCloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CA3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802B8504 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnViewCloaking(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // r8d
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 92;
  v3 = *((_DWORD *)this + 94);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          v2 = 91;
      }
      else
      {
        v2 = 89;
      }
    }
    else
    {
      v2 = 90;
    }
  }
  else
  {
    v2 = 88;
  }
  v6 = CExperienceManagerAnimationHelper::Begin(
         (__int64)this + 80,
         *((ExperienceManagerUtils **)this + 19),
         v2 | 0x20000000u,
         (__int64)this,
         v8,
         v9,
         v10,
         (__int64)this + 336);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x222,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  return 0LL;
}
