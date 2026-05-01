/*
 * XREFs of ??1LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAA@XZ @ 0x180348660
 * Callers:
 *     ??4LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180348AE8 (--4LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806E2D50 (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18034C5E0 (-Destroy@-$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall GamingOverlayTelemetry::LaunchForResultsAsyncActivity::~LaunchForResultsAsyncActivity(
        GamingOverlayTelemetry::LaunchForResultsAsyncActivity *this)
{
  *(_QWORD *)this = &GamingOverlayTelemetry::LaunchForResultsAsyncActivity::`vftable';
  wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
