/*
 * XREFs of ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140096DC0
 * Callers:
 *     NdisIMQueueMiniportCallback @ 0x140096C60 (NdisIMQueueMiniportCallback.c)
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x14009C0A0 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1400A6920 (-ndisMReset@@YAHPEAX@Z.c)
 *     NdisIMRevertBack @ 0x1400A8080 (NdisIMRevertBack.c)
 *     ?ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400CBCC0 (-ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400DC9D0 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDpc @ 0x1400DE74C (ndisMDpc.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DF8D0 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1400E20C0 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400229C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x140087070 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008DBB0 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A5594 (-ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400A644C (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1400A6CA4 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMProcessDeferred(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // di
  void (*v3)(void *, void *); // rdi
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebp
  struct _GUID *v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  unsigned __int8 v9; // [rsp+70h] [rbp+8h] BYREF
  void (*v10)(void *, void *); // [rsp+78h] [rbp+10h] BYREF
  void *v11; // [rsp+80h] [rbp+18h] BYREF

  v9 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      50,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  while ( 1 )
  {
    v2 = 0;
    if ( a1->WorkQueue[1].Next && (a1->Flags & 0x80300000) == 0 )
    {
      ndisMDeQueueWorkItem(a1, NdisWorkItemSend, 0LL, 0LL);
      a1->DeferredSendHandler(a1);
      v2 = 1;
    }
    if ( a1->WorkQueue[4].Next )
      break;
    if ( a1->WorkQueue[2].Next )
    {
      ndisMDeQueueWorkItem(a1, NdisWorkItemReturnPackets, 0LL, 0LL);
      ndisMDeferredReturnPackets(a1);
    }
    if ( (a1->Flags & 0x80000000) != 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          12,
          51,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a1);
      if ( (byte_140125103 & 1) != 0 )
      {
        LODWORD(v8) = 0;
        LODWORD(v7) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          (__int64)a1,
          &NotifyMiniportAction,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v7,
          a1->NetLuid.Value,
          v8);
      }
      goto LABEL_41;
    }
    if ( a1->WorkQueue[6].Next )
    {
      v10 = 0LL;
      v11 = 0LL;
      ndisMDeQueueWorkItem(a1, NdisWorkItemMiniportCallback, (_SINGLE_LIST_ENTRY **)&v11, (_SINGLE_LIST_ENTRY **)&v10);
      v3 = v10;
      if ( v10 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        ((void (__fastcall *)(void *, void *))v3)(a1->MiniportAdapterContext, v11);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      }
      v2 = 1;
    }
    if ( a1->WorkQueue[3].Next )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          12,
          52,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a1);
      if ( (byte_140125103 & 1) != 0 )
      {
        LODWORD(v8) = 1;
        LODWORD(v7) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          (__int64)a1,
          &NotifyMiniportAction,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v7,
          a1->NetLuid.Value,
          v8);
      }
      v4 = ndisMProcessResetRequested(a1, &v9);
      v6 = v4;
      if ( v4 == 259 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            12,
            53,
            (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
            (char)a1);
        if ( (byte_140125103 & 1) != 0 )
        {
          LODWORD(v8) = 2;
          LODWORD(v7) = a1->IfIndex;
          McTemplateK0jqxd_EtwWriteTransfer(
            v5,
            &NotifyMiniportAction,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v7,
            a1->NetLuid.Value,
            v8);
        }
        goto LABEL_41;
      }
      if ( (unsigned int)ndisMResetCompleteStage1(a1, v4, v9) )
      {
        v9 = 0;
LABEL_24:
        ndisMResetCompleteStage2(a1);
        goto LABEL_25;
      }
      if ( !v9 || v6 )
        goto LABEL_24;
    }
    else
    {
LABEL_25:
      if ( a1->WorkQueue[0].Next )
      {
        ndisMDeQueueWorkItem(a1, NdisWorkItemRequest, 0LL, 0LL);
        ndisMDoOidRequest(a1);
        v2 = 1;
      }
      if ( a1->WorkQueue[1].Next )
      {
        ndisMDeQueueWorkItem(a1, NdisWorkItemSend, 0LL, 0LL);
        a1->DeferredSendHandler(a1);
      }
      else if ( !v2 )
      {
        goto LABEL_41;
      }
    }
  }
  if ( a1->WorkQueue[0].Next )
  {
    ndisMDeQueueWorkItem(a1, NdisWorkItemRequest, 0LL, 0LL);
    ndisMDoOidRequest(a1);
  }
LABEL_41:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      54,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
}
