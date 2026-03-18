/*
 * XREFs of Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401B5440
 * Callers:
 *     EtwTraceQueuePostMessage @ 0x1400A4EF8 (EtwTraceQueuePostMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1401690C0 (EtwTraceBeginRetrieveSendMessage.c)
 *     EtwTraceBeginSendMessage @ 0x1401691D0 (EtwTraceBeginSendMessage.c)
 *     EtwTraceRetrievePostMessage @ 0x14016A590 (EtwTraceRetrievePostMessage.c)
 * Callees:
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledFallback @ 0x1401B5478 (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledFallback.c)
 */

__int64 Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_featureState & 0x10) != 0 )
    return Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_featureState & 1;
  else
    return Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledFallback(
             (unsigned int)Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_featureState,
             3LL);
}
