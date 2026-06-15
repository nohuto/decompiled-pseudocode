/*
 * XREFs of ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C
 * Callers:
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x18001581C (--1CPdcTimerActivation@@QEAA@XZ.c)
 *     ?TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180015B80 (-TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180016160 (-_Destroy@-$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ.c)
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180016730 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180016D04 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180017410 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x1800175D4 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18005DD98 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ?ReleaseSebReference@CSebNotifier@@QEAAXXZ @ 0x1800737DC (-ReleaseSebReference@CSebNotifier@@QEAAXXZ.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800750A0 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x180081FBC (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082958 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x180086C48 (-GetWorkItem@CWorkFifo@@AEAA-AV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ.c)
 *     ?RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800B4F70 (-RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800CE768 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     _lambda_35797e26c2f113dffb458279a808fd40_::_lambda_invoker_cdecl_ @ 0x180103190 (_lambda_35797e26c2f113dffb458279a808fd40_--_lambda_invoker_cdecl_.c)
 *     _lambda_a5b20f628b6b681ff62fc21fdf557568_::_lambda_invoker_cdecl_ @ 0x1801031E0 (_lambda_a5b20f628b6b681ff62fc21fdf557568_--_lambda_invoker_cdecl_.c)
 *     ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x180103D94 (-AcquirePowerReference@CXvmPowerReferenceManager@@QEAA-AV-$shared_ptr@VCXvmPowerReference@@@std@.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCCaptureReference@@@std@@EEAAXXZ @ 0x1801042B0 (-_Destroy@-$_Ref_count_obj2@VCCaptureReference@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCXvmPowerReference@@@std@@EEAAXXZ @ 0x180104320 (-_Destroy@-$_Ref_count_obj2@VCXvmPowerReference@@@std@@EEAAXXZ.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180118560 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Mutex_base::lock(std::_Mutex_base *this)
{
  if ( _Mtx_lock(this) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 7) == 0x7FFFFFFF )
  {
    *((_DWORD *)this + 7) = 2147483646;
    std::_Throw_Cpp_error(6);
    __debugbreak();
  }
}
