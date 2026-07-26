/*
 * XREFs of ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170
 * Callers:
 *     NdisFIndicateReceiveNetBufferLists @ 0x140033A40 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x140035610 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140037240 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x140038FF0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003ABD0 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x140043410 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140043970 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400468C0 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140046C70 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     NdisFreeNetBufferList @ 0x14001B730 (NdisFreeNetBufferList.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001D250 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x140038EA0 (-ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisSortNetBufferLists(struct _NDIS_FILTER_BLOCK **a1, __int64 a2, struct _NDIS_FILTER_BLOCK **a3)
{
  char v4; // bp
  int v5; // r15d
  unsigned int v6; // r14d
  struct _NDIS_FILTER_BLOCK *v7; // rax
  unsigned int v8; // r13d
  struct _NET_BUFFER_LIST *v9; // rdi
  struct _NET_BUFFER_LIST *v10; // r12
  unsigned int i; // r8d
  __int64 v12; // rdx
  struct _NDIS_FILTER_BLOCK **v13; // rcx
  _DWORD *v14; // rcx
  struct _NET_BUFFER_LIST *v15; // rsi
  unsigned __int64 Alignment; // rax
  struct _NDIS_FILTER_BLOCK *v17; // rcx
  struct _NDIS_FILTER_BLOCK *v18; // r9
  unsigned __int16 v19; // r10
  struct _NDIS_FILTER_BLOCK *v20; // r14
  int v21; // ebp
  unsigned int v22; // ebp
  int v23; // r15d
  unsigned int Number; // r13d
  struct _NET_BUFFER_LIST *v25; // rcx
  struct _NDIS_FILTER_BLOCK *v26; // r15
  _QWORD *p_Alignment; // rcx
  struct _NET_BUFFER_LIST *v28; // rbx
  struct _NET_BUFFER_LIST *v29; // rdi
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v31; // rsi
  _MDL *CurrentMdl; // r14
  __int64 v33; // rax
  unsigned int v34; // ecx
  unsigned __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r9
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r10
  _SLIST_HEADER *v40; // r14
  unsigned __int64 Region; // rdi
  _BYTE *v42; // rcx
  __int64 v43; // rdx
  char v44; // r8
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  void (__fastcall *v47)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64); // rdi
  struct _NET_BUFFER_LIST *v48; // rsi
  __int64 v49; // r14
  char *v50; // rcx
  unsigned __int64 v51; // rax
  KIRQL v52; // al
  struct _NET_BUFFER_LIST **p_Parameter; // rbx
  struct _NET_BUFFER_LIST *v54; // rdx
  __int64 v55; // r15
  __int64 v56; // rbp
  struct _NET_BUFFER_LIST *v57; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v58; // rax
  __int64 v59; // r8
  struct _NET_BUFFER_LIST *v60; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v61; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rbp
  struct _NET_BUFFER_LIST *v64; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v65; // rax
  __int64 v66; // r8
  struct _NET_BUFFER_LIST *v67; // rbx
  Rtl::KString *value; // rax
  int v69; // ecx
  struct _NDIS_FILTER_BLOCK *v70; // rdi
  KIRQL v71; // al
  _NET_BUFFER_LIST **p_ReceivedNblsToComplete; // rdx
  KIRQL v73; // bl
  _SLIST_HEADER *j; // rax
  _SLIST_HEADER *v75; // rax
  unsigned __int64 v76; // rsi
  __int64 v77; // [rsp+30h] [rbp-B8h]
  unsigned __int16 v78[2]; // [rsp+40h] [rbp-A8h] BYREF
  int v79; // [rsp+44h] [rbp-A4h]
  struct _NDIS_FILTER_BLOCK *v80; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v81; // [rsp+50h] [rbp-98h]
  __int64 v82; // [rsp+58h] [rbp-90h]
  unsigned __int64 v83; // [rsp+60h] [rbp-88h]
  Rtl::KString *v84; // [rsp+68h] [rbp-80h]
  struct _NET_BUFFER_LIST *Parameter; // [rsp+70h] [rbp-78h] BYREF
  struct _NET_BUFFER_LIST *v86; // [rsp+78h] [rbp-70h]
  void (__fastcall *v87)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64); // [rsp+80h] [rbp-68h]
  struct _NET_BUFFER_LIST *v88; // [rsp+88h] [rbp-60h]
  __int64 v89; // [rsp+90h] [rbp-58h]
  int v90; // [rsp+98h] [rbp-50h]
  int v91; // [rsp+9Ch] [rbp-4Ch]
  struct _NET_BUFFER_LIST *v92; // [rsp+F0h] [rbp+8h]
  char v93; // [rsp+F0h] [rbp+8h]
  unsigned int v94; // [rsp+F0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v95; // [rsp+F8h] [rbp+10h]
  char v96; // [rsp+F8h] [rbp+10h]
  unsigned __int8 v97; // [rsp+100h] [rbp+18h] BYREF
  struct _NET_BUFFER_LIST **p_Next; // [rsp+108h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v80 = *a1;
  v6 = 0;
  p_Next = 0LL;
  v7 = a1[1];
  v8 = 0;
  v9 = (struct _NET_BUFFER_LIST *)a1[3];
  v10 = 0LL;
  *((_DWORD *)a1 + 172) = 0;
  if ( v7->PnPRef.RefCountTracker || ((_DWORD)a1[2] & 2) != 0 )
  {
    a1[8] = (struct _NDIS_FILTER_BLOCK *)v9;
    a1[9] = a1[4];
    a1[7] = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
    return;
  }
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  v78[0] = 0;
  while ( 1 )
  {
    v15 = v9;
    if ( !v9 )
      break;
    Alignment = v9->Link.Alignment;
    v9->Link.Alignment = 0LL;
    v17 = *a1;
    v95 = (struct _NET_BUFFER_LIST *)Alignment;
    v97 = 0;
    if ( ndisParseReceivedNBL((enum _NDIS_MEDIUM)v17->NextSendNetBufferListsCompleteHandler, v9, v78, &v97) )
    {
      v18 = a1[1];
      if ( v97 )
      {
        v19 = v78[0];
        if ( v5 == v78[0] )
        {
          i = v6;
          if ( v4 == 1 )
          {
LABEL_5:
            if ( LOWORD(a1[5 * v8 + 6]) == v78[0] )
            {
              LODWORD(v12) = v8;
            }
            else
            {
              for ( LODWORD(v12) = 1; ; LODWORD(v12) = v12 + 1 )
              {
                if ( (unsigned int)v12 > *((_DWORD *)a1 + 172) )
                {
                  v12 = (unsigned int)++*((_DWORD *)a1 + 172);
                  v8 = *((_DWORD *)a1 + 172);
                  v13 = &a1[5 * v12];
                  *((_WORD *)v13 + 24) = v19;
                  v13[7] = (struct _NDIS_FILTER_BLOCK *)(&v18->FilterInstanceName.__ptr_.__value_)[2 * i];
                  v13[8] = 0LL;
                  goto LABEL_9;
                }
                if ( LOWORD(a1[5 * (unsigned int)v12 + 6]) == v78[0] )
                  break;
              }
              v8 = v12;
            }
            goto LABEL_9;
          }
        }
        else
        {
          v5 = v78[0];
          for ( i = 0; i < LODWORD(v18->FilterModuleContext); ++i )
          {
            if ( v78[0] == *((_WORD *)&v18->Miniport + 8 * i) )
            {
              v6 = i;
              v4 = 1;
              goto LABEL_5;
            }
          }
          v4 = 0;
          v6 = 0;
        }
      }
      LODWORD(v12) = 0;
LABEL_9:
      a3 = &a1[5 * (unsigned int)v12];
      v14 = &a1[5 * (unsigned int)v12 + 10];
      if ( a3[8] )
      {
        *(_QWORD *)&a3[9]->Header.Type = v9;
        ++*v14;
        a3[9] = (struct _NDIS_FILTER_BLOCK *)v9;
        v9 = v95;
      }
      else
      {
        a3[8] = (struct _NDIS_FILTER_BLOCK *)v9;
        if ( ((_DWORD)a1[2] & 0x100) != 0 )
        {
          a3[9] = 0LL;
          v9->Link.Alignment = (unsigned __int64)v95;
          *v14 = *((_DWORD *)a1 + 11);
          break;
        }
        *v14 = 1;
        a3[9] = (struct _NDIS_FILTER_BLOCK *)v9;
        v9 = v95;
      }
    }
    else
    {
      if ( p_Next )
        *p_Next = v9;
      else
        v10 = v9;
      v9 = v95;
      p_Next = &v15->Next;
      ++v80[2].Characteristics.ReturnNetBufferListsHandler;
    }
  }
  if ( !v10 )
    return;
  v20 = v80;
  if ( byte_1401278B0 && ((__int64)v80[4].StackExpansionFallback.WorkItem.WorkerRoutine & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)v80 + 5816, (_DWORD)v10, (_DWORD)a3, 1, -1073676273, -536866810);
  v21 = *((_DWORD *)a1 + 4);
  if ( (v21 & 2) != 0 )
    return;
  LOBYTE(p_Next) = 2;
  v22 = v21 & 1;
  v84 = 0LL;
  LOBYTE(v23) = 0;
  v79 = 0;
  Number = -1;
  if ( LODWORD(v20->FilterFriendlyName) || *(_DWORD *)&v20->Ref.ReferenceCount )
  {
    value = v20->FilterInstanceName.__ptr_.__value_;
    v23 = *(_DWORD *)&v20->Ref.ReferenceCount;
    v79 = v23;
    v84 = value;
    if ( !value )
      v84 = v20->FilterInstanceName.__ptr_.__value_;
  }
  v25 = v10;
  do
  {
    v25->Flags = v25->Flags & 0xFFFFFFF4 | 8;
    v25 = (struct _NET_BUFFER_LIST *)v25->Link.Alignment;
  }
  while ( v25 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1401278B0 )
  {
    v75 = (_SLIST_HEADER *)v10;
    if ( byte_1401278B0 )
    {
      do
      {
        v75[15].Region = 0LL;
        v75 = (_SLIST_HEADER *)v75->Alignment;
      }
      while ( v75 );
    }
    else
    {
      do
      {
        v75[15].Region |= 0x8000000000000000uLL;
        v75 = (_SLIST_HEADER *)v75->Alignment;
      }
      while ( v75 );
    }
  }
  if ( LODWORD(v20[2].XmitLinkSpeedIndicateUp) )
  {
    v26 = v80;
    p_Alignment = 0LL;
    v92 = 0LL;
    v28 = 0LL;
    do
    {
      v29 = (struct _NET_BUFFER_LIST *)v10->Link.Alignment;
      v10->Link.Alignment = 0LL;
      if ( v10->NdisPoolHandle == PoolHandle )
      {
        _InterlockedDecrement((volatile signed __int32 *)&v26[2].XmitLinkSpeedIndicateUp);
        FirstNetBuffer = v10->FirstNetBuffer;
        v31 = (struct _NPAGED_LOOKASIDE_LIST *)v10->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v31 )
          ExFreeToNPagedLookasideList(v31, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v10);
        p_Alignment = &v92->Link.Alignment;
      }
      else
      {
        if ( v28 )
          *p_Alignment = v10;
        else
          v28 = v10;
        p_Alignment = &v10->Link.Alignment;
        v92 = v10;
      }
      v10 = v29;
    }
    while ( v29 );
    LOBYTE(v23) = v79;
    v10 = v28;
    if ( !v28 )
      return;
    v20 = v80;
  }
  v33 = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_69;
  v34 = ndisNblTrackerEpoch;
  v35 = *(_QWORD *)&v20[1].NicSwitchCurrentCapabilities.Flags;
  v36 = 0LL;
  LODWORD(v81) = ndisNblTrackerEpoch;
  v37 = 0LL;
  v83 = 0LL;
  v82 = 0LL;
  v93 = v22;
  v96 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal((unsigned __int64)v10, 0LL, 0x87u, (void *)v35, v22);
    v34 = v81;
    v37 = 0LL;
  }
  v38 = v35 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v35 & 1) != 0 )
  {
    v33 = 2LL * v34;
    v39 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v38 = v33 ^ (v35 ^ v33) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v39 = v35 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v81 = v39;
  v40 = (_SLIST_HEADER *)v10;
  while ( 2 )
  {
    Region = v40[22].Region;
    while ( 2 )
    {
      if ( v40[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) == 0 )
            goto LABEL_54;
LABEL_145:
          v33 = v38 | 4;
LABEL_58:
          v40[22].Region = v33;
          v40 = (_SLIST_HEADER *)v40->Alignment;
          if ( !v40 )
            break;
          continue;
        }
        if ( !v40[7].Region )
          v40[7].Region = 0LL;
LABEL_54:
        v42 = (_BYTE *)v40[7].Region;
        if ( v42 )
        {
          if ( (unsigned __int8)(*v42 - 17) <= 1u || *v42 == 5 )
          {
            if ( v42 != (_BYTE *)v39 || v40[1].Region )
            {
              ++v36;
              v33 = v38;
            }
            else
            {
              ++v37;
              v33 = 24LL;
              v82 = v37;
              ++v36;
            }
            goto LABEL_58;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_145;
          LODWORD(v77) = (unsigned __int8)*v42;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)v40,
            v77);
        }
        else
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_145;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3,
            27,
            11,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)v40);
        }
        v37 = v82;
        v39 = v81;
        goto LABEL_145;
      }
      break;
    }
    v43 = v83 - v36;
    v44 = v93;
    v83 -= v36;
    if ( (Region & 1) != 0 && v43 )
    {
      if ( v93 || v96 )
      {
        v33 = 16 * ((Region >> 1) & 1);
        v45 = v33 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( v93 )
          goto LABEL_123;
LABEL_65:
        _InterlockedAdd64((volatile signed __int64 *)(v45 + 8), v83);
      }
      else
      {
        v96 = 1;
        if ( KeGetCurrentIrql() != 2 )
        {
          v44 = 0;
          v33 = 16 * ((Region >> 1) & 1);
          v93 = 0;
          v45 = v33 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_65;
        }
        v44 = 1;
        v93 = 1;
        v45 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_123:
        v33 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*(_QWORD *)v45 + (unsigned int)v33) += v83;
      }
    }
    v37 = v82;
    v39 = v81;
    v83 = v36;
    if ( v40 )
      continue;
    break;
  }
  LOBYTE(v23) = v79;
  v76 = v36 - v82;
  v20 = v80;
  if ( (v38 & 1) == 0 || !v76 )
    goto LABEL_69;
  if ( v44 || v96 )
  {
    v33 = 16 * ((v38 >> 1) & 1);
    v46 = v33 + (v38 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    if ( !v44 )
      goto LABEL_131;
    goto LABEL_68;
  }
  if ( KeGetCurrentIrql() == 2 )
  {
    v46 = 16 * ((v38 >> 1) & 1) + (v38 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_68:
    v33 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(*(_QWORD *)v46 + (unsigned int)v33) += v76;
    goto LABEL_69;
  }
  v33 = 16 * ((v38 >> 1) & 1);
  v46 = v33 + (v38 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_131:
  _InterlockedAdd64((volatile signed __int64 *)(v46 + 8), v76);
LABEL_69:
  if ( (v23 & 0x20) != 0 )
  {
    if ( !v22 )
      LOBYTE(p_Next) = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    v33 = __rdtsc();
    *(wchar_t **)((char *)&v84[21].Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData) = (wchar_t *)v33;
  }
  v47 = *(void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))&v20[1].NicSwitchCurrentCapabilities.NdisReserved16;
  v48 = *(struct _NET_BUFFER_LIST **)&v20[1].NicSwitchHwCapabilities.MaxNumQueuePairsForDefaultVPort;
  v49 = *(_QWORD *)&v20[1].NicSwitchCurrentCapabilities.NumTotalMacAddresses;
  if ( *(_BYTE *)v49 == 17 )
    goto LABEL_76;
  if ( v22 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v33) = KeGetPcr()->Prcb.Number;
    p_Parameter = &Parameter;
    v94 = v33;
    v87 = 0LL;
    v10->Scratch = 0LL;
    Parameter = v10;
    v86 = v10;
    v10->ChildRefCount = v22;
    while ( *(_BYTE *)v49 == 5 )
    {
      v54 = *p_Parameter;
      if ( !*p_Parameter )
        break;
      v55 = v49;
      v56 = *(_QWORD *)(v49 + 424) + 96 * v33;
      if ( *(_BYTE *)(v56 + 88) )
      {
        *p_Parameter = 0LL;
        do
        {
          v61 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v54->ChildRefCount;
          Scratch = (struct _NET_BUFFER_LIST *)v54->Scratch;
          v54->ChildRefCount = 0;
          if ( v61 && *(_BYTE *)v49 == 5 && *(_QWORD *)(v49 + 776) )
            (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))v61 + 17))(
              v48,
              v54,
              ChildRefCount);
          else
            v47(v48, v54, ChildRefCount);
          v54 = Scratch;
        }
        while ( Scratch );
        break;
      }
      *(_BYTE *)(v56 + 88) = 1;
      v57 = *p_Parameter;
      *p_Parameter = 0LL;
      if ( v57 )
      {
        do
        {
          v58 = ndisVerifierNdisDispatch;
          v59 = (unsigned int)v57->ChildRefCount;
          v60 = (struct _NET_BUFFER_LIST *)v57->Scratch;
          v57->ChildRefCount = 0;
          if ( v58 && *(_BYTE *)v49 == 5 && *(_QWORD *)(v49 + 776) )
            (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))v58 + 17))(
              v48,
              v57,
              v59);
          else
            v47(v48, v57, v59);
          v57 = v60;
        }
        while ( v60 );
      }
      v33 = v94;
      p_Parameter = (struct _NET_BUFFER_LIST **)(v56 + 72);
      *(_BYTE *)(v56 + 88) = 0;
      v49 = *(_QWORD *)(v49 + 552);
      v47 = *(void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))(v55 + 528);
      v48 = *(struct _NET_BUFFER_LIST **)(v55 + 536);
    }
    v64 = *p_Parameter;
    if ( *p_Parameter )
    {
      *p_Parameter = 0LL;
      do
      {
        v65 = ndisVerifierNdisDispatch;
        v66 = (unsigned int)v64->ChildRefCount;
        v67 = (struct _NET_BUFFER_LIST *)v64->Scratch;
        v64->ChildRefCount = 0;
        if ( v65 && *(_BYTE *)v49 == 5 && *(_QWORD *)(v49 + 776) )
          (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))v65 + 17))(
            v48,
            v64,
            v66);
        else
          v47(v48, v64, v66);
        v64 = v67;
      }
      while ( v67 );
    }
    LOBYTE(v23) = v79;
  }
  else
  {
    if ( v80->Header.Type != 5 )
      goto LABEL_76;
    if ( ndisIsLwfGuaranteedStackSpaceAvailable() )
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v49 == 5 && *(_QWORD *)(v49 + 776) )
      {
        (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch
         + 17))(
          v48,
          v10,
          0LL);
        goto LABEL_77;
      }
LABEL_76:
      v47(v48, v10, v22);
    }
    else
    {
      v69 = 24576;
      v86 = v48;
      v91 = 0;
      Parameter = (struct _NET_BUFFER_LIST *)v49;
      v87 = v47;
      v88 = v10;
      v89 = 0LL;
      v90 = 0;
      if ( (unsigned int)Size > 0x6000 )
        v69 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             &Parameter,
             v69,
             0,
             0LL) < 0 )
      {
        v70 = v80;
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(v10, v80->NblTracker, 0xA0uLL, 1u, 0);
        v71 = KeAcquireSpinLockRaiseToDpc(&v70->Lock);
        p_ReceivedNblsToComplete = &v70->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
        v70->LockThread = KeGetCurrentThread();
        v73 = v71;
        for ( j = (_SLIST_HEADER *)v70->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
              j;
              j = (_SLIST_HEADER *)j->Alignment )
        {
          p_ReceivedNblsToComplete = (_NET_BUFFER_LIST **)j;
        }
        *p_ReceivedNblsToComplete = v10;
        ndisQueueStackExpansionFallbackWorkItem(v70);
        v70->LockThread = 0LL;
        KeReleaseSpinLock(&v70->Lock, v73);
      }
    }
  }
LABEL_77:
  if ( (v23 & 0x20) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v50 = (char *)v84 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
    v51 = __rdtsc();
    *((_QWORD *)v50 + 18) += (((unsigned __int64)HIDWORD(v51) << 32) | (unsigned int)v51) - *((_QWORD *)v50 + 43);
    v52 = (unsigned __int8)p_Next;
    *((_QWORD *)v50 + 43) = 0LL;
    if ( v52 != 2 )
      KeLowerIrql(v52);
  }
}
