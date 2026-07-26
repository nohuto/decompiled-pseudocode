/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x140021180
 * Callers:
 *     ??$CompleteTransmittedNblsInner@$0A@@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003B3C (--$CompleteTransmittedNblsInner@$0A@@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     PktMonClientNblDrop @ 0x14001F9D0 (PktMonClientNblDrop.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140021940 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140021AD0 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140021B80 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NdisStatusToDropReason @ 0x140021C60 (NdisStatusToDropReason.c)
 *     NdisFreeNetBufferListContext @ 0x140021D40 (NdisFreeNetBufferListContext.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A27F8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // r14d
  __int64 v9; // rbp
  void (__fastcall *v10)(__int64, PNET_BUFFER_LIST, __int64); // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  PNET_BUFFER_LIST j; // rax
  PNET_BUFFER_LIST i; // rdi
  struct _NET_BUFFER_LIST **v15; // rbx
  struct _NET_BUFFER_LIST *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  struct _NET_BUFFER_LIST *v19; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v20; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rdi
  struct _NET_BUFFER_LIST *v23; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v24; // rax
  __int64 v25; // r8
  struct _NET_BUFFER_LIST *v26; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v27; // rax
  __int64 v28; // r8
  struct _NET_BUFFER_LIST *v29; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  int v36; // eax
  __int64 v37; // r9
  int v38; // ecx
  KSPIN_LOCK *v39; // rdi
  KIRQL v40; // bp
  PNET_BUFFER_LIST *v41; // rcx
  _QWORD *v42; // rdx
  PVOID Context; // [rsp+20h] [rbp-C8h]
  unsigned int v44; // [rsp+40h] [rbp-A8h]
  unsigned int v45; // [rsp+40h] [rbp-A8h]
  __int64 v46; // [rsp+48h] [rbp-A0h]
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 HighLimit; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v49[3]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD Parameter[5]; // [rsp+78h] [rbp-70h] BYREF
  ULONG v51; // [rsp+A0h] [rbp-48h]
  int v52; // [rsp+A4h] [rbp-44h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF
  KIRQL v54; // [rsp+F0h] [rbp+8h]
  unsigned int Number; // [rsp+108h] [rbp+20h]

  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
  {
    ndisNblVerifyTxCompletion(
      NetBufferList,
      SendCompleteFlags,
      (const struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle);
    ndisNblPoisonScratchFields(NetBufferList);
  }
  v6 = ndisNblContextVerifierMode;
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 )
  {
    switch ( *(_BYTE *)MiniportAdapterHandle )
    {
      case 5:
        LOBYTE(v6) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)MiniportAdapterHandle, 1024);
        break;
      case 0x11:
        v6 = *((_DWORD *)MiniportAdapterHandle + 922) >> 12;
        LOBYTE(v6) = (*((_DWORD *)MiniportAdapterHandle + 922) & 0x1000) != 0;
        break;
      case 0x12:
        v6 = *((_DWORD *)MiniportAdapterHandle + 56) >> 31;
        break;
      default:
        goto LABEL_4;
    }
    if ( (_BYTE)v6 )
    {
      for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
      {
        if ( *(NDIS_HANDLE *)&i->Context->ContextData[i->Context->Offset] != MiniportAdapterHandle )
          NblContextVerifierBugcheckContextCorruption(i, NetBufferList, MiniportAdapterHandle);
        NdisFreeNetBufferListContext(i, 8u);
      }
    }
  }
LABEL_4:
  if ( *((_QWORD *)MiniportAdapterHandle + 556) )
  {
    v12 = 0LL;
    for ( j = NetBufferList; j; v12 = (unsigned int)(v12 + 1) )
      j = (PNET_BUFFER_LIST)j->Link.Alignment;
    v6 = ndisClearBusy(MiniportAdapterHandle, v12, 52LL);
  }
  if ( NetBufferList->Status )
  {
    if ( byte_14011D800 )
    {
      v6 = *((unsigned int *)MiniportAdapterHandle + 1468);
      if ( (v6 & 2) != 0 )
      {
        v36 = NdisStatusToDropReason();
        PktMonClientNblDrop(
          (__int64)MiniportAdapterHandle + 5816,
          (__int64)NetBufferList,
          *((_DWORD *)MiniportAdapterHandle + 1467),
          v37,
          (__int64)Context,
          2,
          v36,
          -536866803);
      }
    }
  }
  v7 = 0LL;
  Number = -1;
  LOWORD(v8) = 0;
  v46 = 0LL;
  if ( *((_DWORD *)MiniportAdapterHandle + 12) || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    v7 = *((_QWORD *)MiniportAdapterHandle + 5);
    v8 = *((_DWORD *)MiniportAdapterHandle + 20);
    v46 = v7;
    if ( !v7 )
    {
      v7 = *((_QWORD *)MiniportAdapterHandle + 5);
      v46 = v7;
    }
  }
  v54 = 2;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferList,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
      *((_QWORD *)MiniportAdapterHandle + 323),
      0x93u,
      SendCompleteFlags & 1);
  if ( byte_14011D800 )
  {
    v6 = (__int64)NetBufferList;
    do
    {
      *(_QWORD *)(v6 + 248) = 0LL;
      v6 = *(_QWORD *)v6;
    }
    while ( v6 );
  }
  if ( (v8 & 0x100) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
      v54 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    v6 = __rdtsc();
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v7 + ndisPcwPerCpuDataStride * Number + 368) = v6;
  }
  v9 = *((_QWORD *)MiniportAdapterHandle + 324);
  v10 = (void (__fastcall *)(__int64, PNET_BUFFER_LIST, __int64))*((_QWORD *)MiniportAdapterHandle + 327);
  v11 = *((_QWORD *)MiniportAdapterHandle + 322);
  if ( *(_BYTE *)v9 == 17 )
    goto LABEL_16;
  if ( (SendCompleteFlags & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    v15 = (struct _NET_BUFFER_LIST **)v49;
    v44 = v6;
    v49[2] = 0LL;
    v49[0] = NetBufferList;
    v49[1] = NetBufferList;
    NetBufferList->Scratch = 0LL;
    NetBufferList->ChildRefCount = SendCompleteFlags;
    while ( *(_BYTE *)v9 == 5 )
    {
      v16 = *v15;
      if ( !*v15 )
        break;
      v17 = v9;
      v18 = *(_QWORD *)(v9 + 424) + 96 * v6;
      if ( *(_BYTE *)(v18 + 40) )
      {
        *v15 = 0LL;
        do
        {
          v20 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v16->ChildRefCount;
          Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
          v16->ChildRefCount = 0;
          if ( v20 && *(_BYTE *)v9 == 5 && *(_QWORD *)(v9 + 776) )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD))v20 + 13))(v11, v16, 0LL);
          else
            v10(v11, v16, ChildRefCount);
          v16 = Scratch;
        }
        while ( Scratch );
        break;
      }
      *(_BYTE *)(v18 + 40) = 1;
      v19 = *v15;
      *v15 = 0LL;
      if ( v19 )
      {
        do
        {
          v27 = ndisVerifierNdisDispatch;
          v28 = (unsigned int)v19->ChildRefCount;
          v29 = (struct _NET_BUFFER_LIST *)v19->Scratch;
          v19->ChildRefCount = 0;
          if ( v27 && *(_BYTE *)v9 == 5 && *(_QWORD *)(v9 + 776) )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD))v27 + 13))(v11, v19, 0LL);
          else
            v10(v11, v19, v28);
          v19 = v29;
        }
        while ( v29 );
      }
      v6 = v44;
      v15 = (struct _NET_BUFFER_LIST **)(v18 + 24);
      *(_BYTE *)(v18 + 40) = 0;
      v9 = *(_QWORD *)(v9 + 488);
      v10 = *(void (__fastcall **)(__int64, PNET_BUFFER_LIST, __int64))(v17 + 464);
      v11 = *(_QWORD *)(v17 + 472);
    }
    v23 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      do
      {
        v24 = ndisVerifierNdisDispatch;
        v25 = (unsigned int)v23->ChildRefCount;
        v26 = (struct _NET_BUFFER_LIST *)v23->Scratch;
        v23->ChildRefCount = 0;
        if ( v24 && *(_BYTE *)v9 == 5 && *(_QWORD *)(v9 + 776) )
          (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD))v24 + 13))(v11, v23, 0LL);
        else
          v10(v11, v23, v25);
        v23 = v26;
      }
      while ( v26 );
    }
  }
  else
  {
    if ( *(_BYTE *)MiniportAdapterHandle != 5 )
    {
LABEL_16:
      v10(v11, NetBufferList, SendCompleteFlags);
      goto LABEL_17;
    }
    v45 = Size;
    v30 = KeGetPcr()->Prcb.Number << 12;
    v31 = *(_QWORD *)(v30 + qword_14011D048);
    LowLimit = v31;
    v32 = *(_QWORD *)(v30 + qword_14011D040);
    HighLimit = v32;
    if ( v31 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v32 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v31 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v31 < v45 )
    {
      v38 = 24576;
      v52 = 0;
      Parameter[0] = v9;
      Parameter[1] = v11;
      Parameter[2] = v10;
      Parameter[3] = NetBufferList;
      Parameter[4] = 0LL;
      v51 = SendCompleteFlags;
      if ( (unsigned int)Size > 0x6000 )
        v38 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             Parameter,
             v38,
             0,
             0LL) < 0 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            NetBufferList,
            *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 81),
            0xA0uLL,
            1u,
            0);
        v39 = (KSPIN_LOCK *)((char *)MiniportAdapterHandle + 144);
        v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 18);
        *((_QWORD *)MiniportAdapterHandle + 19) = KeGetCurrentThread();
        v41 = (PNET_BUFFER_LIST *)((char *)MiniportAdapterHandle + 272);
        v42 = (_QWORD *)*((_QWORD *)MiniportAdapterHandle + 34);
        if ( v42 )
        {
          do
          {
            v41 = (PNET_BUFFER_LIST *)v42;
            v42 = (_QWORD *)*v42;
          }
          while ( v42 );
          v39 = (KSPIN_LOCK *)((char *)MiniportAdapterHandle + 144);
        }
        *v41 = NetBufferList;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)MiniportAdapterHandle);
        *((_QWORD *)MiniportAdapterHandle + 19) = 0LL;
        KeReleaseSpinLock(v39, v40);
      }
    }
    else
    {
      if ( !ndisVerifierNdisDispatch || *(_BYTE *)v9 != 5 || !*(_QWORD *)(v9 + 776) )
        goto LABEL_16;
      (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 13))(
        v11,
        NetBufferList,
        0LL);
    }
  }
LABEL_17:
  if ( (v8 & 0x100) != 0 )
  {
    v33 = Number;
    if ( Number == -1 )
      v33 = KeGetPcr()->Prcb.Number;
    v34 = v46 + ndisPcwPerCpuDataStride * v33 + ndisPcwOffsetToPerCpuData;
    v35 = __rdtsc();
    *(_QWORD *)(v34 + 168) += (((unsigned __int64)HIDWORD(v35) << 32) | (unsigned int)v35) - *(_QWORD *)(v34 + 368);
    *(_QWORD *)(v34 + 368) = 0LL;
    if ( v54 != 2 )
      KeLowerIrql(v54);
  }
}
