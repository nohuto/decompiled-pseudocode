/*
 * XREFs of _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$8 @ 0x180170DFC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)(a2 + 120));
}
