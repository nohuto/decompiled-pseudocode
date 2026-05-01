/*
 * XREFs of ??1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18032D3CC
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync_::_154_::_parameters_::__parameters_ @ 0x18032CE38 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032EAA0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EAA0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032EFD0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EFD0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x1803310C0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_1803310C0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 *     ?SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@0@Z @ 0x180333F68 (-SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803374F0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E01C6 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E01C6.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E0451 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E0451.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync_::_1_::dtor$0 @ 0x1806E0C06 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E0C06.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::dtor$6 @ 0x1806E11AC (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E11AC.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::dtor$7 @ 0x1806E11BE (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E11BE.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032E854 (-Destroy@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_Tl.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::~SetGamingPostureStateActivity(
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *this)
{
  *(_QWORD *)this = &GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::`vftable';
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
