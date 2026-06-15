/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180065AE4
 * Callers:
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$24 @ 0x18015EFB0 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$24.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$61 @ 0x18015EFD4 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$61.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$2 @ 0x180161D3E (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$2.c)
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$0 @ 0x180162681 (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$0.c)
 *     _CSpatialAudioTech::GetAtmosCheck_::_1_::dtor$0 @ 0x180163233 (_CSpatialAudioTech--GetAtmosCheck_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::ResetState_::_1_::dtor$0 @ 0x180167D27 (_SpatialAudioDeviceStateWriter--ResetState_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnExclusiveModeChange_::_1_::dtor$0 @ 0x180168B83 (_CExclusiveModeListener--OnExclusiveModeChange_--_1_--dtor$0.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::dtor$0 @ 0x180168B95 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialVssSelectionMode_::_1_::dtor$0 @ 0x180168BEA (_SpatialAudioDeviceStateWriter--SetSpatialVssSelectionMode_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$0 @ 0x180168C3F (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$0.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::dtor$1 @ 0x180168D1B (_AtmosCheck--AddArrayToLicenseMap_--_1_--dtor$1.c)
 *     _AtmosCheck::IsLogLicenseResult_::_1_::dtor$0 @ 0x180168D69 (_AtmosCheck--IsLogLicenseResult_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
