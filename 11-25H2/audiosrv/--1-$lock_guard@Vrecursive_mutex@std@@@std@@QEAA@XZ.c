/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x180077F78
 * Callers:
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x18015F07F (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$10 @ 0x18015F182 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$10.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x18015F2A8 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x1801620A7 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x18016308E (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
