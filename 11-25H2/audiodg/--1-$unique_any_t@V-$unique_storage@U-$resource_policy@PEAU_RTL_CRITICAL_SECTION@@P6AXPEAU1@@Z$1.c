/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14002CAA8
 * Callers:
 *     _CAPOProcessingHostObject::QueueNotification_::_1_::dtor$0 @ 0x140091C51 (_CAPOProcessingHostObject--QueueNotification_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Remove_::_1_::dtor$0 @ 0x140092AED (_CSystemAudioDeviceCollection--Remove_--_1_--dtor$0.c)
 *     _CSubmixImpl::DeleteExistingFormatConverter_::_1_::dtor$0 @ 0x140092BEB (_CSubmixImpl--DeleteExistingFormatConverter_--_1_--dtor$0.c)
 *     _CRTThreadManager::GetApoWorkQueueId_::_1_::dtor$1 @ 0x140092CE0 (_CRTThreadManager--GetApoWorkQueueId_--_1_--dtor$1.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient_::_1_::dtor$0 @ 0x140092D8E (_CAudioSystemEffectsPropertyChangeNotificationsHandler--AddNotificationClient_--_1_--dtor$0.c)
 *     _CSubmixImpl::OnConnectedToStream_::_1_::dtor$1 @ 0x140092EB1 (_CSubmixImpl--OnConnectedToStream_--_1_--dtor$1.c)
 *     _CAPOEndpointNotificationsHandler::OnPropertyValueChanged_::_1_::dtor$1 @ 0x140092F50 (_CAPOEndpointNotificationsHandler--OnPropertyValueChanged_--_1_--dtor$1.c)
 *     _CAudioPump::CheckForPause_::_1_::dtor$1 @ 0x140093160 (_CAudioPump--CheckForPause_--_1_--dtor$1.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$1 @ 0x1400931C0 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$1.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$2 @ 0x1400931E0 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$2.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x14009380C (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x140093830 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$0 @ 0x1400945B8 (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$0.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$2 @ 0x1400945DC (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$2.c)
 *     _CAPOProcessingHost::GetMicBoostNotificationHandler_::_1_::dtor$0 @ 0x140095613 (_CAPOProcessingHost--GetMicBoostNotificationHandler_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$0 @ 0x140096013 (_CAudioDeviceGraph--Initialize_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$7 @ 0x14009605B (_CAudioDeviceGraph--Initialize_--_1_--dtor$7.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x1400960BC (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
 *     _CBridgeSourceEndpoint::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1400962D1 (_CBridgeSourceEndpoint--RuntimeClassInitialize_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
