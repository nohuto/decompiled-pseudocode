/*
 * XREFs of ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140031540
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140037AD0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038B60 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14004A900 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14004BCA0 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14004BD90 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C2F54 (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteInternal(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        char a4)
{
  unsigned __int64 v4; // rax
  wchar_t *p_Length; // rsi
  int v6; // ebp
  _NDIS_OBJECT_HEADER *v10; // rsi
  void (__fastcall *v11)(void *, _NET_BUFFER_LIST *, unsigned int); // r15
  void *v12; // r12
  NDIS_NBL_TRACKER_HANDLE__ *v13; // rdx
  _NET_BUFFER_LIST **v14; // rbx
  _NET_BUFFER_LIST *v15; // rdx
  _NDIS_OBJECT_HEADER *v16; // r14
  __int64 v17; // rdi
  _NET_BUFFER_LIST *v18; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v19; // rax
  __int64 ChildRefCount; // r8
  _NET_BUFFER_LIST *Scratch; // rdi
  _NET_BUFFER_LIST *v22; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v23; // rax
  __int64 v24; // r8
  _NET_BUFFER_LIST *v25; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v26; // rax
  __int64 v27; // r8
  _NET_BUFFER_LIST *v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  unsigned int v32; // eax
  char *v33; // rcx
  unsigned __int64 v34; // rax
  int v35; // ecx
  _NDIS_PACKET **p_Lock; // rbx
  KIRQL v37; // si
  unsigned __int16 *p_SentNblsToComplete; // rcx
  _SLIST_HEADER *SentNblsToComplete; // rdx
  unsigned int v40; // [rsp+30h] [rbp-98h]
  unsigned int v41; // [rsp+30h] [rbp-98h]
  unsigned int Number; // [rsp+34h] [rbp-94h]
  wchar_t *v43; // [rsp+38h] [rbp-90h]
  unsigned __int64 LowLimit; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 HighLimit; // [rsp+48h] [rbp-80h] BYREF
  _QWORD Parameter[5]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v47; // [rsp+78h] [rbp-50h]
  int v48; // [rsp+7Ch] [rbp-4Ch]
  _QWORD v49[4]; // [rsp+80h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  KIRQL v51; // [rsp+D0h] [rbp+8h]

  p_Length = 0LL;
  Number = -1;
  LOWORD(v6) = 0;
  v43 = 0LL;
  if ( LODWORD(a1->FilterFriendlyName) || *(_DWORD *)&a1->Ref.ReferenceCount )
  {
    p_Length = &a1->FilterInstanceName.__ptr_.__value_->Length;
    v6 = *(_DWORD *)&a1->Ref.ReferenceCount;
    v43 = p_Length;
    if ( !p_Length )
    {
      p_Length = &a1->FilterInstanceName.__ptr_.__value_->Length;
      v43 = p_Length;
    }
  }
  v51 = 2;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    if ( a4 )
      v13 = *(NDIS_NBL_TRACKER_HANDLE__ **)&a1[2].NicSwitchCurrentCapabilities.MaxNumRssCapableNonDefaultPFVPorts;
    else
      v13 = 0LL;
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      v13,
      *(_QWORD *)&a1[1].NicSwitchCurrentCapabilities.NdisReserved4,
      0x93u,
      a3 & 1);
  }
  if ( byte_14011D800 )
  {
    v4 = (unsigned __int64)a2;
    if ( a2 )
    {
      do
      {
        *(_QWORD *)(v4 + 248) = 0LL;
        v4 = *(_QWORD *)v4;
      }
      while ( v4 );
    }
  }
  if ( (v6 & 0x100) != 0 )
  {
    if ( (a3 & 1) == 0 )
      v51 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    v4 = __rdtsc();
    *(_QWORD *)((char *)p_Length + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 368) = v4;
  }
  v10 = *(_NDIS_OBJECT_HEADER **)&a1[1].NicSwitchCurrentCapabilities.MaxNumQueuePairs;
  v11 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))&a1[1].NicSwitchCurrentCapabilities.NdisReserved9;
  v12 = *(void **)&a1[1].NicSwitchCurrentCapabilities.MaxNumSwitches;
  if ( v10->Type == 17 )
    goto LABEL_10;
  if ( (a3 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v14 = (_NET_BUFFER_LIST **)v49;
    v40 = v4;
    v49[2] = 0LL;
    v49[0] = a2;
    v49[1] = a2;
    a2->Scratch = 0LL;
    a2->ChildRefCount = a3;
    while ( v10->Type == 5 )
    {
      v15 = *v14;
      if ( !*v14 )
        break;
      v16 = v10;
      v17 = *(_QWORD *)&v10[106].Type + 96 * v4;
      if ( *(_BYTE *)(v17 + 40) )
      {
        *v14 = 0LL;
        do
        {
          v19 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v15->ChildRefCount;
          Scratch = (_NET_BUFFER_LIST *)v15->Scratch;
          v15->ChildRefCount = 0;
          if ( v19 && v10->Type == 5 && *(_QWORD *)&v10[194].Type )
            (*((void (__fastcall **)(void *, _NET_BUFFER_LIST *, _QWORD))v19 + 13))(v12, v15, 0LL);
          else
            v11(v12, v15, ChildRefCount);
          v15 = Scratch;
        }
        while ( Scratch );
        break;
      }
      *(_BYTE *)(v17 + 40) = 1;
      v18 = *v14;
      *v14 = 0LL;
      if ( v18 )
      {
        do
        {
          v26 = ndisVerifierNdisDispatch;
          v27 = (unsigned int)v18->ChildRefCount;
          v28 = (_NET_BUFFER_LIST *)v18->Scratch;
          v18->ChildRefCount = 0;
          if ( v26 && v10->Type == 5 && *(_QWORD *)&v10[194].Type )
            (*((void (__fastcall **)(void *, _NET_BUFFER_LIST *, _QWORD))v26 + 13))(v12, v18, 0LL);
          else
            v11(v12, v18, v27);
          v18 = v28;
        }
        while ( v28 );
      }
      v4 = v40;
      v14 = (_NET_BUFFER_LIST **)(v17 + 24);
      *(_BYTE *)(v17 + 40) = 0;
      v10 = *(_NDIS_OBJECT_HEADER **)&v10[122].Type;
      v11 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))&v16[116].Type;
      v12 = *(void **)&v16[118].Type;
    }
    v22 = *v14;
    if ( *v14 )
    {
      *v14 = 0LL;
      do
      {
        v23 = ndisVerifierNdisDispatch;
        v24 = (unsigned int)v22->ChildRefCount;
        v25 = (_NET_BUFFER_LIST *)v22->Scratch;
        v22->ChildRefCount = 0;
        if ( v23 && v10->Type == 5 && *(_QWORD *)&v10[194].Type )
          (*((void (__fastcall **)(void *, _NET_BUFFER_LIST *, _QWORD))v23 + 13))(v12, v22, 0LL);
        else
          v11(v12, v22, v24);
        v22 = v25;
      }
      while ( v25 );
    }
  }
  else
  {
    if ( a1->Header.Type != 5 )
    {
LABEL_10:
      v11(v12, a2, a3);
      goto LABEL_11;
    }
    v41 = Size;
    v29 = KeGetPcr()->Prcb.Number << 12;
    v30 = *(_QWORD *)(v29 + qword_14011D048);
    LowLimit = v30;
    v31 = *(_QWORD *)(v29 + qword_14011D040);
    HighLimit = v31;
    if ( v30 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v31 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v30 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v30 < v41 )
    {
      v35 = 24576;
      v48 = 0;
      Parameter[0] = v10;
      Parameter[1] = v12;
      Parameter[2] = v11;
      Parameter[3] = a2;
      Parameter[4] = 0LL;
      v47 = a3;
      if ( (unsigned int)Size > 0x6000 )
        v35 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             Parameter,
             v35,
             0,
             0LL) < 0 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(a2, a1->NblTracker, 0xA0uLL, 1u, 0);
        p_Lock = (_NDIS_PACKET **)&a1->Lock;
        v37 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->LockThread = KeGetCurrentThread();
        p_SentNblsToComplete = (unsigned __int16 *)&a1->StackExpansionFallback.PendingWork.SentNblsToComplete;
        SentNblsToComplete = (_SLIST_HEADER *)a1->StackExpansionFallback.PendingWork.SentNblsToComplete;
        if ( SentNblsToComplete )
        {
          do
          {
            p_SentNblsToComplete = (unsigned __int16 *)SentNblsToComplete;
            SentNblsToComplete = (_SLIST_HEADER *)SentNblsToComplete->Alignment;
          }
          while ( SentNblsToComplete );
          p_Lock = (_NDIS_PACKET **)&a1->Lock;
        }
        *(_QWORD *)p_SentNblsToComplete = a2;
        ndisQueueStackExpansionFallbackWorkItem(a1);
        a1->LockThread = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)p_Lock, v37);
      }
    }
    else
    {
      if ( !ndisVerifierNdisDispatch || v10->Type != 5 || !*(_QWORD *)&v10[194].Type )
        goto LABEL_10;
      (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 13))(v12, a2, 0LL);
    }
  }
LABEL_11:
  if ( (v6 & 0x100) != 0 )
  {
    v32 = Number;
    if ( Number == -1 )
      v32 = KeGetPcr()->Prcb.Number;
    v33 = (char *)v43 + ndisPcwPerCpuDataStride * v32 + ndisPcwOffsetToPerCpuData;
    v34 = __rdtsc();
    *((_QWORD *)v33 + 21) += (((unsigned __int64)HIDWORD(v34) << 32) | (unsigned int)v34) - *((_QWORD *)v33 + 46);
    *((_QWORD *)v33 + 46) = 0LL;
    if ( v51 != 2 )
      KeLowerIrql(v51);
  }
}
