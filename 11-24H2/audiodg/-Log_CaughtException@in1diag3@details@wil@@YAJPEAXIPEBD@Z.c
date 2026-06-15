/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005F3E4
 * Callers:
 *     _GetModuleName_::_1_::catch$24 @ 0x140092886 (_GetModuleName_--_1_--catch$24.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient_::_1_::catch$0 @ 0x1400929C4 (_CAPOEndpointNotificationsHandler--AddEndpointVolumeNotificationClient_--_1_--catch$0.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient_::_1_::catch$6 @ 0x1400929FE (_CAudioSystemEffectsPropertyChangeNotificationsHandler--AddNotificationClient_--_1_--catch$6.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::catch$6 @ 0x140092A4A (_CAPOEndpointNotificationsHandler--AddEndpointPropertyChangeNotificationClient_--_1_--catch$6.c)
 *     _GetCompositeModuleInfo_::_1_::catch$29 @ 0x140094D66 (_GetCompositeModuleInfo_--_1_--catch$29.c)
 *     _GetCompositeModuleInfo_::_1_::catch$30 @ 0x140094DA3 (_GetCompositeModuleInfo_--_1_--catch$30.c)
 *     _GetCompositeModuleInfo_::_1_::catch$31 @ 0x140094DE0 (_GetCompositeModuleInfo_--_1_--catch$31.c)
 *     _GetCompositeModuleInfo_::_1_::catch$32 @ 0x140094E1D (_GetCompositeModuleInfo_--_1_--catch$32.c)
 *     _GetCompositeModuleInfo_::_1_::catch$33 @ 0x140094E5A (_GetCompositeModuleInfo_--_1_--catch$33.c)
 *     _GetClsidsFromVar_::_1_::catch$0 @ 0x140094F72 (_GetClsidsFromVar_--_1_--catch$0.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x14005EE48 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
