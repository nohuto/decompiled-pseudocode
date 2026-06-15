/*
 * XREFs of ??1?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAA@XZ @ 0x18011E50C
 * Callers:
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$2 @ 0x18017107C (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$2.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$4 @ 0x1801710A0 (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::~CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>()
{
  return ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::RemoveAll();
}
