/*
 * XREFs of ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0
 * Callers:
 *     NdisFIndicateReceiveNetBufferLists @ 0x140033A40 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x140035610 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x140038FF0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003ABD0 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400425F0 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x140043410 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140043970 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400468C0 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140046C70 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1400866D0 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisReturnPacketToNetBufferList @ 0x140099130 (ndisReturnPacketToNetBufferList.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400DAD40 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     NdisFreeNetBufferList @ 0x14001B730 (NdisFreeNetBufferList.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001D250 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisReturnNetBufferListsInternal(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        struct _NDIS_OPEN_BLOCK *a4)
{
  unsigned __int64 v4; // r12
  struct _NDIS_FILTER_BLOCK *v5; // rbp
  struct _NET_BUFFER_LIST *v6; // r15
  unsigned __int64 v7; // rdx
  struct _NET_BUFFER_LIST *i; // rcx
  unsigned __int64 v10; // rdi
  unsigned int v11; // r14d
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rcx
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdi
  unsigned __int8 *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // r14
  void (__fastcall *v26)(__int64, __int64, __int64); // rdi
  __int64 v27; // rsi
  unsigned int v28; // eax
  char *v29; // rcx
  unsigned __int64 v30; // rax
  _QWORD *v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // rbp
  __int64 v37; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v38; // rax
  __int64 v39; // r8
  __int64 v40; // rbx
  _QWORD *p_Alignment; // r13
  struct _NET_BUFFER_LIST *v42; // rdi
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v44; // rsi
  _MDL *CurrentMdl; // r14
  struct _VF_NDIS_DISPATCH_TABLE *v46; // rax
  __int64 v47; // r8
  __int64 v48; // rbp
  __int64 v49; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rbx
  unsigned __int64 v53; // rax
  int v54; // ecx
  KSPIN_LOCK *p_Lock; // rbx
  KIRQL v56; // di
  _NET_BUFFER_LIST **p_ReceivedNblsToComplete; // rcx
  _SLIST_HEADER *ReceivedNblsToComplete; // rdx
  _SLIST_HEADER *Alignment; // rax
  __int64 v60; // [rsp+30h] [rbp-C8h]
  char v61; // [rsp+40h] [rbp-B8h]
  KIRQL v62; // [rsp+41h] [rbp-B7h]
  int v63; // [rsp+44h] [rbp-B4h]
  __int64 v64; // [rsp+48h] [rbp-B0h]
  unsigned int Number; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v66; // [rsp+58h] [rbp-A0h]
  Rtl::KString *value; // [rsp+60h] [rbp-98h]
  NDIS_NBL_TRACKER_HANDLE__ *v68; // [rsp+68h] [rbp-90h]
  _QWORD Parameter[5]; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v70; // [rsp+98h] [rbp-60h]
  int v71; // [rsp+9Ch] [rbp-5Ch]
  _QWORD v72[4]; // [rsp+A0h] [rbp-58h] BYREF
  struct _NET_BUFFER_LIST *v74; // [rsp+108h] [rbp+10h]
  unsigned int v75; // [rsp+110h] [rbp+18h]

  v75 = a3;
  v74 = a2;
  v5 = a1;
  v62 = 2;
  v6 = a2;
  LODWORD(v7) = 0;
  Number = -1;
  value = 0LL;
  LOBYTE(v63) = 0;
  if ( LODWORD(a1->FilterFriendlyName) || *(_DWORD *)&a1->Ref.ReferenceCount )
  {
    v63 = *(_DWORD *)&a1->Ref.ReferenceCount;
    value = a1->FilterInstanceName.__ptr_.__value_;
    if ( !value )
      value = a1->FilterInstanceName.__ptr_.__value_;
  }
  for ( i = v6; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Flags = i->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1401278B0 )
  {
    Alignment = (_SLIST_HEADER *)v6;
    if ( v6 )
    {
      if ( byte_1401278B0 )
      {
        do
        {
          Alignment[15].Region = 0LL;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        }
        while ( Alignment );
      }
      else
      {
        do
        {
          Alignment[15].Region |= 0x8000000000000000uLL;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        }
        while ( Alignment );
      }
    }
  }
  if ( LODWORD(v5[2].XmitLinkSpeedIndicateUp) )
  {
    v4 = 0LL;
    p_Alignment = 0LL;
    if ( v6 )
    {
      do
      {
        v42 = (struct _NET_BUFFER_LIST *)v6->Link.Alignment;
        v6->Link.Alignment = 0LL;
        if ( v6->NdisPoolHandle == PoolHandle )
        {
          _InterlockedDecrement((volatile signed __int32 *)&v5[2].XmitLinkSpeedIndicateUp);
          FirstNetBuffer = v6->FirstNetBuffer;
          v44 = (struct _NPAGED_LOOKASIDE_LIST *)v6->MiniportReserved[1];
          CurrentMdl = FirstNetBuffer->CurrentMdl;
          if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
            MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
          if ( v44 )
            ExFreeToNPagedLookasideList(v44, CurrentMdl);
          else
            ExFreePoolWithTag(CurrentMdl, 0);
          NdisFreeNetBufferList(v6);
          LODWORD(v7) = 0;
        }
        else
        {
          if ( v4 )
            *p_Alignment = v6;
          else
            v4 = (unsigned __int64)v6;
          p_Alignment = &v6->Link.Alignment;
        }
        v6 = v42;
      }
      while ( v42 );
      LOBYTE(a3) = v75;
    }
    v6 = (struct _NET_BUFFER_LIST *)v4;
    v74 = (struct _NET_BUFFER_LIST *)v4;
  }
  if ( !v6 )
    return;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_35;
  v10 = *(_QWORD *)&v5[1].NicSwitchCurrentCapabilities.Flags;
  v11 = a3 & 1;
  if ( a4 )
    NblTracker = a4->NblTracker;
  else
    NblTracker = 0LL;
  v13 = ndisNblTrackerEpoch;
  v14 = 0LL;
  v15 = 0LL;
  v64 = 0LL;
  v16 = 0LL;
  v68 = NblTracker;
  v61 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(v6, NblTracker, 0x87u, (void *)v10, v11);
    v16 = 0LL;
  }
  v17 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v10 & 1) != 0 )
  {
    v18 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v17 = (2 * v13) ^ (v10 ^ (2 * v13)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v18 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v66 = v18;
  v4 = (unsigned __int64)v6;
  do
  {
    v19 = *(_QWORD *)(v4 + 360);
    while ( *(_QWORD *)(v4 + 360) == v19 )
    {
      if ( v19 )
      {
        if ( (v19 & 4) != 0 )
          goto LABEL_107;
      }
      else if ( !*(_QWORD *)(v4 + 120) )
      {
        v53 = (unsigned __int64)v68 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( ((unsigned __int8)v68 & 1) != 0 )
          v53 = *(_QWORD *)(((unsigned __int64)v68 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        *(_QWORD *)(v4 + 120) = v53;
      }
      v20 = *(unsigned __int8 **)(v4 + 120);
      if ( v20 )
      {
        LODWORD(v7) = *v20;
        if ( (unsigned __int8)(v7 - 17) <= 1u || (_BYTE)v7 == 5 )
        {
          if ( v20 != (unsigned __int8 *)v18 || *(_QWORD *)(v4 + 24) )
          {
            ++v14;
            v21 = v17;
          }
          else
          {
            ++v16;
            v21 = 24LL;
            v64 = v16;
            ++v14;
          }
          goto LABEL_25;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v60) = *v20;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            v4,
            v60);
LABEL_141:
          v16 = v64;
          v18 = v66;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          27,
          11,
          (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
          v4);
        goto LABEL_141;
      }
LABEL_107:
      v21 = v17 | 4;
LABEL_25:
      *(_QWORD *)(v4 + 360) = v21;
      v4 = *(_QWORD *)v4;
      if ( !v4 )
        break;
    }
    v22 = v15 - v14;
    if ( (v19 & 1) != 0 && v22 )
    {
      if ( (_BYTE)v11 || v61 )
      {
        v7 = 16 * ((v19 >> 1) & 1) + (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( (_BYTE)v11 )
          goto LABEL_50;
LABEL_32:
        _InterlockedAdd64((volatile signed __int64 *)(v7 + 8), v22);
      }
      else
      {
        v61 = 1;
        if ( KeGetCurrentIrql() != 2 )
        {
          v7 = 16 * ((v19 >> 1) & 1) + (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_32;
        }
        LOBYTE(v11) = 1;
        v7 = 16 * ((v19 >> 1) & 1) + (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_50:
        v31 = (_QWORD *)(*(_QWORD *)v7 + (KeGetPcr()->Prcb.Number << 12));
        *v31 += v22;
      }
    }
    v16 = v64;
    v15 = v14;
    v18 = v66;
  }
  while ( v4 );
  v5 = a1;
  v32 = v14 - v64;
  v6 = v74;
  if ( (v17 & 1) == 0 || !v32 )
    goto LABEL_35;
  if ( (_BYTE)v11 || v61 )
  {
    v23 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    if ( !(_BYTE)v11 )
      goto LABEL_58;
    goto LABEL_34;
  }
  if ( KeGetCurrentIrql() == 2 )
  {
    v23 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_34:
    v24 = (_QWORD *)(*(_QWORD *)v23 + (KeGetPcr()->Prcb.Number << 12));
    *v24 += v32;
    goto LABEL_35;
  }
  v23 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_58:
  _InterlockedAdd64((volatile signed __int64 *)(v23 + 8), v32);
LABEL_35:
  if ( (v63 & 0x20) != 0 )
  {
    if ( (v75 & 1) == 0 )
      v62 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    *(wchar_t **)((char *)&value[21].Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData) = (wchar_t *)__rdtsc();
  }
  v25 = *(_QWORD *)&v5[1].NicSwitchCurrentCapabilities.NumTotalMacAddresses;
  v26 = *(void (__fastcall **)(__int64, __int64, __int64))&v5[1].NicSwitchCurrentCapabilities.NdisReserved16;
  v27 = *(_QWORD *)&v5[1].NicSwitchHwCapabilities.MaxNumQueuePairsForDefaultVPort;
  if ( *(_BYTE *)v25 == 17 )
    goto LABEL_42;
  if ( (v75 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v33 = v72;
    v6->ChildRefCount = v75;
    v72[2] = 0LL;
    v6->Scratch = 0LL;
    v72[0] = v6;
    v72[1] = v6;
    while ( *(_BYTE *)v25 == 5 )
    {
      v34 = *v33;
      if ( !*v33 )
        break;
      v35 = v25;
      v36 = *(_QWORD *)(v25 + 424) + 96 * v4;
      if ( *(_BYTE *)(v36 + 88) )
      {
        *v33 = 0LL;
        do
        {
          v46 = ndisVerifierNdisDispatch;
          v47 = *(unsigned int *)(v34 + 132);
          v48 = *(_QWORD *)(v34 + 112);
          *(_DWORD *)(v34 + 132) = 0;
          if ( v46 && *(_BYTE *)v25 == 5 && *(_QWORD *)(v25 + 776) )
            (*((void (__fastcall **)(__int64, __int64, __int64))v46 + 17))(v27, v34, v47);
          else
            v26(v27, v34, v47);
          v34 = v48;
        }
        while ( v48 );
        break;
      }
      *(_BYTE *)(v36 + 88) = 1;
      v37 = *v33;
      *v33 = 0LL;
      if ( v37 )
      {
        do
        {
          v38 = ndisVerifierNdisDispatch;
          v39 = *(unsigned int *)(v37 + 132);
          v40 = *(_QWORD *)(v37 + 112);
          *(_DWORD *)(v37 + 132) = 0;
          if ( v38 && *(_BYTE *)v25 == 5 && *(_QWORD *)(v25 + 776) )
            (*((void (__fastcall **)(__int64, __int64, __int64))v38 + 17))(v27, v37, v39);
          else
            v26(v27, v37, v39);
          v37 = v40;
        }
        while ( v40 );
      }
      *(_BYTE *)(v36 + 88) = 0;
      v33 = (__int64 *)(v36 + 72);
      v25 = *(_QWORD *)(v25 + 552);
      v26 = *(void (__fastcall **)(__int64, __int64, __int64))(v35 + 528);
      v27 = *(_QWORD *)(v35 + 536);
    }
    v49 = *v33;
    if ( *v33 )
    {
      *v33 = 0LL;
      do
      {
        v50 = ndisVerifierNdisDispatch;
        v51 = *(unsigned int *)(v49 + 132);
        v52 = *(_QWORD *)(v49 + 112);
        *(_DWORD *)(v49 + 132) = 0;
        if ( v50 && *(_BYTE *)v25 == 5 && *(_QWORD *)(v25 + 776) )
          (*((void (__fastcall **)(__int64, __int64, __int64))v50 + 17))(v27, v49, v51);
        else
          v26(v27, v49, v51);
        v49 = v52;
      }
      while ( v52 );
    }
  }
  else
  {
    if ( v5->Header.Type != 5 )
      goto LABEL_42;
    if ( ndisIsLwfGuaranteedStackSpaceAvailable() )
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v25 == 5 && *(_QWORD *)(v25 + 776) )
      {
        (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 17))(
          v27,
          v6,
          v75);
        goto LABEL_43;
      }
LABEL_42:
      v26(v27, (__int64)v6, v75);
    }
    else
    {
      Parameter[0] = v25;
      v71 = 0;
      v54 = 24576;
      Parameter[4] = 0LL;
      Parameter[1] = v27;
      Parameter[2] = v26;
      Parameter[3] = v6;
      v70 = v75;
      if ( (unsigned int)Size > 0x6000 )
        v54 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             Parameter,
             v54,
             0,
             0LL) < 0 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            v6,
            v5->NblTracker,
            (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
            (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)1,
            0);
        p_Lock = &v5->Lock;
        v56 = KeAcquireSpinLockRaiseToDpc(&v5->Lock);
        v5->LockThread = KeGetCurrentThread();
        p_ReceivedNblsToComplete = &v5->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
        ReceivedNblsToComplete = (_SLIST_HEADER *)v5->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
        if ( ReceivedNblsToComplete )
        {
          do
          {
            p_ReceivedNblsToComplete = (_NET_BUFFER_LIST **)ReceivedNblsToComplete;
            ReceivedNblsToComplete = (_SLIST_HEADER *)ReceivedNblsToComplete->Alignment;
          }
          while ( ReceivedNblsToComplete );
          p_Lock = &v5->Lock;
        }
        *p_ReceivedNblsToComplete = v6;
        ndisQueueStackExpansionFallbackWorkItem(v5);
        v5->LockThread = 0LL;
        KeReleaseSpinLock(p_Lock, v56);
      }
    }
  }
LABEL_43:
  if ( (v63 & 0x20) != 0 )
  {
    v28 = Number;
    if ( Number == -1 )
      v28 = KeGetPcr()->Prcb.Number;
    v29 = (char *)value + ndisPcwPerCpuDataStride * v28 + ndisPcwOffsetToPerCpuData;
    v30 = __rdtsc();
    *((_QWORD *)v29 + 18) += (((unsigned __int64)HIDWORD(v30) << 32) | (unsigned int)v30) - *((_QWORD *)v29 + 43);
    *((_QWORD *)v29 + 43) = 0LL;
    if ( v62 != 2 )
      KeLowerIrql(v62);
  }
}
