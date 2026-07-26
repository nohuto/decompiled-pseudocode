/*
 * XREFs of ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1400AB36C (ndisHandleProtocolUnloadNotification.c)
 *     NdisReEnumerateProtocolBindings @ 0x1400BFDF0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1401484B8 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015E7A0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x14015F4F0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x14016B400 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x14016D810 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401721D0 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x14017CEA0 (ndisHandleProtocolReconfigNotification.c)
 *     NdisDeregisterProtocol @ 0x14017D630 (NdisDeregisterProtocol.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F560 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x14018CF00 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dql @ 0x1400714F0 (WPP_RECORDER_SF_Dql_ea_1400714F0.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14016B1A0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

void __fastcall ndisDereferenceProtocol(struct _NDIS_PROTOCOL_BLOCK *a1, char a2, unsigned __int8 a3, int a4)
{
  int v7; // edx
  __int64 v8; // r8
  KIRQL v9; // di
  struct _NDIS_PROTOCOL_BLOCK **i; // rdx
  struct _NDIS_PROTOCOL_BLOCK *v11; // rcx
  PVOID v12; // rcx
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dql(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
  if ( (unsigned __int8)ndisDereferenceRef(&a1->Ref.SpinLock, a3) )
  {
    v9 = 0;
    if ( !a2 )
      v9 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    for ( i = (struct _NDIS_PROTOCOL_BLOCK **)&ndisProtocolList; ; i = &v11->NextProtocol )
    {
      v11 = *i;
      if ( !*i )
        break;
      if ( v11 == a1 )
      {
        v12 = ndisDriverObject;
        *i = a1->NextProtocol;
        ObfDereferenceObject(v12);
        break;
      }
    }
    if ( !a2 )
      KeReleaseSpinLock(&ndisProtocolListLock, v9);
    Buffer = a1->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      a1->ImageName.Buffer = 0LL;
    }
    DeregEvent = a1->DeregEvent;
    if ( DeregEvent )
      KeSetEvent(DeregEvent, 0, 0);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&a1->Bind, i, v8);
    ExFreePoolWithTag(a1, 0);
    LOBYTE(a1) = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      5,
      41,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1);
  }
}
