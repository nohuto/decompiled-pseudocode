/*
 * XREFs of ?SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z @ 0x18036FE10
 * Callers:
 *     _lambda_7814559f2e5978e3931afcf6062d6abe_::operator() @ 0x180296598 (_lambda_7814559f2e5978e3931afcf6062d6abe_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180372200 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SetVisibilityWithoutAnimations(
        CActionCenterExperienceManager *this,
        unsigned __int8 a2)
{
  int IsVisible; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 344) = 1;
  IsVisible = CActionCenterExperienceManager::put_IsVisible(this, a2);
  v4 = IsVisible;
  if ( IsVisible >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)IsVisible);
  *((_BYTE *)this + 344) = 0;
  return v4;
}
