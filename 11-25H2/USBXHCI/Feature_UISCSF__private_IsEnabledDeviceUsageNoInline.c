/*
 * XREFs of Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048280
 * Callers:
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14000DAE0 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1400392F0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003A070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003ADB8 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003B1DC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B5F0 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     Feature_UISCSF__private_IsEnabledFallback @ 0x1400482B8 (Feature_UISCSF__private_IsEnabledFallback.c)
 */

__int64 Feature_UISCSF__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UISCSF__private_featureState & 0x10) != 0 )
    return Feature_UISCSF__private_featureState & 1;
  else
    return Feature_UISCSF__private_IsEnabledFallback((unsigned int)Feature_UISCSF__private_featureState, 3LL);
}
