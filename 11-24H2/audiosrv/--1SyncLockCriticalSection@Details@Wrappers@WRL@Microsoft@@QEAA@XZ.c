/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180058C84
 * Callers:
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$0 @ 0x180168592 (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$0.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$24 @ 0x1801687D2 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$24.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$61 @ 0x1801687F6 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$61.c)
 *     _AtmosCheck::GetLicenseStatusForEndpointId_::_1_::dtor$3 @ 0x18016B8A3 (_AtmosCheck--GetLicenseStatusForEndpointId_--_1_--dtor$3.c)
 *     _CSpatialAudioTech::GetAtmosCheck_::_1_::dtor$0 @ 0x18016C4D9 (_CSpatialAudioTech--GetAtmosCheck_--_1_--dtor$0.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$2 @ 0x180171281 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$2.c)
 *     _SpatialAudioDeviceStateWriter::ResetState_::_1_::dtor$0 @ 0x180171293 (_SpatialAudioDeviceStateWriter--ResetState_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnExclusiveModeChange_::_1_::dtor$0 @ 0x1801722BD (_CExclusiveModeListener--OnExclusiveModeChange_--_1_--dtor$0.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::dtor$0 @ 0x1801722CF (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialVssSelectionMode_::_1_::dtor$0 @ 0x180172324 (_SpatialAudioDeviceStateWriter--SetSpatialVssSelectionMode_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$0 @ 0x180172379 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$0.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::dtor$1 @ 0x1801724CD (_AtmosCheck--AddArrayToLicenseMap_--_1_--dtor$1.c)
 *     _AtmosCheck::IsLogLicenseResult_::_1_::dtor$0 @ 0x18017251B (_AtmosCheck--IsLogLicenseResult_--_1_--dtor$0.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$0 @ 0x1801725DC (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$0.c)
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
