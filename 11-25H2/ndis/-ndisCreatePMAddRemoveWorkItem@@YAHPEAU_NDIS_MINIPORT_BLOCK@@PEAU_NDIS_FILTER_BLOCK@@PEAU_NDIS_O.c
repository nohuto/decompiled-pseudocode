/*
 * XREFs of ?ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14008C380
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140015760 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ndisCreatePMAddRemoveWorkItem(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _LIST_ENTRY *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  int v6; // edx
  struct _WORK_QUEUE_ITEM *Pool2; // rbx

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 56LL, 1769423950);
  if ( Pool2 )
  {
    ndisReferenceMiniport(a1, 0xEu);
    Pool2[1].WorkerRoutine = (void (__fastcall *)(void *))a3;
    Pool2[1].List.Flink = (_LIST_ENTRY *)a1;
    Pool2[1].List.Blink = a2;
    Pool2->WorkerRoutine = ndisPMAddRemoveAsync;
    Pool2->Parameter = Pool2;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        14,
        70,
        (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids);
    }
    return 3221225626LL;
  }
}
