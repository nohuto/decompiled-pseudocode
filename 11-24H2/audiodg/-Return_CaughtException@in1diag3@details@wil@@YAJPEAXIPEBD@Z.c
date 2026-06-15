/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005DEF4
 * Callers:
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::catch$35 @ 0x14009279C (_CAPOProcessingHost--RegisterAPONotifications_--_1_--catch$35.c)
 *     _CAPOProcessingHostObject::StartSendingNotifications_::_1_::catch$8 @ 0x1400927F0 (_CAPOProcessingHostObject--StartSendingNotifications_--_1_--catch$8.c)
 *     _CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler_::_1_::catch$15 @ 0x140092937 (_CAPOProcessingHost--GetAudioSystemEffectPropertyChangeNotificationHandler_--_1_--catch$15.c)
 *     _CAPOProcessingHost::GetEndpointNotificationHandler_::_1_::catch$17 @ 0x140092973 (_CAPOProcessingHost--GetEndpointNotificationHandler_--_1_--catch$17.c)
 *     _CAPOProcessingHost::RegisterAPOWithProcessingHost_::_1_::catch$10 @ 0x140092A96 (_CAPOProcessingHost--RegisterAPOWithProcessingHost_--_1_--catch$10.c)
 *     _CSubmixImpl::OnConnectedToStream_::_1_::catch$21 @ 0x1400931E5 (_CSubmixImpl--OnConnectedToStream_--_1_--catch$21.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::RuntimeClassInitialize_::_1_::catch$0 @ 0x1400941FF (_CAudioSystemEffectsPropertyChangeNotificationsHandler--RuntimeClassInitialize_--_1_--catch$0.c)
 *     _CRTThreadManager::GetApoWorkQueueId_::_1_::catch$7 @ 0x140094CF4 (_CRTThreadManager--GetApoWorkQueueId_--_1_--catch$7.c)
 *     _CAPOEndpointNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x140094ECD (_CAPOEndpointNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x140094F36 (_CAudioSystemEffectsPropertyChangeNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CAPOProcessingHost::GetEnvironmentStateChangedNotificationHandler_::_1_::catch$10 @ 0x140095097 (_CAPOProcessingHost--GetEnvironmentStateChangedNotificationHandler_--_1_--catch$10.c)
 *     _CAPOProcessingHost::AddDeviceOrientationNotificationClient_::_1_::catch$0 @ 0x140095246 (_CAPOProcessingHost--AddDeviceOrientationNotificationClient_--_1_--catch$0.c)
 *     _CDeviceOrientationNotificationsHandler::AddNotificationClient_::_1_::catch$6 @ 0x140095282 (_CDeviceOrientationNotificationsHandler--AddNotificationClient_--_1_--catch$6.c)
 *     _CAPOEnvironmentStateChangedNotificationsHandler::AddNotificationClient_::_1_::catch$6 @ 0x140095938 (_CAPOEnvironmentStateChangedNotificationsHandler--AddNotificationClient_--_1_--catch$6.c)
 *     _CMicBoostNotificationsHandler::AddNotificationClient_::_1_::catch$6 @ 0x140095974 (_CMicBoostNotificationsHandler--AddNotificationClient_--_1_--catch$6.c)
 *     _CMicBoostNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$1 @ 0x1400959B0 (_CMicBoostNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$1.c)
 *     _CAPOProcessingHost::GetMicBoostNotificationHandler_::_1_::catch$13 @ 0x140095A10 (_CAPOProcessingHost--GetMicBoostNotificationHandler_--_1_--catch$13.c)
 *     _CBridgeSourceEndpoint::AddBridgeSourceEndpointConsumer_::_1_::catch$7 @ 0x140095CF5 (_CBridgeSourceEndpoint--AddBridgeSourceEndpointConsumer_--_1_--catch$7.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::catch$4 @ 0x140096F84 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--catch$4.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x14005B5AC (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
