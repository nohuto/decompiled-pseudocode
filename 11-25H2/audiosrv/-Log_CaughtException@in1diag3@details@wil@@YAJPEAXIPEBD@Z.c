/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BF348
 * Callers:
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$5 @ 0x18015F0E2 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$5.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$24 @ 0x18015F194 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$24.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$25 @ 0x18015F1D1 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$25.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$4 @ 0x18015F2BA (_CPlaybackNotifier--AcquireReference_--_1_--catch$4.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$6 @ 0x180160089 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$6.c)
 *     _EffectPack::CanProcessingModeBeParameterized_::_1_::catch$15 @ 0x18016102E (_EffectPack--CanProcessingModeBeParameterized_--_1_--catch$15.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$14 @ 0x18016253B (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$14.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$4 @ 0x180162AAA (_CCaptureNotifier--AcquireReference_--_1_--catch$4.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$0 @ 0x180162AE7 (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$0.c)
 *     _CPowerReferenceManager::EnsureCamMicUsageInitialized_::_1_::catch$9 @ 0x180162E03 (_CPowerReferenceManager--EnsureCamMicUsageInitialized_--_1_--catch$9.c)
 *     _GetConnectorTypeForStream_::_1_::catch$3 @ 0x18016367B (_GetConnectorTypeForStream_--_1_--catch$3.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$15 @ 0x180164520 (_CAudioResourceManager--DestroyStream_--_1_--catch$15.c)
 *     _CAudioStream::UpdatePMPStreamingEffectsOverride_::_1_::catch$0 @ 0x180164CCA (_CAudioStream--UpdatePMPStreamingEffectsOverride_--_1_--catch$0.c)
 *     _BluetoothBroadcastProvider::OnEndpointPropertyChanged_::_1_::catch$6 @ 0x180165906 (_BluetoothBroadcastProvider--OnEndpointPropertyChanged_--_1_--catch$6.c)
 *     _BluetoothBroadcastProvider::OnEndpointStateChanged_::_1_::catch$6 @ 0x180165967 (_BluetoothBroadcastProvider--OnEndpointStateChanged_--_1_--catch$6.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$10 @ 0x180166737 (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$10.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$0 @ 0x180166774 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$0.c)
 *     _DummyBroadcastProvider::OnEndpointPropertyChanged_::_1_::catch$6 @ 0x180166C23 (_DummyBroadcastProvider--OnEndpointPropertyChanged_--_1_--catch$6.c)
 *     _DummyBroadcastProvider::OnEndpointStateChanged_::_1_::catch$6 @ 0x180166C60 (_DummyBroadcastProvider--OnEndpointStateChanged_--_1_--catch$6.c)
 *     _EffectPack::PublishProcessingModeTelemetry_::_1_::catch$5 @ 0x1801682A4 (_EffectPack--PublishProcessingModeTelemetry_--_1_--catch$5.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800B6374 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
