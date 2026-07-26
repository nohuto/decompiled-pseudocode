/*
 * XREFs of ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400185E0
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14001B5E0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001D9D0 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001FB00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003F570 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x14003FE50 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140040490 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x14006AA70 (ndisEmptyPeriodicReceivesQueue.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140078AA0 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x14008D890 (ndisReturnPacketToNetBufferList.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D39F0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001A240 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisReturnNetBufferListsInternal(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        struct _NDIS_OPEN_BLOCK *a4)
{
  struct _NET_BUFFER_LIST *v4; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdx
  unsigned int Number; // r15d
  struct _NDIS_OPEN_BLOCK *v8; // rbp
  struct _NET_BUFFER_LIST *i; // rcx
  int v12; // esi
  int v13; // ebp
  int v14; // eax
  __int64 v15; // r14
  void (__fastcall *v16)(__int64, struct _NET_BUFFER_LIST *, __int64); // rsi
  __int64 v17; // rbp
  char *v18; // rcx
  unsigned __int64 v19; // rax
  struct _NET_BUFFER_LIST **v20; // rbx
  struct _NET_BUFFER_LIST *v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rdi
  struct _NET_BUFFER_LIST *v24; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v25; // rax
  __int64 v26; // r8
  struct _NET_BUFFER_LIST *v27; // rbx
  struct _NET_BUFFER_LIST *v28; // rbp
  struct _NET_BUFFER_LIST *v29; // rsi
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v31; // r14
  _MDL *CurrentMdl; // r15
  struct _VF_NDIS_DISPATCH_TABLE *v33; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rdi
  struct _NET_BUFFER_LIST *v36; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v37; // rax
  __int64 v38; // r8
  struct _NET_BUFFER_LIST *v39; // rbx
  int v40; // ecx
  unsigned __int64 *p_Lock; // rsi
  KIRQL v42; // bp
  _NET_BUFFER_LIST **p_ReceivedNblsToComplete; // rcx
  _NET_BUFFER_LIST *ReceivedNblsToComplete; // rdx
  struct _NET_BUFFER_LIST *Alignment; // rax
  int v46; // [rsp+30h] [rbp-98h]
  Rtl::KString *value; // [rsp+38h] [rbp-90h]
  _QWORD v48[3]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD Parameter[5]; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v50; // [rsp+88h] [rbp-40h]
  int v51; // [rsp+8Ch] [rbp-3Ch]
  KIRQL v52; // [rsp+D0h] [rbp+8h]
  int v53; // [rsp+D8h] [rbp+10h]

  v52 = 2;
  NblTracker = 0LL;
  Number = -1;
  v8 = a4;
  value = 0LL;
  LOBYTE(v46) = 0;
  v53 = -1;
  if ( LODWORD(a1->FilterFriendlyName) || *(_DWORD *)&a1->Ref.ReferenceCount )
  {
    v46 = *(_DWORD *)&a1->Ref.ReferenceCount;
    value = a1->FilterInstanceName.__ptr_.__value_;
    if ( !value )
      value = a1->FilterInstanceName.__ptr_.__value_;
  }
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Flags = i->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011D800 )
  {
    Alignment = a2;
    if ( a2 )
    {
      if ( byte_14011D800 )
      {
        do
        {
          Alignment->NetBufferListInfo[13] = 0LL;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
      }
      else
      {
        do
        {
          Alignment->NetBufferListInfo[13] = (void *)((unsigned __int64)Alignment->NetBufferListInfo[13] | 0x8000000000000000uLL);
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
      }
    }
  }
  if ( *(_DWORD *)&a1[2].XState )
  {
    v4 = 0LL;
    if ( a2 )
    {
      v28 = 0LL;
      do
      {
        v29 = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
        a2->Link.Alignment = 0LL;
        if ( a2->NdisPoolHandle == PoolHandle )
        {
          _InterlockedDecrement((volatile signed __int32 *)&a1[2].XState);
          FirstNetBuffer = a2->FirstNetBuffer;
          v31 = (struct _NPAGED_LOOKASIDE_LIST *)a2->MiniportReserved[1];
          CurrentMdl = FirstNetBuffer->CurrentMdl;
          if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
            MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
          if ( v31 )
            ExFreeToNPagedLookasideList(v31, CurrentMdl);
          else
            ExFreePoolWithTag(CurrentMdl, 0);
          NdisFreeNetBufferList(a2);
          NblTracker = 0LL;
        }
        else
        {
          if ( v4 )
            v28->Link.Alignment = (unsigned __int64)a2;
          else
            v4 = a2;
          v28 = a2;
        }
        a2 = v29;
      }
      while ( v29 );
      v8 = a4;
      Number = -1;
    }
    a2 = v4;
  }
  if ( a2 )
  {
    v12 = a3 & 1;
    if ( *(_DWORD *)ndisNblTrackerMode )
    {
      if ( v8 )
        NblTracker = v8->NblTracker;
      ndisNblTrackerTransferOwnershipInternal(
        a2,
        NblTracker,
        *(struct NDIS_NBL_TRACKER_HANDLE__ **)&a1[1].NicSwitchHwCapabilities.MaxNumQueuePairsForDefaultVPort,
        NdisNblTrackerEvent_ProtocolReturned,
        a3 & 1);
      v13 = a3 & 1;
    }
    else
    {
      v13 = a3 & 1;
    }
    v14 = a3 & 1;
    if ( (v46 & 0x20) != 0 )
    {
      if ( (a3 & 1) == 0 )
      {
        v52 = KfRaiseIrql(2u);
        v12 = v13;
      }
      Number = KeGetPcr()->Prcb.Number;
      v53 = Number;
      *(wchar_t **)((char *)&value[21].Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData) = (wchar_t *)__rdtsc();
      v14 = v12;
    }
    v15 = *(_QWORD *)&a1[1].NicSwitchCurrentCapabilities.Flags;
    v16 = *(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))&a1[1].NicSwitchCurrentCapabilities.NdisReserved14;
    v17 = *(_QWORD *)&a1[1].NicSwitchHwCapabilities.NumberOfIndirectionTableEntriesForDefaultVPort;
    if ( *(_BYTE *)v15 == 17 )
      goto LABEL_20;
    if ( v14 || KeGetCurrentIrql() == 2 )
    {
      LODWORD(v4) = KeGetPcr()->Prcb.Number;
      v20 = (struct _NET_BUFFER_LIST **)v48;
      a2->ChildRefCount = a3;
      v48[2] = 0LL;
      a2->Scratch = 0LL;
      v48[0] = a2;
      v48[1] = a2;
      while ( *(_BYTE *)v15 == 5 )
      {
        v21 = *v20;
        if ( !*v20 )
          break;
        v22 = v15;
        v23 = *(_QWORD *)(v15 + 424) + 96LL * (_QWORD)v4;
        if ( *(_BYTE *)(v23 + 88) )
        {
          *v20 = 0LL;
          do
          {
            v33 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v21->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v21->Scratch;
            v21->ChildRefCount = 0;
            if ( v33 && *(_BYTE *)v15 == 5 && *(_QWORD *)(v15 + 776) )
              (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v33 + 17))(v17, v21, ChildRefCount);
            else
              v16(v17, v21, ChildRefCount);
            v21 = Scratch;
          }
          while ( Scratch );
          break;
        }
        *(_BYTE *)(v23 + 88) = 1;
        v24 = *v20;
        *v20 = 0LL;
        if ( v24 )
        {
          do
          {
            v25 = ndisVerifierNdisDispatch;
            v26 = (unsigned int)v24->ChildRefCount;
            v27 = (struct _NET_BUFFER_LIST *)v24->Scratch;
            v24->ChildRefCount = 0;
            if ( v25 && *(_BYTE *)v15 == 5 && *(_QWORD *)(v15 + 776) )
              (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v25 + 17))(v17, v24, v26);
            else
              v16(v17, v24, v26);
            v24 = v27;
          }
          while ( v27 );
        }
        *(_BYTE *)(v23 + 88) = 0;
        v20 = (struct _NET_BUFFER_LIST **)(v23 + 72);
        v15 = *(_QWORD *)(v15 + 552);
        v16 = *(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))(v22 + 528);
        v17 = *(_QWORD *)(v22 + 536);
      }
      v36 = *v20;
      if ( *v20 )
      {
        *v20 = 0LL;
        do
        {
          v37 = ndisVerifierNdisDispatch;
          v38 = (unsigned int)v36->ChildRefCount;
          v39 = (struct _NET_BUFFER_LIST *)v36->Scratch;
          v36->ChildRefCount = 0;
          if ( v37 && *(_BYTE *)v15 == 5 && *(_QWORD *)(v15 + 776) )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v37 + 17))(v17, v36, v38);
          else
            v16(v17, v36, v38);
          v36 = v39;
        }
        while ( v39 );
      }
      Number = v53;
      goto LABEL_21;
    }
    if ( a1->Header.Type != 5 )
      goto LABEL_20;
    if ( !ndisIsLwfGuaranteedStackSpaceAvailable() )
    {
      Parameter[0] = v15;
      v51 = 0;
      v40 = 24576;
      Parameter[4] = 0LL;
      Parameter[1] = v17;
      Parameter[2] = v16;
      Parameter[3] = a2;
      v50 = a3;
      if ( (unsigned int)Size > 0x6000 )
        v40 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             Parameter,
             v40,
             0,
             0LL) < 0 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            a2,
            a1->NblTracker,
            (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
            (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)1,
            0);
        p_Lock = &a1->Lock;
        v42 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->LockThread = KeGetCurrentThread();
        p_ReceivedNblsToComplete = &a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
        ReceivedNblsToComplete = a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
        if ( ReceivedNblsToComplete )
        {
          do
          {
            p_ReceivedNblsToComplete = &ReceivedNblsToComplete->Next;
            ReceivedNblsToComplete = (_NET_BUFFER_LIST *)ReceivedNblsToComplete->Link.Alignment;
          }
          while ( ReceivedNblsToComplete );
          p_Lock = &a1->Lock;
        }
        *p_ReceivedNblsToComplete = a2;
        ndisQueueStackExpansionFallbackWorkItem(a1);
        a1->LockThread = 0LL;
        KeReleaseSpinLock(p_Lock, v42);
      }
      goto LABEL_21;
    }
    if ( ndisVerifierNdisDispatch && *(_BYTE *)v15 == 5 && *(_QWORD *)(v15 + 776) )
      (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 17))(v17, a2, a3);
    else
LABEL_20:
      v16(v17, a2, a3);
LABEL_21:
    if ( (v46 & 0x20) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      v18 = (char *)value + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
      v19 = __rdtsc();
      *((_QWORD *)v18 + 18) += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - *((_QWORD *)v18 + 43);
      *((_QWORD *)v18 + 43) = 0LL;
      if ( v52 != 2 )
        KeLowerIrql(v52);
    }
  }
}
