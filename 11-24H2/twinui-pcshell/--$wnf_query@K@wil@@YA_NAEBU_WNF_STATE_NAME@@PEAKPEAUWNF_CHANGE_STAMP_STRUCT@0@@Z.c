/*
 * XREFs of ??$wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18032C3DC
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803374F0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 *     ?unsubscribe_from_services@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1803386B0 (-unsubscribe_from_services@GamingPostureController@implementation@Posture@GamingExperiences@Inte.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18032C42C (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

char __fastcall wil::wnf_query<unsigned long>(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  LOBYTE(v7) = 0;
  v3 = wil::wnf_query_nothrow<unsigned long>(&WNF_GAME_IS_GAMING_POSTURE_ACTIVE, &v7, a2);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x34B,
      (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
      (const char *)(unsigned int)v3,
      v5);
  return v7;
}
