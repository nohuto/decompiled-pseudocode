/*
 * XREFs of ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1400427C0
 * Callers:
 *     NdisFSendNetBufferLists @ 0x1400192A0 (NdisFSendNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x140027C10 (NdisSendNetBufferLists.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400425D0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14007AA00 (-ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x14007D980 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeNextSendCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_OBJECT_HEADER *a4,
        void *a5,
        void (*a6)(void *, struct _NET_BUFFER_LIST *, unsigned int))
{
  __int64 v6; // r13
  struct _NDIS_OBJECT_HEADER *v7; // rdi
  void (*v11)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r15
  unsigned __int64 *p_LowLimit; // rsi
  void *v13; // r12
  unsigned __int64 v14; // rdx
  struct _NDIS_OBJECT_HEADER *v15; // rbp
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r15
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  int v32; // ecx
  KIRQL v33; // di
  struct _NDIS_OBJECT_HEADER *p_SentNblsToComplete; // rcx
  _SLIST_HEADER *i; // rdx
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 HighLimit[2]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD Parameter[5]; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-38h]
  int v40; // [rsp+74h] [rbp-34h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  v7 = a4;
  if ( a4->Type == 17 )
    goto LABEL_5;
  if ( (a2 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    v11 = a6;
    p_LowLimit = &LowLimit;
    v13 = a5;
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    HighLimit[1] = 0LL;
    LowLimit = (unsigned __int64)a1;
    HighLimit[0] = (unsigned __int64)a1;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a2;
    while ( v7->Type == 5 )
    {
      v14 = *p_LowLimit;
      if ( !*p_LowLimit )
        break;
      v15 = v7;
      v16 = *(_QWORD *)&v7[106].Type + 96 * v6;
      if ( *(_BYTE *)(v16 + 40) )
      {
        *p_LowLimit = 0LL;
        do
        {
          v18 = ndisVerifierNdisDispatch;
          v19 = *(unsigned int *)(v14 + 132);
          v20 = *(_QWORD *)(v14 + 112);
          *(_DWORD *)(v14 + 132) = 0;
          if ( v18 && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
            (*((void (__fastcall **)(void *, unsigned __int64, _QWORD))v18 + 13))(v13, v14, 0LL);
          else
            ((void (__fastcall *)(void *, unsigned __int64, __int64))v11)(v13, v14, v19);
          v14 = v20;
        }
        while ( v20 );
        break;
      }
      *(_BYTE *)(v16 + 40) = 1;
      v17 = *p_LowLimit;
      *p_LowLimit = 0LL;
      if ( v17 )
      {
        do
        {
          v25 = ndisVerifierNdisDispatch;
          v26 = *(unsigned int *)(v17 + 132);
          v27 = *(_QWORD *)(v17 + 112);
          *(_DWORD *)(v17 + 132) = 0;
          if ( v25 && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
            (*((void (__fastcall **)(void *, unsigned __int64, _QWORD))v25 + 13))(v13, v17, 0LL);
          else
            ((void (__fastcall *)(void *, unsigned __int64, __int64))v11)(v13, v17, v26);
          v17 = v27;
        }
        while ( v27 );
      }
      *(_BYTE *)(v16 + 40) = 0;
      p_LowLimit = (unsigned __int64 *)(v16 + 24);
      v7 = *(struct _NDIS_OBJECT_HEADER **)&v7[122].Type;
      v11 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))&v15[116].Type;
      v13 = *(void **)&v15[118].Type;
    }
    v21 = *p_LowLimit;
    if ( *p_LowLimit )
    {
      *p_LowLimit = 0LL;
      do
      {
        v22 = ndisVerifierNdisDispatch;
        v23 = *(unsigned int *)(v21 + 132);
        v24 = *(_QWORD *)(v21 + 112);
        *(_DWORD *)(v21 + 132) = 0;
        if ( v22 && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
          (*((void (__fastcall **)(void *, unsigned __int64, _QWORD))v22 + 13))(v13, v21, 0LL);
        else
          ((void (__fastcall *)(void *, unsigned __int64, __int64))v11)(v13, v21, v23);
        v21 = v24;
      }
      while ( v24 );
    }
  }
  else
  {
    if ( a3->Header.Type != 5 )
    {
LABEL_5:
      ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a6)(a5, a1, a2);
      return;
    }
    v28 = (unsigned int)Size;
    v29 = KeGetPcr()->Prcb.Number << 12;
    v30 = *(_QWORD *)(v29 + qword_14011D048);
    LowLimit = v30;
    v31 = *(_QWORD *)(v29 + qword_14011D040);
    HighLimit[0] = v31;
    if ( v30 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v31 )
    {
      IoGetStackLimits(&LowLimit, HighLimit);
      v30 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v30 >= v28 )
    {
      if ( ndisVerifierNdisDispatch && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
      {
        (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 13))(a5, a1, 0LL);
        return;
      }
      goto LABEL_5;
    }
    Parameter[1] = a5;
    v32 = 24576;
    Parameter[2] = a6;
    v40 = 0;
    Parameter[0] = v7;
    Parameter[3] = a1;
    Parameter[4] = 0LL;
    v39 = a2;
    if ( (unsigned int)Size > 0x6000 )
      v32 = Size;
    if ( KeExpandKernelStackAndCalloutEx(
           ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
           Parameter,
           v32,
           0,
           0LL) < 0 )
    {
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(a1, a3->NblTracker, 0xA0uLL, 1u, 0);
      v33 = KeAcquireSpinLockRaiseToDpc(&a3->Lock);
      a3->LockThread = KeGetCurrentThread();
      p_SentNblsToComplete = (struct _NDIS_OBJECT_HEADER *)&a3->StackExpansionFallback.PendingWork.SentNblsToComplete;
      for ( i = (_SLIST_HEADER *)a3->StackExpansionFallback.PendingWork.SentNblsToComplete;
            i;
            i = (_SLIST_HEADER *)i->Alignment )
      {
        p_SentNblsToComplete = (struct _NDIS_OBJECT_HEADER *)i;
      }
      *(_QWORD *)&p_SentNblsToComplete->Type = a1;
      ndisQueueStackExpansionFallbackWorkItem(a3);
      a3->LockThread = 0LL;
      KeReleaseSpinLock(&a3->Lock, v33);
    }
  }
}
