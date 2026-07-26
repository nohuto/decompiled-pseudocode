/*
 * XREFs of ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EB50
 * Callers:
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E270 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E770 (-ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140040E30 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140040330 (McTemplateK0qq_EtwWriteTransfer.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140048FD0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x14005ABD0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x140062BC0 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1400990A0 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 */

bool __fastcall ndisWdmSetBusyAsync(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r14d
  char v9; // di
  struct _NET_BUFFER_LIST *v10; // r15
  KIRQL v11; // r12
  int v12; // eax
  char v13; // bp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  char v21[8]; // [rsp+30h] [rbp-68h]
  _BYTE v22[8]; // [rsp+40h] [rbp-58h] BYREF
  struct _NET_BUFFER_LIST *v23; // [rsp+48h] [rbp-50h] BYREF
  struct _LIST_ENTRY v24; // [rsp+50h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 4448);
  v6 = 0;
  v24.Blink = &v24;
  v24.Flink = &v24;
  v23 = 0LL;
  v22[0] = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
  v12 = *(_DWORD *)(v5 + 504);
  if ( (v12 & 0x14) == 0 || (v12 & 0x200) != 0 )
  {
    v13 = 1;
    switch ( a3 )
    {
      case '4':
        v14 = *(_QWORD *)(v5 + 600);
        *(_DWORD *)(v5 + 144) = 0;
        *(_BYTE *)(v14 + 20) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 44LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 68LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 92LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 116LL) = 0;
        *(_DWORD *)(v5 + 520) += a2;
        break;
      case '6':
        v19 = *(_QWORD *)(v5 + 600);
        *(_DWORD *)(v5 + 144) = 0;
        *(_BYTE *)(v19 + 20) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 44LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 68LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 92LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 116LL) = 0;
        *(_DWORD *)(v5 + 576) += a2;
        break;
      case '1':
        *(_DWORD *)(v5 + 512) |= 0x10u;
        break;
      case '2':
        v20 = *(_QWORD *)(v5 + 600);
        *(_DWORD *)(v5 + 144) = 0;
        *(_BYTE *)(v20 + 20) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 44LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 68LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 92LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v5 + 600) + 116LL) = 0;
        *(_DWORD *)(v5 + 528) += a2;
        break;
      case '3':
        if ( *(_DWORD *)(v5 + 528) )
          *(_DWORD *)(v5 + 532) += a2;
        else
          v9 = 0;
        break;
      case '5':
        if ( *(_DWORD *)(v5 + 520) )
          *(_DWORD *)(v5 + 524) += a2;
        else
          v9 = 0;
        break;
      default:
        v9 = 0;
        break;
    }
    ndisSelectiveSuspendSetResumeBusyReason(v5, 0LL, a3, 0LL);
    goto LABEL_5;
  }
  v13 = 0;
  ndisPendWorkOnSetBusyAsyncLocked(v5, a3, a4, a5, &v23, &v24, v22);
  if ( !v22[0] || (*(_DWORD *)(v5 + 504) & 0xC0) != 0 )
  {
    v10 = v23;
LABEL_5:
    v15 = a1;
    goto LABEL_6;
  }
  if ( a3 == 50 )
    v6 = *(_DWORD *)(v5 + 632);
  ndisSelectiveSuspendSetResumeBusyReason(v5, 1LL, a3, v6);
  v6 = a3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
  {
    v15 = a1;
  }
  else
  {
    *(_DWORD *)v21 = a3;
    v15 = a1;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x26u,
      (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
      a1,
      *(_QWORD *)v21);
  }
  *(_DWORD *)(v5 + 504) |= 0x40u;
  ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(v5 + 376));
  v10 = v23;
LABEL_6:
  if ( (*(_DWORD *)(v5 + 504) & 0x200) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v11);
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v5, v11);
  if ( v10 )
  {
    if ( byte_1401278B0 && (*(_DWORD *)(v15 + 5872) & 2) != 0 )
      PktMonClientNblDropNdis(v15 + 5816, (_DWORD)v10, v17, 2, -1071448017, -536866805);
    NdisSetStatusInNblChain(v10, -1071448052);
    ndisMSendNetBufferListsCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)v15, v10, 0, 0);
  }
  if ( v24.Flink != &v24 )
    ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)v15, &v24);
  if ( v6 && (byte_140125101 & 8) != 0 )
    McTemplateK0qq_EtwWriteTransfer(v16, &SSResumeRequested, v15 + 4008, (*(_QWORD *)(v15 + 4024) >> 24) & 0xFFFFFFLL);
  return v13 && v9;
}
