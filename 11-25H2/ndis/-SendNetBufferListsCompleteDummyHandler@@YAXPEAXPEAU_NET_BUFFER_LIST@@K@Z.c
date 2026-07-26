/*
 * XREFs of ?SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400AAA70
 * Callers:
 *     <none>
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x1400207A0 (NdisFSendNetBufferListsComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400EBEB0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SendNetBufferListsCompleteDummyHandler(
        _QWORD *NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  if ( *(_BYTE *)NdisFilterHandle != 5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ++NdisFilterHandle[117];
  NdisFSendNetBufferListsComplete(NdisFilterHandle, NetBufferList, SendCompleteFlags);
}
