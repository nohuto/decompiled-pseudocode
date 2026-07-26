/*
 * XREFs of ?ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x14008EB00
 * Callers:
 *     ?ndisOidPreRcvFilterEnumQueues@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140095070 (-ndisOidPreRcvFilterEnumQueues@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisCopyReceiveQueueInfo(struct _NDIS_RECEIVE_QUEUE_INFO *a1, struct _NDIS_RECEIVE_QUEUE_BLOCK *a2)
{
  NDIS_VM_NAME *p_VmName; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  _IF_COUNTED_STRING_LH *v7; // rax
  __int128 v8; // xmm0
  NDIS_QUEUE_NAME *p_QueueName; // rdx
  _IF_COUNTED_STRING_LH *v10; // rax
  __int128 v11; // xmm0

  memset(&a1->Flags, 0, 0x444uLL);
  a1->Header = (NDIS_OBJECT_HEADER)71565952;
  p_VmName = &a1->VmName;
  v5 = 4LL;
  a1->Flags = a2->QueueParameters.Flags;
  v6 = 4LL;
  a1->QueueType = a2->QueueParameters.QueueType;
  a1->QueueId = a2->QueueId;
  a1->QueueGroupId = a2->QueueParameters.QueueGroupId;
  a1->ProcessorAffinity = a2->QueueParameters.ProcessorAffinity;
  a1->NumSuggestedReceiveBuffers = a2->QueueParameters.NumSuggestedReceiveBuffers;
  a1->MSIXTableEntry = a2->QueueParameters.MSIXTableEntry;
  a1->LookaheadSize = a2->QueueParameters.LookaheadSize;
  v7 = &a2->QueueParameters.VmName;
  do
  {
    p_VmName = (NDIS_VM_NAME *)((char *)p_VmName + 128);
    v8 = *(_OWORD *)&v7->Length;
    v7 = (_IF_COUNTED_STRING_LH *)((char *)v7 + 128);
    *(_OWORD *)&p_VmName[-1].String[193] = v8;
    *(_OWORD *)&p_VmName[-1].String[201] = *(_OWORD *)&v7[-1].String[201];
    *(_OWORD *)&p_VmName[-1].String[209] = *(_OWORD *)&v7[-1].String[209];
    *(_OWORD *)&p_VmName[-1].String[217] = *(_OWORD *)&v7[-1].String[217];
    *(_OWORD *)&p_VmName[-1].String[225] = *(_OWORD *)&v7[-1].String[225];
    *(_OWORD *)&p_VmName[-1].String[233] = *(_OWORD *)&v7[-1].String[233];
    *(_OWORD *)&p_VmName[-1].String[241] = *(_OWORD *)&v7[-1].String[241];
    *(_OWORD *)&p_VmName[-1].String[249] = *(_OWORD *)&v7[-1].String[249];
    --v6;
  }
  while ( v6 );
  p_QueueName = &a1->QueueName;
  *(_DWORD *)&p_VmName->Length = *(_DWORD *)&v7->Length;
  v10 = &a2->QueueParameters.QueueName;
  do
  {
    p_QueueName = (NDIS_QUEUE_NAME *)((char *)p_QueueName + 128);
    v11 = *(_OWORD *)&v10->Length;
    v10 = (_IF_COUNTED_STRING_LH *)((char *)v10 + 128);
    *(_OWORD *)&p_QueueName[-1].String[193] = v11;
    *(_OWORD *)&p_QueueName[-1].String[201] = *(_OWORD *)&v10[-1].String[201];
    *(_OWORD *)&p_QueueName[-1].String[209] = *(_OWORD *)&v10[-1].String[209];
    *(_OWORD *)&p_QueueName[-1].String[217] = *(_OWORD *)&v10[-1].String[217];
    *(_OWORD *)&p_QueueName[-1].String[225] = *(_OWORD *)&v10[-1].String[225];
    *(_OWORD *)&p_QueueName[-1].String[233] = *(_OWORD *)&v10[-1].String[233];
    *(_OWORD *)&p_QueueName[-1].String[241] = *(_OWORD *)&v10[-1].String[241];
    *(_OWORD *)&p_QueueName[-1].String[249] = *(_OWORD *)&v10[-1].String[249];
    --v5;
  }
  while ( v5 );
  *(_DWORD *)&p_QueueName->Length = *(_DWORD *)&v10->Length;
  *((_DWORD *)&a1->QueueName + 129) = a2->NumFilters;
  a1[1].Header = (NDIS_OBJECT_HEADER)a2->QueueParameters.InterruptCoalescingDomainId;
}
