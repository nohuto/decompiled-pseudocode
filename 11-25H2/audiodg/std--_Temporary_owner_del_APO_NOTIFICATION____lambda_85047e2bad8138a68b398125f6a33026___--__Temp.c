/*
 * XREFs of std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400324EC
 * Callers:
 *     ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140013774 (-QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICA.c)
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400185CC (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 *     ?OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z @ 0x14005D5E0 (-OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATI.c)
 *     std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_96bc077b0d5ed2f4f14aec6f3919a807__0_ @ 0x14005EEAC (std--shared_ptr_APO_NOTIFICATION_--shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_96bc077.c)
 *     ?OnSpatialStatusChanged@CAPOEnvironmentStateChangedNotificationsHandler@@UEAAJPEBUWNF_SPATIAL_STATUS_HEADER@@@Z @ 0x14005FBB0 (-OnSpatialStatusChanged@CAPOEnvironmentStateChangedNotificationsHandler@@UEAAJPEBUWNF_SPATIAL_ST.c)
 *     ?OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z @ 0x1400604D0 (-OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z @ 0x1400626E0 (-QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?QueueInitialEnvironmentStatusNotification@@YAJPEBGPEAUIPropertyStore@@PEAVCAPOProcessingHostObject@@@Z @ 0x140062814 (-QueueInitialEnvironmentStatusNotification@@YAJPEBGPEAUIPropertyStore@@PEAVCAPOProcessingHostObj.c)
 *     ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140062ACC (-QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PE.c)
 *     _std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_85047e2bad8138a68b398125f6a33026__0__::_1_::dtor$0 @ 0x140091D4B (_std--shared_ptr_APO_NOTIFICATION_--shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_85047e.c)
 *     _QueueInitialEnhancementsEnabledNotification_::_1_::dtor$2 @ 0x140092CB5 (_QueueInitialEnhancementsEnabledNotification_--_1_--dtor$2.c)
 *     _QueueInitialEnvironmentStatusNotification_::_1_::dtor$4 @ 0x140095FDD (_QueueInitialEnvironmentStatusNotification_--_1_--dtor$4.c)
 *     _QueueInitialMicBoostNotification_::_1_::dtor$3 @ 0x140096001 (_QueueInitialMicBoostNotification_--_1_--dtor$3.c)
 * Callees:
 *     ?DeleteApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x14003252C (-DeleteApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z.c)
 */

void __fastcall std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    DeleteApoNotification(*(struct APO_NOTIFICATION **)a1);
}
