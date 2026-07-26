/*
 * XREFs of ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001C100
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001A240 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001CCD0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001D7C0 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     PktMonClientNblDrop @ 0x14001F9D0 (PktMonClientNblDrop.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140027A70 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMTopReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NET_BUFFER_LIST *v7; // rbx
  struct _NDIS_FILTER_BLOCK *v8; // r12
  unsigned int v9; // r10d
  struct _NET_BUFFER_LIST *v10; // rbp
  unsigned int Number; // esi
  struct _NDIS_RCV_TRACKER_ARRAY *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 Pool2; // rdi
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NDIS_FILTER_BLOCK *v18; // rsi
  int v19; // r9d
  struct _NDIS_FILTER_BLOCK *v20; // rsi
  unsigned int v21; // ebp
  unsigned int v22; // r15d
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // r14
  __int64 v24; // rbx
  __int64 v25; // rcx
  struct _NET_BUFFER_LIST *v26; // rdx
  struct _NDIS_FILTER_BLOCK *v27; // rbx
  unsigned int v28; // esi
  unsigned int v29; // ebp
  unsigned int v30; // r15d
  int v31; // ebx
  unsigned int i; // ebx
  __int64 v33; // rdx
  int v34; // edx
  unsigned int v35; // r15d
  unsigned int v36; // esi
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *v37; // r14
  __int64 v38; // rbp
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _NET_BUFFER_LIST *v41; // rdx
  __int64 v42; // r14
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rcx
  struct _NET_BUFFER_LIST *v46; // rdx
  unsigned int v47; // r15d
  int v48; // r13d
  unsigned int v49; // esi
  struct _NET_BUFFER_LIST *v50; // rcx
  unsigned __int64 v51; // rax
  struct _NET_BUFFER_LIST *v52; // r15
  _QWORD *p_Alignment; // r12
  struct _NET_BUFFER_LIST *v54; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v56; // rsi
  _MDL *CurrentMdl; // r14
  __int64 v58; // r13
  void (__fastcall *v59)(__int64, __int64, __int64); // rbp
  __int64 v60; // r14
  char *v61; // rcx
  unsigned __int64 v62; // rax
  __int64 *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // r12
  __int64 v66; // r15
  __int64 v67; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v68; // rax
  __int64 v69; // r8
  __int64 v70; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v71; // rax
  __int64 v72; // r8
  __int64 v73; // rbx
  __int64 v74; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v75; // rax
  __int64 v76; // r8
  __int64 v77; // rbx
  KSPIN_LOCK *p_Lock; // rsi
  KIRQL v79; // al
  _NET_BUFFER_LIST **p_ReceivedNblsToComplete; // rdx
  KIRQL v81; // bp
  _SLIST_HEADER *ReceivedNblsToComplete; // rcx
  int v83; // ecx
  char v84; // [rsp+40h] [rbp-A8h]
  int v85; // [rsp+44h] [rbp-A4h]
  char v86; // [rsp+48h] [rbp-A0h]
  unsigned int v87; // [rsp+4Ch] [rbp-9Ch]
  Rtl::KString *value; // [rsp+50h] [rbp-98h]
  _QWORD Parameter[5]; // [rsp+60h] [rbp-88h] BYREF
  int v90; // [rsp+88h] [rbp-60h]
  int v91; // [rsp+8Ch] [rbp-5Ch]
  _QWORD v92[4]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v94; // [rsp+F0h] [rbp+8h]
  KIRQL v95; // [rsp+F8h] [rbp+10h]

  v7 = a2;
  v8 = a1;
  if ( (a2->NblFlags & 0x8000) != 0 )
  {
    ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *))a1[1].PMProtocolOffloadList.Next)(
      a1,
      a2);
    return;
  }
  if ( !BYTE1(a1[1].NicSwitchCurrentCapabilities.NumberOfIndirectionTableEntriesPerNonDefaultPFVPort) )
  {
    ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *))a1[1].WOLPatternList.Next)(a1);
    return;
  }
  v9 = a5;
  v10 = 0LL;
  v87 = 0;
  v84 = 0;
  if ( (a5 & 1) == 0 )
  {
    if ( KeGetCurrentIrql() != 2 )
      goto LABEL_35;
    v9 = a5;
  }
  if ( ndisPerProcRcvTrackers )
  {
    Number = KeGetPcr()->Prcb.Number;
    v12 = ndisPerProcRcvTrackers;
    v13 = 2096LL * Number;
    v87 = Number;
    v14 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v13);
    if ( (unsigned int)v14 < 3 )
    {
      v84 = 1;
      *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
      Pool2 = (__int64)v12 + 696 * v14 + v13 + 8;
      goto LABEL_7;
    }
  }
LABEL_35:
  Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v34,
        4,
        11,
        (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
    }
    goto LABEL_29;
  }
  v9 = a5;
LABEL_7:
  RcvLinkSpeedIndicateUp = (_QWORD *)v8->RcvLinkSpeedIndicateUp;
  Alignment = v7;
  *(_BYTE *)(Pool2 + 692) = 0;
  if ( (v9 & 2) == 0 )
  {
    do
    {
      v10 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v18 = (struct _NDIS_FILTER_BLOCK *)RcvLinkSpeedIndicateUp[41];
  if ( v18 && *((_BYTE *)v18->FilterModuleContext + 56) >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v18, v7, a3, a4, v9);
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_DWORD *)(Pool2 + 80) = 0;
  }
  else
  {
    *(_QWORD *)(Pool2 + 24) = v7;
    *(_QWORD *)(Pool2 + 8) = RcvLinkSpeedIndicateUp;
    *(_DWORD *)(Pool2 + 16) = v9;
    *(_QWORD *)Pool2 = v8;
    *(_QWORD *)(Pool2 + 32) = v10;
    *(_DWORD *)(Pool2 + 40) = a3;
    *(_DWORD *)(Pool2 + 44) = a4;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
    if ( *(_QWORD *)(Pool2 + 64) || *(_DWORD *)(Pool2 + 688) )
    {
      if ( !*RcvLinkSpeedIndicateUp || a3 )
        *(_BYTE *)(Pool2 + 692) = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
      if ( !v18 )
      {
        v20 = (struct _NDIS_FILTER_BLOCK *)RcvLinkSpeedIndicateUp[1];
        if ( v20 )
        {
          v21 = *(_DWORD *)(Pool2 + 688);
          v22 = *(_DWORD *)(Pool2 + 16) | 2;
          do
          {
            IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)v20->IterativeDataPathTracker;
            v24 = 0LL;
            do
            {
              v25 = (unsigned int)v24;
              v26 = *(struct _NET_BUFFER_LIST **)(Pool2 + 40 * v24 + 64);
              v24 = (unsigned int)(v24 + 1);
              if ( v26 )
                ndisMIndicateNetBufferListsToOpen(
                  v20,
                  v26,
                  *(_DWORD *)(Pool2 + 40),
                  *(_DWORD *)(Pool2 + 40 * v25 + 80),
                  v22);
            }
            while ( (unsigned int)v24 <= v21 );
            v20 = (struct _NDIS_FILTER_BLOCK *)IterativeDataPathTracker;
          }
          while ( IterativeDataPathTracker );
        }
        v27 = (struct _NDIS_FILTER_BLOCK *)RcvLinkSpeedIndicateUp[2];
        if ( v27 )
        {
          if ( (a5 & 2) != 0 )
          {
            v35 = *(_DWORD *)(Pool2 + 688);
            v36 = *(_DWORD *)(Pool2 + 16) | 2;
            do
            {
              v37 = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)v27->IterativeDataPathTracker;
              v38 = 0LL;
              do
              {
                v39 = (unsigned int)v38;
                v40 = 5 * v38;
                v38 = (unsigned int)(v38 + 1);
                v41 = *(struct _NET_BUFFER_LIST **)(Pool2 + 8 * v40 + 64);
                if ( v41 )
                  ndisMIndicateNetBufferListsToOpen(
                    v27,
                    v41,
                    *(_DWORD *)(Pool2 + 40),
                    *(_DWORD *)(Pool2 + 40 * v39 + 80),
                    v36);
              }
              while ( (unsigned int)v38 <= v35 );
              v27 = (struct _NDIS_FILTER_BLOCK *)v37;
            }
            while ( v37 );
          }
          else
          {
            v28 = *(_DWORD *)(Pool2 + 688);
            v29 = *(_DWORD *)(Pool2 + 16);
            v30 = *(_DWORD *)(Pool2 + 40);
            v31 = *(_DWORD *)(*(_QWORD *)Pool2 + 2244LL);
            if ( v31 )
            {
              v42 = *(_QWORD *)(*(_QWORD *)(Pool2 + 8) + 16LL);
              if ( v42 )
              {
                do
                {
                  if ( (*(_DWORD *)(v42 + 224) & 4) != 0 )
                  {
                    v43 = 0LL;
                    do
                    {
                      v44 = 5 * v43;
                      v45 = (unsigned int)v43;
                      v46 = *(struct _NET_BUFFER_LIST **)(Pool2 + 40 * v43 + 64);
                      v43 = (unsigned int)(v43 + 1);
                      if ( v46 && *(_QWORD *)(Pool2 + 8 * v44 + 56) != v42 )
                        ndisMIndicateNetBufferListsToOpen(
                          (struct _NDIS_FILTER_BLOCK *)v42,
                          v46,
                          v30,
                          *(_DWORD *)(Pool2 + 40 * v45 + 80),
                          v29 | 2);
                    }
                    while ( (unsigned int)v43 <= v28 );
                    if ( !--v31 )
                      break;
                  }
                  v42 = *(_QWORD *)(v42 + 424);
                }
                while ( v42 );
                v8 = a1;
              }
            }
            for ( i = 1; i <= v28; ++i )
            {
              v33 = i;
              ndisMIndicateNetBufferListsToOpen(
                *(struct _NDIS_FILTER_BLOCK **)(Pool2 + 40 * v33 + 56),
                *(struct _NET_BUFFER_LIST **)(Pool2 + 40 * v33 + 64),
                v30,
                *(_DWORD *)(Pool2 + 40 * v33 + 80),
                v29);
            }
          }
        }
      }
    }
  }
  if ( !*(_BYTE *)(Pool2 + 692) )
    goto LABEL_30;
  v7 = *(struct _NET_BUFFER_LIST **)(Pool2 + 64);
LABEL_29:
  if ( !v7 )
    goto LABEL_30;
  if ( byte_14011D800 && ((__int64)v8[4].PendingOidRequest & 2) != 0 )
    PktMonClientNblDrop((_DWORD)v8 + 5816, (_DWORD)v7, HIDWORD(v8[4].OidRequestList.Blink), v19);
  if ( (a5 & 2) != 0 )
    goto LABEL_30;
  v47 = a5 & 1;
  v95 = 2;
  LOBYTE(v48) = 0;
  v49 = -1;
  value = 0LL;
  v86 = 0;
  v85 = -1;
  if ( LODWORD(v8->FilterFriendlyName) || *(_DWORD *)&v8->Ref.ReferenceCount )
  {
    v48 = *(_DWORD *)&v8->Ref.ReferenceCount;
    v86 = v48;
    value = v8->FilterInstanceName.__ptr_.__value_;
    if ( !value )
      value = v8->FilterInstanceName.__ptr_.__value_;
  }
  v50 = v7;
  do
  {
    v50->Flags = v50->Flags & 0xFFFFFFF4 | 8;
    v50 = (struct _NET_BUFFER_LIST *)v50->Link.Alignment;
  }
  while ( v50 );
  v51 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
  if ( Microsoft_Windows_Networking_CorrelationEnabled
    || byte_14011D800 != (_BYTE)Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
  }
  if ( *(_DWORD *)&v8[2].XState )
  {
    v52 = 0LL;
    p_Alignment = 0LL;
    do
    {
      v54 = (struct _NET_BUFFER_LIST *)v7->Link.Alignment;
      v7->Link.Alignment = 0LL;
      HIDWORD(v51) = HIDWORD(PoolHandle);
      if ( v7->NdisPoolHandle == PoolHandle )
      {
        _InterlockedDecrement((volatile signed __int32 *)&a1[2].XState);
        FirstNetBuffer = v7->FirstNetBuffer;
        v56 = (struct _NPAGED_LOOKASIDE_LIST *)v7->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v56 )
          ExFreeToNPagedLookasideList(v56, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v7);
      }
      else
      {
        if ( v52 )
          *p_Alignment = v7;
        else
          v52 = v7;
        p_Alignment = &v7->Link.Alignment;
      }
      v7 = v54;
    }
    while ( v54 );
    LOBYTE(v48) = v86;
    v7 = v52;
    if ( !v52 )
      goto LABEL_30;
    v49 = -1;
    v8 = a1;
    v47 = a5 & 1;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      v7,
      0LL,
      *(_QWORD *)&v8[1].NicSwitchHwCapabilities.MaxNumQueuePairsForDefaultVPort,
      0x87u,
      v47);
  if ( (v48 & 0x20) != 0 )
  {
    if ( !v47 )
      v95 = KfRaiseIrql(2u);
    v49 = KeGetPcr()->Prcb.Number;
    v85 = v49;
    v51 = __rdtsc();
    *(wchar_t **)((char *)&value[21].Buffer + ndisPcwPerCpuDataStride * v49 + ndisPcwOffsetToPerCpuData) = (wchar_t *)v51;
  }
  v58 = *(_QWORD *)&v8[1].NicSwitchCurrentCapabilities.Flags;
  v59 = *(void (__fastcall **)(__int64, __int64, __int64))&v8[1].NicSwitchCurrentCapabilities.NdisReserved14;
  v60 = *(_QWORD *)&v8[1].NicSwitchHwCapabilities.NumberOfIndirectionTableEntriesForDefaultVPort;
  if ( *(_BYTE *)v58 == 17 )
    goto LABEL_88;
  if ( v47 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v51) = KeGetPcr()->Prcb.Number;
    v63 = v92;
    v94 = v51;
    v92[2] = 0LL;
    v92[0] = v7;
    v92[1] = v7;
    v7->Scratch = 0LL;
    v7->ChildRefCount = v47;
    while ( *(_BYTE *)v58 == 5 )
    {
      v64 = *v63;
      if ( !*v63 )
        break;
      v65 = v58;
      v66 = *(_QWORD *)(v58 + 424) + 96 * v51;
      if ( *(_BYTE *)(v66 + 88) )
      {
        *v63 = 0LL;
        do
        {
          v71 = ndisVerifierNdisDispatch;
          v72 = *(unsigned int *)(v64 + 132);
          v73 = *(_QWORD *)(v64 + 112);
          *(_DWORD *)(v64 + 132) = 0;
          if ( v71 && *(_BYTE *)v58 == 5 && *(_QWORD *)(v58 + 776) )
            (*((void (__fastcall **)(__int64, __int64, __int64))v71 + 17))(v60, v64, v72);
          else
            v59(v60, v64, v72);
          v64 = v73;
        }
        while ( v73 );
        break;
      }
      *(_BYTE *)(v66 + 88) = 1;
      v67 = *v63;
      *v63 = 0LL;
      if ( v67 )
      {
        do
        {
          v68 = ndisVerifierNdisDispatch;
          v69 = *(unsigned int *)(v67 + 132);
          v70 = *(_QWORD *)(v67 + 112);
          *(_DWORD *)(v67 + 132) = 0;
          if ( v68 && *(_BYTE *)v58 == 5 && *(_QWORD *)(v58 + 776) )
            (*((void (__fastcall **)(__int64, __int64, __int64))v68 + 17))(v60, v67, v69);
          else
            v59(v60, v67, v69);
          v67 = v70;
        }
        while ( v70 );
      }
      v51 = v94;
      v63 = (__int64 *)(v66 + 72);
      *(_BYTE *)(v66 + 88) = 0;
      v58 = *(_QWORD *)(v58 + 552);
      v59 = *(void (__fastcall **)(__int64, __int64, __int64))(v65 + 528);
      v60 = *(_QWORD *)(v65 + 536);
    }
    v74 = *v63;
    if ( *v63 )
    {
      *v63 = 0LL;
      do
      {
        v75 = ndisVerifierNdisDispatch;
        v76 = *(unsigned int *)(v74 + 132);
        v77 = *(_QWORD *)(v74 + 112);
        *(_DWORD *)(v74 + 132) = 0;
        if ( v75 && *(_BYTE *)v58 == 5 && *(_QWORD *)(v58 + 776) )
          (*((void (__fastcall **)(__int64, __int64, __int64))v75 + 17))(v60, v74, v76);
        else
          v59(v60, v74, v76);
        v74 = v77;
      }
      while ( v77 );
    }
LABEL_123:
    v49 = v85;
    goto LABEL_89;
  }
  if ( v8->Header.Type != 5 )
  {
LABEL_88:
    v59(v60, (__int64)v7, v47);
    goto LABEL_89;
  }
  if ( !ndisIsLwfGuaranteedStackSpaceAvailable() )
  {
    v83 = 24576;
    v91 = 0;
    Parameter[0] = v58;
    Parameter[1] = v60;
    Parameter[2] = v59;
    Parameter[3] = v7;
    Parameter[4] = 0LL;
    v90 = 0;
    if ( (unsigned int)Size > 0x6000 )
      v83 = Size;
    if ( KeExpandKernelStackAndCalloutEx(
           ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
           Parameter,
           v83,
           0,
           0LL) >= 0 )
      goto LABEL_89;
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(v7, v8->NblTracker, 0xA0uLL, 1u, 0);
    p_Lock = &v8->Lock;
    v79 = KeAcquireSpinLockRaiseToDpc(&v8->Lock);
    p_ReceivedNblsToComplete = &v8->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
    v8->LockThread = KeGetCurrentThread();
    v81 = v79;
    ReceivedNblsToComplete = (_SLIST_HEADER *)v8->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
    if ( ReceivedNblsToComplete )
    {
      do
      {
        p_ReceivedNblsToComplete = (_NET_BUFFER_LIST **)ReceivedNblsToComplete;
        ReceivedNblsToComplete = (_SLIST_HEADER *)ReceivedNblsToComplete->Alignment;
      }
      while ( ReceivedNblsToComplete );
      p_Lock = &v8->Lock;
    }
    *p_ReceivedNblsToComplete = v7;
    ndisQueueStackExpansionFallbackWorkItem(v8);
    v8->LockThread = 0LL;
    KeReleaseSpinLock(p_Lock, v81);
    goto LABEL_123;
  }
  if ( !ndisVerifierNdisDispatch || *(_BYTE *)v58 != 5 || !*(_QWORD *)(v58 + 776) )
    goto LABEL_88;
  (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 17))(v60, v7, 0LL);
LABEL_89:
  if ( (v86 & 0x20) != 0 )
  {
    if ( v49 == -1 )
      v49 = KeGetPcr()->Prcb.Number;
    v61 = (char *)value + ndisPcwPerCpuDataStride * v49 + ndisPcwOffsetToPerCpuData;
    v62 = __rdtsc();
    *((_QWORD *)v61 + 18) += (((unsigned __int64)HIDWORD(v62) << 32) | (unsigned int)v62) - *((_QWORD *)v61 + 43);
    *((_QWORD *)v61 + 43) = 0LL;
    if ( v95 != 2 )
      KeLowerIrql(v95);
  }
LABEL_30:
  if ( v84 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v87);
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
}
