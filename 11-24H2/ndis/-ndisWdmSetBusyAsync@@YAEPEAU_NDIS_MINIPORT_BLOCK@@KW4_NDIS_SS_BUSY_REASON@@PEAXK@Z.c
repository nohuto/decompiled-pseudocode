/*
 * XREFs of ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14004A900
 * Callers:
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140021AA0 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x140076710 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1400876A0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x1400275B0 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140031540 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1400371A0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140037E50 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140038080 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140038860 (McTemplateK0qq_EtwWriteTransfer.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x14004CC20 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008D800 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 */

bool __fastcall ndisWdmSetBusyAsync(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  int v6; // edi
  char v9; // si
  struct _NET_BUFFER_LIST *v10; // rbp
  KIRQL v11; // r15
  int v12; // eax
  char v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _GUID *v17; // [rsp+20h] [rbp-78h]
  char v18[8]; // [rsp+30h] [rbp-68h]
  struct _NET_BUFFER_LIST *v19; // [rsp+40h] [rbp-58h] BYREF
  struct _LIST_ENTRY v20; // [rsp+48h] [rbp-50h] BYREF
  char v21; // [rsp+A0h] [rbp+8h] BYREF
  int v22; // [rsp+A8h] [rbp+10h]
  __int64 v23; // [rsp+B8h] [rbp+20h]

  v23 = a4;
  v22 = a2;
  v5 = *(_QWORD *)(a1 + 4448);
  v6 = 0;
  v20.Blink = &v20;
  v20.Flink = &v20;
  v19 = 0LL;
  v21 = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
  v12 = *(_DWORD *)(v5 + 504);
  if ( (v12 & 0x14) == 0 || (v12 & 0x200) != 0 )
  {
    v13 = 1;
    v9 = ndisIncrementAsyncIdleCountersLocked(v5, v22, a3);
    ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v5, 0, a3, 0);
  }
  else
  {
    v13 = 0;
    ndisPendWorkOnSetBusyAsyncLocked(v5, a3, v23, a5, &v19, &v20, &v21);
    if ( v21 && (*(_DWORD *)(v5 + 504) & 0xC0) == 0 )
    {
      if ( a3 == 50 )
        v6 = *(_DWORD *)(v5 + 632);
      ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v5, 1, a3, v6);
      v6 = a3;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v18 = a3;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xFu,
          0x27u,
          (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
          a1,
          *(_QWORD *)v18);
      }
      *(_DWORD *)(v5 + 504) |= 0x40u;
      ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(v5 + 376));
    }
    v10 = v19;
  }
  if ( (*(_DWORD *)(v5 + 504) & 0x200) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v11);
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v5, v11);
  if ( v10 )
  {
    if ( byte_14011D800 && (*(_DWORD *)(a1 + 5872) & 2) != 0 )
      PktMonClientNblDropNdis(a1 + 5816, (__int64)v10, v15, 2LL, -1071448017, -536866805);
    NdisSetStatusInNblChain(v10, -1071448052);
    ndisMSendNetBufferListsCompleteInternal((struct _NDIS_FILTER_BLOCK *)a1, v10, 0, 0);
  }
  if ( v20.Flink != &v20 )
    ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)a1, &v20);
  if ( v6 && (byte_14011B101 & 8) != 0 )
  {
    LODWORD(v17) = v6;
    McTemplateK0qq_EtwWriteTransfer(
      v14,
      (__int64)">(",
      a1 + 4008,
      (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF,
      (__int64)v17);
  }
  return v13 && v9;
}
