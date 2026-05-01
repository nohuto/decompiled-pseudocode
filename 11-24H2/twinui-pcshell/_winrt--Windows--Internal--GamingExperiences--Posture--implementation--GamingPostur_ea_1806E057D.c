/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x1806E057D
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z @ 0x1802B45CC (--$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18032E624 (-ContinueOnCurrentThread@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$.c)
 *     ?wnf_is_published_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x180338738 (-wnf_is_published_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync__ResumeCoro_1_::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r9
  bool *v5; // r8
  struct wil::WNF_CHANGE_STAMP_STRUCT *v6; // r9
  int is_published_nothrow; // eax
  char v8; // al
  int v10; // [rsp+20h] [rbp-28h]

  v3 = *(_QWORD *)(a2 + 56);
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(v3 + 32),
    (wil::ActivityThreadWatcher *)(v3 + 784));
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 200),
    (void *)0x11D,
    (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
    v4);
  *(_BYTE *)(v3 + 920) = 0;
  is_published_nothrow = wil::wnf_is_published_nothrow(
                           (wil *)&WNF_GAME_IS_GAMING_POSTURE_ACTIVE,
                           (const struct _WNF_STATE_NAME *)(v3 + 920),
                           v5,
                           v6);
  if ( is_published_nothrow < 0 )
    wil::details::in1diag3::Throw_Hr(
      *(wil::details::in1diag3 **)(a2 + 200),
      (void *)0x342,
      (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
      (const char *)(unsigned int)is_published_nothrow,
      v10);
  v8 = *(_BYTE *)(v3 + 920);
  *(_BYTE *)(a2 + 48) = v8;
  if ( !v8 )
  {
    *(_DWORD *)(v3 + 864) = 0;
    wil::wnf_publish<int>(&WNF_GAME_IS_GAMING_POSTURE_ACTIVE, v3 + 864);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(v3 + 784));
  return 0LL;
}
