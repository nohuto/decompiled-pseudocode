/*
 * XREFs of Feature_722775354__private_IsEnabledDeviceUsageNoInline @ 0x140077708
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401ED470 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x140204D30 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 * Callees:
 *     Feature_722775354__private_IsEnabledFallback @ 0x140077740 (Feature_722775354__private_IsEnabledFallback.c)
 */

__int64 Feature_722775354__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_722775354__private_featureState & 0x10) != 0 )
    return Feature_722775354__private_featureState & 1;
  else
    return Feature_722775354__private_IsEnabledFallback((unsigned int)Feature_722775354__private_featureState, 3LL);
}
