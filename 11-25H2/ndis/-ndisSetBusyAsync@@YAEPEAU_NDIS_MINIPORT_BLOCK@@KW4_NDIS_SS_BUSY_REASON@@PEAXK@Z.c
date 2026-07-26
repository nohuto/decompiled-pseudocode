/*
 * XREFs of ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40
 * Callers:
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140027FA0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14003CEF0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1400CB790 (-ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400CE0FC (ndisDoCancelDirectOidRequest.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14018BD20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14018BFF0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EB50 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140040330 (McTemplateK0qq_EtwWriteTransfer.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140048FD0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1400990A0 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1400C9EAC (-NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z.c)
 *     ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1400C9F74 (-ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400CA0C0 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

bool __fastcall ndisSetBusyAsync(__int64 a1, int a2, unsigned int a3, unsigned __int64 a4, unsigned int a5)
{
  int v7; // edi
  __int64 v8; // r15
  __int64 v9; // rsi
  struct _NET_BUFFER_LIST *v10; // r12
  unsigned __int64 (*v11)(void *, struct _NET_BUFFER_LIST *); // rdx
  char v12; // bl
  __int64 v13; // rax
  char v14; // bl
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r11
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rdi
  _BYTE *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r9
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  int v32; // r8d
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rbx
  struct _NET_BUFFER_LIST *v41; // rcx
  __int64 v42; // [rsp+38h] [rbp-61h]
  KIRQL v43; // [rsp+48h] [rbp-51h]
  char v44; // [rsp+4Bh] [rbp-4Eh]
  __int64 v45; // [rsp+50h] [rbp-49h]
  unsigned int v46; // [rsp+58h] [rbp-41h]
  unsigned __int64 v47; // [rsp+58h] [rbp-41h]
  unsigned int v48; // [rsp+60h] [rbp-39h]
  __int64 v49; // [rsp+68h] [rbp-31h]
  __int64 v50; // [rsp+70h] [rbp-29h]
  struct _LIST_ENTRY v51; // [rsp+78h] [rbp-21h] BYREF
  __int64 v52; // [rsp+88h] [rbp-11h] BYREF
  __int64 *v53; // [rsp+90h] [rbp-9h]
  _QWORD v54[2]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int64 v55; // [rsp+A8h] [rbp+Fh]
  __int64 v56; // [rsp+B0h] [rbp+17h]

  v7 = a2;
  v8 = a1;
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 4448);
    v51.Blink = &v51;
    v10 = 0LL;
    v51.Flink = &v51;
    v56 = v9;
    v48 = 0;
    v44 = 0;
    v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v9);
    if ( (*(_DWORD *)(v9 + 512)
       || *(_DWORD *)(v9 + 516)
       || *(_DWORD *)(v9 + 528)
       || *(_DWORD *)(v9 + 532)
       || *(_DWORD *)(v9 + 520)
       || *(_DWORD *)(v9 + 524)
       || *(_DWORD *)(v9 + 576)
       || *(_DWORD *)(v9 + 508))
      && KeReadStateEvent((PRKEVENT)(v9 + 272)) )
    {
      v12 = 1;
      if ( a3 == 52 )
      {
        v13 = *(_QWORD *)(v9 + 600);
        *(_DWORD *)(v9 + 144) = 0;
        *(_BYTE *)(v13 + 20) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 44LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 68LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 92LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 116LL) = 0;
        *(_DWORD *)(v9 + 520) += v7;
      }
      else if ( a3 == 54 )
      {
        v34 = *(_QWORD *)(v9 + 600);
        *(_DWORD *)(v9 + 144) = 0;
        *(_BYTE *)(v34 + 20) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 44LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 68LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 92LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 116LL) = 0;
        *(_DWORD *)(v9 + 576) += v7;
      }
      else
      {
        switch ( a3 )
        {
          case '1':
            *(_DWORD *)(v9 + 512) |= 0x10u;
            goto LABEL_10;
          case '2':
            v36 = *(_QWORD *)(v9 + 600);
            *(_DWORD *)(v9 + 144) = 0;
            *(_BYTE *)(v36 + 20) = 0;
            *(_BYTE *)(*(_QWORD *)(v9 + 600) + 44LL) = 0;
            *(_BYTE *)(*(_QWORD *)(v9 + 600) + 68LL) = 0;
            *(_BYTE *)(*(_QWORD *)(v9 + 600) + 92LL) = 0;
            *(_BYTE *)(*(_QWORD *)(v9 + 600) + 116LL) = 0;
            *(_DWORD *)(v9 + 528) += v7;
            goto LABEL_10;
          case '3':
            if ( *(_DWORD *)(v9 + 528) )
            {
              *(_DWORD *)(v9 + 532) += v7;
              goto LABEL_10;
            }
            break;
          default:
            if ( a3 == 53 && *(_DWORD *)(v9 + 520) )
            {
              *(_DWORD *)(v9 + 524) += v7;
              goto LABEL_10;
            }
            break;
        }
        v12 = 0;
      }
LABEL_10:
      ndisSelectiveSuspendSetResumeBusyReason(v9, 0LL, a3, 0LL);
      KeReleaseSpinLock((PKSPIN_LOCK)v9, v43);
      return v12;
    }
    if ( a3 != 54 )
    {
      v14 = 0;
      v51.Blink = &v51;
      v51.Flink = &v51;
      if ( a3 == 49 )
      {
LABEL_58:
        KeReleaseSpinLock((PKSPIN_LOCK)v9, v43);
        if ( v14 && v44 )
          ndisWdfAcquirePowerReferenceHelper((struct _NDIS_MINIPORT_BLOCK *)v8, 0, 1u);
LABEL_61:
        if ( v10 )
        {
          if ( byte_1401278B0 && (*(_DWORD *)(v8 + 5872) & 2) != 0 )
            PktMonClientNblDropNdis(v8 + 5816, (_DWORD)v10, v32, 2, -1071448017, -536866804);
          NdisSetStatusInNblChain(v10, -1071448052);
          ndisMSendNetBufferListsCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)v8, v10, 0, 0);
        }
        goto LABEL_62;
      }
      if ( a3 == 51 )
      {
        ndisDequeueDirectOidsByRequestId((struct _NDIS_SELECTIVE_SUSPEND *)v9, (void *)a4, &v51);
      }
      else
      {
        if ( a3 != 53 )
        {
          if ( a3 == 52 )
          {
            v15 = 0LL;
            if ( *(_DWORD *)ndisNblTrackerMode )
            {
              v16 = *(_QWORD *)(v9 + 608);
              v17 = 0LL;
              v18 = ndisNblTrackerEpoch;
              v55 = v16;
              v19 = 0LL;
              v45 = 0LL;
              v46 = ndisNblTrackerEpoch;
              v49 = 0LL;
              v50 = 0LL;
              if ( *(int *)ndisNblTrackerMode >= 3 )
              {
                ndisNblTrackerRecordEventInternal(a4, 0LL, 1u, (void *)v16, 1u);
                v16 = v55;
                v17 = 0LL;
                v18 = v46;
                v19 = 0LL;
              }
              v20 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
              if ( (v16 & 1) != 0 )
              {
                v21 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
                v20 = (2LL * v18) ^ (v16 ^ (2LL * v18)) & 0xFFFFFFFFFFFFFFFDuLL;
              }
              else
              {
                v21 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
              }
              v47 = v21;
              if ( a4 )
              {
                v22 = (_QWORD *)a4;
                while ( 1 )
                {
                  v23 = v22[45];
                  while ( v22[45] == v23 )
                  {
                    if ( v23 )
                    {
                      if ( (v23 & 4) != 0 )
                        goto LABEL_87;
                    }
                    else if ( !v22[15] )
                    {
                      v22[15] = 0LL;
                    }
                    v24 = (_BYTE *)v22[15];
                    if ( v24 )
                    {
                      if ( (unsigned __int8)(*v24 - 17) <= 1u || *v24 == 5 )
                      {
                        if ( v24 != (_BYTE *)v21 || v22[3] )
                        {
                          ++v17;
                          v25 = v20;
                          v45 = v17;
                        }
                        else
                        {
                          ++v19;
                          v25 = 24LL;
                          ++v17;
                          v50 = v19;
                          v45 = v17;
                        }
                        goto LABEL_34;
                      }
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        LODWORD(v42) = (unsigned __int8)*v24;
                        WPP_RECORDER_SF_qD(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          3u,
                          0x1Bu,
                          0xCu,
                          (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                          (char)v22,
                          v42);
LABEL_91:
                        v17 = v45;
                        v19 = v50;
                        v21 = v47;
                      }
                    }
                    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v17) = 3;
                      WPP_RECORDER_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        v17,
                        27,
                        11,
                        (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                        (char)v22);
                      goto LABEL_91;
                    }
LABEL_87:
                    v25 = v20 | 4;
LABEL_34:
                    v22[45] = v25;
                    v22 = (_QWORD *)*v22;
                    if ( !v22 )
                      break;
                  }
                  v26 = v49 - v17;
                  if ( (v23 & 1) != 0 && v26 )
                  {
                    v27 = (_QWORD *)(*(_QWORD *)(16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40)
                                   + (KeGetPcr()->Prcb.Number << 12));
                    *v27 += v26;
                  }
                  v19 = v50;
                  v21 = v47;
                  v49 = v17;
                  if ( !v22 )
                  {
                    v9 = v56;
                    v8 = a1;
                    v7 = a2;
                    break;
                  }
                }
              }
              v28 = v17 - v19;
              if ( (v20 & 1) != 0 && v28 )
              {
                v29 = (_QWORD *)(*(_QWORD *)(16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40)
                               + (KeGetPcr()->Prcb.Number << 12));
                *v29 += v28;
              }
              v15 = 0LL;
            }
            v30 = (_QWORD *)a4;
            if ( a4 )
            {
              do
              {
                v30[14] = a5;
                v15 = v30;
                v30 = (_QWORD *)*v30;
              }
              while ( v30 );
            }
            **(_QWORD **)(v9 + 552) = a4;
            *(_QWORD *)(v9 + 552) = v15;
            *(_DWORD *)(v9 + 632) = 0;
          }
          else if ( a3 == 50 )
          {
            v37 = *(_QWORD **)(v9 + 592);
            v38 = (_QWORD *)(a4 + 72);
            if ( *v37 != v9 + 584 )
              __fastfail(3u);
            *v38 = v9 + 584;
            *(_QWORD *)(a4 + 80) = v37;
            *v37 = v38;
            *(_QWORD *)(v9 + 592) = v38;
            *(_DWORD *)(v9 + 632) = *(_DWORD *)(a4 + 32);
          }
          goto LABEL_47;
        }
        v40 = (_QWORD *)(v9 + 544);
        v41 = *(struct _NET_BUFFER_LIST **)(v9 + 544);
        if ( v41 )
        {
          v52 = 0LL;
          v53 = &v52;
          v54[0] = 0LL;
          v54[1] = v54;
          NdisClassifyNblChain2(v41, v11, (void *)a4, (struct NBL_QUEUE_t *)&v52, (struct NBL_QUEUE_t *)v54);
          if ( *v40 != v52 )
          {
            if ( v52 )
            {
              *v40 = v52;
              *(_QWORD *)(v9 + 552) = v53;
              v53 = &v52;
              v52 = 0LL;
            }
            else
            {
              *v40 = 0LL;
              *(_QWORD *)(v9 + 552) = v9 + 544;
            }
          }
          v10 = (struct _NET_BUFFER_LIST *)v54[0];
          KeReleaseSpinLock((PKSPIN_LOCK)v9, v43);
          goto LABEL_61;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v9, v43);
LABEL_62:
      if ( v51.Flink != &v51 )
        ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)v8, &v51);
      if ( v48 && (byte_140125101 & 8) != 0 )
        McTemplateK0qq_EtwWriteTransfer(v48, &SSResumeRequested, v8 + 4008, (*(_QWORD *)(v8 + 4024) >> 24) & 0xFFFFFFLL);
      return a3 == 54;
    }
LABEL_47:
    v14 = 1;
    if ( !*(_DWORD *)(v9 + 512)
      && !*(_DWORD *)(v9 + 516)
      && !*(_DWORD *)(v9 + 528)
      && !*(_DWORD *)(v9 + 532)
      && !*(_DWORD *)(v9 + 520)
      && !*(_DWORD *)(v9 + 524)
      && !*(_DWORD *)(v9 + 576)
      && !*(_DWORD *)(v9 + 508) )
    {
      v44 = 1;
      KeClearEvent((PRKEVENT)(v9 + 272));
      v48 = a3;
    }
    switch ( a3 )
    {
      case '4':
        v31 = *(_QWORD *)(v9 + 600);
        *(_DWORD *)(v9 + 144) = 0;
        *(_BYTE *)(v31 + 20) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 44LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 68LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 92LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 116LL) = 0;
        *(_DWORD *)(v9 + 520) += v7;
        break;
      case '6':
        v35 = *(_QWORD *)(v9 + 600);
        *(_DWORD *)(v9 + 144) = 0;
        *(_BYTE *)(v35 + 20) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 44LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 68LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 92LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 116LL) = 0;
        *(_DWORD *)(v9 + 576) += v7;
        break;
      case '2':
        v39 = *(_QWORD *)(v9 + 600);
        *(_DWORD *)(v9 + 144) = 0;
        *(_BYTE *)(v39 + 20) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 44LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 68LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 92LL) = 0;
        *(_BYTE *)(*(_QWORD *)(v9 + 600) + 116LL) = 0;
        *(_DWORD *)(v9 + 528) += v7;
        break;
    }
    goto LABEL_58;
  }
  return ndisWdmSetBusyAsync(a1, a2, a3, a4, a5);
}
