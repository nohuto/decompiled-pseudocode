/*
 * XREFs of ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180372200
 * Callers:
 *     _lambda_7814559f2e5978e3931afcf6062d6abe_::operator() @ 0x180296598 (_lambda_7814559f2e5978e3931afcf6062d6abe_--operator().c)
 *     ?SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z @ 0x18036FE10 (-SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036E254 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036FF20 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::put_IsVisible(CActionCenterExperienceManager *this, char a2)
{
  int v2; // r9d
  CActionCenterExperienceManager *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 36);
  if ( (v2 == 2) != (a2 != 0) )
  {
    v3 = (CActionCenterExperienceManager *)((char *)this - 24);
    if ( v2 == 2 )
    {
      v4 = CActionCenterExperienceManager::Hide(v3);
      if ( v4 < 0 )
      {
        v5 = 460LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = CActionCenterExperienceManager::Show(v3);
      if ( v4 < 0 )
      {
        v5 = 464LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
