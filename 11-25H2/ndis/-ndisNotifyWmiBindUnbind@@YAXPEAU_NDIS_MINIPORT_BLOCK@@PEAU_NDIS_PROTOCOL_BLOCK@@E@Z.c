/*
 * XREFs of ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140054D20
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015E7A0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x14016D810 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F560 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140055140 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14009CBC8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __fastcall ndisNotifyWmiBindUnbind(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        unsigned __int8 a3)
{
  int v6; // ebp
  GUID *v7; // r9
  int v8; // r15d
  PVOID v9; // r14
  char *v10; // rbx
  int v11; // ecx
  NTSTATUS v12; // ebx
  char v13[8]; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  PVOID Argument1; // [rsp+70h] [rbp+8h] BYREF

  v6 = a3;
  Argument1 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Bu,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  v7 = &GUID_NDIS_NOTIFY_BIND;
  v8 = v6;
  if ( !a3 )
    v7 = &GUID_NDIS_NOTIFY_UNBIND;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->BindPaths->Paths[0].Length + a2->Name.Length + 4,
    v7,
    (struct tagWNODE_SINGLE_INSTANCE **)&Argument1);
  v9 = Argument1;
  if ( Argument1 )
  {
    v10 = (char *)Argument1 + *((unsigned int *)Argument1 + 14);
    memmove(v10, a2->Name.Buffer, a2->Name.Length);
    memmove(&v10[a2->Name.Length + 2], a1->BindPaths->Paths[0].Buffer, a1->BindPaths->Paths[0].Length);
    if ( ndisBindUnbindCallbackObject )
      ExNotifyCallback(ndisBindUnbindCallbackObject, v9, 0LL);
    v12 = IoWMIWriteEvent(v9);
    if ( v12 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v13 = v12;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x6Cu,
          (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
          *(_QWORD *)v13);
      }
      if ( (byte_140125101 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v11, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v12, 4, 0);
      ExFreePoolWithTag(v9, 0);
      v8 = v6;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v8;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Du,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1,
      (char)a2,
      v14);
  }
}
