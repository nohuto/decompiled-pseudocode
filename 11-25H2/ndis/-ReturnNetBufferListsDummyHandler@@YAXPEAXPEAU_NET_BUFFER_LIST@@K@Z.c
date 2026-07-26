/*
 * XREFs of ?ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400AAA20
 * Callers:
 *     <none>
 * Callees:
 *     NdisFReturnNetBufferLists @ 0x14001E7D0 (NdisFReturnNetBufferLists.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400EBEB0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ReturnNetBufferListsDummyHandler(
        _QWORD *NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  if ( *(_BYTE *)NdisFilterHandle != 5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ++NdisFilterHandle[119];
  NdisFReturnNetBufferLists(NdisFilterHandle, NetBufferLists, ReturnFlags);
}
