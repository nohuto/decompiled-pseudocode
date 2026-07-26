/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1400207A0
 * Callers:
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14001F9A0 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisFSendNetBufferLists @ 0x14001FCC0 (NdisFSendNetBufferLists.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140021110 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140044230 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1400A3AA0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400AAA70 (-SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     NdisFreeNetBufferListContext @ 0x14001A140 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14003C9A0 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140047CF0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x14008DD70 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400AA9A8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 v3; // r13
  PNET_BUFFER_LIST v4; // r15
  ULONG v5; // r12d
  NDIS_HANDLE v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r15
  char v13; // bp
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r9
  PNET_BUFFER_LIST v16; // r15
  unsigned __int64 v17; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  int v23; // r12d
  PNET_BUFFER_LIST *v24; // rcx
  _QWORD *v25; // rax
  struct _NDIS_FILTER_BLOCK *v26; // rdi
  void (__fastcall *NextSendNetBufferListsCompleteHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rsi
  void *NextSendNetBufferListsCompleteContext; // rbp
  int v29; // eax
  struct _NET_BUFFER_LIST *j; // rbx
  unsigned __int64 v31; // rax
  PNET_BUFFER_LIST Alignment; // rbx
  char v33; // si
  unsigned __int64 *p_LowLimit; // rbx
  unsigned __int64 v35; // rdx
  struct _NDIS_FILTER_BLOCK *v36; // r15
  __int64 v37; // r14
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r14
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r15
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r8
  int v52; // ecx
  unsigned int Flags; // eax
  unsigned int v54; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rdi
  __int64 v56; // [rsp+30h] [rbp-B8h]
  __int64 v57; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+50h] [rbp-98h]
  unsigned __int64 LowLimit; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 HighLimit[2]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD Parameter[5]; // [rsp+70h] [rbp-78h] BYREF
  ULONG v63; // [rsp+98h] [rbp-50h]
  int v64; // [rsp+9Ch] [rbp-4Ch]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF
  char v69; // [rsp+108h] [rbp+20h]

  v4 = NetBufferList;
  v5 = SendCompleteFlags;
  v6 = NdisFilterHandle;
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 512) )
  {
    ndisNblVerifyTxCompletion(v4, v5, (const struct _NDIS_OBJECT_HEADER *)v6);
    Alignment = v4;
    if ( v4 )
    {
      v33 = byte_140126F70;
      do
      {
        Alignment->Scratch = MmBadPointer;
        Flags = Alignment->Flags;
        Alignment->ChildRefCount = -892679478;
        if ( v33 )
        {
          v33 = 0;
          v54 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v33 = 1;
          v54 = Flags | 0xF0000;
        }
        byte_140126F70 = v33;
        Alignment->Flags = v54;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
  }
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && v6 )
  {
    switch ( *(_BYTE *)v6 )
    {
      case 5:
        LOBYTE(v29) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v6, 1024);
        break;
      case 0x11:
        LOBYTE(v29) = (*((_DWORD *)v6 + 922) & 0x1000) != 0;
        break;
      case 0x12:
        v29 = *((_DWORD *)v6 + 56) >> 31;
        break;
      default:
        goto LABEL_3;
    }
    if ( (_BYTE)v29 )
    {
      for ( j = v4; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
      {
        if ( *(NDIS_HANDLE *)&j->Context->ContextData[j->Context->Offset] != v6 )
          NblContextVerifierBugcheckContextCorruption(j, v4, v6);
        NdisFreeNetBufferListContext(j, 8u);
      }
    }
  }
LABEL_3:
  v7 = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v8 = *((_QWORD *)v6 + 81);
    v9 = 0LL;
    v10 = *((_QWORD *)v6 + 60);
    v11 = 0LL;
    v12 = ndisNblTrackerEpoch;
    v13 = v5 & 1;
    v59 = v8;
    v3 = 0LL;
    v57 = 0LL;
    v69 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal((unsigned __int64)NetBufferList, v8, 0x94u, (void *)v10, v5 & 1);
      v11 = 0LL;
    }
    v14 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v10 & 1) != 0 )
    {
      v15 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v14 = (2 * v12) ^ (v10 ^ (2 * v12)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v15 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    HIDWORD(v7) = HIDWORD(NetBufferList);
    v58 = v15;
    v16 = NetBufferList;
    if ( NetBufferList )
    {
      while ( 1 )
      {
        v17 = (unsigned __int64)v16->NetBufferListInfo[27];
        while ( v16->NetBufferListInfo[27] == (void *)v17 )
        {
          if ( v17 )
          {
            if ( (v17 & 4) != 0 )
              goto LABEL_81;
          }
          else if ( !v16->SourceHandle )
          {
            v31 = v59 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (v59 & 1) != 0 )
              v31 = *(_QWORD *)((v59 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            v16->SourceHandle = (void *)v31;
          }
          SourceHandle = (unsigned __int8 *)v16->SourceHandle;
          if ( SourceHandle )
          {
            LODWORD(v8) = *SourceHandle;
            if ( (unsigned __int8)(v8 - 17) <= 1u || (_BYTE)v8 == 5 )
            {
              if ( SourceHandle != (unsigned __int8 *)v15 || v16->ParentNetBufferList )
              {
                ++v9;
                v7 = v14;
              }
              else
              {
                ++v11;
                v7 = 24LL;
                v57 = v11;
                ++v9;
              }
              goto LABEL_17;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v56) = *SourceHandle;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)v16,
                v56);
LABEL_139:
              v11 = v57;
              v15 = v58;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v8,
              27,
              11,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)v16);
            goto LABEL_139;
          }
LABEL_81:
          v7 = v14 | 4;
LABEL_17:
          v16->NetBufferListInfo[27] = (void *)v7;
          v16 = (PNET_BUFFER_LIST)v16->Link.Alignment;
          if ( !v16 )
            break;
        }
        v19 = v3 - v9;
        if ( (v17 & 1) == 0 || !v19 )
          goto LABEL_23;
        if ( v13 || v69 )
        {
          v7 = 16 * ((v17 >> 1) & 1);
          v8 = v7 + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v13 )
            goto LABEL_48;
          goto LABEL_22;
        }
        v69 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          v13 = 1;
          v8 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_22:
          v7 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(*(_QWORD *)v8 + (unsigned int)v7) += v19;
          goto LABEL_23;
        }
        v13 = 0;
        v7 = 16 * ((v17 >> 1) & 1);
        v8 = v7 + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_48:
        _InterlockedAdd64((volatile signed __int64 *)(v8 + 8), v19);
