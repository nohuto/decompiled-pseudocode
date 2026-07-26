/*
 * XREFs of ?SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400AAAC0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFSendNetBufferLists @ 0x14001FCC0 (NdisFSendNetBufferLists.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400EBEB0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SendNetBufferListsDummyHandler(
        _QWORD *NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  if ( *(_BYTE *)NdisFilterHandle != 5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ++NdisFilterHandle[116];
  NdisFSendNetBufferLists(NdisFilterHandle, NetBufferList, PortNumber, SendFlags);
}
