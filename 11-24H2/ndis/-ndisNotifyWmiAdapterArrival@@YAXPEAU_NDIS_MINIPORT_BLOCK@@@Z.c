/*
 * XREFs of ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140051E90
 * Callers:
 *     NdisWdfNotifyWmiAdapterArrival @ 0x140094D00 (NdisWdfNotifyWmiAdapterArrival.c)
 *     ndisMiniportDeviceReadyNotification @ 0x14016B220 (ndisMiniportDeviceReadyNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1400523E0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140092FAC (McTemplateK0qqq_EtwWriteTransfer.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisNotifyWmiAdapterArrival(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _UNICODE_STRING *pAdapterInstanceName; // rdx
  unsigned int v2; // r8d
  PVOID v4; // rdi
  unsigned __int16 *v5; // rcx
  int v6; // edx
  NTSTATUS v7; // esi
  _UNKNOWN **v8; // rcx
  char v9[4]; // [rsp+30h] [rbp-18h]
  PVOID WnodeEventItem; // [rsp+50h] [rbp+8h] BYREF

  pAdapterInstanceName = a1->pAdapterInstanceName;
  v2 = a1->MiniportName.Length + 2;
  WnodeEventItem = 0LL;
  ndisSetupWmiNode(
    a1,
    pAdapterInstanceName,
    v2,
    &GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
    (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
  v4 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v5 = (unsigned __int16 *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
    *v5 = a1->MiniportName.Length;
    memmove(v5 + 1, a1->MiniportName.Buffer, a1->MiniportName.Length);
    v7 = IoWMIWriteEvent(v4);
    if ( v7 < 0 )
    {
      v8 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v9 = v7;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x56u,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1,
          *(_DWORD *)v9);
      }
      if ( (byte_14011B101 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer((_DWORD)v8, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v7, 2, 0);
      ExFreePoolWithTag(v4, 0);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        1,
        87,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
  }
}
