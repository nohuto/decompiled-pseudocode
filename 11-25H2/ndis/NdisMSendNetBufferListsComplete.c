/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x140047050
 * Callers:
 *     ??$CompleteTransmittedNblsInner@$0A@@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003A0C (--$CompleteTransmittedNblsInner@$0A@@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     NdisFreeNetBufferListContext @ 0x14001A140 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     PktMonClientNblDrop @ 0x14003AAA0 (PktMonClientNblDrop.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140047C40 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140047CF0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NdisStatusToDropReason @ 0x140047DD0 (NdisStatusToDropReason.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400AA9A8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  ULONG v3; // r15d
  char *v5; // rsi
  __int64 v6; // rdi
  __int64 NdisReserved2; // rcx
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, __int64, __int64); // r12
  __int64 v12; // r13
  int v13; // r14d
  PNET_BUFFER_LIST j; // rax
  int v15; // ebx
  KIRQL v16; // al
  KIRQL v17; // r12
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // r13
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r10
  PNET_BUFFER_LIST Alignment; // r12
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int64 v29; // r9
  char v30; // r8
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rdx
  int v33; // eax
  PNET_BUFFER_LIST i; // rbx
  __int64 *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rbp
  __int64 v38; // rsi
  __int64 v39; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v40; // rax
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v44; // rax
  __int64 v45; // r8
  __int64 v46; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v47; // rax
  __int64 v48; // r8
  __int64 v49; // rbx
  KIRQL CurrentIrql; // al
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r8
  unsigned int v54; // eax
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  int v58; // eax
  __int64 v59; // r9
  int v60; // ecx
  KSPIN_LOCK *v61; // rbx
  KIRQL v62; // di
  PNET_BUFFER_LIST *v63; // rcx
  _QWORD *v64; // rdx
  PVOID Context; // [rsp+20h] [rbp-E8h]
  __int64 v66; // [rsp+30h] [rbp-D8h]
  KIRQL v67; // [rsp+40h] [rbp-C8h]
  char v68; // [rsp+44h] [rbp-C4h]
  __int64 v69; // [rsp+48h] [rbp-C0h]
  unsigned int Number; // [rsp+50h] [rbp-B8h]
  __int64 v71; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v72; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v73; // [rsp+60h] [rbp-A8h]
  __int64 v74; // [rsp+68h] [rbp-A0h]
  unsigned __int64 LowLimit; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 HighLimit; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v77; // [rsp+80h] [rbp-88h]
  _QWORD Parameter[5]; // [rsp+88h] [rbp-80h] BYREF
  ULONG v79; // [rsp+B0h] [rbp-58h]
  int v80; // [rsp+B4h] [rbp-54h]
  _QWORD v81[3]; // [rsp+B8h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v84; // [rsp+110h] [rbp+8h]
  unsigned int v85; // [rsp+110h] [rbp+8h]
  char v87; // [rsp+128h] [rbp+20h]

  v3 = SendCompleteFlags;
  v5 = (char *)MiniportAdapterHandle;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
  {
    ndisNblVerifyTxCompletion(
      NetBufferList,
      SendCompleteFlags,
      (const struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle);
    ndisNblPoisonScratchFields(NetBufferList);
  }
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
    goto LABEL_4;
  switch ( *v5 )
  {
    case 5:
      LOBYTE(v33) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v5, 1024);
LABEL_65:
      if ( (_BYTE)v33 )
      {
        for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
        {
          if ( *(char **)&i->Context->ContextData[i->Context->Offset] != v5 )
            NblContextVerifierBugcheckContextCorruption(i, NetBufferList, v5);
          NdisFreeNetBufferListContext(i, 8u);
        }
      }
      break;
    case 17:
      LOBYTE(v33) = (*((_DWORD *)v5 + 922) & 0x1000) != 0;
      goto LABEL_65;
    case 18:
      v33 = *((_DWORD *)v5 + 56) >> 31;
      goto LABEL_65;
  }
LABEL_4:
  v6 = *((_QWORD *)v5 + 556);
  if ( v6 )
  {
    v13 = 0;
    for ( j = NetBufferList; j; ++v13 )
      j = (PNET_BUFFER_LIST)j->Link.Alignment;
    v15 = *((_DWORD *)v5 + 30);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
    *(_DWORD *)(v6 + 520) -= v13;
    v17 = v16;
    if ( (v15 & 0x80u) != 0
      && !*(_DWORD *)(v6 + 512)
      && !*(_DWORD *)(v6 + 516)
      && !*(_DWORD *)(v6 + 528)
      && !*(_DWORD *)(v6 + 532)
      && !*(_DWORD *)(v6 + 520)
      && !*(_DWORD *)(v6 + 524)
      && !*(_DWORD *)(v6 + 576)
      && !*(_DWORD *)(v6 + 508) )
    {
      if ( (*((_DWORD *)v5 + 30) & 0x80u) == 0 )
        __int2c();
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)v5 + 470) + 360LL) + 48LL))(*((_QWORD *)v5 + 3));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v17);
  }
  NdisReserved2 = NetBufferList->NdisReserved2;
  if ( (_DWORD)NdisReserved2 && byte_1401278B0 && (*((_DWORD *)v5 + 1468) & 2) != 0 )
  {
    v58 = NdisStatusToDropReason(NdisReserved2);
    PktMonClientNblDrop(
      (__int64)(v5 + 5816),
      (__int64)NetBufferList,
      *((_DWORD *)v5 + 1467),
      v59,
      (__int64)Context,
      2,
      v58,
      -536866803);
  }
  LOWORD(v8) = 0;
  v74 = 0LL;
  Number = -1;
  if ( *((_DWORD *)v5 + 12) || *((_DWORD *)v5 + 20) )
  {
    v8 = *((_DWORD *)v5 + 20);
    v74 = *((_QWORD *)v5 + 5);
    if ( !v74 )
      v74 = *((_QWORD *)v5 + 5);
  }
  v9 = *(unsigned int *)ndisNblTrackerMode;
  v67 = 2;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_9;
  v18 = *((_QWORD *)v5 + 510);
  v19 = *((_QWORD *)v5 + 323);
  v20 = 0LL;
  v21 = ndisNblTrackerEpoch;
  v77 = v18;
  v22 = 0LL;
  v68 = v3 & 1;
  v71 = 0LL;
  v69 = 0LL;
  v87 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal((unsigned __int64)NetBufferList, v18, 0x93u, (void *)v19, v3 & 1);
    v20 = 0LL;
  }
  v23 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v19 & 1) != 0 )
  {
    v9 = 2 * v21;
    v24 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v23 = (2 * v21) ^ (v19 ^ (2 * v21)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v24 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v73 = v24;
  Alignment = NetBufferList;
  do
  {
    v26 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    v27 = v77;
    while ( Alignment->NetBufferListInfo[27] == (void *)v26 )
    {
      if ( v26 )
      {
        if ( (v26 & 4) != 0 )
          goto LABEL_127;
      }
      else if ( !Alignment->SourceHandle )
      {
        v57 = v27 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v27 & 1) != 0 )
          v57 = *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        Alignment->SourceHandle = (void *)v57;
      }
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        LODWORD(v18) = *SourceHandle;
        if ( (unsigned __int8)(v18 - 17) <= 1u || (_BYTE)v18 == 5 )
        {
          if ( SourceHandle != (unsigned __int8 *)v24 || Alignment->ParentNetBufferList )
          {
            ++v22;
            v9 = v23;
          }
          else
          {
            ++v20;
            v9 = 24LL;
            v69 = v20;
            ++v22;
          }
          goto LABEL_46;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v66) = *SourceHandle;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)Alignment,
            v66);
