/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1400197A0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009A8D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400A2870 (-ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140019DC0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001A240 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     NdisFreeNetBufferListContext @ 0x140021D40 (NdisFreeNetBufferListContext.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A27F8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  const struct _NDIS_OBJECT_HEADER *v6; // rcx
  PNET_BUFFER_LIST Alignment; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  ULONG v11; // edi
  PNET_BUFFER_LIST *v12; // rcx
  _QWORD *v13; // rax
  void (__fastcall *v14)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64); // r14
  struct _NET_BUFFER_LIST *v15; // r15
  __int64 v16; // r13
  int v17; // eax
  PNET_BUFFER_LIST j; // rsi
  PNET_BUFFER_LIST *p_Parameter; // rbx
  PNET_BUFFER_LIST v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  PNET_BUFFER_LIST v23; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v24; // rax
  __int64 v25; // r8
  struct _NET_BUFFER_LIST *v26; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v27; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rdi
  PNET_BUFFER_LIST v30; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v31; // rax
  __int64 v32; // r8
  struct _NET_BUFFER_LIST *v33; // rbx
  int v34; // ecx
  KIRQL v35; // si
  PNET_BUFFER_LIST *v36; // rcx
  _QWORD *k; // rdx
  char v38; // r15
  unsigned int Flags; // eax
  unsigned int v40; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // r14
  PNET_BUFFER_LIST Parameter; // [rsp+30h] [rbp-58h] BYREF
  PNET_BUFFER_LIST v43; // [rsp+38h] [rbp-50h]
  void (__fastcall *v44)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64); // [rsp+40h] [rbp-48h]
  PNET_BUFFER_LIST v45; // [rsp+48h] [rbp-40h]
  __int64 v46; // [rsp+50h] [rbp-38h]
  ULONG v47; // [rsp+58h] [rbp-30h]
  int v48; // [rsp+5Ch] [rbp-2Ch]

  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 512) )
  {
    ndisNblVerifyRxCompletion(NetBufferLists, ReturnFlags, v6);
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      v38 = byte_14011CEC0;
      do
      {
        Alignment->Scratch = MmBadPointer;
        Flags = Alignment->Flags;
        Alignment->ChildRefCount = -892679478;
        if ( v38 )
        {
          v38 = 0;
          v40 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v38 = 1;
          v40 = Flags | 0xF0000;
        }
        byte_14011CEC0 = v38;
        Alignment->Flags = v40;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
  }
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 || !NdisFilterHandle )
    goto LABEL_4;
  switch ( *(_BYTE *)NdisFilterHandle )
  {
    case 5:
      LOBYTE(v17) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 1024);
LABEL_37:
      if ( (_BYTE)v17 )
      {
        for ( j = NetBufferLists; j; j = (PNET_BUFFER_LIST)j->Link.Alignment )
        {
          if ( *(NDIS_HANDLE *)&j->Context->ContextData[j->Context->Offset] != NdisFilterHandle )
            NblContextVerifierBugcheckContextCorruption(j, NetBufferLists, NdisFilterHandle);
          NdisFreeNetBufferListContext(j, 8u);
        }
      }
      break;
    case 0x11:
      LOBYTE(v17) = (*((_DWORD *)NdisFilterHandle + 922) & 0x1000) != 0;
      goto LABEL_37;
    case 0x12:
      v17 = *((_DWORD *)NdisFilterHandle + 56) >> 31;
      goto LABEL_37;
  }
