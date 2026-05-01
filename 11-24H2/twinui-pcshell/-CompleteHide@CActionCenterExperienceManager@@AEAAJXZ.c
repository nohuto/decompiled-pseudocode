/*
 * XREFs of ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036CE58
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E6C60 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036E254 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28132f5df19164a3808f46d0aa9e9f4d___::Run @ 0x18036FD60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28132f5df19164a3808f46d0aa9e9f4d___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1800AEAEC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036FC24 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ @ 0x1803720F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::CompleteHide(CActionCenterExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 42) != 2 )
    goto LABEL_11;
  v2 = CActionCenterExperienceManager::ReturnFocus(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x430,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = CSingleViewShellExperience::Hide((__int64)this + 128, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x431,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
LABEL_11:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_38762814>::GetImpl'::`2'::impl) )
    {
      *((_DWORD *)this + 214) = 0;
      *((_DWORD *)this + 215) = 0;
    }
    result = 0LL;
    *((_OWORD *)this + 40) = 0LL;
  }
  return result;
}
