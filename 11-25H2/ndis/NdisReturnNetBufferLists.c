/*
 * XREFs of NdisReturnNetBufferLists @ 0x14001BA20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     NdisFreeNetBufferListContext @ 0x14001A140 (NdisFreeNetBufferListContext.c)
 *     NdisFreeNetBufferList @ 0x14001B730 (NdisFreeNetBufferList.c)
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

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r12
  int v6; // ebx
  unsigned int Number; // r13d
  char v8; // bp
  PNET_BUFFER_LIST v9; // r15
  KIRQL v10; // r10
  _SLIST_HEADER *v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r8
  PNET_BUFFER_LIST k; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v16; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // r13
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r9
  _SLIST_HEADER *v23; // r14
  unsigned __int64 Region; // rdi
  unsigned __int8 *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // r14
  void (__fastcall *v33)(__int64, __int64, __int64); // rdi
  __int64 v34; // rbp
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // rsi
  __int64 v42; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rbx
  _QWORD *p_Alignment; // r13
  struct _NET_BUFFER_LIST *v47; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v49; // rbx
  _MDL *CurrentMdl; // r14
  struct _VF_NDIS_DISPATCH_TABLE *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rsi
  __int64 v54; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v55; // rax
  __int64 v56; // r8
  __int64 v57; // rbx
  int v58; // eax
  struct _NET_BUFFER_LIST *j; // r14
  unsigned __int64 v60; // rax
  int v61; // ecx
  KIRQL v62; // al
  PNET_BUFFER_LIST *v63; // rdx
  KIRQL v64; // bl
  _QWORD *m; // rax
  unsigned int v66; // eax
  __int64 v67; // rcx
  PNET_BUFFER_LIST Alignment; // r14
  char v69; // r12
  _SLIST_HEADER *v70; // rax
  __int64 v71; // rdx
  unsigned int Flags; // eax
  unsigned int v73; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rbp
  __int64 v75; // [rsp+30h] [rbp-E8h]
  KIRQL v76; // [rsp+40h] [rbp-D8h]
  int v77; // [rsp+44h] [rbp-D4h]
  int v78; // [rsp+48h] [rbp-D0h]
  unsigned int v79; // [rsp+4Ch] [rbp-CCh]
  __int64 v80; // [rsp+50h] [rbp-C8h]
  unsigned int v81; // [rsp+58h] [rbp-C0h]
  __int64 v82; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v83; // [rsp+68h] [rbp-B0h]
  __int64 v84; // [rsp+70h] [rbp-A8h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v85; // [rsp+78h] [rbp-A0h]
  _QWORD Parameter[5]; // [rsp+88h] [rbp-90h] BYREF
  ULONG v87; // [rsp+B0h] [rbp-68h]
  int v88; // [rsp+B4h] [rbp-64h]
  _QWORD v89[4]; // [rsp+B8h] [rbp-60h] BYREF
  char v90; // [rsp+120h] [rbp+8h]
  PNET_BUFFER_LIST v91; // [rsp+128h] [rbp+10h]
  KIRQL v93; // [rsp+138h] [rbp+20h]

  v91 = NetBufferLists;
  v3 = *((_QWORD *)NdisBindingHandle + 2);
  v4 = 0LL;
  v6 = 0;
  v76 = 2;
  Number = -1;
  v82 = 0LL;
  v8 = ReturnFlags;
  v79 = 0;
  v9 = NetBufferLists;
  v77 = -1;
  if ( *(_DWORD *)(v3 + 48) || *(_DWORD *)(v3 + 80) )
  {
    v4 = *(unsigned int *)(v3 + 80);
    v6 = *(_DWORD *)(v3 + 48);
    v79 = *(_DWORD *)(v3 + 80);
    v82 = *(_QWORD *)(v3 + 40);
    if ( !v82 )
      v82 = *(_QWORD *)(v3 + 40);
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyRxCompletion(NetBufferLists, ReturnFlags, (const struct _NDIS_OBJECT_HEADER *)NdisBindingHandle);
    Alignment = v9;
    if ( v9 )
    {
      v69 = byte_140126F70;
      do
      {
        Flags = Alignment->Flags;
        Alignment->Scratch = MmBadPointer;
        Alignment->ChildRefCount = -892679478;
        if ( v69 )
        {
          v69 = 0;
          v73 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v69 = 1;
          v73 = Flags | 0xF0000;
        }
        byte_140126F70 = v69;
        Alignment->Flags = v73;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v8 = ReturnFlags;
      v4 = v79;
    }
  }
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
    goto LABEL_5;
  switch ( *(_BYTE *)NdisBindingHandle )
  {
    case 5:
      LOBYTE(v58) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisBindingHandle, 0x400u) != 0;
LABEL_118:
      if ( (_BYTE)v58 )
      {
        for ( j = v9; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
        {
          if ( *(NDIS_HANDLE *)&j->Context->ContextData[j->Context->Offset] != NdisBindingHandle )
            NblContextVerifierBugcheckContextCorruption(j, v9, NdisBindingHandle);
          NdisFreeNetBufferListContext(j, 8u);
        }
      }
      break;
    case 0x11:
      LOBYTE(v58) = (*((_DWORD *)NdisBindingHandle + 922) & 0x1000) != 0;
      goto LABEL_118;
    case 0x12:
      v58 = *((_DWORD *)NdisBindingHandle + 56) >> 31;
      goto LABEL_118;
  }
LABEL_5:
  if ( (v6 & 0x180028) != 0 || (v4 & 0x10) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      v10 = 2;
    }
    else
    {
      v10 = KfRaiseIrql(2u);
      v76 = v10;
    }
    if ( (v6 & 8) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v77 = Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v82 + ndisPcwPerCpuDataStride * Number + 24);
    }
    if ( !v10 && (v6 & 0x80000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v77 = Number;
      }
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v82 + ndisPcwPerCpuDataStride * Number + 216);
    }
    if ( (v6 & 0x100020) != 0 )
    {
      v11 = (_SLIST_HEADER *)v9;
      v12 = 0;
      if ( v9 )
      {
        do
        {
          v11 = (_SLIST_HEADER *)v11->Alignment;
          ++v12;
        }
        while ( v11 );
      }
      if ( (v6 & 0x20) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v77 = Number;
        }
        v13 = v82 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
        *(_QWORD *)(v13 + 40) += v12;
      }
      if ( !v10 && (v6 & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v77 = Number;
        }
        v71 = v82 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
        *(_QWORD *)(v71 + 224) += v12;
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v77 = Number;
      }
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v82 + ndisPcwPerCpuDataStride * Number + 336) = __rdtsc();
    }
    else if ( v10 != 2 )
    {
      KeLowerIrql(v10);
    }
  }
  v14 = 0LL;
  v93 = 2;
  v84 = 0LL;
  LOBYTE(v78) = 0;
  v81 = -1;
  if ( *(_DWORD *)(v3 + 48) || *(_DWORD *)(v3 + 80) )
  {
    v78 = *(_DWORD *)(v3 + 80);
    v84 = *(_QWORD *)(v3 + 40);
    if ( !v84 )
      v84 = *(_QWORD *)(v3 + 40);
  }
  for ( k = v9; k; k = (PNET_BUFFER_LIST)k->Link.Alignment )
    k->Flags = k->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1401278B0 )
  {
    v70 = (_SLIST_HEADER *)v9;
    if ( v9 )
    {
      if ( byte_1401278B0 )
      {
        do
        {
          v70[15].Region = 0LL;
          v70 = (_SLIST_HEADER *)v70->Alignment;
        }
        while ( v70 );
      }
      else
      {
        do
        {
          v70[15].Region |= 0x8000000000000000uLL;
          v70 = (_SLIST_HEADER *)v70->Alignment;
        }
        while ( v70 );
      }
    }
  }
  if ( *(_DWORD *)(v3 + 3224) )
  {
    v4 = 0LL;
    p_Alignment = 0LL;
    if ( v9 )
    {
      do
      {
        v47 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
        v9->Link.Alignment = 0LL;
        if ( v9->NdisPoolHandle == PoolHandle )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v3 + 3224));
          FirstNetBuffer = v9->FirstNetBuffer;
          v49 = (struct _NPAGED_LOOKASIDE_LIST *)v9->MiniportReserved[1];
          CurrentMdl = FirstNetBuffer->CurrentMdl;
          if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
            MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
          if ( v49 )
            ExFreeToNPagedLookasideList(v49, CurrentMdl);
          else
            ExFreePoolWithTag(CurrentMdl, 0);
          NdisFreeNetBufferList(v9);
          v14 = 0LL;
        }
        else
        {
          if ( v4 )
            *p_Alignment = v9;
          else
            v4 = (unsigned __int64)v9;
          p_Alignment = &v9->Link.Alignment;
        }
        v9 = v47;
      }
      while ( v47 );
      v8 = ReturnFlags;
    }
    v9 = (PNET_BUFFER_LIST)v4;
    v91 = (PNET_BUFFER_LIST)v4;
  }
  if ( !v9 )
    goto LABEL_72;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_59;
  v16 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 73);
  v17 = *(_QWORD *)(v3 + 2536);
  v18 = ndisNblTrackerEpoch;
  v4 = v8 & 1;
  v85 = v16;
  v19 = 0LL;
  v80 = 0LL;
  v20 = 0LL;
  v90 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(v9, v16, 0x87u, (void *)v17, v4);
    v14 = 0LL;
  }
  v21 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v17 & 1) != 0 )
  {
    v22 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v21 = (2 * v18) ^ (v17 ^ (2 * v18)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v22 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v23 = (_SLIST_HEADER *)v9;
  v83 = v22;
  do
  {
    Region = v23[22].Region;
    while ( v23[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_142;
      }
      else if ( !v23[7].Region )
      {
        v60 = (unsigned __int64)v85 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( ((unsigned __int8)v85 & 1) != 0 )
          v60 = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v23[7].Region = v60;
      }
      v25 = (unsigned __int8 *)v23[7].Region;
      if ( v25 )
      {
        LODWORD(v16) = *v25;
        if ( (unsigned __int8)((_BYTE)v16 - 17) <= 1u || (_BYTE)v16 == 5 )
        {
          if ( v25 != (unsigned __int8 *)v22 || v23[1].Region )
          {
            ++v19;
            v26 = v21;
          }
          else
          {
            ++v14;
            v26 = 24LL;
            v80 = v14;
            ++v19;
          }
          goto LABEL_47;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v75) = *v25;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)v23,
            v75);
LABEL_200:
          v14 = v80;
          v22 = v83;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v16,
          27,
          11,
          (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
          (char)v23);
        goto LABEL_200;
      }
LABEL_142:
      v26 = v21 | 4;
LABEL_47:
      v23[22].Region = v26;
      v23 = (_SLIST_HEADER *)v23->Alignment;
      if ( !v23 )
        break;
    }
    v27 = v20 - v19;
    if ( (Region & 1) == 0 || !v27 )
      goto LABEL_53;
    if ( (_BYTE)v4 || v90 )
    {
      v16 = (struct NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
      if ( !(_BYTE)v4 )
        goto LABEL_90;
      goto LABEL_52;
    }
    v90 = 1;
    if ( KeGetCurrentIrql() == 2 )
    {
      LOBYTE(v4) = 1;
      v16 = (struct NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_52:
      v28 = (_QWORD *)(*(_QWORD *)v16 + (KeGetPcr()->Prcb.Number << 12));
      *v28 += v27;
      goto LABEL_53;
    }
    LOBYTE(v4) = 0;
    v16 = (struct NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_90:
    _InterlockedAdd64((volatile signed __int64 *)v16 + 1, v27);
LABEL_53:
    v14 = v80;
    v20 = v19;
    v22 = v83;
  }
  while ( v23 );
  v29 = v19 - v80;
  v9 = v91;
  if ( (v21 & 1) == 0 || !v29 )
    goto LABEL_59;
  if ( (_BYTE)v4 || v90 )
  {
    v30 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    if ( !(_BYTE)v4 )
      goto LABEL_77;
    goto LABEL_58;
  }
  if ( KeGetCurrentIrql() == 2 )
  {
    v30 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_58:
    v31 = (_QWORD *)(*(_QWORD *)v30 + (KeGetPcr()->Prcb.Number << 12));
    *v31 += v29;
    goto LABEL_59;
  }
  v30 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_77:
  _InterlockedAdd64((volatile signed __int64 *)(v30 + 8), v29);
LABEL_59:
  if ( (v78 & 0x20) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
      v93 = KfRaiseIrql(2u);
    v81 = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v81 + v84 + 344) = __rdtsc();
  }
  v32 = *(_QWORD *)(v3 + 2544);
  v33 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 2640);
  v34 = *(_QWORD *)(v3 + 2528);
  if ( *(_BYTE *)v32 == 17 )
    goto LABEL_66;
  if ( (ReturnFlags & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v38 = v89;
    v9->ChildRefCount = ReturnFlags;
    v89[2] = 0LL;
    v9->Scratch = 0LL;
    v89[0] = v9;
    v89[1] = v9;
    while ( *(_BYTE *)v32 == 5 )
    {
      v39 = *v38;
      if ( !*v38 )
        break;
      v40 = v32;
      v41 = *(_QWORD *)(v32 + 424) + 96 * v4;
      if ( *(_BYTE *)(v41 + 88) )
      {
        *v38 = 0LL;
        do
        {
          v51 = ndisVerifierNdisDispatch;
          v52 = *(unsigned int *)(v39 + 132);
          v53 = *(_QWORD *)(v39 + 112);
          *(_DWORD *)(v39 + 132) = 0;
          if ( v51 && *(_BYTE *)v32 == 5 && *(_QWORD *)(v32 + 776) )
            (*((void (__fastcall **)(__int64, __int64, __int64))v51 + 17))(v34, v39, v52);
          else
            v33(v34, v39, v52);
          v39 = v53;
        }
        while ( v53 );
        break;
      }
      *(_BYTE *)(v41 + 88) = 1;
      v42 = *v38;
      *v38 = 0LL;
      if ( v42 )
      {
        do
        {
          v43 = ndisVerifierNdisDispatch;
          v44 = *(unsigned int *)(v42 + 132);
          v45 = *(_QWORD *)(v42 + 112);
          *(_DWORD *)(v42 + 132) = 0;
          if ( v43 && *(_BYTE *)v32 == 5 && *(_QWORD *)(v32 + 776) )
            (*((void (__fastcall **)(__int64, __int64, __int64))v43 + 17))(v34, v42, v44);
          else
            v33(v34, v42, v44);
          v42 = v45;
        }
        while ( v45 );
      }
      *(_BYTE *)(v41 + 88) = 0;
      v38 = (__int64 *)(v41 + 72);
      v32 = *(_QWORD *)(v32 + 552);
      v33 = *(void (__fastcall **)(__int64, __int64, __int64))(v40 + 528);
      v34 = *(_QWORD *)(v40 + 536);
    }
    v54 = *v38;
    if ( *v38 )
    {
      *v38 = 0LL;
      do
      {
        v55 = ndisVerifierNdisDispatch;
        v56 = *(unsigned int *)(v54 + 132);
        v57 = *(_QWORD *)(v54 + 112);
        *(_DWORD *)(v54 + 132) = 0;
        if ( v55 && *(_BYTE *)v32 == 5 && *(_QWORD *)(v32 + 776) )
          (*((void (__fastcall **)(__int64, __int64, __int64))v55 + 17))(v34, v54, v56);
        else
          v33(v34, v54, v56);
        v54 = v57;
      }
      while ( v57 );
    }
  }
  else
  {
    if ( *(_BYTE *)v3 != 5 )
      goto LABEL_66;
    if ( ndisIsLwfGuaranteedStackSpaceAvailable() )
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v32 == 5 && *(_QWORD *)(v32 + 776) )
      {
        (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 17))(
          v34,
          v9,
          ReturnFlags);
        goto LABEL_67;
      }
LABEL_66:
      v33(v34, (__int64)v9, ReturnFlags);
    }
    else
    {
      v61 = 24576;
      v88 = 0;
      Parameter[0] = v32;
      Parameter[1] = v34;
      Parameter[2] = v33;
      Parameter[3] = v9;
      Parameter[4] = 0LL;
      v87 = ReturnFlags;
      if ( (unsigned int)Size > 0x6000 )
        v61 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             Parameter,
             v61,
             0,
             0LL) < 0 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            v9,
            *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v3 + 648),
            (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
            (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)1,
            0);
        v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 144));
        v63 = (PNET_BUFFER_LIST *)(v3 + 280);
        *(_QWORD *)(v3 + 152) = KeGetCurrentThread();
        v64 = v62;
        for ( m = *(_QWORD **)(v3 + 280); m; m = (_QWORD *)*m )
          v63 = (PNET_BUFFER_LIST *)m;
        *v63 = v9;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)v3);
        *(_QWORD *)(v3 + 152) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 144), v64);
      }
    }
  }
LABEL_67:
  if ( (v78 & 0x20) != 0 )
  {
    v35 = v81;
    if ( v81 == -1 )
      v35 = KeGetPcr()->Prcb.Number;
    v36 = v84 + ndisPcwPerCpuDataStride * v35 + ndisPcwOffsetToPerCpuData;
    v37 = __rdtsc();
    *(_QWORD *)(v36 + 144) += (((unsigned __int64)HIDWORD(v37) << 32) | (unsigned int)v37) - *(_QWORD *)(v36 + 344);
    *(_QWORD *)(v36 + 344) = 0LL;
    if ( v93 != 2 )
      KeLowerIrql(v93);
  }
LABEL_72:
  if ( (v79 & 0x10) != 0 )
  {
    v66 = v77;
    if ( v77 == -1 )
      v66 = KeGetPcr()->Prcb.Number;
    v67 = v82 + ndisPcwPerCpuDataStride * v66 + ndisPcwOffsetToPerCpuData;
    *(_QWORD *)(v67 + 136) += __rdtsc() - *(_QWORD *)(v67 + 336);
    *(_QWORD *)(v67 + 336) = 0LL;
    if ( v76 != 2 )
      KeLowerIrql(v76);
  }
}
