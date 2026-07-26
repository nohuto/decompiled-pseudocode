/*
 * XREFs of ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009D670
 * Callers:
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x140090CB0 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x14009DE70 (-ndisMReset@@YAHPEAX@Z.c)
 *     NdisIMQueueMiniportCallback @ 0x14009F540 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x14009F840 (NdisIMRevertBack.c)
 *     ?ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400C4B90 (-ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400D5690 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDpc @ 0x1400D7410 (ndisMDpc.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D85C0 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1400DAEB0 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 * Callees:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x140042510 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140052500 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007EA60 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x14009E1FC (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMProcessDeferred(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *WorkQueue; // rdi
  char v3; // r14
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *CurrentThread; // rcx
  struct _NDIS_PACKET *ReturnPacketsQueue; // rdx
  void (__fastcall *MiniportReturnPacketHandler)(void *, _NDIS_PACKET *); // rsi
  unsigned int v8; // eax
  __int64 v9; // rax
  struct _NDIS_PACKET *v10; // rdi
  int v11; // eax
  int v12; // ecx
  _SINGLE_LIST_ENTRY *v13; // rcx
  _SINGLE_LIST_ENTRY *v14; // r14
  _SINGLE_LIST_ENTRY *v15; // rsi
  _SINGLE_LIST_ENTRY *v16; // rcx
  int v17; // edi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *HookAdapterHandle; // rdx
  __int64 v20; // rcx
  _SINGLE_LIST_ENTRY *v21; // rcx
  _SINGLE_LIST_ENTRY *v22; // rcx
  _SINGLE_LIST_ENTRY *v23; // rcx
  struct _GUID *v24; // [rsp+20h] [rbp-79h]
  __int64 v25; // [rsp+30h] [rbp-69h]
  unsigned __int8 v26[16]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v27; // [rsp+50h] [rbp-49h] BYREF
  __int128 v28; // [rsp+60h] [rbp-39h]
  __int128 v29; // [rsp+70h] [rbp-29h]
  __int128 v30; // [rsp+80h] [rbp-19h]
  __int128 v31; // [rsp+90h] [rbp-9h]
  __int128 v32; // [rsp+A0h] [rbp+7h]
  __int128 v33; // [rsp+B0h] [rbp+17h]

  v26[0] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      50,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
LABEL_3:
  WorkQueue = a1->WorkQueue;
  while ( 1 )
  {
    v3 = 0;
    if ( a1->WorkQueue[1].Next )
    {
      if ( (a1->Flags & 0x80300000) == 0 )
      {
        Next = a1->WorkQueue[1].Next;
        if ( Next )
        {
          a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)Next->Next;
          Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
          a1->SingleWorkItems[1].Next = Next;
        }
        a1->DeferredSendHandler(a1);
        v3 = 1;
      }
      WorkQueue = a1->WorkQueue;
    }
    if ( a1->WorkQueue[4].Next )
    {
      v23 = WorkQueue->Next;
      if ( WorkQueue->Next )
      {
        WorkQueue->Next = v23->Next;
        v23->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
        a1->SingleWorkItems[0].Next = v23;
        ndisMDoOidRequest(a1);
      }
      goto LABEL_65;
    }
    CurrentThread = a1->WorkQueue[2].Next;
    if ( CurrentThread )
    {
      a1->WorkQueue[2] = (_SINGLE_LIST_ENTRY)CurrentThread->Next;
      CurrentThread->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[2];
      a1->SingleWorkItems[2].Next = CurrentThread;
      ReturnPacketsQueue = a1->ReturnPacketsQueue;
      MiniportReturnPacketHandler = a1->MiniportReturnPacketHandler;
      if ( ReturnPacketsQueue )
      {
        do
        {
          v8 = *(_DWORD *)&ReturnPacketsQueue[-1].ProtocolReserved[4];
          if ( v8 >= ndisPacketStackSize )
            v9 = 16LL;
          else
            v9 = (__int64)ReturnPacketsQueue + 48 * (v8 - (unsigned __int64)ndisPacketStackSize);
          v10 = *(struct _NDIS_PACKET **)v9;
          *(_QWORD *)v9 = 0LL;
          v11 = ReturnPacketsQueue[-1].Reserved[1];
          v12 = *(_DWORD *)&ReturnPacketsQueue[-1].ProtocolReserved[4] - 1;
          *(_DWORD *)&ReturnPacketsQueue[-1].ProtocolReserved[4] = v12;
          if ( (v11 & 1) != 0 && v12 == -1 )
            NDIS_FREE_XFER_DATA_PACKET(ReturnPacketsQueue);
          else
            ((void (__fastcall *)(void *))MiniportReturnPacketHandler)(a1->MiniportAdapterContext);
          if ( (a1->Flags & 0x8000) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)&a1->IndicatedPacketsCount);
          ReturnPacketsQueue = v10;
        }
        while ( v10 );
      }
      a1->ReturnPacketsQueue = 0LL;
    }
    if ( (a1->Flags & 0x80000000) != 0 )
      break;
    v13 = a1->WorkQueue[6].Next;
    if ( v13 )
    {
      a1->WorkQueue[6] = (_SINGLE_LIST_ENTRY)v13->Next;
      v14 = v13[2].Next;
      v15 = v13[3].Next;
      ExFreePoolWithTag(v13, 0);
      if ( v15 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        ((void (__fastcall *)(void *, _SINGLE_LIST_ENTRY *))v15)(a1->MiniportAdapterContext, v14);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
      v3 = 1;
    }
    if ( a1->WorkQueue[3].Next )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          12,
          52,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1);
      if ( (byte_14011B103 & 1) != 0 )
      {
        LODWORD(v25) = 1;
        LODWORD(v24) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          (__int64)v13,
          (__int64)&NotifyMiniportAction,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v24,
          a1->NetLuid.Value,
          v25);
      }
      v16 = a1->WorkQueue[3].Next;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      if ( v16 )
      {
        a1->WorkQueue[3] = (_SINGLE_LIST_ENTRY)v16->Next;
        LODWORD(v16[1].Next) = 4;
        v16->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[4];
        a1->WorkQueue[4].Next = v16;
      }
      if ( (a1->PnPFlags & 0x80000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFEFFFFF);
        v17 = -2147418111;
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x200000u);
        _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFEFFFFF);
        ndisMSwapOpenHandlers(a1, 1u);
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        DriverHandle = a1->DriverHandle;
        HookAdapterHandle = a1->HookAdapterHandle;
        *(_QWORD *)&v27 = 7340440LL;
        *((_QWORD *)&v27 + 1) = a1;
        v28 = 0LL;
        DWORD1(v28) = 1073807364;
        v29 = 0LL;
        v30 = 0uLL;
        v31 = 0LL;
        v32 = 0LL;
        v33 = 0LL;
        (*((void (__fastcall **)(_QWORD, NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *, struct _NDIS_MINIPORT_BLOCK *, __int128 *))g_MiniportHookDrivers
         + 16 * (__int64)(int)DriverHandle->HookType
         + 8))(
          *((_QWORD *)g_MiniportHookDrivers + 16 * (__int64)(int)DriverHandle->HookType + 3),
          HookAdapterHandle,
          a1,
          &v27);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            17,
            71,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            (char)a1);
        if ( (byte_14011B101 & 4) != 0 )
        {
          LODWORD(v25) = 65537;
          LODWORD(v24) = a1->IfIndex;
          McTemplateK0jqxd_EtwWriteTransfer(
            v20,
            (__int64)&CallMiniportReset,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v24,
            a1->NetLuid.Value,
            v25);
        }
        v17 = ((__int64 (__fastcall *)(unsigned __int8 *, void *))a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler)(
                v26,
                a1->MiniportAdapterContext);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        CurrentThread = (_SINGLE_LIST_ENTRY *)KeGetCurrentThread();
        a1->MiniportThread = CurrentThread;
        if ( v17 == 259 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4,
              12,
              53,
              (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
              (char)a1);
          if ( (byte_14011B103 & 1) != 0 )
          {
            LODWORD(v25) = 2;
LABEL_62:
            LODWORD(v24) = a1->IfIndex;
            McTemplateK0jqxd_EtwWriteTransfer(
              (__int64)CurrentThread,
              (__int64)&NotifyMiniportAction,
              (__int64)&a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              (__int64)v24,
              a1->NetLuid.Value,
              v25);
            goto LABEL_65;
          }
          goto LABEL_65;
        }
      }
      if ( (unsigned int)ndisMResetCompleteStage1(a1, v17, v26[0]) )
      {
        v26[0] = 0;
      }
      else if ( v26[0] && !v17 )
      {
        goto LABEL_3;
      }
      ndisMResetCompleteStage2(a1);
    }
    WorkQueue = a1->WorkQueue;
    v21 = a1->WorkQueue[0].Next;
    if ( v21 )
    {
      WorkQueue->Next = v21->Next;
      v21->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
      a1->SingleWorkItems[0].Next = v21;
      ndisMDoOidRequest(a1);
      v3 = 1;
    }
    v22 = a1->WorkQueue[1].Next;
    if ( v22 )
    {
      a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)v22->Next;
      v22->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
      a1->SingleWorkItems[1].Next = v22;
      a1->DeferredSendHandler(a1);
    }
    else if ( !v3 )
    {
      goto LABEL_65;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      51,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
  if ( (byte_14011B103 & 1) != 0 )
  {
    LODWORD(v25) = 0;
    goto LABEL_62;
  }
LABEL_65:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      54,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
}
