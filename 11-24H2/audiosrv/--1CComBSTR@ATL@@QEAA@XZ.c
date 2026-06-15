/*
 * XREFs of ??1CComBSTR@ATL@@QEAA@XZ @ 0x180063BE0
 * Callers:
 *     _CAppAudioSessionId::CalculateStaticId_::_1_::dtor$1 @ 0x180168DB0 (_CAppAudioSessionId--CalculateStaticId_--_1_--dtor$1.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$7 @ 0x1801710B2 (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$7.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$9 @ 0x1801710D6 (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$9.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$19 @ 0x1801710E8 (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$19.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComBSTR::~CComBSTR(BSTR *this)
{
  SysFreeString(*this);
}
