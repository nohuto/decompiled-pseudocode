/*
 * XREFs of ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1400403A0
 * Callers:
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848F0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1401715F0 (NdisWdfAsyncPowerReferenceCompleteNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140024E00 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140027FA0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140040E30 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140048FD0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1400990A0 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400CA120 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisWdfSelectiveSuspendResumeOperations(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, char a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  char v5; // r15
  KIRQL v6; // r9
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  struct _NET_BUFFER_LIST *v11; // r12
  struct _LIST_ENTRY *v12; // rax
  int v13; // r8d
  _LIST_ENTRY *Flink; // rax
  struct _NET_BUFFER_LIST *v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD *v17; // r8
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  __int64 v19; // r9
  char v20; // r12
  __int64 v21; // rbp
  __int64 v22; // r14
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r10
  _QWORD *v25; // r14
  unsigned __int64 v26; // rdi
  unsigned __int8 *v27; // rcx
  __int64 v28; // rax
  char v29; // r8
  unsigned __int64 v30; // r13
  _QWORD *v31; // rcx
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rcx
  int v35; // ebx
  _LIST_ENTRY *v36; // rcx
  struct _NDIS_OID_REQUEST *p_Blink; // rbx
  int v38; // eax
  __int64 v39; // [rsp+30h] [rbp-98h]
  __int64 v40; // [rsp+40h] [rbp-88h]
  unsigned __int64 v41; // [rsp+48h] [rbp-80h]
  struct _NET_BUFFER_LIST *v42; // [rsp+60h] [rbp-68h]
  struct _LIST_ENTRY v43; // [rsp+68h] [rbp-60h] BYREF
  char v45; // [rsp+D8h] [rbp+10h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v4 = a1;
  v5 = a3;
  v43 = 0LL;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 272), 0, 0);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v7 = 0LL;
  v8 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 82)) / 10000LL;
  *((_QWORD *)SelectiveSuspend + 84) += v8;
  *((_QWORD *)SelectiveSuspend + 83) = v8;
  v9 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 81)) / 10000LL;
  *((_QWORD *)SelectiveSuspend + 86) += v9;
  *((_QWORD *)SelectiveSuspend + 85) = v9;
  v10 = *((_QWORD *)SelectiveSuspend + 68);
  *((_QWORD *)SelectiveSuspend + 68) = 0LL;
  *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
  v11 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
  *((_QWORD *)SelectiveSuspend + 70) = 0LL;
  *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
  v12 = (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584);
  v42 = v11;
  if ( v12->Flink == v12 )
  {
    v43.Blink = &v43;
    v43.Flink = &v43;
  }
  else
  {
    v43 = *v12;
    *((_QWORD *)SelectiveSuspend + 74) = (char *)SelectiveSuspend + 584;
    v12->Flink = v12;
    v43.Flink->Blink = &v43;
    v43.Blink->Flink = &v43;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
  if ( !v10 )
    goto LABEL_4;
  if ( !v5 )
  {
    v15 = 0LL;
    LODWORD(v16) = 0;
    v17 = 0LL;
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_39;
    NblTracker = v4->NblTracker;
    v19 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v22 = ndisNblTrackerEpoch;
    v40 = 0LL;
    v45 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v10, 0LL, 0x92u, NblTracker, 0);
      v19 = 0LL;
    }
    v23 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((unsigned __int8)NblTracker & 1) != 0 )
    {
      v24 = *(_QWORD *)(((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v23 = (2 * v22) ^ ((2 * v22) ^ (unsigned __int64)NblTracker) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v24 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v41 = v24;
    v25 = (_QWORD *)v10;
    while ( 1 )
    {
      v26 = v25[45];
      while ( v25[45] == v26 )
      {
        if ( v26 )
        {
          if ( (v26 & 4) != 0 )
            goto LABEL_60;
        }
        else if ( !v25[15] )
        {
          v25[15] = 0LL;
        }
        v27 = (unsigned __int8 *)v25[15];
        if ( v27 )
        {
          LODWORD(v16) = *v27;
          if ( (unsigned __int8)(v16 - 17) <= 1u || (_BYTE)v16 == 5 )
          {
            if ( v27 != (unsigned __int8 *)v24 || v25[3] )
            {
              ++v21;
              v28 = v23;
            }
            else
            {
              ++v19;
              v28 = 24LL;
              v40 = v19;
              ++v21;
            }
            goto LABEL_26;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v39) = *v27;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)v25,
              v39);
LABEL_71:
            v19 = v40;
            v24 = v41;
          }
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v16,
            27,
            11,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)v25);
          goto LABEL_71;
        }
LABEL_60:
        v28 = v23 | 4;
LABEL_26:
        v25[45] = v28;
        v25 = (_QWORD *)*v25;
        if ( !v25 )
          break;
      }
      v29 = v45;
      v30 = v7 - v21;
      if ( (v26 & 1) == 0 || !v30 )
        goto LABEL_32;
      if ( v45 || v20 )
      {
        v16 = 16 * ((v26 >> 1) & 1) + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v45 )
          goto LABEL_51;
        goto LABEL_31;
      }
      v20 = 1;
      if ( KeGetCurrentIrql() == 2 )
      {
        v45 = 1;
        v29 = 1;
        v16 = 16 * ((v26 >> 1) & 1) + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_31:
        v31 = (_QWORD *)(*(_QWORD *)v16 + (KeGetPcr()->Prcb.Number << 12));
        *v31 += v30;
        goto LABEL_32;
      }
      v29 = 0;
      v45 = 0;
      v16 = 16 * ((v26 >> 1) & 1) + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_51:
      _InterlockedAdd64((volatile signed __int64 *)(v16 + 8), v30);
LABEL_32:
      v19 = v40;
      v7 = v21;
      v24 = v41;
      if ( !v25 )
      {
        v32 = v21 - v40;
        if ( (v23 & 1) == 0 || !v32 )
          goto LABEL_38;
        if ( v29 || v20 )
        {
          v33 = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v29 )
            goto LABEL_47;
        }
        else
        {
          if ( KeGetCurrentIrql() != 2 )
          {
            v33 = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_47:
            _InterlockedAdd64((volatile signed __int64 *)(v33 + 8), v32);
LABEL_38:
            v15 = 0LL;
            v4 = a1;
            v17 = 0LL;
            LODWORD(v16) = 0;
LABEL_39:
            v5 = a3;
            v11 = v42;
            while ( 2 )
            {
              v35 = *(_DWORD *)(v10 + 112);
              if ( v15 )
              {
                if ( v35 != (_DWORD)v16 )
                {
                  *v17 = 0LL;
                  ndisMSendNBLToMiniportInternal(v4, v15, v16, 0, 1u);
                  goto LABEL_41;
                }
              }
              else
              {
LABEL_41:
                v15 = (struct _NET_BUFFER_LIST *)v10;
                LODWORD(v16) = v35;
              }
              v17 = (_QWORD *)v10;
              v10 = *(_QWORD *)v10;
              if ( !v10 )
              {
                ndisMSendNBLToMiniportInternal(v4, v15, v16, 0, 1u);
                goto LABEL_4;
              }
              continue;
            }
          }
          v33 = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        }
        v34 = (_QWORD *)(*(_QWORD *)v33 + (KeGetPcr()->Prcb.Number << 12));
        *v34 += v32;
        goto LABEL_38;
      }
    }
  }
  if ( byte_1401278B0 && (*((_DWORD *)&v4->PktMonComp + 14) & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)v4 + 5816, v10, v13, 2, -1071448017, -536866806);
  NdisSetStatusInNblChain((struct _NET_BUFFER_LIST *)v10, -1073676271);
  ndisMSendNetBufferListsCompleteInternal(v4, (struct _NET_BUFFER_LIST *)v10, 0, 0);
LABEL_4:
  if ( v11 )
    ndisReplayRecvNbls(v4, v11);
  if ( v5 )
  {
    ndisCancelDequeuedDirectOidRequests(v4, &v43);
  }
  else
  {
    while ( 1 )
    {
      Flink = v43.Flink;
      if ( v43.Flink == &v43 )
        break;
      if ( v43.Flink->Blink != &v43 || (v36 = v43.Flink->Flink, v43.Flink->Flink->Blink != v43.Flink) )
        __fastfail(3u);
      v43.Flink = v43.Flink->Flink;
      v36->Blink = &v43;
      p_Blink = (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink;
      v38 = ndisMDoDirectOidRequest(v4, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink, 1);
      if ( v38 != 259 )
        ndisMOidRequestCompleteInternal(v4, p_Blink, v38, 0LL);
    }
  }
}