LABEL_4:
  v8 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
  HIDWORD(v9) = 0;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011D800 )
  {
    v8 = (unsigned __int64)NetBufferLists;
    if ( NetBufferLists )
    {
      if ( byte_14011D800 )
      {
        do
        {
          *(_QWORD *)(v8 + 248) = 0LL;
          v8 = *(_QWORD *)v8;
        }
        while ( v8 );
      }
      else
      {
        do
        {
          *(_QWORD *)(v8 + 248) |= 0x8000000000000000uLL;
          v8 = *(_QWORD *)v8;
        }
        while ( v8 );
      }
    }
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferLists,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 81),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 68),
      NdisNblTrackerEvent_FilterReturned,
      ReturnFlags & 1);
  LODWORD(v8) = KeGetPcr()->Prcb.Number;
  v10 = *((_QWORD *)NdisFilterHandle + 53) + 96 * v8;
  if ( ((ReturnFlags & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v10 + 88) )
  {
    v11 = ReturnFlags | 1;
    if ( *(_QWORD *)(v10 + 72) )
    {
      v12 = *(PNET_BUFFER_LIST **)(v10 + 80);
      if ( v11 == *((_DWORD *)v12 + 33) && (v11 & 6) == 0 )
      {
        v13 = *v12;
        if ( *v12 )
        {
          do
          {
            v12 = (PNET_BUFFER_LIST *)v13;
            v13 = (_QWORD *)*v13;
          }
          while ( v13 );
        }
        *v12 = NetBufferLists;
        return;
      }
      v12[14] = NetBufferLists;
    }
    else
    {
      *(_QWORD *)(v10 + 72) = NetBufferLists;
    }
    *(_QWORD *)(v10 + 80) = NetBufferLists;
    NetBufferLists->Scratch = 0LL;
    NetBufferLists->ChildRefCount = v11;
    return;
  }
  v14 = (void (__fastcall *)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))*((_QWORD *)NdisFilterHandle + 66);
  v15 = (struct _NET_BUFFER_LIST *)*((_QWORD *)NdisFilterHandle + 67);
  v16 = *((_QWORD *)NdisFilterHandle + 69);
  if ( *(_BYTE *)v16 == 17 )
    goto LABEL_23;
  if ( (ReturnFlags & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v9) = KeGetPcr()->Prcb.Number;
    p_Parameter = &Parameter;
    Parameter = NetBufferLists;
    v44 = 0LL;
    NetBufferLists->Scratch = 0LL;
    v43 = NetBufferLists;
    NetBufferLists->ChildRefCount = ReturnFlags;
    while ( *(_BYTE *)v16 == 5 )
    {
      v20 = *p_Parameter;
      if ( !*p_Parameter )
        break;
      v21 = v16;
      v22 = *(_QWORD *)(v16 + 424) + 96 * v9;
      if ( *(_BYTE *)(v22 + 88) )
      {
        *p_Parameter = 0LL;
        do
        {
          v27 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v20->ChildRefCount;
          Scratch = (struct _NET_BUFFER_LIST *)v20->Scratch;
          v20->ChildRefCount = 0;
          if ( v27 && *(_BYTE *)v16 == 5 && *(_QWORD *)(v16 + 776) )
            (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))v27 + 17))(
              v15,
              v20,
              ChildRefCount);
          else
            v14(v15, v20, ChildRefCount);
          v20 = Scratch;
        }
        while ( Scratch );
        break;
      }
      *(_BYTE *)(v22 + 88) = 1;
      v23 = *p_Parameter;
      *p_Parameter = 0LL;
      if ( v23 )
      {
        do
        {
          v24 = ndisVerifierNdisDispatch;
          v25 = (unsigned int)v23->ChildRefCount;
          v26 = (struct _NET_BUFFER_LIST *)v23->Scratch;
          v23->ChildRefCount = 0;
          if ( v24 && *(_BYTE *)v16 == 5 && *(_QWORD *)(v16 + 776) )
            (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))v24 + 17))(v15, v23, v25);
          else
            v14(v15, v23, v25);
          v23 = v26;
        }
        while ( v26 );
      }
      *(_BYTE *)(v22 + 88) = 0;
      p_Parameter = (PNET_BUFFER_LIST *)(v22 + 72);
      v16 = *(_QWORD *)(v16 + 552);
      v14 = *(void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))(v21 + 528);
      v15 = *(struct _NET_BUFFER_LIST **)(v21 + 536);
    }
    v30 = *p_Parameter;
    if ( *p_Parameter )
    {
      *p_Parameter = 0LL;
      do
      {
        v31 = ndisVerifierNdisDispatch;
        v32 = (unsigned int)v30->ChildRefCount;
        v33 = (struct _NET_BUFFER_LIST *)v30->Scratch;
        v30->ChildRefCount = 0;
        if ( v31 && *(_BYTE *)v16 == 5 && *(_QWORD *)(v16 + 776) )
          (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, __int64))v31 + 17))(v15, v30, v32);
        else
          v14(v15, v30, v32);
        v30 = v33;
      }
      while ( v33 );
    }
    return;
  }
  if ( *(_BYTE *)NdisFilterHandle != 5 )
  {
LABEL_23:
    v14(v15, NetBufferLists, ReturnFlags);
    return;
  }
  if ( ndisIsLwfGuaranteedStackSpaceAvailable() )
  {
    if ( ndisVerifierNdisDispatch && *(_BYTE *)v16 == 5 && *(_QWORD *)(v16 + 776) )
    {
      (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 17))(
        v15,
        NetBufferLists,
        ReturnFlags);
      return;
    }
    goto LABEL_23;
  }
  v34 = 24576;
  v48 = 0;
  Parameter = (PNET_BUFFER_LIST)v16;
  v43 = v15;
  v44 = v14;
  v45 = NetBufferLists;
  v46 = 0LL;
  v47 = ReturnFlags;
  if ( (unsigned int)Size > 0x6000 )
    v34 = Size;
  if ( KeExpandKernelStackAndCalloutEx(
         ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
         &Parameter,
         v34,
         0,
         0LL) < 0 )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferLists,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 81),
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        (enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT)1,
        0);
    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v36 = (PNET_BUFFER_LIST *)((char *)NdisFilterHandle + 280);
    for ( k = (_QWORD *)*((_QWORD *)NdisFilterHandle + 35); k; k = (_QWORD *)*k )
      v36 = (PNET_BUFFER_LIST *)k;
    *v36 = NetBufferLists;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v35);
  }
}