LABEL_155:
          v20 = v69;
          v24 = v73;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v18,
          27,
          11,
          (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
          (char)Alignment);
        goto LABEL_155;
      }
LABEL_127:
      v9 = v23 | 4;
LABEL_46:
      Alignment->NetBufferListInfo[27] = (void *)v9;
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    v29 = v71 - v22;
    v30 = v68;
    v72 = v71 - v22;
    if ( (v26 & 1) == 0 || !v29 )
      goto LABEL_52;
    if ( v68 || v87 )
    {
      v9 = 16 * ((v26 >> 1) & 1);
      v18 = v9 + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v68 )
        goto LABEL_100;
      goto LABEL_51;
    }
    v87 = 1;
    CurrentIrql = KeGetCurrentIrql();
    v29 = v72;
    if ( CurrentIrql == 2 )
    {
      v30 = 1;
      v68 = 1;
      v18 = 16 * ((v26 >> 1) & 1) + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_51:
      v9 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(*(_QWORD *)v18 + (unsigned int)v9) += v29;
      goto LABEL_52;
    }
    v30 = 0;
    v9 = 16 * ((v26 >> 1) & 1);
    v68 = 0;
    v18 = v9 + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_100:
    _InterlockedAdd64((volatile signed __int64 *)(v18 + 8), v29);
