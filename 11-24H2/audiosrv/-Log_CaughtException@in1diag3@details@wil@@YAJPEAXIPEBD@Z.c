/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BE458
 * Callers:
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$5 @ 0x18016887D (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$5.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$24 @ 0x18016892F (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$24.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$25 @ 0x18016896C (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$25.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$4 @ 0x180168A55 (_CPlaybackNotifier--AcquireReference_--_1_--catch$4.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$6 @ 0x1801691FB (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$6.c)
 *     _EffectPack::CanProcessingModeBeParameterized_::_1_::catch$15 @ 0x18016A62A (_EffectPack--CanProcessingModeBeParameterized_--_1_--catch$15.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$14 @ 0x18016B9DC (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$14.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$4 @ 0x18016BF3A (_CCaptureNotifier--AcquireReference_--_1_--catch$4.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$0 @ 0x18016BF77 (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$0.c)
 *     _CPowerReferenceManager::EnsureCamMicUsageInitialized_::_1_::catch$9 @ 0x18016C09A (_CPowerReferenceManager--EnsureCamMicUsageInitialized_--_1_--catch$9.c)
 *     _GetConnectorTypeForStream_::_1_::catch$3 @ 0x18016C9CE (_GetConnectorTypeForStream_--_1_--catch$3.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$20 @ 0x18016D9D0 (_CAudioResourceManager--DestroyStream_--_1_--catch$20.c)
 *     _CAudioStream::UpdatePMPStreamingEffectsOverride_::_1_::catch$0 @ 0x18016E1D5 (_CAudioStream--UpdatePMPStreamingEffectsOverride_--_1_--catch$0.c)
 *     _BluetoothBroadcastProvider::OnEndpointPropertyChanged_::_1_::catch$6 @ 0x18016EF90 (_BluetoothBroadcastProvider--OnEndpointPropertyChanged_--_1_--catch$6.c)
 *     _BluetoothBroadcastProvider::OnEndpointStateChanged_::_1_::catch$6 @ 0x18016EFF1 (_BluetoothBroadcastProvider--OnEndpointStateChanged_--_1_--catch$6.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$10 @ 0x18016FDE8 (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$10.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$0 @ 0x18016FE25 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$0.c)
 *     _EffectPack::PublishProcessingModeTelemetry_::_1_::catch$5 @ 0x180171969 (_EffectPack--PublishProcessingModeTelemetry_--_1_--catch$5.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800B5758 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
