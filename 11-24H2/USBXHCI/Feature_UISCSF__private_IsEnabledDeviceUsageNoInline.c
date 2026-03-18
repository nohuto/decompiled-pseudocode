/*
 * XREFs of Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048590
 * Callers:
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x140038180 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003A6E4 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetAddress @ 0x14003AEC4 (UsbDevice_SetAddress.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B700 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     Feature_UISCSF__private_IsEnabledFallback @ 0x1400485C8 (Feature_UISCSF__private_IsEnabledFallback.c)
 */

__int64 Feature_UISCSF__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UISCSF__private_featureState & 0x10) != 0 )
    return Feature_UISCSF__private_featureState & 1;
  else
    return Feature_UISCSF__private_IsEnabledFallback((unsigned int)Feature_UISCSF__private_featureState, 3LL);
}
