/*
 * XREFs of ??1CComBSTR@ATL@@QEAA@XZ @ 0x180073BE0
 * Callers:
 *     _CAppAudioSessionId::CalculateStaticId_::_1_::dtor$1 @ 0x18015F340 (_CAppAudioSessionId--CalculateStaticId_--_1_--dtor$1.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$10 @ 0x180167B58 (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$10.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$12 @ 0x180167B6A (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$12.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$22 @ 0x180167B8E (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$22.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComBSTR::~CComBSTR(BSTR *this)
{
  SysFreeString(*this);
}
