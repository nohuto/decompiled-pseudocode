/*
 * XREFs of ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1400A31BC (ndisHandleProtocolUnloadNotification.c)
 *     NdisReEnumerateProtocolBindings @ 0x1400B8AD0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x14013D5D8 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1401527F0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153580 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x14015E4B0 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x140162170 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140165A30 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016BDD0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140171ED0 (ndisHandleProtocolReconfigNotification.c)
 *     NdisDeregisterProtocol @ 0x140172660 (NdisDeregisterProtocol.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140182FC0 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dql @ 0x140056690 (WPP_RECORDER_SF_Dql_ea_140056690.c)
 *     ??1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ @ 0x14008DAF0 (--1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ.c)
 */

void __fastcall ndisDereferenceProtocol(_NDIS_PROTOCOL_BLOCK *this, char a2, unsigned __int8 a3, int a4)
{
  int v7; // edx
  KIRQL v8; // di
  _NDIS_PROTOCOL_BLOCK **i; // rdx
  _NDIS_PROTOCOL_BLOCK *v10; // rcx
  PVOID v11; // rcx
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dql(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
  if ( (unsigned __int8)ndisDereferenceRef(&this->Ref.SpinLock, a3) )
  {
    v8 = 0;
    if ( !a2 )
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    for ( i = (_NDIS_PROTOCOL_BLOCK **)&ndisProtocolList; ; i = &v10->NextProtocol )
    {
      v10 = *i;
      if ( !*i )
        break;
      if ( v10 == this )
      {
        v11 = ndisDriverObject;
        *i = this->NextProtocol;
        ObfDereferenceObject(v11);
        break;
      }
    }
    if ( !a2 )
      KeReleaseSpinLock(&ndisProtocolListLock, v8);
    Buffer = this->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      this->ImageName.Buffer = 0LL;
    }
    DeregEvent = this->DeregEvent;
    if ( DeregEvent )
      KeSetEvent(DeregEvent, 0, 0);
    _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(this);
    ExFreePoolWithTag(this, 0);
    LOBYTE(this) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      5,
      43,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)this);
  }
}