LABEL_23:
        v11 = v57;
        v3 = v9;
        v15 = v58;
        if ( !v16 )
        {
          v6 = NdisFilterHandle;
          v5 = SendCompleteFlags;
          break;
        }
      }
    }
    v20 = v9 - v11;
    if ( (v14 & 1) == 0 || !v20 )
      goto LABEL_30;
    if ( v13 || v69 )
    {
      v7 = 16 * ((v14 >> 1) & 1);
      v21 = v7 + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v13 )
      {
LABEL_44:
        _InterlockedAdd64((volatile signed __int64 *)(v21 + 8), v20);
        goto LABEL_30;
      }
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v7 = 16 * ((v14 >> 1) & 1);
        v21 = v7 + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_44;
      }
      v21 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v7 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(*(_QWORD *)v21 + (unsigned int)v7) += v20;
LABEL_30:
    v4 = NetBufferList;
  }
  if ( byte_1401278B0 )
  {
    v7 = (__int64)v4;
    if ( v4 )
    {
      do
      {
        *(_QWORD *)(v7 + 248) = 0LL;
        v7 = *(_QWORD *)v7;
      }
      while ( v7 );
    }
  }
  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  v22 = *((_QWORD *)v6 + 53) + 96 * v7;
  if ( ((v5 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v22 + 40) )
  {
    v23 = v5 | 1;
    if ( *(_QWORD *)(v22 + 24) )
    {
      v24 = *(PNET_BUFFER_LIST **)(v22 + 32);
      if ( v23 == *((_DWORD *)v24 + 33) && (v23 & 6) == 0 )
      {
        v25 = *v24;
        if ( *v24 )
        {
          do
          {
            v24 = (PNET_BUFFER_LIST *)v25;
            v25 = (_QWORD *)*v25;
          }
          while ( v25 );
        }
        *v24 = v4;
        return;
      }
      v24[14] = v4;
    }
    else
    {
      *(_QWORD *)(v22 + 24) = v4;
    }
    *(_QWORD *)(v22 + 32) = v4;
    v4->Scratch = 0LL;
    v4->ChildRefCount = v23;
    return;
  }
  v26 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v6 + 61);
  NextSendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v6 + 58);
  NextSendNetBufferListsCompleteContext = (void *)*((_QWORD *)v6 + 59);
  if ( v26->Header.Type == 17 )
  {
LABEL_54:
    NextSendNetBufferListsCompleteHandler(NextSendNetBufferListsCompleteContext, v4, v5);
    return;
  }
  if ( (v5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v3) = KeGetPcr()->Prcb.Number;
    p_LowLimit = &LowLimit;
    HighLimit[1] = 0LL;
    LowLimit = (unsigned __int64)v4;
    HighLimit[0] = (unsigned __int64)v4;
    v4->Scratch = 0LL;
    v4->ChildRefCount = v5;
    while ( v26->Header.Type == 5 )
    {
      v35 = *p_LowLimit;
      if ( !*p_LowLimit )
        break;
      v36 = v26;
      v37 = (__int64)v26->IterativeDataPathTracker[v3];
      if ( *(_BYTE *)(v37 + 40) )
      {
        *p_LowLimit = 0LL;
        do
        {
          v39 = *(_QWORD *)(v35 + 112);
          *(_DWORD *)(v35 + 132) = 0;
          if ( ndisIsFilterVerified(v26) )
            (*((void (__fastcall **)(void *, __int64, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))ndisVerifierNdisDispatch
             + 13))(
              NextSendNetBufferListsCompleteContext,
              v40,
              0LL,
              v26->VerifierContext,
              NextSendNetBufferListsCompleteHandler);
          else
            ((void (__fastcall *)(void *))NextSendNetBufferListsCompleteHandler)(NextSendNetBufferListsCompleteContext);
          v35 = v39;
        }
        while ( v39 );
        break;
      }
      *(_BYTE *)(v37 + 40) = 1;
      v38 = *p_LowLimit;
      *p_LowLimit = 0LL;
      if ( v38 )
      {
        do
        {
          v45 = ndisVerifierNdisDispatch;
          v46 = *(unsigned int *)(v38 + 132);
          v47 = *(_QWORD *)(v38 + 112);
          *(_DWORD *)(v38 + 132) = 0;
          if ( v45 && v26->Header.Type == 5 && v26->VerifierContext )
            (*((void (__fastcall **)(void *, unsigned __int64, _QWORD))v45 + 13))(
              NextSendNetBufferListsCompleteContext,
              v38,
              0LL);
          else
            NextSendNetBufferListsCompleteHandler(NextSendNetBufferListsCompleteContext, (_NET_BUFFER_LIST *)v38, v46);
          v38 = v47;
        }
        while ( v47 );
      }
      *(_BYTE *)(v37 + 40) = 0;
      p_LowLimit = (unsigned __int64 *)(v37 + 24);
      v26 = (struct _NDIS_FILTER_BLOCK *)v26->NextSendNetBufferListsCompleteObject;
      NextSendNetBufferListsCompleteHandler = v36->NextSendNetBufferListsCompleteHandler;
      NextSendNetBufferListsCompleteContext = v36->NextSendNetBufferListsCompleteContext;
    }
    v41 = *p_LowLimit;
    if ( *p_LowLimit )
    {
      *p_LowLimit = 0LL;
      do
      {
        v42 = ndisVerifierNdisDispatch;
        v43 = *(unsigned int *)(v41 + 132);
        v44 = *(_QWORD *)(v41 + 112);
        *(_DWORD *)(v41 + 132) = 0;
        if ( v42 && v26->Header.Type == 5 && v26->VerifierContext )
          (*((void (__fastcall **)(void *, unsigned __int64, _QWORD))v42 + 13))(
            NextSendNetBufferListsCompleteContext,
            v41,
            0LL);
        else
          NextSendNetBufferListsCompleteHandler(NextSendNetBufferListsCompleteContext, (_NET_BUFFER_LIST *)v41, v43);
        v41 = v44;
      }
      while ( v44 );
    }
  }
  else
  {
    if ( *(_BYTE *)v6 != 5 )
      goto LABEL_54;
    v48 = (unsigned int)Size;
    v49 = KeGetPcr()->Prcb.Number << 12;
    v50 = *(_QWORD *)(v49 + qword_1401270F8);
    LowLimit = v50;
    v51 = *(_QWORD *)(v49 + qword_1401270F0);
    HighLimit[0] = v51;
    if ( v50 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v51 )
    {
      IoGetStackLimits(&LowLimit, HighLimit);
      v50 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v50 < v48 )
    {
      v52 = 24576;
      v64 = 0;
      Parameter[0] = v26;
      Parameter[1] = NextSendNetBufferListsCompleteContext;
      Parameter[2] = NextSendNetBufferListsCompleteHandler;
      Parameter[3] = NetBufferList;
      Parameter[4] = 0LL;
      v63 = v5;
      if ( (unsigned int)Size > 0x6000 )
        v52 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             Parameter,
             v52,
             0,
             0LL) < 0 )
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v6, NetBufferList, 1u);
    }
    else if ( ndisVerifierNdisDispatch && v26->Header.Type == 5 && v26->VerifierContext )
    {
      (*((void (__fastcall **)(void *, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 13))(
        NextSendNetBufferListsCompleteContext,
        NetBufferList,
        0LL);
    }
    else
    {
      NextSendNetBufferListsCompleteHandler(NextSendNetBufferListsCompleteContext, NetBufferList, v5);
    }
  }
}
