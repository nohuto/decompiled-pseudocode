/*
 * XREFs of ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x140031B90
 * Callers:
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140075230 (-ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14009A0D0 (-ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeNextReceiveCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_OBJECT_HEADER *a4,
        void *a5,
        void (*a6)(void *, struct _NET_BUFFER_LIST *, unsigned int))
{
  __int64 v6; // r12
  struct _NDIS_OBJECT_HEADER *v7; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  void (*v15)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r14
  unsigned __int64 *p_LowLimit; // rbx
  void *v17; // r15
  unsigned __int64 v18; // rdx
  struct _NDIS_OBJECT_HEADER *v19; // r13
  __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rbx
  int v32; // ecx
  KIRQL v33; // bp
  struct _NDIS_OBJECT_HEADER *p_ReceivedNblsToComplete; // rcx
  _SLIST_HEADER *i; // rdx
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 HighLimit[2]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD Parameter[5]; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-38h]
  int v40; // [rsp+74h] [rbp-34h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  v7 = a4;
  if ( a4->Type == 17 )
    goto LABEL_9;
  if ( (a2 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    v15 = a6;
    p_LowLimit = &LowLimit;
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    v17 = a5;
    HighLimit[1] = 0LL;
    LowLimit = (unsigned __int64)a1;
    HighLimit[0] = (unsigned __int64)a1;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a2;
    while ( v7->Type == 5 )
    {
      v18 = *p_LowLimit;
      if ( !*p_LowLimit )
        break;
      v19 = v7;
      v20 = *(_QWORD *)&v7[106].Type + 96 * v6;
      if ( *(_BYTE *)(v20 + 88) )
      {
        *p_LowLimit = 0LL;
        do
        {
          v25 = ndisVerifierNdisDispatch;
          v26 = *(unsigned int *)(v18 + 132);
          v27 = *(_QWORD *)(v18 + 112);
          *(_DWORD *)(v18 + 132) = 0;
          if ( v25 && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
            (*((void (__fastcall **)(void *, unsigned __int64, __int64))v25 + 17))(v17, v18, v26);
          else
            ((void (__fastcall *)(void *, unsigned __int64, __int64))v15)(v17, v18, v26);
          v18 = v27;
        }
        while ( v27 );
        break;
      }
      *(_BYTE *)(v20 + 88) = 1;
      v21 = *p_LowLimit;
      *p_LowLimit = 0LL;
      if ( v21 )
      {
        do
        {
          v22 = ndisVerifierNdisDispatch;
          v23 = *(unsigned int *)(v21 + 132);
          v24 = *(_QWORD *)(v21 + 112);
          *(_DWORD *)(v21 + 132) = 0;
          if ( v22 && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
            (*((void (__fastcall **)(void *, unsigned __int64, __int64))v22 + 17))(v17, v21, v23);
          else
            ((void (__fastcall *)(void *, unsigned __int64, __int64))v15)(v17, v21, v23);
          v21 = v24;
        }
        while ( v24 );
      }
      *(_BYTE *)(v20 + 88) = 0;
      p_LowLimit = (unsigned __int64 *)(v20 + 72);
      v7 = *(struct _NDIS_OBJECT_HEADER **)&v7[138].Type;
      v15 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))&v19[132].Type;
      v17 = *(void **)&v19[134].Type;
    }
    v28 = *p_LowLimit;
    if ( *p_LowLimit )
    {
      *p_LowLimit = 0LL;
      do
      {
        v29 = ndisVerifierNdisDispatch;
        v30 = *(unsigned int *)(v28 + 132);
        v31 = *(_QWORD *)(v28 + 112);
        *(_DWORD *)(v28 + 132) = 0;
        if ( v29 && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
          (*((void (__fastcall **)(void *, unsigned __int64, __int64))v29 + 17))(v17, v28, v30);
        else
          ((void (__fastcall *)(void *, unsigned __int64, __int64))v15)(v17, v28, v30);
        v28 = v31;
      }
      while ( v31 );
    }
    return;
  }
  if ( a3->Header.Type != 5 )
  {
LABEL_9:
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a6)(a5, a1, a2);
    return;
  }
  v11 = (unsigned int)Size;
  v12 = KeGetPcr()->Prcb.Number << 12;
  v13 = *(_QWORD *)(v12 + qword_14011D048);
  LowLimit = v13;
  v14 = *(_QWORD *)(v12 + qword_14011D040);
  HighLimit[0] = v14;
  if ( v13 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v14 )
  {
    IoGetStackLimits(&LowLimit, HighLimit);
    v13 = LowLimit;
  }
  if ( (unsigned __int64)&retaddr - v13 >= v11 )
  {
    if ( ndisVerifierNdisDispatch && v7->Type == 5 && *(_QWORD *)&v7[194].Type )
    {
      (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 17))(a5, a1, a2);
      return;
    }
    goto LABEL_9;
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
         (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
         Parameter,
         v32,
         0,
         0LL) < 0 )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(a1, a3->NblTracker, 0xA0uLL, 1u, 0);
    v33 = KeAcquireSpinLockRaiseToDpc(&a3->Lock);
    a3->LockThread = KeGetCurrentThread();
    p_ReceivedNblsToComplete = (struct _NDIS_OBJECT_HEADER *)&a3->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
    for ( i = (_SLIST_HEADER *)a3->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
          i;
          i = (_SLIST_HEADER *)i->Alignment )
    {
      p_ReceivedNblsToComplete = (struct _NDIS_OBJECT_HEADER *)i;
    }
    *(_QWORD *)&p_ReceivedNblsToComplete->Type = a1;
    ndisQueueStackExpansionFallbackWorkItem(a3);
    a3->LockThread = 0LL;
    KeReleaseSpinLock(&a3->Lock, v33);
  }
}
