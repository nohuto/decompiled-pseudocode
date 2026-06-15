/*
 * XREFs of ??$_Construct_in_place@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@std@@YAXAEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@Z @ 0x1800C0748
 * Callers:
 *     _lambda_1463bc8540bbc68486c0270114e39042_::operator() @ 0x1800C0A5C (_lambda_1463bc8540bbc68486c0270114e39042_--operator().c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Construct_in_place<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> const &>(
        _QWORD *a1,
        __int64 *a2)
{
  return ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(a1, *a2);
}
