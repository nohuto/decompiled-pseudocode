/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x140018CE0
 * Callers:
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140022110 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009A8D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400A28C0 (-SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140020E10 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140021B80 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NdisFreeNetBufferListContext @ 0x140021D40 (NdisFreeNetBufferListContext.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140071670 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A27F8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 v3; // r12
  unsigned __int64 v7; // rax
  ULONG v8; // edi
  __int64 v9; // r14
  ULONG v10; // esi
  PNET_BUFFER_LIST *v11; // rcx
  _QWORD *v12; // rax
  struct _NDIS_FILTER_BLOCK *v13; // rbp
  void (__fastcall *NextSendNetBufferListsCompleteHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // r14
  void *NextSendNetBufferListsCompleteContext; // r15
  PNET_BUFFER_LIST j; // rdi
  PNET_BUFFER_LIST Alignment; // rdi
  char v18; // bp
  unsigned __int64 *p_LowLimit; // rbx
  unsigned __int64 v20; // rdx
  struct _NDIS_FILTER_BLOCK *v21; // rsi
  __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r12
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  int v37; // ecx
  unsigned int Flags; // eax
  unsigned int v39; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // r14
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 HighLimit[2]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD Parameter[5]; // [rsp+48h] [rbp-60h] BYREF
  ULONG v44; // [rsp+70h] [rbp-38h]
  int v45; // [rsp+74h] [rbp-34h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 0x200u) )
  {
    ndisNblVerifyTxCompletion(NetBufferList, SendCompleteFlags, (const struct _NDIS_OBJECT_HEADER *)NdisFilterHandle);
    Alignment = NetBufferList;
    if ( NetBufferList )
    {
      v18 = byte_14011CEC0;
      do
      {
        Alignment->Scratch = MmBadPointer;
        Flags = Alignment->Flags;
        Alignment->ChildRefCount = -892679478;
        if ( v18 )
        {
          v18 = 0;
          v39 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v18 = 1;
          v39 = Flags | 0xF0000;
        }
        byte_14011CEC0 = v18;
        Alignment->Flags = v39;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
  }
  v7 = ndisNblContextVerifierMode;
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && NdisFilterHandle )
  {
    switch ( *(_BYTE *)NdisFilterHandle )
    {
      case 5:
        LOBYTE(v7) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 0x400u) != 0;
        break;
      case 0x11:
        v7 = *((_DWORD *)NdisFilterHandle + 922) >> 12;
        LOBYTE(v7) = (*((_DWORD *)NdisFilterHandle + 922) & 0x1000) != 0;
        break;
      case 0x12:
        v7 = *((_DWORD *)NdisFilterHandle + 56) >> 31;
        break;
      default:
        goto LABEL_3;
    }
    if ( (_BYTE)v7 )
    {
      for ( j = NetBufferList; j; j = (PNET_BUFFER_LIST)j->Link.Alignment )
      {
        if ( *(NDIS_HANDLE *)&j->Context->ContextData[j->Context->Offset] != NdisFilterHandle )
          NblContextVerifierBugcheckContextCorruption(j, NetBufferList, NdisFilterHandle);
        NdisFreeNetBufferListContext(j, 8u);
      }
    }
  }
LABEL_3:
  v8 = SendCompleteFlags & 1;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferList,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 81),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 60),
      NdisNblTrackerEvent_FilterSendCompleted,
      SendCompleteFlags & 1);
  if ( byte_14011D800 )
  {
    v7 = (unsigned __int64)NetBufferList;
    if ( NetBufferList )
    {
      do
      {
        *(_QWORD *)(v7 + 248) = 0LL;
        v7 = *(_QWORD *)v7;
      }
      while ( v7 );
      v8 = SendCompleteFlags & 1;
    }
  }
  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  v9 = *((_QWORD *)NdisFilterHandle + 53) + 96 * v7;
  if ( (v8 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v9 + 40) )
  {
    v10 = SendCompleteFlags | 1;
    if ( *(_QWORD *)(v9 + 24) )
    {
      v11 = *(PNET_BUFFER_LIST **)(v9 + 32);
      if ( v10 == *((_DWORD *)v11 + 33) && (v10 & 6) == 0 )
      {
        v12 = *v11;
        if ( *v11 )
        {
          do
          {
            v11 = (PNET_BUFFER_LIST *)v12;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 );
        }
        *v11 = NetBufferList;
        return;
      }
      v11[14] = NetBufferList;
    }
    else
    {
      *(_QWORD *)(v9 + 24) = NetBufferList;
    }
    *(_QWORD *)(v9 + 32) = NetBufferList;
    NetBufferList->Scratch = 0LL;
    NetBufferList->ChildRefCount = v10;
    return;
  }
  v13 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)NdisFilterHandle + 61);
  NextSendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)NdisFilterHandle + 58);
  NextSendNetBufferListsCompleteContext = (void *)*((_QWORD *)NdisFilterHandle + 59);
  if ( v13->Header.Type == 17 )
  {
LABEL_19:
    NextSendNetBufferListsCompleteHandler(NextSendNetBufferListsCompleteContext, NetBufferList, SendCompleteFlags);
    return;
  }
  if ( v8 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v3) = KeGetPcr()->Prcb.Number;
    p_LowLimit = &LowLimit;
    HighLimit[1] = 0LL;
    LowLimit = (unsigned __int64)NetBufferList;
    HighLimit[0] = (unsigned __int64)NetBufferList;
    NetBufferList->Scratch = 0LL;
    NetBufferList->ChildRefCount = SendCompleteFlags;
    while ( v13->Header.Type == 5 )
    {
      v20 = *p_LowLimit;
      if ( !*p_LowLimit )
        break;
      v21 = v13;
      v22 = (__int64)v13->IterativeDataPathTracker[v3];
      if ( *(_BYTE *)(v22 + 40) )
      {
        *p_LowLimit = 0LL;
        do
        {
          v24 = *(_QWORD *)(v20 + 112);
          *(_DWORD *)(v20 + 132) = 0;
          if ( ndisIsFilterVerified(v13) )
            (*((void (__fastcall **)(void *, __int64, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))ndisVerifierNdisDispatch
             + 13))(
              NextSendNetBufferListsCompleteContext,
              v25,
              0LL,
              v13->VerifierContext,
              NextSendNetBufferListsCompleteHandler);
          else
            ((void (__fastcall *)(void *))NextSendNetBufferListsCompleteHandler)(NextSendNetBufferListsCompleteContext);
          v20 = v24;
        }
        while ( v24 );
        break;
      }
      *(_BYTE *)(v22 + 40) = 1;
      v23 = *p_LowLimit;
      *p_LowLimit = 0LL;
      if ( v23 )
      {
        do
        {
          v30 = ndisVerifierNdisDispatch;
          v31 = *(unsigned int *)(v23 + 132);
          v32 = *(_QWORD *)(v23 + 112);
          *(_DWORD *)(v23 + 132) = 0;
          if ( v30 && v13->Header.Type == 5 && v13->VerifierContext )
            (*((void (__fastcall **)(void *, unsigned __int64, _QWORD))v30 + 13))(
              NextSendNetBufferListsCompleteContext,
              v23,
              0LL);
          else
            NextSendNetBufferListsCompleteHandler(NextSendNetBufferListsCompleteContext, (_NET_BUFFER_LIST *)v23, v31);
          v23 = v32;
        }
        while ( v32 );
      }
      *(_BYTE *)(v22 + 40) = 0;
      p_LowLimit = (unsigned __int64 *)(v22 + 24);
      v13 = (struct _NDIS_FILTER_BLOCK *)v13->NextSendNetBufferListsCompleteObject;
      NextSendNetBufferListsCompleteHandler = v21->NextSendNetBufferListsCompleteHandler;
      NextSendNetBufferListsCompleteContext = v21->NextSendNetBufferListsCompleteContext;
    }
    v26 = *p_LowLimit;
    if ( *p_LowLimit )
    {
      *p_LowLimit = 0LL;
      do
      {
        v27 = ndisVerifierNdisDispatch;
        v28 = *(unsigned int *)(v26 + 132);
        v29 = *(_QWORD *)(v26 + 112);
        *(_DWORD *)(v26 + 132) = 0;
        if ( v27 && v13->Header.Type == 5 && v13->VerifierContext )
          (*((void (__fastcall **)(void *, unsigned __int64, _QWORD))v27 + 13))(
            NextSendNetBufferListsCompleteContext,
            v26,
            0LL);
        else
          NextSendNetBufferListsCompleteHandler(NextSendNetBufferListsCompleteContext, (_NET_BUFFER_LIST *)v26, v28);
        v26 = v29;
      }
      while ( v29 );
    }
  }
  else
  {
    if ( *(_BYTE *)NdisFilterHandle != 5 )
      goto LABEL_19;
    v33 = (unsigned int)Size;
    v34 = KeGetPcr()->Prcb.Number << 12;
    v35 = *(_QWORD *)(v34 + qword_14011D048);
    LowLimit = v35;
    v36 = *(_QWORD *)(v34 + qword_14011D040);
    HighLimit[0] = v36;
    if ( v35 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v36 )
    {
      IoGetStackLimits(&LowLimit, HighLimit);
      v35 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v35 >= v33 )
    {
      if ( ndisVerifierNdisDispatch && v13->Header.Type == 5 && v13->VerifierContext )
      {
        (*((void (__fastcall **)(void *, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 13))(
          NextSendNetBufferListsCompleteContext,
          NetBufferList,
          0LL);
        return;
      }
      goto LABEL_19;
    }
    v37 = 24576;
    v45 = 0;
    Parameter[0] = v13;
    Parameter[1] = NextSendNetBufferListsCompleteContext;
    Parameter[2] = NextSendNetBufferListsCompleteHandler;
    Parameter[3] = NetBufferList;
    Parameter[4] = 0LL;
    v44 = SendCompleteFlags;
    if ( (unsigned int)Size > 0x6000 )
      v37 = Size;
    if ( KeExpandKernelStackAndCalloutEx(
           ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
           Parameter,
           v37,
           0,
           0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, NetBufferList, 1u);
  }
}
