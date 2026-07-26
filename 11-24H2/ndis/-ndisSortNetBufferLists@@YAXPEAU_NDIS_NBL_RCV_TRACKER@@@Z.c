/*
 * XREFs of ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001CCD0
 * Callers:
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14001B5E0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001C100 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001D9D0 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001FB00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003F570 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x14003FE50 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140040490 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001A240 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x14001D670 (-ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisSortNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1, __int64 a2, char *a3)
{
  struct _NDIS_FILTER_BLOCK *v4; // rcx
  char v5; // bp
  int v6; // r12d
  unsigned int v7; // r15d
  __int64 v8; // rax
  struct _NET_BUFFER_LIST *v9; // r14
  struct _NET_BUFFER_LIST *v10; // rdi
  unsigned int j; // r8d
  unsigned int i; // edx
  char *v13; // rcx
  _DWORD *v14; // rcx
  struct _NET_BUFFER_LIST *v15; // rsi
  struct _NET_BUFFER_LIST *Alignment; // r13
  struct _NDIS_FILTER_BLOCK *v17; // rcx
  __int64 v18; // r9
  unsigned __int16 v19; // r11
  struct _NDIS_FILTER_BLOCK *v20; // r15
  int v21; // ebx
  unsigned int v22; // ebx
  int v23; // r13d
  unsigned int Number; // r12d
  struct _NET_BUFFER_LIST *v25; // rcx
  unsigned __int64 v26; // rax
  struct _NET_BUFFER_LIST *v27; // rdi
  _QWORD *p_Alignment; // r15
  struct _NET_BUFFER_LIST *v29; // rsi
  _NET_BUFFER *FirstNetBuffer; // rax
  _MDL *CurrentMdl; // r14
  struct _NPAGED_LOOKASIDE_LIST *v32; // rbp
  __int64 v33; // rbp
  void (__fastcall *v34)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64); // rdi
  struct _NET_BUFFER_LIST *v35; // rsi
  char *v36; // rcx
  unsigned __int64 v37; // rax
  KIRQL v38; // al
  PNET_BUFFER_LIST *p_Parameter; // r14
  PNET_BUFFER_LIST v40; // rdx
  __int64 v41; // r13
  __int64 v42; // r15
  PNET_BUFFER_LIST v43; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v44; // rax
  __int64 v45; // r8
  struct _NET_BUFFER_LIST *v46; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v47; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rbx
  PNET_BUFFER_LIST v50; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v51; // rax
  __int64 v52; // r8
  struct _NET_BUFFER_LIST *v53; // rbx
  Rtl::KString *value; // rax
  int v55; // ecx
  KIRQL v56; // al
  struct _NET_BUFFER_LIST **p_ReceivedNblsToComplete; // rdx
  KIRQL v58; // bl
  struct _NET_BUFFER_LIST *k; // rax
  PNET_BUFFER_LIST NetBufferList; // [rsp+30h] [rbp-98h]
  struct _NDIS_FILTER_BLOCK *v61; // [rsp+38h] [rbp-90h]
  struct _NET_BUFFER_LIST **p_Next; // [rsp+40h] [rbp-88h]
  Rtl::KString *v63; // [rsp+40h] [rbp-88h]
  PNET_BUFFER_LIST Parameter; // [rsp+48h] [rbp-80h] BYREF
  PNET_BUFFER_LIST v65; // [rsp+50h] [rbp-78h]
  void (__fastcall *v66)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64); // [rsp+58h] [rbp-70h]
  struct _NET_BUFFER_LIST *v67; // [rsp+60h] [rbp-68h]
  __int64 v68; // [rsp+68h] [rbp-60h]
  int v69; // [rsp+70h] [rbp-58h]
  int v70; // [rsp+74h] [rbp-54h]
  unsigned int v71; // [rsp+D0h] [rbp+8h] BYREF
  KIRQL v72; // [rsp+D8h] [rbp+10h]
  unsigned __int16 v73; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v74; // [rsp+E8h] [rbp+20h]

  v4 = *(struct _NDIS_FILTER_BLOCK **)a1;
  v5 = 0;
  v6 = 0;
  LODWORD(v74) = 0;
  v7 = 0;
  v61 = v4;
  v8 = *((_QWORD *)a1 + 1);
  v9 = 0LL;
  v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 3);
  *((_DWORD *)a1 + 172) = 0;
  p_Next = 0LL;
  NetBufferList = 0LL;
  if ( *(_QWORD *)(v8 + 328) || (*((_DWORD *)a1 + 4) & 2) != 0 )
  {
    *((_QWORD *)a1 + 8) = v10;
    *((_QWORD *)a1 + 9) = *((_QWORD *)a1 + 4);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
    return;
  }
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  v73 = 0;
  while ( 1 )
  {
    v15 = v10;
    if ( !v10 )
      break;
    Alignment = (struct _NET_BUFFER_LIST *)v10->Link.Alignment;
    v10->Link.Alignment = 0LL;
    v17 = *(struct _NDIS_FILTER_BLOCK **)a1;
    LOBYTE(v71) = 0;
    if ( ndisParseReceivedNBL(
           (enum _NDIS_MEDIUM)v17->NextSendNetBufferListsCompleteHandler,
           v10,
           &v73,
           (unsigned __int8 *)&v71) )
    {
      v18 = *((_QWORD *)a1 + 1);
      if ( (_BYTE)v71 )
      {
        v19 = v73;
        if ( v6 == v73 )
        {
          j = v7;
          if ( v5 == 1 )
          {
LABEL_5:
            i = v74;
            if ( *((_WORD *)a1 + 20 * (unsigned int)v74 + 24) != v73 )
            {
              for ( i = 1; ; ++i )
              {
                if ( i > *((_DWORD *)a1 + 172) )
                {
                  LODWORD(v74) = ++*((_DWORD *)a1 + 172);
                  i = v74;
                  v13 = (char *)a1 + 40 * (unsigned int)v74;
                  *((_WORD *)v13 + 24) = v19;
                  *((_QWORD *)v13 + 7) = *(_QWORD *)(v18 + 16 * (j + 1LL) + 24);
                  *((_QWORD *)v13 + 8) = 0LL;
                  goto LABEL_9;
                }
                if ( *((_WORD *)a1 + 20 * i + 24) == v73 )
                  break;
              }
              LODWORD(v74) = i;
            }
            goto LABEL_9;
          }
        }
        else
        {
          v6 = v73;
          for ( j = 0; j < *(_DWORD *)(v18 + 24); ++j )
          {
            if ( v73 == *(_WORD *)(v18 + 16LL * j + 32) )
            {
              v7 = j;
              v5 = 1;
              goto LABEL_5;
            }
          }
          v5 = 0;
          v7 = 0;
        }
      }
      i = 0;
LABEL_9:
      a3 = (char *)a1 + 40 * i;
      v14 = (_DWORD *)((char *)a1 + 40 * i + 80);
      if ( *((_QWORD *)a3 + 8) )
      {
        **((_QWORD **)a3 + 9) = v10;
        ++*v14;
        *((_QWORD *)a3 + 9) = v10;
        v10 = Alignment;
      }
      else
      {
        *((_QWORD *)a3 + 8) = v10;
        if ( (*((_DWORD *)a1 + 4) & 0x100) != 0 )
        {
          *((_QWORD *)a3 + 9) = 0LL;
          v10->Link.Alignment = (unsigned __int64)Alignment;
          *v14 = *((_DWORD *)a1 + 11);
          break;
        }
        *v14 = 1;
        *((_QWORD *)a3 + 9) = v10;
        v10 = Alignment;
      }
    }
    else
    {
      if ( p_Next )
      {
        *p_Next = v10;
      }
      else
      {
        v9 = v10;
        NetBufferList = v10;
      }
      v10 = Alignment;
      p_Next = &v15->Next;
      ++v61[2].Characteristics.CancelSendNetBufferListsHandler;
    }
  }
  if ( !v9 )
    return;
  v20 = v61;
  if ( byte_14011D800 && ((__int64)v61[4].PendingOidRequest & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)v61 + 5816, (_DWORD)v9, (_DWORD)a3, 1, -1073676273, -536866810);
  v21 = *((_DWORD *)a1 + 4);
  if ( (v21 & 2) != 0 )
    return;
  v72 = 2;
  v22 = v21 & 1;
  v63 = 0LL;
  LOBYTE(v23) = 0;
  LODWORD(v74) = 0;
  Number = -1;
  if ( LODWORD(v61->FilterFriendlyName) || *(_DWORD *)&v61->Ref.ReferenceCount )
  {
    value = v61->FilterInstanceName.__ptr_.__value_;
    v23 = *(_DWORD *)&v61->Ref.ReferenceCount;
    LODWORD(v74) = v23;
    v63 = value;
    if ( !value )
      v63 = v61->FilterInstanceName.__ptr_.__value_;
  }
  v25 = v9;
  do
  {
    v25->Flags = v25->Flags & 0xFFFFFFF4 | 8;
    v25 = (struct _NET_BUFFER_LIST *)v25->Link.Alignment;
  }
  while ( v25 );
  v26 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011D800 )
  {
    v26 = (unsigned __int64)v9;
    if ( byte_14011D800 )
    {
      do
      {
        *(_QWORD *)(v26 + 248) = 0LL;
        v26 = *(_QWORD *)v26;
      }
      while ( v26 );
    }
    else
    {
      do
      {
        *(_QWORD *)(v26 + 248) |= 0x8000000000000000uLL;
        v26 = *(_QWORD *)v26;
      }
      while ( v26 );
    }
  }
  if ( !*(_DWORD *)&v61[2].XState )
  {
LABEL_46:
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        v9,
        0LL,
        *(_QWORD *)&v20[1].NicSwitchHwCapabilities.MaxNumQueuePairsForDefaultVPort,
        0x87u,
        v22);
    if ( (v23 & 0x20) != 0 )
    {
      if ( !v22 )
        v72 = KfRaiseIrql(2u);
      Number = KeGetPcr()->Prcb.Number;
      v26 = __rdtsc();
      *(wchar_t **)((char *)&v63[21].Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData) = (wchar_t *)v26;
    }
    v33 = *(_QWORD *)&v20[1].NicSwitchCurrentCapabilities.Flags;
    v34 = *(void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))&v20[1].NicSwitchCurrentCapabilities.NdisReserved14;
    v35 = *(struct _NET_BUFFER_LIST **)&v20[1].NicSwitchHwCapabilities.NumberOfIndirectionTableEntriesForDefaultVPort;
    if ( *(_BYTE *)v33 == 17 )
      goto LABEL_55;
    if ( v22 || KeGetCurrentIrql() == 2 )
    {
      LODWORD(v26) = KeGetPcr()->Prcb.Number;
      p_Parameter = &Parameter;
      v71 = v26;
      v66 = 0LL;
      Parameter = NetBufferList;
      NetBufferList->Scratch = 0LL;
      NetBufferList->ChildRefCount = v22;
      v65 = NetBufferList;
      while ( *(_BYTE *)v33 == 5 )
      {
        v40 = *p_Parameter;
        if ( !*p_Parameter )
          break;
        v41 = v33;
        v42 = *(_QWORD *)(v33 + 424) + 96 * v26;
        if ( *(_BYTE *)(v42 + 88) )
        {
          *p_Parameter = 0LL;
          do
          {
            v47 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v40->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v40->Scratch;
            v40->ChildRefCount = 0;
            if ( v47 && *(_BYTE *)v33 == 5 && *(_QWORD *)(v33 + 776) )
              (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))v47 + 17))(
                v35,
                v40,
                ChildRefCount);
            else
              v34(v35, v40, ChildRefCount);
            v40 = Scratch;
          }
          while ( Scratch );
          break;
        }
        *(_BYTE *)(v42 + 88) = 1;
        v43 = *p_Parameter;
        *p_Parameter = 0LL;
        if ( v43 )
        {
          do
          {
            v44 = ndisVerifierNdisDispatch;
            v45 = (unsigned int)v43->ChildRefCount;
            v46 = (struct _NET_BUFFER_LIST *)v43->Scratch;
            v43->ChildRefCount = 0;
            if ( v44 && *(_BYTE *)v33 == 5 && *(_QWORD *)(v33 + 776) )
              (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))v44 + 17))(v35, v43, v45);
            else
              v34(v35, v43, v45);
            v43 = v46;
          }
          while ( v46 );
        }
        v26 = v71;
        p_Parameter = (PNET_BUFFER_LIST *)(v42 + 72);
        *(_BYTE *)(v42 + 88) = 0;
        v33 = *(_QWORD *)(v33 + 552);
        v34 = *(void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))(v41 + 528);
        v35 = *(struct _NET_BUFFER_LIST **)(v41 + 536);
      }
      v50 = *p_Parameter;
      if ( *p_Parameter )
      {
        *p_Parameter = 0LL;
        do
        {
          v51 = ndisVerifierNdisDispatch;
          v52 = (unsigned int)v50->ChildRefCount;
          v53 = (struct _NET_BUFFER_LIST *)v50->Scratch;
          v50->ChildRefCount = 0;
          if ( v51 && *(_BYTE *)v33 == 5 && *(_QWORD *)(v33 + 776) )
            (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))v51 + 17))(v35, v50, v52);
          else
            v34(v35, v50, v52);
          v50 = v53;
        }
        while ( v53 );
      }
      LOBYTE(v23) = v74;
      goto LABEL_56;
    }
    if ( v20->Header.Type != 5 )
      goto LABEL_55;
    if ( !ndisIsLwfGuaranteedStackSpaceAvailable() )
    {
      v55 = 24576;
      v66 = v34;
      v70 = 0;
      Parameter = (PNET_BUFFER_LIST)v33;
      v65 = v35;
      v67 = v9;
      v68 = 0LL;
      v69 = 0;
      if ( (unsigned int)Size > 0x6000 )
        v55 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             &Parameter,
             v55,
             0,
             0LL) < 0 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(v9, v20->NblTracker, 0xA0uLL, 1u, 0);
        v56 = KeAcquireSpinLockRaiseToDpc(&v20->Lock);
        p_ReceivedNblsToComplete = &v20->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
        v20->LockThread = KeGetCurrentThread();
        v58 = v56;
        for ( k = v20->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
              k;
              k = (struct _NET_BUFFER_LIST *)k->Link.Alignment )
        {
          p_ReceivedNblsToComplete = &k->Next;
        }
        *p_ReceivedNblsToComplete = v9;
        ndisQueueStackExpansionFallbackWorkItem(v20);
        v20->LockThread = 0LL;
        KeReleaseSpinLock(&v20->Lock, v58);
      }
      goto LABEL_56;
    }
    if ( ndisVerifierNdisDispatch && *(_BYTE *)v33 == 5 && *(_QWORD *)(v33 + 776) )
      (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch
       + 17))(
        v35,
        v9,
        0LL);
    else
LABEL_55:
      v34(v35, v9, v22);
LABEL_56:
    if ( (v23 & 0x20) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      v36 = (char *)v63 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
      v37 = __rdtsc();
      *((_QWORD *)v36 + 18) += (((unsigned __int64)HIDWORD(v37) << 32) | (unsigned int)v37) - *((_QWORD *)v36 + 43);
      v38 = v72;
      *((_QWORD *)v36 + 43) = 0LL;
      if ( v38 != 2 )
        KeLowerIrql(v38);
    }
    return;
  }
  v27 = 0LL;
  p_Alignment = 0LL;
  do
  {
    v29 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
    v9->Link.Alignment = 0LL;
    HIDWORD(v26) = HIDWORD(PoolHandle);
    if ( v9->NdisPoolHandle == PoolHandle )
    {
      _InterlockedDecrement((volatile signed __int32 *)&v61[2].XState);
      FirstNetBuffer = v9->FirstNetBuffer;
      CurrentMdl = FirstNetBuffer->CurrentMdl;
      v32 = (struct _NPAGED_LOOKASIDE_LIST *)NetBufferList->MiniportReserved[1];
      if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
      if ( v32 )
        ExFreeToNPagedLookasideList(v32, CurrentMdl);
      else
        ExFreePoolWithTag(CurrentMdl, 0);
      NdisFreeNetBufferList(NetBufferList);
    }
    else
    {
      if ( v27 )
        *p_Alignment = v9;
      else
        v27 = v9;
      p_Alignment = &v9->Link.Alignment;
    }
    NetBufferList = v29;
    v9 = v29;
  }
  while ( v29 );
  LOBYTE(v23) = v74;
  v9 = v27;
  NetBufferList = v27;
  if ( v27 )
  {
    v20 = v61;
    goto LABEL_46;
  }
}
