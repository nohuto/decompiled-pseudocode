/*
 * XREFs of ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationTransition@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18008F988
 * Callers:
 *     ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x1800EC270 (-OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$try_as_with_reason@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIScreenRotationTransition@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@AEAUhresult@1@@Z @ 0x1800EC0E4 (--$try_as_with_reason@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Udwm_Transitions_Private_IScreenRotationTransition<winrt::Udwm::Transitions::Private::ScreenRotationTransition>::OnGlobalTimeUpdated(
        _QWORD *a1)
{
  unsigned int v1; // eax
  int v2; // [rsp+20h] [rbp-20h] BYREF
  __int128 v3; // [rsp+28h] [rbp-18h]
  unsigned int v4; // [rsp+50h] [rbp+10h] BYREF
  __int64 v5; // [rsp+58h] [rbp+18h] BYREF

  v4 = 0;
  winrt::impl::try_as_with_reason<winrt::Udwm::Transitions::Private::IScreenRotationTransition,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v5,
    *a1,
    &v4);
  v2 = 0;
  v3 = 0LL;
  winrt::check_hresult(&v4, v4, &v2);
  v2 = 0;
  v3 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
  winrt::check_hresult(&v4, v1, &v2);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v5);
}
