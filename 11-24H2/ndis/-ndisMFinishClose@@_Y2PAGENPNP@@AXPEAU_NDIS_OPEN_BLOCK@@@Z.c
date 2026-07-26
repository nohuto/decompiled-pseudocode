/*
 * XREFs of ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017BA40
 * Callers:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006BB0 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003EF70 (-ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003FE10 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x140050980 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?ndisMCoFreeResources@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140062760 (-ndisMCoFreeResources@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401761D0 (-ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140176310 (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMFinishClose(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _SINGLE_LIST_ENTRY *i; // rcx
  _SINGLE_LIST_ENTRY *j; // rcx
  _SINGLE_LIST_ENTRY *k; // rcx

  MiniportHandle = a1->MiniportHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      12,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1);
  ndisReferenceMiniportNoCheck(MiniportHandle, 0x32u);
  if ( (mem::ReadNoFence<unsigned long,void>(&MiniportHandle->Flags) & 0x20000) != 0 )
    ndisMCoFreeResources(a1);
  for ( i = a1->PatternList.Next; i; i = a1->PatternList.Next )
  {
    a1->PatternList = (_SINGLE_LIST_ENTRY)i->Next;
    ExFreePoolWithTag(i, 0);
  }
  for ( j = a1->WOLPatternList.Next; j; j = a1->WOLPatternList.Next )
  {
    a1->WOLPatternList = (_SINGLE_LIST_ENTRY)j->Next;
    ExFreePoolWithTag(j, 0);
  }
  for ( k = a1->PMProtocolOffloadList.Next; k; k = a1->PMProtocolOffloadList.Next )
  {
    a1->PMProtocolOffloadList = (_SINGLE_LIST_ENTRY)k->Next;
    ExFreePoolWithTag(k, 0);
  }
  ndisDeQueueOpenOnProtocol(a1, a1->ProtocolHandle);
  KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
  if ( (a1->OpenFlags & 4) != 0 )
  {
    --MiniportHandle->PmodeOpens;
    a1->OpenFlags &= ~4u;
    ndisUpdateCheckForLoopbackFlag(MiniportHandle);
  }
  KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
  ndisDeQueueOpenOnMiniport(a1, MiniportHandle);
  ndisUpdateLoopbackOpens(MiniportHandle);
  a1->QC.Status = 0;
  a1->QC.WorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedFinishClose;
  a1->QC.WorkItem.Parameter = a1;
  a1->QC.WorkItem.List.Flink = 0LL;
  ndisQueueWorkitem(&a1->QC.WorkItem);
  ndisDereferenceMiniport(MiniportHandle, 0x32u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      13,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1);
}
