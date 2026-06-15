/*
 * XREFs of ??1?$CAtlList@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAA@XZ @ 0x18011E500
 * Callers:
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$3 @ 0x18017108E (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 ATL::CAtlList<wil::com_ptr_t<IPart,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IPart,wil::err_returncode_policy>>>::~CAtlList<wil::com_ptr_t<IPart,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IPart,wil::err_returncode_policy>>>()
{
  return ATL::CAtlList<wil::com_ptr_t<IPart,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IPart,wil::err_returncode_policy>>>::RemoveAll();
}
