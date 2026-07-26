/*
 * XREFs of NdisCompleteNetPnPEvent @ 0x1400A7770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisCompleteNetPnPEvent(
        NDIS_HANDLE NdisBindingHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification,
        NDIS_STATUS Status)
{
  PNET_PNP_EVENT_NOTIFICATION v4; // rdi
  char v5; // bl
  struct _KEVENT *v6; // rcx
  int v7; // edx

  v4 = NetPnPEventNotification;
  v5 = (char)NdisBindingHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NetPnPEventNotification) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NetPnPEventNotification,
      13,
      10,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)NdisBindingHandle);
  }
  v6 = (struct _KEVENT *)v4->NetPnPEvent.NdisReserved[0];
  LODWORD(v4->NetPnPEvent.NdisReserved[1]) = Status;
  KeSetEvent(v6, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      13,
      11,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      v5);
  }
}
