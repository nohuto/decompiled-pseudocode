/*
 * XREFs of NdisReturnNetBufferLists @ 0x140017B90
 * Callers:
 *     <none>
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140019DC0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001A240 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     NdisFreeNetBufferListContext @ 0x140021D40 (NdisFreeNetBufferListContext.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A27F8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  __int64 v3; // rbx
  int v4; // r12d
  PNET_BUFFER_LIST v5; // rdi
  int v6; // esi
  KIRQL v7; // r9
  unsigned int Number; // r13d
  ULONG v9; // r15d
  unsigned int v11; // r8d
  _SLIST_HEADER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  PNET_BUFFER_LIST k; // rcx
  int v16; // eax
  __int64 v17; // r14
  void (__fastcall *v18)(__int64, __int64, __int64); // rsi
  __int64 v19; // rbp
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v26; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rbx
  struct _NET_BUFFER_LIST *v30; // r12
  _QWORD *p_Alignment; // r13
  struct _NET_BUFFER_LIST *v32; // r14
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v34; // rsi
  _MDL *CurrentMdl; // r15
  struct _VF_NDIS_DISPATCH_TABLE *v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdi
  __int64 v39; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v40; // rax
  __int64 v41; // r8
  __int64 v42; // rbx
  int v43; // eax
  struct _NET_BUFFER_LIST *j; // r14
  int v45; // ecx
  KIRQL v46; // al
  PNET_BUFFER_LIST *v47; // rdx
  KIRQL v48; // si
  _QWORD *m; // rax
  unsigned int v50; // eax
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  PNET_BUFFER_LIST Alignment; // r14
  _SLIST_HEADER *v54; // rax
  __int64 v55; // rdx
  char v56; // r12
  unsigned int Flags; // eax
  unsigned int v58; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // r15
  int v60; // [rsp+30h] [rbp-A8h]
  int v61; // [rsp+34h] [rbp-A4h]
  char v62; // [rsp+38h] [rbp-A0h]
  int v63; // [rsp+3Ch] [rbp-9Ch]
  __int64 v64; // [rsp+40h] [rbp-98h]
  __int64 v65; // [rsp+48h] [rbp-90h]
  _QWORD Parameter[5]; // [rsp+50h] [rbp-88h] BYREF
  ULONG v67; // [rsp+78h] [rbp-60h]
  int v68; // [rsp+7Ch] [rbp-5Ch]
  _QWORD v69[11]; // [rsp+80h] [rbp-58h] BYREF
  KIRQL v70; // [rsp+E0h] [rbp+8h]
  KIRQL v72; // [rsp+F8h] [rbp+20h]

  v3 = *((_QWORD *)NdisBindingHandle + 2);
  LOBYTE(v4) = 0;
  v5 = NetBufferLists;
  v64 = 0LL;
  v6 = 0;
  v62 = 0;
  v7 = 2;
  Number = -1;
  v9 = ReturnFlags;
  v72 = 2;
  v60 = -1;
  if ( *(_DWORD *)(v3 + 48) || *(_DWORD *)(v3 + 80) )
  {
    v6 = *(_DWORD *)(v3 + 48);
    v4 = *(_DWORD *)(v3 + 80);
    v62 = v4;
    v64 = *(_QWORD *)(v3 + 40);
    if ( !v64 )
      v64 = *(_QWORD *)(v3 + 40);
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyRxCompletion(NetBufferLists, ReturnFlags, (const struct _NDIS_OBJECT_HEADER *)NdisBindingHandle);
    Alignment = v5;
    if ( v5 )
    {
      v56 = byte_14011CEC0;
      do
      {
        Flags = Alignment->Flags;
        Alignment->Scratch = MmBadPointer;
        Alignment->ChildRefCount = -892679478;
        if ( v56 )
        {
          v56 = 0;
          v58 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v56 = 1;
          v58 = Flags | 0xF0000;
        }
        byte_14011CEC0 = v56;
        Alignment->Flags = v58;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v9 = ReturnFlags;
      LOBYTE(v4) = v62;
    }
    v7 = 2;
  }
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 )
  {
    switch ( *(_BYTE *)NdisBindingHandle )
    {
      case 5:
        LOBYTE(v43) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisBindingHandle, 0x400u) != 0;
        break;
      case 0x11:
        LOBYTE(v43) = (*((_DWORD *)NdisBindingHandle + 922) & 0x1000) != 0;
        break;
      case 0x12:
        v43 = *((_DWORD *)NdisBindingHandle + 56) >> 31;
        break;
      default:
        goto LABEL_5;
    }
    if ( (_BYTE)v43 )
    {
      for ( j = v5; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
      {
        if ( *(NDIS_HANDLE *)&j->Context->ContextData[j->Context->Offset] != NdisBindingHandle )
          NblContextVerifierBugcheckContextCorruption(j, v5, NdisBindingHandle);
        NdisFreeNetBufferListContext(j, 8u);
      }
      v7 = 2;
    }
  }
LABEL_5:
  if ( (v6 & 0x180028) != 0 || (v4 & 0x10) != 0 )
  {
    if ( (v9 & 1) == 0 )
    {
      v7 = KfRaiseIrql(2u);
      v72 = v7;
    }
    if ( (v6 & 8) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v60 = Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v64 + ndisPcwPerCpuDataStride * Number + 24);
    }
    if ( !v7 && (v6 & 0x80000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v60 = Number;
      }
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v64 + ndisPcwPerCpuDataStride * Number + 216);
    }
    if ( (v6 & 0x100020) != 0 )
    {
      v11 = 0;
      v12 = (_SLIST_HEADER *)v5;
      if ( v5 )
      {
        do
        {
          v12 = (_SLIST_HEADER *)v12->Alignment;
          ++v11;
        }
        while ( v12 );
      }
      if ( (v6 & 0x20) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v60 = Number;
        }
        v13 = v64 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
        *(_QWORD *)(v13 + 40) += v11;
      }
      if ( !v7 && (v6 & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v60 = Number;
        }
        v55 = v64 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
        *(_QWORD *)(v55 + 224) += v11;
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v60 = Number;
      }
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v64 + ndisPcwPerCpuDataStride * Number + 336) = __rdtsc();
    }
    else if ( v7 != 2 )
    {
      KeLowerIrql(v7);
    }
  }
  v70 = 2;
  v14 = 0xFFFFFFFFLL;
  v65 = 0LL;
  LOBYTE(v63) = 0;
  v61 = -1;
  if ( *(_DWORD *)(v3 + 48) || *(_DWORD *)(v3 + 80) )
  {
    v63 = *(_DWORD *)(v3 + 80);
    v65 = *(_QWORD *)(v3 + 40);
    if ( !v65 )
      v65 = *(_QWORD *)(v3 + 40);
  }
  for ( k = v5; k; k = (PNET_BUFFER_LIST)k->Link.Alignment )
    k->Flags = k->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011D800 )
  {
    v54 = (_SLIST_HEADER *)v5;
    if ( v5 )
    {
      if ( byte_14011D800 )
      {
        do
        {
          v54[15].Region = 0LL;
          v54 = (_SLIST_HEADER *)v54->Alignment;
        }
        while ( v54 );
      }
      else
      {
        do
        {
          v54[15].Region |= 0x8000000000000000uLL;
          v54 = (_SLIST_HEADER *)v54->Alignment;
        }
        while ( v54 );
      }
    }
  }
  if ( *(_DWORD *)(v3 + 3224) )
  {
    v30 = 0LL;
    p_Alignment = 0LL;
    if ( v5 )
    {
      do
      {
        v32 = (struct _NET_BUFFER_LIST *)v5->Link.Alignment;
        v5->Link.Alignment = 0LL;
        if ( v5->NdisPoolHandle == PoolHandle )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v3 + 3224));
          FirstNetBuffer = v5->FirstNetBuffer;
          v34 = (struct _NPAGED_LOOKASIDE_LIST *)v5->MiniportReserved[1];
          CurrentMdl = FirstNetBuffer->CurrentMdl;
          if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
            MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
          if ( v34 )
            ExFreeToNPagedLookasideList(v34, CurrentMdl);
          else
            ExFreePoolWithTag(CurrentMdl, 0);
          NdisFreeNetBufferList(v5);
        }
        else
        {
          if ( v30 )
            *p_Alignment = v5;
          else
            v30 = v5;
          p_Alignment = &v5->Link.Alignment;
        }
        v5 = v32;
      }
      while ( v32 );
      v9 = ReturnFlags;
    }
    v5 = v30;
    v14 = 0xFFFFFFFFLL;
  }
  if ( v5 )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        v5,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisBindingHandle + 73),
        *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v3 + 2536),
        NdisNblTrackerEvent_ProtocolReturned,
        v9 & 1);
    v16 = v9 & 1;
    if ( (v63 & 0x20) != 0 )
    {
      if ( (v9 & 1) == 0 )
        v70 = KfRaiseIrql(2u);
      LODWORD(v14) = KeGetPcr()->Prcb.Number;
      v61 = v14;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * (unsigned int)v14 + v65 + 344) = __rdtsc();
      v16 = v9 & 1;
    }
    v17 = *(_QWORD *)(v3 + 2544);
    v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 2640);
    v19 = *(_QWORD *)(v3 + 2528);
    if ( *(_BYTE *)v17 == 17 )
      goto LABEL_42;
    if ( v16 || KeGetCurrentIrql() == 2 )
    {
      LODWORD(v14) = KeGetPcr()->Prcb.Number;
      v22 = v69;
      v69[0] = v5;
      v69[2] = 0LL;
      v5->Scratch = 0LL;
      v69[1] = v5;
      v5->ChildRefCount = v9;
      while ( *(_BYTE *)v17 == 5 )
      {
        v23 = *v22;
        if ( !*v22 )
          break;
        v24 = v17;
        v25 = *(_QWORD *)(v17 + 424) + 96 * v14;
        if ( *(_BYTE *)(v25 + 88) )
        {
          *v22 = 0LL;
          do
          {
            v36 = ndisVerifierNdisDispatch;
            v37 = *(unsigned int *)(v23 + 132);
            v38 = *(_QWORD *)(v23 + 112);
            *(_DWORD *)(v23 + 132) = 0;
            if ( v36 && *(_BYTE *)v17 == 5 && *(_QWORD *)(v17 + 776) )
              (*((void (__fastcall **)(__int64, __int64, __int64))v36 + 17))(v19, v23, v37);
            else
              v18(v19, v23, v37);
            v23 = v38;
          }
          while ( v38 );
          break;
        }
        *(_BYTE *)(v25 + 88) = 1;
        v26 = *v22;
        *v22 = 0LL;
        if ( v26 )
        {
          do
          {
            v27 = ndisVerifierNdisDispatch;
            v28 = *(unsigned int *)(v26 + 132);
            v29 = *(_QWORD *)(v26 + 112);
            *(_DWORD *)(v26 + 132) = 0;
            if ( v27 && *(_BYTE *)v17 == 5 && *(_QWORD *)(v17 + 776) )
              (*((void (__fastcall **)(__int64, __int64, __int64))v27 + 17))(v19, v26, v28);
            else
              v18(v19, v26, v28);
            v26 = v29;
          }
          while ( v29 );
        }
        *(_BYTE *)(v25 + 88) = 0;
        v22 = (__int64 *)(v25 + 72);
        v17 = *(_QWORD *)(v17 + 552);
        v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v24 + 528);
        v19 = *(_QWORD *)(v24 + 536);
      }
      v39 = *v22;
      if ( *v22 )
      {
        *v22 = 0LL;
        do
        {
          v40 = ndisVerifierNdisDispatch;
          v41 = *(unsigned int *)(v39 + 132);
          v42 = *(_QWORD *)(v39 + 112);
          *(_DWORD *)(v39 + 132) = 0;
          if ( v40 && *(_BYTE *)v17 == 5 && *(_QWORD *)(v17 + 776) )
            (*((void (__fastcall **)(__int64, __int64, __int64))v40 + 17))(v19, v39, v41);
          else
            v18(v19, v39, v41);
          v39 = v42;
        }
        while ( v42 );
      }
      LODWORD(v14) = v61;
      goto LABEL_43;
    }
    if ( *(_BYTE *)v3 != 5 )
      goto LABEL_42;
    if ( !ndisIsLwfGuaranteedStackSpaceAvailable() )
    {
      v45 = 24576;
      Parameter[1] = v19;
      v68 = 0;
      Parameter[0] = v17;
      Parameter[2] = v18;
      Parameter[3] = v5;
      Parameter[4] = 0LL;
      v67 = v9;
      if ( (unsigned int)Size > 0x6000 )
        v45 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             Parameter,
             v45,
             0,
             0LL) < 0 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            v5,
            *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v3 + 648),
            (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
            (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)1,
            0);
        v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 144));
        v47 = (PNET_BUFFER_LIST *)(v3 + 280);
        *(_QWORD *)(v3 + 152) = KeGetCurrentThread();
        v48 = v46;
        for ( m = *(_QWORD **)(v3 + 280); m; m = (_QWORD *)*m )
          v47 = (PNET_BUFFER_LIST *)m;
        *v47 = v5;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)v3);
        *(_QWORD *)(v3 + 152) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 144), v48);
      }
      goto LABEL_43;
    }
    if ( ndisVerifierNdisDispatch && *(_BYTE *)v17 == 5 && *(_QWORD *)(v17 + 776) )
      (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 17))(v19, v5, v9);
    else
LABEL_42:
      v18(v19, (__int64)v5, v9);
LABEL_43:
    if ( (v63 & 0x20) != 0 )
    {
      if ( (_DWORD)v14 == -1 )
        LODWORD(v14) = KeGetPcr()->Prcb.Number;
      v20 = v65 + ndisPcwPerCpuDataStride * (unsigned int)v14 + ndisPcwOffsetToPerCpuData;
      v21 = __rdtsc();
      *(_QWORD *)(v20 + 144) += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - *(_QWORD *)(v20 + 344);
      *(_QWORD *)(v20 + 344) = 0LL;
      if ( v70 != 2 )
        KeLowerIrql(v70);
    }
  }
  if ( (v62 & 0x10) != 0 )
  {
    v50 = v60;
    if ( v60 == -1 )
      v50 = KeGetPcr()->Prcb.Number;
    v51 = v64 + ndisPcwPerCpuDataStride * v50 + ndisPcwOffsetToPerCpuData;
    v52 = __rdtsc();
    *(_QWORD *)(v51 + 136) += (((unsigned __int64)HIDWORD(v52) << 32) | (unsigned int)v52) - *(_QWORD *)(v51 + 336);
    *(_QWORD *)(v51 + 336) = 0LL;
    if ( v72 != 2 )
      KeLowerIrql(v72);
  }
}
