/*
 * XREFs of NdisFReturnNetBufferLists @ 0x14001E7D0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1400A3AA0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400AAA20 (-ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     NdisFreeNetBufferListContext @ 0x14001A140 (NdisFreeNetBufferListContext.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001D250 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x14001F1B0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400AA9A8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  ULONG v4; // r14d
  struct _NDIS_FILTER_BLOCK *v5; // rsi
  PNET_BUFFER_LIST Alignment; // rbx
  __int64 v7; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdx
  __int64 v9; // r8
  unsigned __int64 NextReturnNetBufferListsTracker; // rdi
  __int64 v11; // rbp
  __int64 v12; // r12
  char v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r9
  PNET_BUFFER_LIST v16; // r12
  unsigned __int64 v17; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // r14d
  PNET_BUFFER_LIST *v23; // rcx
  _QWORD *v24; // rax
  _NDIS_OBJECT_HEADER *NextReturnNetBufferListsObject; // r12
  void (__fastcall *NextReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rbp
  struct _NET_BUFFER_LIST *NextReturnNetBufferListsContext; // r15
  PNET_BUFFER_LIST v28; // rax
  int v29; // eax
  PNET_BUFFER_LIST j; // rbx
  PNET_BUFFER_LIST *p_Parameter; // rbx
  PNET_BUFFER_LIST v32; // rdx
  _NDIS_OBJECT_HEADER *v33; // rsi
  __int64 v34; // rdi
  PNET_BUFFER_LIST v35; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v36; // rax
  __int64 v37; // r8
  struct _NET_BUFFER_LIST *v38; // rbx
  unsigned __int64 v39; // rax
  struct _VF_NDIS_DISPATCH_TABLE *v40; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rdi
  PNET_BUFFER_LIST v43; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v44; // rax
  __int64 v45; // r8
  struct _NET_BUFFER_LIST *v46; // rbx
  int v47; // ecx
  KIRQL v48; // di
  PNET_BUFFER_LIST *p_ReceivedNblsToComplete; // rcx
  _QWORD *k; // rdx
  char v51; // bp
  unsigned int Flags; // eax
  unsigned int v53; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rdi
  __int64 v55; // [rsp+30h] [rbp-98h]
  __int64 v56; // [rsp+40h] [rbp-88h]
  __int64 v57; // [rsp+48h] [rbp-80h]
  unsigned __int64 v58; // [rsp+48h] [rbp-80h]
  unsigned __int64 v59; // [rsp+50h] [rbp-78h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v60; // [rsp+58h] [rbp-70h]
  PNET_BUFFER_LIST Parameter; // [rsp+60h] [rbp-68h] BYREF
  PNET_BUFFER_LIST v62; // [rsp+68h] [rbp-60h]
  void (__fastcall *v63)(void *, _NET_BUFFER_LIST *, unsigned int); // [rsp+70h] [rbp-58h]
  PNET_BUFFER_LIST v64; // [rsp+78h] [rbp-50h]
  __int64 v65; // [rsp+80h] [rbp-48h]
  ULONG v66; // [rsp+88h] [rbp-40h]
  int v67; // [rsp+8Ch] [rbp-3Ch]
  unsigned int v69; // [rsp+D0h] [rbp+8h]
  char v71; // [rsp+E8h] [rbp+20h]

  v4 = ReturnFlags;
  v5 = (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle;
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 0x200u) )
  {
    ndisNblVerifyRxCompletion(NetBufferLists, v4, &v5->Header);
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      v51 = byte_140126F70;
      do
      {
        Alignment->Scratch = MmBadPointer;
        Flags = Alignment->Flags;
        Alignment->ChildRefCount = -892679478;
        if ( v51 )
        {
          v51 = 0;
          v53 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v51 = 1;
          v53 = Flags | 0xF0000;
        }
        byte_140126F70 = v51;
        Alignment->Flags = v53;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
  }
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 || !v5 )
    goto LABEL_4;
  switch ( v5->Header.Type )
  {
    case 5u:
      LOBYTE(v29) = FILTER_TEST_FLAG(v5, 0x400u) != 0;
LABEL_75:
      if ( (_BYTE)v29 )
      {
        for ( j = NetBufferLists; j; j = (PNET_BUFFER_LIST)j->Link.Alignment )
        {
          if ( *(struct _NDIS_FILTER_BLOCK **)&j->Context->ContextData[j->Context->Offset] != v5 )
            NblContextVerifierBugcheckContextCorruption(j, NetBufferLists, v5);
          NdisFreeNetBufferListContext(j, 8u);
        }
      }
      break;
    case 0x11u:
      LOBYTE(v29) = ((__int64)v5[2].PktMonEdgeLower.ListLink.Blink & 0x1000) != 0;
      goto LABEL_75;
    case 0x12u:
      v29 = *(_DWORD *)&v5->StackExpansionFallback.WorkItemQueued >> 31;
      goto LABEL_75;
  }
LABEL_4:
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1401278B0 )
  {
    v28 = NetBufferLists;
    if ( NetBufferLists )
    {
      if ( byte_1401278B0 )
      {
        do
        {
          v28->NetBufferListInfo[13] = 0LL;
          v28 = (PNET_BUFFER_LIST)v28->Link.Alignment;
        }
        while ( v28 );
      }
      else
      {
        do
        {
          v28->NetBufferListInfo[13] = (void *)((unsigned __int64)v28->NetBufferListInfo[13] | 0x8000000000000000uLL);
          v28 = (PNET_BUFFER_LIST)v28->Link.Alignment;
        }
        while ( v28 );
      }
    }
  }
  v7 = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NblTracker = v5->NblTracker;
    v9 = 0LL;
    NextReturnNetBufferListsTracker = (unsigned __int64)v5->NextReturnNetBufferListsTracker;
    v11 = 0LL;
    v12 = ndisNblTrackerEpoch;
    v13 = v4 & 1;
    v60 = NblTracker;
    v57 = 0LL;
    v56 = 0LL;
    v71 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(
        NetBufferLists,
        NblTracker,
        0x8Au,
        (void *)NextReturnNetBufferListsTracker,
        v4 & 1);
      v9 = 0LL;
    }
    v14 = NextReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (NextReturnNetBufferListsTracker & 1) != 0 )
    {
      v7 = 2 * v12;
      v15 = *(_QWORD *)((NextReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v14 = (2 * v12) ^ (NextReturnNetBufferListsTracker ^ (2 * v12)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v15 = NextReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v59 = v15;
    v16 = NetBufferLists;
    if ( NetBufferLists )
    {
      while ( 1 )
      {
        v17 = (unsigned __int64)v16->NetBufferListInfo[27];
        while ( v16->NetBufferListInfo[27] == (void *)v17 )
        {
          if ( v17 )
          {
            if ( (v17 & 4) != 0 )
              goto LABEL_95;
          }
          else if ( !v16->SourceHandle )
          {
            v39 = (unsigned __int64)v60 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( ((unsigned __int8)v60 & 1) != 0 )
              v39 = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            v16->SourceHandle = (void *)v39;
          }
          SourceHandle = (unsigned __int8 *)v16->SourceHandle;
          if ( SourceHandle )
          {
            LODWORD(NblTracker) = *SourceHandle;
            if ( (unsigned __int8)((_BYTE)NblTracker - 17) <= 1u || (_BYTE)NblTracker == 5 )
            {
              if ( SourceHandle != (unsigned __int8 *)v15 || v16->ParentNetBufferList )
              {
                ++v11;
                v7 = v14;
              }
              else
              {
                ++v9;
                v7 = 24LL;
                v56 = v9;
                ++v11;
              }
              goto LABEL_20;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v55) = *SourceHandle;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)v16,
                v55);
LABEL_144:
              v9 = v56;
              v15 = v59;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(NblTracker) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)NblTracker,
              27,
              11,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)v16);
            goto LABEL_144;
          }
LABEL_95:
          v7 = v14 | 4;
LABEL_20:
          v16->NetBufferListInfo[27] = (void *)v7;
          v16 = (PNET_BUFFER_LIST)v16->Link.Alignment;
          if ( !v16 )
            break;
        }
        NblTracker = (struct NDIS_NBL_TRACKER_HANDLE__ *)(v57 - v11);
        v58 = v57 - v11;
        if ( (v17 & 1) == 0 || !NblTracker )
          goto LABEL_26;
        if ( v13 || v71 )
        {
          v7 = 16 * ((v17 >> 1) & 1);
          NblTracker = (struct NDIS_NBL_TRACKER_HANDLE__ *)(v7 + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( !v13 )
            goto LABEL_51;
          goto LABEL_25;
        }
        v71 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          v13 = 1;
          NblTracker = (struct NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_25:
          v7 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(*(_QWORD *)NblTracker + (unsigned int)v7) += v58;
          goto LABEL_26;
        }
        v13 = 0;
        v7 = 16 * ((v17 >> 1) & 1);
        NblTracker = (struct NDIS_NBL_TRACKER_HANDLE__ *)(v7 + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_51:
        _InterlockedAdd64((volatile signed __int64 *)NblTracker + 1, v58);
LABEL_26:
        v9 = v56;
        v15 = v59;
        v57 = v11;
        if ( !v16 )
        {
          v5 = (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle;
          v4 = ReturnFlags;
          break;
        }
      }
    }
    v19 = v11 - v9;
    if ( (v14 & 1) != 0 )
    {
      if ( v19 )
      {
        if ( v13 || v71 )
        {
          v7 = 16 * ((v14 >> 1) & 1);
          v20 = v7 + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v13 )
          {
LABEL_47:
            _InterlockedAdd64((volatile signed __int64 *)(v20 + 8), v19);
            goto LABEL_33;
          }
        }
        else
        {
          if ( KeGetCurrentIrql() != 2 )
          {
            v7 = 16 * ((v14 >> 1) & 1);
            v20 = v7 + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            goto LABEL_47;
          }
          v20 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        }
        v7 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*(_QWORD *)v20 + (unsigned int)v7) += v19;
      }
    }
  }
LABEL_33:
  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  v21 = (__int64)v5->IterativeDataPathTracker[v7];
  if ( ((v4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v21 + 88) )
  {
    v22 = v4 | 1;
    if ( *(_QWORD *)(v21 + 72) )
    {
      v23 = *(PNET_BUFFER_LIST **)(v21 + 80);
      if ( v22 == *((_DWORD *)v23 + 33) && (v22 & 6) == 0 )
      {
        v24 = *v23;
        if ( *v23 )
        {
          do
          {
            v23 = (PNET_BUFFER_LIST *)v24;
            v24 = (_QWORD *)*v24;
          }
          while ( v24 );
        }
        *v23 = NetBufferLists;
        return;
      }
      v23[14] = NetBufferLists;
    }
    else
    {
      *(_QWORD *)(v21 + 72) = NetBufferLists;
    }
    *(_QWORD *)(v21 + 80) = NetBufferLists;
    NetBufferLists->Scratch = 0LL;
    NetBufferLists->ChildRefCount = v22;
    return;
  }
  NextReturnNetBufferListsObject = v5->NextReturnNetBufferListsObject;
  NextReturnNetBufferListsHandler = v5->NextReturnNetBufferListsHandler;
  NextReturnNetBufferListsContext = (struct _NET_BUFFER_LIST *)v5->NextReturnNetBufferListsContext;
  if ( NextReturnNetBufferListsObject->Type == 17 )
  {
LABEL_59:
    NextReturnNetBufferListsHandler(NextReturnNetBufferListsContext, NetBufferLists, v4);
    return;
  }
  if ( (v4 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    p_Parameter = &Parameter;
    v69 = v7;
    v63 = 0LL;
    NetBufferLists->Scratch = 0LL;
    Parameter = NetBufferLists;
    v62 = NetBufferLists;
    NetBufferLists->ChildRefCount = v4;
    while ( NextReturnNetBufferListsObject->Type == 5 )
    {
      v32 = *p_Parameter;
      if ( !*p_Parameter )
        break;
      v33 = NextReturnNetBufferListsObject;
      v34 = *(_QWORD *)&NextReturnNetBufferListsObject[106].Type + 96 * v7;
      if ( *(_BYTE *)(v34 + 88) )
      {
        *p_Parameter = 0LL;
        do
        {
          v40 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v32->ChildRefCount;
          Scratch = (struct _NET_BUFFER_LIST *)v32->Scratch;
          v32->ChildRefCount = 0;
          if ( v40 && NextReturnNetBufferListsObject->Type == 5 && *(_QWORD *)&NextReturnNetBufferListsObject[194].Type )
            (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))v40 + 17))(
              NextReturnNetBufferListsContext,
              v32,
              ChildRefCount);
          else
            NextReturnNetBufferListsHandler(NextReturnNetBufferListsContext, v32, ChildRefCount);
          v32 = Scratch;
        }
        while ( Scratch );
        break;
      }
      *(_BYTE *)(v34 + 88) = 1;
      v35 = *p_Parameter;
      *p_Parameter = 0LL;
      if ( v35 )
      {
        do
        {
          v36 = ndisVerifierNdisDispatch;
          v37 = (unsigned int)v35->ChildRefCount;
          v38 = (struct _NET_BUFFER_LIST *)v35->Scratch;
          v35->ChildRefCount = 0;
          if ( v36 && NextReturnNetBufferListsObject->Type == 5 && *(_QWORD *)&NextReturnNetBufferListsObject[194].Type )
            (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))v36 + 17))(
              NextReturnNetBufferListsContext,
              v35,
              v37);
          else
            NextReturnNetBufferListsHandler(NextReturnNetBufferListsContext, v35, v37);
          v35 = v38;
        }
        while ( v38 );
      }
      v7 = v69;
      p_Parameter = (PNET_BUFFER_LIST *)(v34 + 72);
      *(_BYTE *)(v34 + 88) = 0;
      NextReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&NextReturnNetBufferListsObject[138].Type;
      NextReturnNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))&v33[132].Type;
      NextReturnNetBufferListsContext = *(struct _NET_BUFFER_LIST **)&v33[134].Type;
    }
    v43 = *p_Parameter;
    if ( *p_Parameter )
    {
      *p_Parameter = 0LL;
      do
      {
        v44 = ndisVerifierNdisDispatch;
        v45 = (unsigned int)v43->ChildRefCount;
        v46 = (struct _NET_BUFFER_LIST *)v43->Scratch;
        v43->ChildRefCount = 0;
        if ( v44 && NextReturnNetBufferListsObject->Type == 5 && *(_QWORD *)&NextReturnNetBufferListsObject[194].Type )
          (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))v44 + 17))(
            NextReturnNetBufferListsContext,
            v43,
            v45);
        else
          NextReturnNetBufferListsHandler(NextReturnNetBufferListsContext, v43, v45);
        v43 = v46;
      }
      while ( v46 );
    }
  }
  else
  {
    if ( v5->Header.Type != 5 )
      goto LABEL_59;
    if ( ndisIsLwfGuaranteedStackSpaceAvailable() )
    {
      if ( ndisVerifierNdisDispatch
        && NextReturnNetBufferListsObject->Type == 5
        && *(_QWORD *)&NextReturnNetBufferListsObject[194].Type )
      {
        (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 17))(
          NextReturnNetBufferListsContext,
          NetBufferLists,
          v4);
        return;
      }
      goto LABEL_59;
    }
    v47 = 24576;
    v67 = 0;
    Parameter = (PNET_BUFFER_LIST)NextReturnNetBufferListsObject;
    v62 = NextReturnNetBufferListsContext;
    v63 = NextReturnNetBufferListsHandler;
    v64 = NetBufferLists;
    v65 = 0LL;
    v66 = v4;
    if ( (unsigned int)Size > 0x6000 )
      v47 = Size;
    if ( KeExpandKernelStackAndCalloutEx(
           ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
           &Parameter,
           v47,
           0,
           0LL) < 0 )
    {
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          NetBufferLists,
          v5->NblTracker,
          (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
          (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)1,
          0);
      v48 = KeAcquireSpinLockRaiseToDpc(&v5->Lock);
      v5->LockThread = KeGetCurrentThread();
      p_ReceivedNblsToComplete = &v5->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
      for ( k = &v5->StackExpansionFallback.PendingWork.ReceivedNblsToComplete->Link.Alignment; k; k = (_QWORD *)*k )
        p_ReceivedNblsToComplete = (PNET_BUFFER_LIST *)k;
      *p_ReceivedNblsToComplete = NetBufferLists;
      ndisQueueStackExpansionFallbackWorkItem(v5);
      v5->LockThread = 0LL;
      KeReleaseSpinLock(&v5->Lock, v48);
    }
  }
}
