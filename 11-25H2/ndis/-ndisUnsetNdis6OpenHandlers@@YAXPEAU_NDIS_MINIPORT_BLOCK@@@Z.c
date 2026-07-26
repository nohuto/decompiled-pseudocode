/*
 * XREFs of ?ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181050
 * Callers:
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140180F40 (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisUnsetNdis6OpenHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  bool v3; // di
  unsigned __int8 MajorNdisVersion; // dl
  void (__fastcall *Ndis5PacketIndicateHandler)(void *, _NDIS_PACKET **, unsigned int); // rcx
  void (__fastcall *ReturnPacketHandler)(void *, _NDIS_PACKET *); // rcx

  OpenQueue = a1->OpenQueue;
  v3 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      153,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  MajorNdisVersion = a1->MajorNdisVersion;
  if ( !OpenQueue )
    goto LABEL_18;
  do
  {
    if ( !v3 )
      v3 = OpenQueue->ProtocolHandle->MajorNdisVersion >= 6u;
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  while ( OpenQueue );
  if ( !v3 )
  {
LABEL_18:
    if ( !a1->HighestFilter )
    {
      Ndis5PacketIndicateHandler = a1->Ndis5PacketIndicateHandler;
      a1->Ndis6ProtocolsBound = 0;
      a1->SavedPacketIndicateHandler = Ndis5PacketIndicateHandler;
      if ( (a1->Flags & 0x20000000) != 0 )
        a1->PacketIndicateHandler = Ndis5PacketIndicateHandler;
      if ( MajorNdisVersion < 6u )
      {
        ReturnPacketHandler = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
        a1->SynchronousReturnPacketContext = a1->MiniportAdapterContext;
        a1->SynchronousReturnPacketHandler = ReturnPacketHandler;
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      154,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
}
