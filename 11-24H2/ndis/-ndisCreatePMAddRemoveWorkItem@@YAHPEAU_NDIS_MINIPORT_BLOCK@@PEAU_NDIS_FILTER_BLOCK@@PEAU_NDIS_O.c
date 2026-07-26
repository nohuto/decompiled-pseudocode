/*
 * XREFs of ?ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400076B0
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140008000 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ndisCreatePMAddRemoveWorkItem(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _LIST_ENTRY *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  int v6; // edx
  struct _WORK_QUEUE_ITEM *Pool2; // rbx

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 56LL, 1769423950LL);
  if ( Pool2 )
  {
    ndisReferenceMiniport(a1, MPREF_PM_OID);
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        14,
        70,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids);
    }
    return 3221225626LL;
  }
}
