/*
 * XREFs of ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140040E30
 * Callers:
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1400403A0 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1400409C0 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140040E10 (-ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x140010D30 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x140033770 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EB50 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140040330 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140041C30 (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140041E60 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140048FD0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1400990A0 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ndisMSetTimestampOnNblChainTx @ 0x1400CB80C (ndisMSetTimestampOnNblChainTx.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int PcwDatapathCycleMask; // r14d
  unsigned int v6; // r15d
  unsigned int v7; // ebx
  struct _NET_BUFFER_LIST *v8; // r13
  struct _NDIS_MINIPORT_BLOCK *v9; // rsi
  bool v10; // zf
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  unsigned int TimestampFlags; // eax
  wchar_t *v13; // rdi
  KIRQL v14; // bl
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  __int64 v18; // r11
  unsigned int v19; // r9d
  unsigned __int64 v20; // rbx
  KSPIN_LOCK *v21; // r10
  _SLIST_HEADER *v22; // r12
  char v23; // r14
  unsigned __int64 Region; // rdi
  KSPIN_LOCK *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r8
  _QWORD *v29; // rcx
  wchar_t *Buffer; // rcx
  _QWORD *v31; // rcx
  KIRQL v32; // al
  int v33; // edi
  _SLIST_HEADER *v34; // rax
  KSPIN_LOCK *SelectiveSuspend; // rcx
  PKSPIN_LOCK v36; // rax
  KSPIN_LOCK *v37; // rbx
  PKSPIN_LOCK v38; // rcx
  KSPIN_LOCK v39; // rax
  bool busy; // al
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  _PKTMON_PACKET_TYPE PacketType; // ebx
  void *EdgeHandle; // rdx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  unsigned __int64 v51; // rbx
  __int64 v52; // r15
  struct _NET_BUFFER_LIST *v53; // r12
  char v54; // si
  unsigned __int64 v55; // rdi
  void *v56; // r14
  __int64 v57; // rax
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // r8
  _QWORD *v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  _QWORD *v63; // rcx
  _SLIST_HEADER *v64; // rax
  PKSPIN_LOCK v65; // rbx
  KSPIN_LOCK v66; // rax
  KIRQL v67; // dl
  _SLIST_HEADER *v68; // r12
  unsigned int v69; // r14d
  struct _NET_BUFFER_LIST *v70; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NET_BUFFER *FirstNetBuffer; // r13
  KIRQL CurrentIrql; // al
  struct _GUID *v74; // [rsp+20h] [rbp-C1h]
  char v75[8]; // [rsp+30h] [rbp-B1h]
  unsigned __int8 v76; // [rsp+40h] [rbp-A1h] BYREF
  char v77; // [rsp+41h] [rbp-A0h]
  unsigned __int8 v78; // [rsp+42h] [rbp-9Fh] BYREF
  char v79; // [rsp+43h] [rbp-9Eh]
  KIRQL v80; // [rsp+44h] [rbp-9Dh]
  char v81; // [rsp+45h] [rbp-9Ch]
  unsigned __int64 v82; // [rsp+48h] [rbp-99h]
  int v83; // [rsp+50h] [rbp-91h]
  struct _NET_BUFFER_LIST *v84; // [rsp+58h] [rbp-89h]
  int v85; // [rsp+60h] [rbp-81h]
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp-79h]
  __int64 v87; // [rsp+70h] [rbp-71h]
  unsigned __int64 v88; // [rsp+78h] [rbp-69h]
  unsigned int Number; // [rsp+80h] [rbp-61h]
  struct _LIST_ENTRY v90; // [rsp+88h] [rbp-59h] BYREF
  wchar_t *v91; // [rsp+98h] [rbp-49h]
  void (__fastcall *v92)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+A0h] [rbp-41h]
  __int64 v93; // [rsp+A8h] [rbp-39h]
  __int128 v94; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v95; // [rsp+C0h] [rbp-21h]
  __int64 v96; // [rsp+D0h] [rbp-11h]
  unsigned __int64 v97; // [rsp+D8h] [rbp-9h]
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // [rsp+E0h] [rbp-1h]
  char v100; // [rsp+140h] [rbp+5Fh]
  struct _NET_BUFFER_LIST *v101; // [rsp+148h] [rbp+67h]

  LOBYTE(PcwDatapathCycleMask) = 0;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  DriverHandle = a1->DriverHandle;
  v91 = 0LL;
  v85 = 0;
  Number = -1;
  if ( a1->PcwDatapathEventMask || a1->PcwDatapathCycleMask )
  {
    PcwDatapathCycleMask = a1->PcwDatapathCycleMask;
    Buffer = a1->Reserved4.Buffer;
    v85 = PcwDatapathCycleMask;
    v91 = Buffer;
    if ( !Buffer )
      v91 = v9->Reserved4.Buffer;
  }
  v10 = v9->MiniportMediaType == NdisMedium802_3;
  SendNetBufferListsHandler = v9->DriverHandle->MiniportDriverCharacteristics.SendNetBufferListsHandler;
  v92 = SendNetBufferListsHandler;
  if ( !v10
    || (!v9->LoopbackOpens || v9->NumOpens <= 1u && !v9->ReceiveFilters) && (a4 & 2) == 0 && (v9->Flags & 0x4000) == 0 )
  {
    goto LABEL_7;
  }
  v68 = 0LL;
  v78 = 0;
  v69 = 0;
  v76 = 0;
  v70 = a2;
  v101 = a2;
  do
  {
    v10 = (v70->Flags & 0x800) == 0;
    Alignment = (struct _NET_BUFFER_LIST *)v70->Link.Alignment;
    v84 = (struct _NET_BUFFER_LIST *)v70->Link.Alignment;
    if ( !v10 )
    {
      v76 = 0;
      goto LABEL_156;
    }
    FirstNetBuffer = v70->FirstNetBuffer;
    do
    {
      ndisMIsLoopbackNetBuffer(v9, FirstNetBuffer, v70, &v78, &v76);
      if ( v78 == 1 )
      {
        v78 = 0;
        ndisDoLoopbackNetBufferList(v9, FirstNetBuffer, v70, v7, v6);
      }
      FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    v8 = v101;
    if ( v76 != 1 )
    {
      Alignment = v84;
LABEL_156:
      v68 = (_SLIST_HEADER *)v70;
      goto LABEL_157;
    }
    v76 = 0;
    if ( v101 == v70 )
    {
      v8 = v84;
      v101 = v84;
    }
    else
    {
      v68->Alignment = (unsigned __int64)v84;
    }
    v70->Link.Alignment = 0LL;
    v70->Status = 0;
    if ( (v6 & 1) != 0 )
      v69 |= 1u;
    ndisMSendNetBufferListsCompleteInternal(v9, v70, v69, 0);
    Alignment = v84;
LABEL_157:
    v70 = Alignment;
  }
  while ( Alignment );
  LOBYTE(PcwDatapathCycleMask) = v85;
  SendNetBufferListsHandler = v92;
  if ( !v8 )
    return;
LABEL_7:
  if ( !a5 && v9->SelectiveSuspend )
  {
    v33 = 0;
    v34 = (_SLIST_HEADER *)v8;
    v83 = 0;
    if ( v8 )
    {
      do
      {
        v34 = (_SLIST_HEADER *)v34->Alignment;
        ++v33;
      }
      while ( v34 );
      v83 = v33;
    }
    if ( (v9->Flags & 0x80u) == 0 )
    {
      busy = ndisWdmSetBusyAsync((__int64)v9, v33, 0x34u, (__int64)v8, v7);
      goto LABEL_92;
    }
    SelectiveSuspend = (KSPIN_LOCK *)v9->SelectiveSuspend;
    v90.Blink = &v90;
    v90.Flink = &v90;
    SpinLock = SelectiveSuspend;
    LODWORD(v87) = 0;
    v81 = 0;
    v80 = KeAcquireSpinLockRaiseToDpc(SelectiveSuspend);
    v36 = SpinLock;
    if ( *((_DWORD *)SpinLock + 128)
      || *((_DWORD *)SpinLock + 129)
      || *((_DWORD *)SpinLock + 132)
      || *((_DWORD *)SpinLock + 133)
      || *((_DWORD *)SpinLock + 130)
      || *((_DWORD *)SpinLock + 131)
      || *((_DWORD *)SpinLock + 144)
      || *((_DWORD *)SpinLock + 127) )
    {
      if ( KeReadStateEvent((PRKEVENT)(SpinLock + 34)) )
      {
        v37 = SpinLock;
        v38 = SpinLock;
        v39 = SpinLock[75];
        *((_DWORD *)SpinLock + 36) = 0;
        *(_BYTE *)(v39 + 20) = 0;
        *(_BYTE *)(v38[75] + 44) = 0;
        *(_BYTE *)(v38[75] + 68) = 0;
        *(_BYTE *)(v38[75] + 92) = 0;
        *(_BYTE *)(v38[75] + 116) = 0;
        *((_DWORD *)v38 + 130) += v33;
        ndisSelectiveSuspendSetResumeBusyReason(v38, 0, 0x34u, 0);
        KeReleaseSpinLock(v37, v80);
        busy = 1;
        goto LABEL_92;
      }
      v36 = SpinLock;
    }
    v47 = 0LL;
    v90.Blink = &v90;
    v90.Flink = &v90;
    if ( !*(_DWORD *)ndisNblTrackerMode )
    {
LABEL_133:
      v64 = (_SLIST_HEADER *)v8;
      if ( v8 )
      {
        do
        {
          v64[7].Alignment = v7;
          v47 = (unsigned __int64)v64;
          v64 = (_SLIST_HEADER *)v64->Alignment;
        }
        while ( v64 );
      }
      v65 = SpinLock;
      *(_QWORD *)SpinLock[69] = v8;
      v65[69] = v47;
      v10 = *((_DWORD *)v65 + 128) == 0;
      *((_DWORD *)v65 + 158) = 0;
      if ( v10
        && !*((_DWORD *)v65 + 129)
        && !*((_DWORD *)v65 + 132)
        && !*((_DWORD *)v65 + 133)
        && !*((_DWORD *)v65 + 130)
        && !*((_DWORD *)v65 + 131)
        && !*((_DWORD *)v65 + 144)
        && !*((_DWORD *)v65 + 127) )
      {
        v81 = 1;
        KeClearEvent((PRKEVENT)(v65 + 34));
        LODWORD(v87) = 52;
      }
      v66 = v65[75];
      v67 = v80;
      *((_DWORD *)v65 + 36) = 0;
      *(_BYTE *)(v66 + 20) = 0;
      *(_BYTE *)(v65[75] + 44) = 0;
      *(_BYTE *)(v65[75] + 68) = 0;
      *(_BYTE *)(v65[75] + 92) = 0;
      *(_BYTE *)(v65[75] + 116) = 0;
      *((_DWORD *)v65 + 130) += v33;
      KeReleaseSpinLock(v65, v67);
      if ( v81 )
        ndisWdfAcquirePowerReferenceHelper(v9, 0, 1);
      if ( v90.Flink != &v90 )
        ndisCancelDequeuedDirectOidRequests(v9, &v90);
      if ( (_DWORD)v87 && (byte_140125101 & 8) != 0 )
      {
        LODWORD(v74) = v87;
        McTemplateK0qq_EtwWriteTransfer(
          (unsigned int)v87,
          &SSResumeRequested,
          &v9->InterfaceGuid,
          (v9->NetLuid.Value >> 24) & 0xFFFFFF,
          (__int64)v74);
      }
      busy = 0;
LABEL_92:
      if ( !busy )
        return;
      goto LABEL_9;
    }
    v48 = v36[76];
    v49 = 0LL;
    v50 = ndisNblTrackerEpoch;
    LODWORD(v88) = ndisNblTrackerEpoch;
    v97 = v48;
    v82 = 0LL;
    v84 = 0LL;
    v77 = 1;
    v79 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal((unsigned __int64)v8, 0LL, 1u, (void *)v48, 1u);
      v48 = v97;
      v47 = 0LL;
      v50 = (unsigned int)v88;
      v49 = 0LL;
    }
    v51 = v48 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v48 & 1) != 0 )
    {
      v88 = *(_QWORD *)((v48 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v51 = (2 * v50) ^ (v48 ^ (2 * v50)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v88 = v48 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    if ( v8 )
    {
      v52 = 0LL;
      v53 = v8;
      v54 = 0;
      while ( 1 )
      {
        v55 = (unsigned __int64)v53->NetBufferListInfo[27];
        v56 = (void *)v88;
        while ( v53->NetBufferListInfo[27] == (void *)v55 )
        {
          if ( v55 )
          {
            if ( (v55 & 4) != 0 )
              goto LABEL_179;
          }
          else if ( !v53->SourceHandle )
          {
            v53->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL);
          }
          if ( ndisNblTrackerCanNblBeTracked(v53) )
          {
            if ( v53->SourceHandle != v56 || v53->ParentNetBufferList )
            {
              v57 = v51;
              v47 = ++v82;
            }
            else
            {
              ++v52;
              v47 = v82 + 1;
              v57 = 24LL;
              ++v82;
            }
            goto LABEL_119;
          }
LABEL_179:
          v47 = v82;
          v57 = v51 | 4;
LABEL_119:
          v53->NetBufferListInfo[27] = (void *)v57;
          v53 = (struct _NET_BUFFER_LIST *)v53->Link.Alignment;
          if ( !v53 )
            break;
        }
        v58 = (unsigned __int64)v84 - v47;
        v93 = v52;
        v84 = (struct _NET_BUFFER_LIST *)((char *)v84 - v47);
        if ( (v55 & 1) == 0 || !v58 )
          goto LABEL_125;
        if ( v77 || v54 )
        {
          v59 = 16 * ((v55 >> 1) & 1) + (v55 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v77 )
            goto LABEL_167;
          goto LABEL_124;
        }
        v54 = 1;
        CurrentIrql = KeGetCurrentIrql();
        v47 = v82;
        v58 = (unsigned __int64)v84;
        if ( CurrentIrql == 2 )
        {
          v77 = 1;
          v59 = 16 * ((v55 >> 1) & 1) + (v55 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_124:
          v60 = (_QWORD *)(*(_QWORD *)v59 + (KeGetPcr()->Prcb.Number << 12));
          *v60 += v58;
          goto LABEL_125;
        }
        v77 = 0;
        v59 = 16 * ((v55 >> 1) & 1) + (v55 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_167:
        _InterlockedAdd64((volatile signed __int64 *)(v59 + 8), v58);
LABEL_125:
        v84 = (struct _NET_BUFFER_LIST *)v47;
        if ( !v53 )
        {
          LOBYTE(PcwDatapathCycleMask) = v85;
          v6 = a4;
          SendNetBufferListsHandler = v92;
          v33 = v83;
          v49 = v93;
          v79 = v54;
          v9 = a1;
          break;
        }
      }
    }
    v61 = v47 - v49;
    v82 = v61;
    if ( (v51 & 1) != 0 && v61 )
    {
      if ( v77 || v79 )
      {
        v62 = 16 * ((v51 >> 1) & 1) + (v51 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v77 )
        {
LABEL_163:
          _InterlockedAdd64((volatile signed __int64 *)(v62 + 8), v82);
          goto LABEL_132;
        }
      }
      else
      {
        if ( KeGetCurrentIrql() != 2 )
        {
          v62 = 16 * ((v51 >> 1) & 1) + (v51 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_163;
        }
        v62 = 16 * ((v51 >> 1) & 1) + (v51 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      }
      v63 = (_QWORD *)(*(_QWORD *)v62 + (KeGetPcr()->Prcb.Number << 12));
      *v63 += v82;
    }
LABEL_132:
    v7 = a3;
    v47 = 0LL;
    goto LABEL_133;
  }
LABEL_9:
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_10;
  v15 = ndisNblTrackerEpoch;
  v16 = 0LL;
  NblTracker = v9->NblTracker;
  v18 = 0LL;
  LODWORD(v88) = ndisNblTrackerEpoch;
  v82 = 0LL;
  v19 = v6 & 1;
  v84 = 0LL;
  v83 = v19;
  v87 = 0LL;
  v100 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal((unsigned __int64)v8, 0LL, 0x92u, NblTracker, v19);
    v15 = v88;
    v16 = 0LL;
    LOBYTE(v19) = v83;
    v18 = 0LL;
  }
  v20 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( ((unsigned __int8)NblTracker & 1) != 0 )
  {
    v21 = *(KSPIN_LOCK **)(((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v20 = (2LL * v15) ^ ((2LL * v15) ^ (unsigned __int64)NblTracker) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v21 = (KSPIN_LOCK *)((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL);
  }
  SpinLock = v21;
  if ( v8 )
  {
    v22 = (_SLIST_HEADER *)v8;
    v23 = 0;
    while ( 1 )
    {
      Region = v22[22].Region;
      while ( v22[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_75;
        }
        else if ( !v22[7].Region )
        {
          v22[7].Region = 0LL;
        }
        v25 = (KSPIN_LOCK *)v22[7].Region;
        if ( v25 )
        {
          if ( (unsigned __int8)(*(_BYTE *)v25 - 17) <= 1u || *(_BYTE *)v25 == 5 )
          {
            if ( v25 != v21 || v22[1].Region )
            {
              ++v16;
              v26 = v20;
              v82 = v16;
            }
            else
            {
              ++v18;
              v26 = 24LL;
              ++v16;
              v87 = v18;
              v82 = v16;
            }
            goto LABEL_33;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v75 = *(unsigned __int8 *)v25;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)v22,
              *(_QWORD *)v75);
LABEL_86:
            v16 = v82;
            v21 = SpinLock;
            v18 = v87;
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
            (char)v22);
          goto LABEL_86;
        }
LABEL_75:
        v26 = v20 | 4;
LABEL_33:
        v22[22].Region = v26;
        v22 = (_SLIST_HEADER *)v22->Alignment;
        if ( !v22 )
          break;
      }
      LOBYTE(v19) = v83;
      v27 = (unsigned __int64)v84 - v16;
      v84 = (struct _NET_BUFFER_LIST *)((char *)v84 - v16);
      if ( (Region & 1) == 0 || !v27 )
        goto LABEL_39;
      if ( (_BYTE)v83 || v23 )
      {
        v28 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !(_BYTE)v83 )
          goto LABEL_55;
        goto LABEL_38;
      }
      v23 = 1;
      v32 = KeGetCurrentIrql();
      v16 = v82;
      v27 = (unsigned __int64)v84;
      if ( v32 == 2 )
      {
        LOBYTE(v19) = 1;
        v83 = 1;
        v28 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_38:
        v29 = (_QWORD *)(*(_QWORD *)v28 + (KeGetPcr()->Prcb.Number << 12));
        *v29 += v27;
        goto LABEL_39;
      }
      LOBYTE(v19) = 0;
      v83 = v19;
      v28 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_55:
      _InterlockedAdd64((volatile signed __int64 *)(v28 + 8), v27);
LABEL_39:
      v21 = SpinLock;
      v18 = v87;
      v84 = (struct _NET_BUFFER_LIST *)v16;
      if ( !v22 )
      {
        v6 = a4;
        SendNetBufferListsHandler = v92;
        v100 = v23;
        LOBYTE(PcwDatapathCycleMask) = v85;
        break;
      }
    }
  }
  a2 = (struct _NET_BUFFER_LIST *)(v16 - v18);
  v82 = (unsigned __int64)a2;
  if ( (v20 & 1) != 0 && a2 )
  {
    if ( (_BYTE)v19 || v100 )
    {
      a2 = (struct _NET_BUFFER_LIST *)(16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
      if ( !(_BYTE)v19 )
        goto LABEL_47;
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        a2 = (struct _NET_BUFFER_LIST *)(16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_47:
        _InterlockedAdd64((volatile signed __int64 *)&a2->FirstNetBuffer, v82);
        goto LABEL_10;
      }
      a2 = (struct _NET_BUFFER_LIST *)(16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
    }
    v31 = (_QWORD *)(a2->Link.Alignment + (KeGetPcr()->Prcb.Number << 12));
    *v31 += v82;
  }
LABEL_10:
  if ( byte_1401278B0 )
  {
    CompContext = v9->PktMonEdge.CompContext;
    if ( CompContext )
    {
      if ( (*((_DWORD *)CompContext + 14) & 1) != 0 )
      {
        PacketType = v9->PktMonEdge.PacketType;
        v10 = (v8->NblFlags & 0x8000) == 0;
        v94 = 0LL;
        LODWORD(v96) = 0;
        v95 = 0LL;
        if ( v10 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            EdgeHandle = v9->PktMonEdge.EdgeHandle;
            LOWORD(v94) = 40;
            *((_QWORD *)&v94 + 1) = v8;
            LODWORD(v95) = 1;
            *(_QWORD *)((char *)&v95 + 4) = (unsigned int)PacketType | 0x200000000LL;
            v96 = 0LL;
            (*(void (__fastcall **)(_QWORD, void *, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 40LL))(
              xmmword_1401278D0,
              EdgeHandle,
              &v94,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
  }
  TimestampFlags = v9->TimestampFlags;
  if ( (TimestampFlags & 2) != 0 )
  {
    a2 = 0LL;
  }
  else
  {
    if ( (TimestampFlags & 4) == 0 )
      goto LABEL_13;
    LOBYTE(a2) = 1;
  }
  ndisMSetTimestampOnNblChainTx(v8, a2);
LABEL_13:
  if ( (PcwDatapathCycleMask & 0x80u) != 0 )
  {
    if ( (v6 & 1) != 0 )
      v14 = 2;
    else
      v14 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    v13 = v91;
    *(_QWORD *)((char *)v91 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 360) = __rdtsc();
  }
  else
  {
    v13 = v91;
    v14 = 2;
  }
  if ( ndisVerifierNdisDispatch && (DriverHandle->Flags & 2) != 0 )
    (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
     + 8))(
      v9->MiniportAdapterContext,
      v8,
      a3,
      v6,
      v9,
      v9->VerifierContext,
      SendNetBufferListsHandler);
  else
    SendNetBufferListsHandler(v9->MiniportAdapterContext, v8, a3, v6);
  if ( (PcwDatapathCycleMask & 0x80u) != 0 )
  {
    v41 = Number;
    if ( Number == -1 )
      v41 = KeGetPcr()->Prcb.Number;
    v42 = (__int64)v13 + ndisPcwPerCpuDataStride * v41 + ndisPcwOffsetToPerCpuData;
    v43 = __rdtsc();
    *(_QWORD *)(v42 + 160) += (((unsigned __int64)HIDWORD(v43) << 32) | (unsigned int)v43) - *(_QWORD *)(v42 + 360);
    *(_QWORD *)(v42 + 360) = 0LL;
    if ( v14 != 2 )
      KeLowerIrql(v14);
  }
}
