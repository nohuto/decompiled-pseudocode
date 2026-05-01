/*
 * XREFs of wil::details::functor_wrapper_void__lambda_93cac9cad1f570776af354fa4b60c55e__&_::Run @ 0x180439A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800568DC (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180438FA8 (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_93cac9cad1f570776af354fa4b60c55e____::Run(__int64 a1)
{
  CToastCenterExperienceManager **v1; // rbx
  CToastCenterExperienceManager *v2; // rcx
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(CToastCenterExperienceManager ***)(a1 + 8);
  *((_BYTE *)*v1 + 467) = *(_BYTE *)v1[1];
  v2 = *v1;
  if ( *((_DWORD *)*v1 + 36) == 2 )
  {
    if ( *((_BYTE *)v2 + 467) )
    {
      v3 = CToastCenterExperienceManager::Hide(v2);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E6,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
    }
  }
  v4 = CToastCenterExperienceManager::RaisePropertyChangedEvent(*v1, L"NewToastShouldPeek", *((_BYTE *)*v1 + 467));
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1EA,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
