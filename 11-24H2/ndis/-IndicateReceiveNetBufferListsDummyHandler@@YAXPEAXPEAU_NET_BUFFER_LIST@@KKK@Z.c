/*
 * XREFs of ?IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400A2790
 * Callers:
 *     <none>
 * Callees:
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E4F80 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IndicateReceiveNetBufferListsDummyHandler(
        _QWORD *NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  if ( *(_BYTE *)NdisFilterHandle != 5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ++NdisFilterHandle[118];
  NdisFIndicateReceiveNetBufferLists(NdisFilterHandle, NetBufferLists, PortNumber, NumberOfNetBufferLists, ReceiveFlags);
}
