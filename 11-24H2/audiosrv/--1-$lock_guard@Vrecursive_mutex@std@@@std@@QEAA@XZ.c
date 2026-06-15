/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x180067DB8
 * Callers:
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x18016881A (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$10 @ 0x18016891D (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$10.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x180168A43 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x18016B3B7 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x18016C3EE (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::IncrementBidirectionalSaDeviceCount_::_1_::dtor$0 @ 0x18016E7BE (_CBtAudioResourceManagerBase--IncrementBidirectionalSaDeviceCount_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
