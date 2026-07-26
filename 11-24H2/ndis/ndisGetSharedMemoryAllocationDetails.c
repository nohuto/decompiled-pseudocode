/*
 * XREFs of ndisGetSharedMemoryAllocationDetails @ 0x14008F010
 * Callers:
 *     NdisAllocateSharedMemory @ 0x14005CCE0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400A9ADC (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

__int64 __fastcall ndisGetSharedMemoryAllocationDetails(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  struct _NDIS_MINIPORT_BLOCK *BaseMiniport; // rax
  unsigned int v7; // r8d
  unsigned int *v8; // r9
  struct _NDIS_RECEIVE_QUEUE_BLOCK *ReceiveQueueByQueueId; // rax
  __int64 v10; // rcx
  KIRQL v11; // dl
  unsigned __int8 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225659LL;
  if ( a1->Header.Type == 17 )
  {
    *(_QWORD *)(a3 + 8) = a1;
  }
  else
  {
    if ( a1->Header.Type != 18 )
      return 3221225485LL;
    *(_QWORD *)(a3 + 16) = a1;
    BaseMiniport = a1->BaseMiniport;
    *(_QWORD *)(a3 + 8) = BaseMiniport;
    a1 = BaseMiniport;
    if ( !BaseMiniport )
    {
LABEL_11:
      *(_DWORD *)a3 = 1;
      return 0LL;
    }
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    v12 = 0;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v12);
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(
                              *(struct _NDIS_MINIPORT_BLOCK **)(a3 + 8),
                              *(_DWORD *)(a2 + 8),
                              v7,
                              v8);
    v10 = *(_QWORD *)(a3 + 8);
    v11 = v12;
    *(_QWORD *)(a3 + 24) = ReceiveQueueByQueueId;
    *(_QWORD *)(v10 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v11);
  }
  else
  {
    *(_QWORD *)(a3 + 24) = a1->DefaultReceiveQueue;
  }
  if ( *(_QWORD *)(a3 + 24) )
    goto LABEL_11;
  return 3221225485LL;
}
