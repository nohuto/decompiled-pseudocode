/*
 * XREFs of ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x14001B440
 * Callers:
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400275E0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        struct NDIS_PCW_CONTEXT *a4)
{
  unsigned int *v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned int *v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  struct _NET_BUFFER_LIST *i; // rax

  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, (unsigned __int64)a1->NblTracker, 0x95u, a3 & 1);
  if ( byte_14011D800 )
  {
    for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
      i->NetBufferListInfo[13] = 0LL;
  }
  v8 = (unsigned int *)((char *)a4 + 16);
  if ( (*((_DWORD *)a4 + 2) & 0x80u) != 0 )
  {
    if ( *v8 == -1 )
      *v8 = KeGetPcr()->Prcb.Number;
    v9 = *(_QWORD *)a4 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *v8);
    ++*(_QWORD *)(v9 + 56);
  }
  v10 = (unsigned int *)((char *)a4 + 16);
  if ( (*((_DWORD *)a4 + 3) & 0x200) != 0 )
  {
    if ( *v8 == -1 )
    {
      v10 = (unsigned int *)((char *)a4 + 16);
      *v8 = KeGetPcr()->Prcb.Number;
    }
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *v8) + *(_QWORD *)a4 + 376) = __rdtsc();
  }
  a1->ProtSendNetBufferListsComplete(a1->SendCompleteNetBufferListsContext, a2, a3);
  if ( (*((_DWORD *)a4 + 3) & 0x200) != 0 )
  {
    if ( *v8 == -1 )
    {
      *v8 = KeGetPcr()->Prcb.Number;
      v8 = v10;
    }
    v11 = *(_QWORD *)a4 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *v8);
    v12 = __rdtsc();
    *(_QWORD *)(v11 + 176) += (((unsigned __int64)HIDWORD(v12) << 32) | (unsigned int)v12) - *(_QWORD *)(v11 + 376);
    *(_QWORD *)(v11 + 376) = 0LL;
  }
}
