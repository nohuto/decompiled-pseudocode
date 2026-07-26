/*
 * XREFs of ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x14004CC20
 * Callers:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14004A900 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1400C2C7C (-NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z.c)
 *     ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1400C2D44 (-ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C2E90 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisPendWorkOnSetBusyAsyncLocked(
        __int64 a1,
        unsigned __int64 (*a2)(void *, struct _NET_BUFFER_LIST *),
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        struct _LIST_ENTRY *a6,
        _BYTE *a7)
{
  __int64 v8; // r15
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  struct _NET_BUFFER_LIST *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v18; // [rsp+38h] [rbp-30h]
  _QWORD v19[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = a4;
  *a5 = 0LL;
  *a7 = 0;
  a6->Blink = a6;
  a6->Flink = a6;
  if ( (_DWORD)a2 != 49 )
  {
    if ( (_DWORD)a2 == 51 )
    {
      ndisDequeueDirectOidsByRequestId((struct _NDIS_SELECTIVE_SUSPEND *)a1, (void *)a3, a6);
    }
    else if ( (_DWORD)a2 == 53 )
    {
      v15 = a1 + 544;
      v16 = *(struct _NET_BUFFER_LIST **)v15;
      if ( *(_QWORD *)v15 )
      {
        v17 = 0LL;
        v18 = &v17;
        v19[0] = 0LL;
        v19[1] = v19;
        NdisClassifyNblChain2(v16, a2, (void *)a3, (struct NBL_QUEUE_t *)&v17, (struct NBL_QUEUE_t *)v19);
        if ( *(_QWORD *)v15 != v17 )
        {
          if ( v17 )
          {
            *(_QWORD *)v15 = v17;
            *(_QWORD *)(v15 + 8) = v18;
          }
          else
          {
            *(_QWORD *)v15 = 0LL;
            *(_QWORD *)(v15 + 8) = v15;
          }
        }
        *a5 = v19[0];
      }
    }
    else if ( (_DWORD)a2 == 54 )
    {
      ndisQueueReceiveNblsOnMiniport((struct _NDIS_SELECTIVE_SUSPEND *)a1, (struct _NET_BUFFER_LIST *)a3);
    }
    else
    {
      if ( (_DWORD)a2 == 52 )
      {
        v10 = 0LL;
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal((struct _NET_BUFFER_LIST *)a3, 0LL, *(_QWORD *)(a1 + 608), 1u, 1u);
        v11 = (_QWORD *)a3;
        if ( a3 )
        {
          do
          {
            v11[14] = v8;
            v10 = v11;
            v11 = (_QWORD *)*v11;
          }
          while ( v11 );
        }
        **(_QWORD **)(a1 + 552) = a3;
        *(_QWORD *)(a1 + 552) = v10;
        *(_DWORD *)(a1 + 632) = 0;
      }
      else if ( (_DWORD)a2 == 50 )
      {
        v12 = a1 + 584;
        v13 = (_QWORD *)(a3 + 72);
        v14 = *(_QWORD **)(v12 + 8);
        if ( *v14 != v12 )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(a3 + 80) = v14;
        *v14 = v13;
        *(_QWORD *)(v12 + 8) = v13;
        *(_DWORD *)(a1 + 632) = *(_DWORD *)(a3 + 32);
      }
      *a7 = 1;
    }
  }
}
