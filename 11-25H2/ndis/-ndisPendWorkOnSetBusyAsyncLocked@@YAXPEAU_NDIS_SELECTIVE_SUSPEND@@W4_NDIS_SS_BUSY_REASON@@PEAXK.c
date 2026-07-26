/*
 * XREFs of ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x140062BC0
 * Callers:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EB50 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1400C9EAC (-NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z.c)
 *     ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1400C9F74 (-ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400CA0C0 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisPendWorkOnSetBusyAsyncLocked(
        __int64 a1,
        unsigned __int64 (*a2)(void *, struct _NET_BUFFER_LIST *),
        unsigned __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        struct _LIST_ENTRY *a6,
        _BYTE *a7)
{
  unsigned int v7; // r10d
  _BYTE *v8; // r9
  __int64 v10; // r15
  _QWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r9
  _QWORD *v19; // r14
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r12
  _QWORD *v24; // rcx
  __int64 v25; // rsi
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // r15
  struct _NET_BUFFER_LIST *v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-78h]
  __int64 v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-60h]
  _QWORD v36[3]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+28h]
  struct _LIST_ENTRY *v40; // [rsp+D8h] [rbp+30h]

  v7 = a4;
  v8 = a7;
  v10 = a1;
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
      v31 = a1 + 544;
      v32 = *(struct _NET_BUFFER_LIST **)v31;
      if ( *(_QWORD *)v31 )
      {
        v34 = 0LL;
        v35 = &v34;
        v36[0] = 0LL;
        v36[1] = v36;
        NdisClassifyNblChain2(v32, a2, (void *)a3, (struct NBL_QUEUE_t *)&v34, (struct NBL_QUEUE_t *)v36);
        if ( *(_QWORD *)v31 != v34 )
        {
          if ( v34 )
          {
            *(_QWORD *)v31 = v34;
            *(_QWORD *)(v31 + 8) = v35;
          }
          else
          {
            *(_QWORD *)v31 = 0LL;
            *(_QWORD *)(v31 + 8) = v31;
          }
        }
        *a5 = v36[0];
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
        v11 = 0LL;
        if ( *(_DWORD *)ndisNblTrackerMode )
        {
          v12 = 0LL;
          v13 = 0LL;
          v14 = *(_QWORD *)(a1 + 608);
          v15 = 0LL;
          v16 = ndisNblTrackerEpoch;
          v39 = 0LL;
          if ( *(int *)ndisNblTrackerMode >= 3 )
          {
            ndisNblTrackerRecordEventInternal(a3, 0LL, 1u, (void *)v14, 1u);
            v12 = 0LL;
          }
          v17 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (v14 & 1) != 0 )
          {
            v18 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            v17 = (2 * v16) ^ (v14 ^ (2 * v16)) & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            v18 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          v40 = (struct _LIST_ENTRY *)v18;
          v19 = (_QWORD *)a3;
          if ( a3 )
          {
            while ( 1 )
            {
              v20 = v19[45];
              while ( v19[45] == v20 )
              {
                if ( v20 )
                {
                  if ( (v20 & 4) != 0 )
                    goto LABEL_41;
                }
                else if ( !v19[15] )
                {
                  v19[15] = 0LL;
                }
                v21 = (unsigned __int8 *)v19[15];
                if ( v21 )
                {
                  LODWORD(v11) = *v21;
                  if ( (unsigned __int8)((_BYTE)v11 - 17) <= 1u || (_BYTE)v11 == 5 )
                  {
                    if ( v21 != (unsigned __int8 *)v18 || v19[3] )
                    {
                      ++v13;
                      v22 = v17;
                    }
                    else
                    {
                      ++v12;
                      v22 = 24LL;
                      v39 = v12;
                      ++v13;
                    }
                    goto LABEL_20;
                  }
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v33) = *v21;
                    WPP_RECORDER_SF_qD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      3u,
                      0x1Bu,
                      0xCu,
                      (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                      (char)v19,
                      v33);
LABEL_51:
                    v12 = v39;
                    v18 = (unsigned __int64)v40;
                  }
                }
                else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v11) = 3;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v11,
                    27,
                    11,
                    (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                    (char)v19);
                  goto LABEL_51;
                }
LABEL_41:
                v22 = v17 | 4;
LABEL_20:
                v19[45] = v22;
                v19 = (_QWORD *)*v19;
                if ( !v19 )
                  break;
              }
              v23 = v15 - v13;
              if ( (v20 & 1) != 0 && v23 )
              {
                v11 = (_QWORD *)(16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
                v24 = (_QWORD *)(*v11 + (KeGetPcr()->Prcb.Number << 12));
                *v24 += v23;
              }
              v12 = v39;
              v15 = v13;
              v18 = (unsigned __int64)v40;
              if ( !v19 )
              {
                v10 = a1;
                break;
              }
            }
          }
          v25 = v13 - v12;
          if ( (v17 & 1) != 0 && v25 )
          {
            v26 = (_QWORD *)(*(_QWORD *)(16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40)
                           + (KeGetPcr()->Prcb.Number << 12));
            *v26 += v25;
          }
          v7 = a4;
          v8 = a7;
          v11 = 0LL;
        }
        v27 = (_QWORD *)a3;
        if ( a3 )
        {
          do
          {
            v27[14] = v7;
            v11 = v27;
            v27 = (_QWORD *)*v27;
          }
          while ( v27 );
        }
        **(_QWORD **)(v10 + 552) = a3;
        *(_QWORD *)(v10 + 552) = v11;
        *(_DWORD *)(v10 + 632) = 0;
      }
      else if ( (_DWORD)a2 == 50 )
      {
        v28 = a1 + 584;
        v29 = (_QWORD *)(a3 + 72);
        v30 = *(_QWORD **)(v28 + 8);
        if ( *v30 != v28 )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(a3 + 80) = v30;
        *v30 = v29;
        *(_QWORD *)(v28 + 8) = v29;
        *(_DWORD *)(v10 + 632) = *(_DWORD *)(a3 + 32);
      }
      *v8 = 1;
    }
  }
}
