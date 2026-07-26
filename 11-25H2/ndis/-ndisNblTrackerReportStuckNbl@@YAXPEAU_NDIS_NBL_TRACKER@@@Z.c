/*
 * XREFs of ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x140082380
 * Callers:
 *     ?ndisNblTrackerNotifyStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A9C88 (-ndisNblTrackerNotifyStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall ndisNblTrackerReportStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  int v2; // ecx
  __int64 Pool2; // rax
  __int64 v4; // rbx
  struct _NDIS_MINIPORT_BLOCK *Context; // rcx

  v2 = *((__int16 *)a1 + 8);
  if ( v2 == 5 || !v2 || (unsigned int)(v2 - 3) <= 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 48LL, 1465140302);
    v4 = Pool2;
    if ( Pool2 )
    {
      Context = (struct _NDIS_MINIPORT_BLOCK *)a1->Context;
      *(_QWORD *)Pool2 = Context;
      *(_DWORD *)(Pool2 + 8) = *((__int16 *)a1 + 8);
      *(_QWORD *)(Pool2 + 32) = ndisNblTrackerWatchdogWorkerRoutine;
      *(_QWORD *)(Pool2 + 40) = Pool2;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      if ( (unsigned __int8)ndisReferenceMiniport(Context, 0x68u) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 16), NormalWorkQueue);
      else
        ExFreePoolWithTag((PVOID)v4, 0);
    }
  }
}
