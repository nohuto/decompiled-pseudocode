/*
 * XREFs of ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400275E0
 * Callers:
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140027460 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x14001B440 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140027A70 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(_DWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  int v4; // edx
  unsigned int Number; // edi
  struct _NDIS_OPEN_BLOCK *v6; // rsi
  struct _NDIS_OPEN_BLOCK *v7; // r13
  struct _NET_BUFFER_LIST *v8; // r15
  struct _NET_BUFFER_LIST *v9; // r14
  _SLIST_HEADER *v10; // r9
  KIRQL v11; // r12
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *v13; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rdx
  unsigned int i; // r8d
  $C1F0B4CD31131FE325411CF2EE445EA1 *FirstNetBuffer; // rcx
  int j; // eax
  _SLIST_HEADER *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-28h] BYREF
  __int64 v25; // [rsp+38h] [rbp-20h]
  int v26; // [rsp+40h] [rbp-18h]
  KIRQL v27; // [rsp+A0h] [rbp+48h]
  struct _NET_BUFFER_LIST *v28; // [rsp+A8h] [rbp+50h]
  struct _NET_BUFFER_LIST *v30; // [rsp+B8h] [rbp+60h]

  v4 = a1[12];
  Number = -1;
  v30 = 0LL;
  v6 = 0LL;
  v28 = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v26 = -1;
  v10 = 0LL;
  if ( v4 || a1[20] )
  {
    HIDWORD(v25) = a1[20];
    v21 = *((_QWORD *)a1 + 5);
    LODWORD(v25) = v4;
    v24 = v21;
    if ( !v21 )
    {
      Number = v26;
      v24 = *((_QWORD *)a1 + 5);
    }
  }
  v11 = 2;
  v27 = 2;
  if ( (v25 & 0x280) != 0 || (v25 & 0x20000000000LL) != 0 )
  {
    if ( (a3 & 1) == 0 )
    {
      v27 = KfRaiseIrql(2u);
      v10 = 0LL;
      v11 = v27;
    }
    if ( (v25 & 0x200) != 0 )
    {
      Alignment = a2;
      for ( i = 0; Alignment; i += j )
      {
        FirstNetBuffer = ($C1F0B4CD31131FE325411CF2EE445EA1 *)Alignment->FirstNetBuffer;
        for ( j = 0; FirstNetBuffer; ++j )
          FirstNetBuffer = ($C1F0B4CD31131FE325411CF2EE445EA1 *)FirstNetBuffer->Link.Alignment;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      Number = KeGetPcr()->Prcb.Number;
      v26 = Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v24 + ndisPcwPerCpuDataStride * Number + 72) += i;
    }
  }
  if ( a2 )
  {
    do
    {
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)a2->SourceHandle;
      v13 = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
      a2->Link.Alignment = 0LL;
      if ( SourceHandle == v6 )
      {
        v9->Link.Alignment = (unsigned __int64)a2;
        v9 = a2;
      }
      else if ( SourceHandle == v7 )
      {
        v10->Alignment = (unsigned __int64)a2;
        v28 = a2;
      }
      else if ( v6 )
      {
        if ( v7 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, a2, a3, (struct NDIS_PCW_CONTEXT *)&v24);
        }
        else
        {
          v7 = SourceHandle;
          v30 = a2;
          v28 = a2;
        }
      }
      else
      {
        v6 = SourceHandle;
        v8 = a2;
        v9 = a2;
      }
      v10 = (_SLIST_HEADER *)v28;
      a2 = v13;
    }
    while ( v13 );
    Number = v26;
    v11 = v27;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v8, 0LL, (unsigned __int64)v6->NblTracker, 0x95u, a3 & 1);
  if ( byte_14011D800 )
  {
    v18 = (_SLIST_HEADER *)v8;
    if ( v8 )
    {
      do
      {
        v18[15].Region = 0LL;
        v18 = (_SLIST_HEADER *)v18->Alignment;
      }
      while ( v18 );
    }
  }
  if ( (v25 & 0x80u) != 0LL )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v24 + ndisPcwPerCpuDataStride * Number + 56);
  }
  if ( (v25 & 0x20000000000LL) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v24 + ndisPcwPerCpuDataStride * Number + 376) = __rdtsc();
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _SLIST_HEADER *))v6->ProtSendNetBufferListsComplete)(
      v6->SendCompleteNetBufferListsContext,
      v8,
      a3,
      v10);
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v19 = v24 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
    v20 = __rdtsc();
    *(_QWORD *)(v19 + 176) += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - *(_QWORD *)(v19 + 376);
    *(_QWORD *)(v19 + 376) = 0LL;
  }
  else
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _SLIST_HEADER *))v6->ProtSendNetBufferListsComplete)(
      v6->SendCompleteNetBufferListsContext,
      v8,
      a3,
      v10);
  }
  if ( v7 )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(v30, 0LL, (unsigned __int64)v7->NblTracker, 0x95u, a3 & 1);
    if ( byte_14011D800 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v30);
    if ( (v25 & 0x80u) != 0LL )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v24 + ndisPcwPerCpuDataStride * Number + 56);
    }
    if ( (v25 & 0x20000000000LL) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v24 + ndisPcwPerCpuDataStride * Number + 376) = __rdtsc();
    }
    v7->ProtSendNetBufferListsComplete(v7->SendCompleteNetBufferListsContext, v30, a3);
    if ( (v25 & 0x20000000000LL) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      v22 = v24 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
      v23 = __rdtsc();
      *(_QWORD *)(v22 + 176) += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - *(_QWORD *)(v22 + 376);
      *(_QWORD *)(v22 + 376) = 0LL;
    }
  }
  if ( v11 != 2 )
    KeLowerIrql(v11);
}
