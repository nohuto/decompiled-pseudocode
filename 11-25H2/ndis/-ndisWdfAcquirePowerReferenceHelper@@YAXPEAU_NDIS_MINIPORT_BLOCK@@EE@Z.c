/*
 * XREFs of ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0
 * Callers:
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E270 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E770 (-ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140040E30 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140061E30 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848F0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
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
 *     WPP_RECORDER_SF_sq @ 0x14006E930 (WPP_RECORDER_SF_sq.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1400990A0 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400CA120 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisWdfAcquirePowerReferenceHelper(struct _NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rbp
  int v6; // esi
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  unsigned int v8; // esi
  KIRQL v9; // r8
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  struct _NET_BUFFER_LIST *v14; // r13
  struct _LIST_ENTRY *v15; // rax
  int v16; // r8d
  _LIST_ENTRY *Flink; // rax
  struct _NET_BUFFER_LIST *v18; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *p_Alignment; // r8
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  char v22; // r13
  __int64 v23; // r15
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r10
  _QWORD *v26; // r15
  unsigned __int64 v27; // rdi
  unsigned __int8 *v28; // rcx
  __int64 v29; // rax
  char v30; // r9
  _QWORD *v31; // rcx
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rcx
  int v35; // ebx
  KSPIN_LOCK *v36; // rbx
  KIRQL v37; // al
  KSPIN_LOCK v38; // rcx
  __int64 CurrentProcess; // rax
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  _LIST_ENTRY *v43; // rcx
  struct _NDIS_OID_REQUEST *p_Blink; // rbx
  int v45; // eax
  char v46[8]; // [rsp+30h] [rbp-98h]
  struct _LIST_ENTRY v47; // [rsp+48h] [rbp-80h] BYREF
  _QWORD *v48; // [rsp+58h] [rbp-70h]
  unsigned __int64 v49; // [rsp+60h] [rbp-68h]
  unsigned __int64 v50; // [rsp+68h] [rbp-60h]
  struct _NET_BUFFER_LIST *v51; // [rsp+70h] [rbp-58h]
  unsigned __int64 v52; // [rsp+80h] [rbp-48h]
  struct _NET_BUFFER_LIST *v53; // [rsp+88h] [rbp-40h]
  char v55; // [rsp+E8h] [rbp+20h]

  v5 = a1;
  if ( (a1->Flags & 0x80u) == 0 )
    __int2c();
  v6 = ((__int64 (__fastcall *)(void *))a1->DriverHandle->CxBlock->Chars.EvtCxPowerReference)(a1->MiniportAdapterContext);
  if ( v6 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x20u,
        (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
        (char)v5,
        v6);
LABEL_5:
    if ( !a2 && !a3 )
      return;
    SelectiveSuspend = v5->SelectiveSuspend;
    v8 = (unsigned int)v6 >> 31;
    v47 = 0LL;
    KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 272), 0, 0);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    v10 = 0LL;
    v11 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 82)) / 10000LL;
    *((_QWORD *)SelectiveSuspend + 84) += v11;
    *((_QWORD *)SelectiveSuspend + 83) = v11;
    v12 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 81)) / 10000LL;
    *((_QWORD *)SelectiveSuspend + 86) += v12;
    *((_QWORD *)SelectiveSuspend + 85) = v12;
    v13 = *((_QWORD *)SelectiveSuspend + 68);
    *((_QWORD *)SelectiveSuspend + 68) = 0LL;
    *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
    v14 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
    *((_QWORD *)SelectiveSuspend + 70) = 0LL;
    *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
    v15 = (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584);
    v52 = v13;
    v53 = v14;
    if ( v15->Flink == v15 )
    {
      v47.Blink = &v47;
      v47.Flink = &v47;
    }
    else
    {
      v47 = *v15;
      *((_QWORD *)SelectiveSuspend + 74) = (char *)SelectiveSuspend + 584;
      v15->Flink = v15;
      v47.Flink->Blink = &v47;
      v47.Blink->Flink = &v47;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v9);
    if ( !v13 )
      goto LABEL_10;
    if ( (_BYTE)v8 )
    {
      if ( byte_1401278B0 && (*((_DWORD *)&v5->PktMonComp + 14) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)v5 + 5816, v13, v16, 2, -1071448017, -536866806);
      NdisSetStatusInNblChain((struct _NET_BUFFER_LIST *)v13, -1073676271);
      ndisMSendNetBufferListsCompleteInternal(v5, (struct _NET_BUFFER_LIST *)v13, 0, 0);
LABEL_10:
      if ( v14 )
        ndisReplayRecvNbls(v5, v14);
      if ( (_BYTE)v8 )
      {
        ndisCancelDequeuedDirectOidRequests(v5, &v47);
      }
      else
      {
        while ( 1 )
        {
          Flink = v47.Flink;
          if ( v47.Flink == &v47 )
            break;
          if ( v47.Flink->Blink != &v47 || (v43 = v47.Flink->Flink, v47.Flink->Flink->Blink != v47.Flink) )
            __fastfail(3u);
          v47.Flink = v47.Flink->Flink;
          v43->Blink = &v47;
          p_Blink = (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink;
          v45 = ndisMDoDirectOidRequest(v5, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink, 1);
          if ( v45 != 259 )
            ndisMOidRequestCompleteInternal(v5, p_Blink, v45, 0LL);
        }
      }
      return;
    }
    v18 = 0LL;
    v51 = 0LL;
    LODWORD(v19) = 0;
    p_Alignment = 0LL;
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_46;
    NblTracker = v5->NblTracker;
    v22 = 0;
    v23 = ndisNblTrackerEpoch;
    v49 = 0LL;
    v48 = 0LL;
    v55 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v13, 0LL, 0x92u, NblTracker, 0);
      p_Alignment = 0LL;
    }
    v24 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((unsigned __int8)NblTracker & 1) != 0 )
    {
      v25 = *(_QWORD *)(((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v24 = (2 * v23) ^ ((2 * v23) ^ (unsigned __int64)NblTracker) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v25 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v26 = (_QWORD *)v13;
    v50 = v25;
LABEL_25:
    v27 = v26[45];
    while ( 1 )
    {
      if ( v26[45] != v27 )
      {
LABEL_34:
        v30 = v55;
        v19 = v49 - v10;
        v49 -= v10;
        if ( (v27 & 1) == 0 || !v19 )
          goto LABEL_39;
        if ( v55 || v22 )
        {
          v19 = 16 * ((v27 >> 1) & 1) + (v27 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v55 )
            goto LABEL_58;
          goto LABEL_38;
        }
        v22 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          v55 = 1;
          v30 = 1;
          v19 = 16 * ((v27 >> 1) & 1) + (v27 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_38:
          v31 = (_QWORD *)(*(_QWORD *)v19 + (KeGetPcr()->Prcb.Number << 12));
          *v31 += v49;
          goto LABEL_39;
        }
        v30 = 0;
        v55 = 0;
        v19 = 16 * ((v27 >> 1) & 1) + (v27 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_58:
        _InterlockedAdd64((volatile signed __int64 *)(v19 + 8), v49);
LABEL_39:
        p_Alignment = v48;
        v25 = v50;
        v49 = v10;
        if ( !v26 )
        {
          v32 = v10 - (_QWORD)v48;
          v5 = a1;
          v13 = v52;
          if ( (v24 & 1) == 0 || !v32 )
            goto LABEL_45;
          if ( v30 || v22 )
          {
            v33 = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !v30 )
              goto LABEL_54;
          }
          else
          {
            if ( KeGetCurrentIrql() != 2 )
            {
              v33 = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_54:
              _InterlockedAdd64((volatile signed __int64 *)(v33 + 8), v32);
LABEL_45:
              v18 = v51;
              p_Alignment = &v51->Link.Alignment;
              LODWORD(v19) = (_DWORD)v51;
LABEL_46:
              v14 = v53;
              while ( 2 )
              {
                v35 = *(_DWORD *)(v13 + 112);
                if ( v18 )
                {
                  if ( v35 != (_DWORD)v19 )
                  {
                    *p_Alignment = 0LL;
                    ndisMSendNBLToMiniportInternal(v5, v18, v19, 0, 1u);
                    goto LABEL_48;
                  }
                }
                else
                {
LABEL_48:
                  v18 = (struct _NET_BUFFER_LIST *)v13;
                  LODWORD(v19) = v35;
                }
                p_Alignment = (_QWORD *)v13;
                v13 = *(_QWORD *)v13;
                if ( !v13 )
                {
                  ndisMSendNBLToMiniportInternal(v5, v18, v19, 0, 1u);
                  goto LABEL_10;
                }
                continue;
              }
            }
            v33 = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          }
          v34 = (_QWORD *)(*(_QWORD *)v33 + (KeGetPcr()->Prcb.Number << 12));
          *v34 += v32;
          goto LABEL_45;
        }
        goto LABEL_25;
      }
      if ( v27 )
      {
        if ( (v27 & 4) != 0 )
          goto LABEL_67;
      }
      else if ( !v26[15] )
      {
        v26[15] = 0LL;
      }
      v28 = (unsigned __int8 *)v26[15];
      if ( v28 )
      {
        LODWORD(v19) = *v28;
        if ( (unsigned __int8)(v19 - 17) <= 1u || (_BYTE)v19 == 5 )
        {
          if ( v28 != (unsigned __int8 *)v25 || v26[3] )
          {
            ++v10;
            v29 = v24;
          }
          else
          {
            p_Alignment = (_QWORD *)((char *)p_Alignment + 1);
            v29 = 24LL;
            v48 = p_Alignment;
            ++v10;
          }
          goto LABEL_33;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v46 = *v28;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)v26,
            *(_QWORD *)v46);
LABEL_84:
          p_Alignment = v48;
          v25 = v50;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v19,
          27,
          11,
          (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
          (char)v26);
        goto LABEL_84;
      }
LABEL_67:
      v29 = v24 | 4;
LABEL_33:
      v26[45] = v29;
      v26 = (_QWORD *)*v26;
      if ( !v26 )
        goto LABEL_34;
    }
  }
  if ( v6 != 259 )
    goto LABEL_5;
  v36 = (KSPIN_LOCK *)v5->SelectiveSuspend;
  v37 = KeAcquireSpinLockRaiseToDpc(v36);
  v38 = v36[68];
  if ( v38 )
    *(_DWORD *)(v38 + 128) |= 0x20000u;
  KeReleaseSpinLock(v36, v37);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    CurrentProcess = PsGetCurrentProcess();
    PsGetProcessImageFileName(CurrentProcess);
    WPP_RECORDER_SF_sq(*((_QWORD *)WPP_GLOBAL_Control + 8), v40, v41, v42);
  }
}