LABEL_52:
    v20 = v69;
    v24 = v73;
    v71 = v22;
  }
  while ( Alignment );
  v5 = (char *)MiniportAdapterHandle;
  v31 = v22 - v69;
  v3 = SendCompleteFlags;
  if ( (v23 & 1) != 0 && v31 )
  {
    if ( v30 || v87 )
    {
      v9 = 16 * ((v23 >> 1) & 1);
      v32 = v9 + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( v30 )
        goto LABEL_96;
LABEL_59:
      _InterlockedAdd64((volatile signed __int64 *)(v32 + 8), v31);
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v9 = 16 * ((v23 >> 1) & 1);
        v32 = v9 + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_59;
      }
      v32 = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_96:
      v9 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(*(_QWORD *)v32 + (unsigned int)v9) += v31;
    }
  }
LABEL_9:
  if ( byte_1401278B0 )
  {
    v9 = (__int64)NetBufferList;
    do
    {
      *(_QWORD *)(v9 + 248) = 0LL;
      v9 = *(_QWORD *)v9;
    }
    while ( v9 );
  }
  if ( (v8 & 0x100) != 0 )
  {
    if ( (v3 & 1) == 0 )
      v67 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    v9 = __rdtsc();
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * Number + v74 + 368) = v9;
  }
  v10 = *((_QWORD *)v5 + 324);
  v11 = (void (__fastcall *)(__int64, __int64, __int64))*((_QWORD *)v5 + 327);
  v12 = *((_QWORD *)v5 + 322);
  if ( *(_BYTE *)v10 == 17 )
    goto LABEL_15;
  if ( (v3 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v9) = KeGetPcr()->Prcb.Number;
    v35 = v81;
    v84 = v9;
    v81[2] = 0LL;
    v81[0] = NetBufferList;
    v81[1] = NetBufferList;
    NetBufferList->Scratch = 0LL;
    NetBufferList->ChildRefCount = v3;
    while ( *(_BYTE *)v10 == 5 )
    {
      v36 = *v35;
      if ( !*v35 )
        break;
      v37 = v10;
      v38 = *(_QWORD *)(v10 + 424) + 96 * v9;
      if ( *(_BYTE *)(v38 + 40) )
      {
        *v35 = 0LL;
        do
        {
          v40 = ndisVerifierNdisDispatch;
          v41 = *(unsigned int *)(v36 + 132);
          v42 = *(_QWORD *)(v36 + 112);
          *(_DWORD *)(v36 + 132) = 0;
          if ( v40 && *(_BYTE *)v10 == 5 && *(_QWORD *)(v10 + 776) )
            (*((void (__fastcall **)(__int64, __int64, _QWORD))v40 + 13))(v12, v36, 0LL);
          else
            v11(v12, v36, v41);
          v36 = v42;
        }
        while ( v42 );
        break;
      }
      *(_BYTE *)(v38 + 40) = 1;
      v39 = *v35;
      *v35 = 0LL;
      if ( v39 )
      {
        do
        {
          v47 = ndisVerifierNdisDispatch;
          v48 = *(unsigned int *)(v39 + 132);
          v49 = *(_QWORD *)(v39 + 112);
          *(_DWORD *)(v39 + 132) = 0;
          if ( v47 && *(_BYTE *)v10 == 5 && *(_QWORD *)(v10 + 776) )
            (*((void (__fastcall **)(__int64, __int64, _QWORD))v47 + 13))(v12, v39, 0LL);
          else
            v11(v12, v39, v48);
          v39 = v49;
        }
        while ( v49 );
      }
      v9 = v84;
      v35 = (__int64 *)(v38 + 24);
      *(_BYTE *)(v38 + 40) = 0;
      v10 = *(_QWORD *)(v10 + 488);
      v11 = *(void (__fastcall **)(__int64, __int64, __int64))(v37 + 464);
      v12 = *(_QWORD *)(v37 + 472);
    }
    v43 = *v35;
    if ( *v35 )
    {
      *v35 = 0LL;
      do
      {
        v44 = ndisVerifierNdisDispatch;
        v45 = *(unsigned int *)(v43 + 132);
        v46 = *(_QWORD *)(v43 + 112);
        *(_DWORD *)(v43 + 132) = 0;
        if ( v44 && *(_BYTE *)v10 == 5 && *(_QWORD *)(v10 + 776) )
          (*((void (__fastcall **)(__int64, __int64, _QWORD))v44 + 13))(v12, v43, 0LL);
        else
          v11(v12, v43, v45);
        v43 = v46;
      }
      while ( v46 );
    }
  }
  else
  {
    if ( *v5 != 5 )
      goto LABEL_15;
    v85 = Size;
    v51 = KeGetPcr()->Prcb.Number << 12;
    v52 = *(_QWORD *)(v51 + qword_1401270F8);
    LowLimit = v52;
    v53 = *(_QWORD *)(v51 + qword_1401270F0);
    HighLimit = v53;
    if ( v52 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v53 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v52 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v52 >= v85 )
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v10 == 5 && *(_QWORD *)(v10 + 776) )
      {
        (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 13))(
          v12,
          NetBufferList,
          0LL);
        goto LABEL_16;
      }
