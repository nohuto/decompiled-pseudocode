/*
 * XREFs of ?event_is_signaled@wil@@YA_NPEAX@Z @ 0x1803368D8
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_ResumeCoro$1 @ 0x180335200 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180335200.c)
 *     ?Acknowledge@GamingOverlayExperienceManager@@UEAAJI@Z @ 0x18034B5B0 (-Acknowledge@GamingOverlayExperienceManager@@UEAAJI@Z.c)
 *     ?ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180358E20 (-ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@W.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall wil::event_is_signaled(HANDLE hHandle, void *a2)
{
  DWORD v3; // eax
  const char *v4; // r9
  DWORD v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = WaitForSingleObjectEx(hHandle, 0, 0);
  v5 = v3;
  if ( v3 != 258 && (v3 || WaitForSingleObjectEx(hHandle, 0, 0)) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xADC,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v4);
  return v5 == 0;
}