LABEL_15:
      v11(v12, (__int64)NetBufferList, v3);
      goto LABEL_16;
    }
    v60 = 24576;
    v80 = 0;
    Parameter[0] = v10;
    Parameter[1] = v12;
    Parameter[2] = v11;
    Parameter[3] = NetBufferList;
    Parameter[4] = 0LL;
    v79 = v3;
    if ( (unsigned int)Size > 0x6000 )
      v60 = Size;
    if ( KeExpandKernelStackAndCalloutEx(
           ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
           Parameter,
           v60,
           0,
           0LL) < 0 )
    {
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          NetBufferList,
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)v5 + 81),
          0xA0uLL,
          1u,
          0);
      v61 = (KSPIN_LOCK *)(v5 + 144);
      v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 18);
      *((_QWORD *)v5 + 19) = KeGetCurrentThread();
      v63 = (PNET_BUFFER_LIST *)(v5 + 272);
      v64 = (_QWORD *)*((_QWORD *)v5 + 34);
      if ( v64 )
      {
        do
        {
          v63 = (PNET_BUFFER_LIST *)v64;
          v64 = (_QWORD *)*v64;
        }
        while ( v64 );
        v61 = (KSPIN_LOCK *)(v5 + 144);
      }
      *v63 = NetBufferList;
      ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)v5);
      *((_QWORD *)v5 + 19) = 0LL;
      KeReleaseSpinLock(v61, v62);
    }
  }
LABEL_16:
  if ( (v8 & 0x100) != 0 )
  {
    v54 = Number;
    if ( Number == -1 )
      v54 = KeGetPcr()->Prcb.Number;
    v55 = v74 + ndisPcwPerCpuDataStride * v54 + ndisPcwOffsetToPerCpuData;
    v56 = __rdtsc();
    *(_QWORD *)(v55 + 168) += (((unsigned __int64)HIDWORD(v56) << 32) | (unsigned int)v56) - *(_QWORD *)(v55 + 368);
    *(_QWORD *)(v55 + 368) = 0LL;
    if ( v67 != 2 )
      KeLowerIrql(v67);
  }
}
