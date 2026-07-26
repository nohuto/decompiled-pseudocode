/*
 * XREFs of ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005B600
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002CA50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C1B0 (-ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016490 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x14005ABD0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

__int64 __fastcall ndisUpdateAndIndicatePMCapabilities(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  struct _NDIS_WORK_ITEM *Pool2; // rbx

  Pool2 = (struct _NDIS_WORK_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950);
  if ( Pool2 )
  {
    ndisReferenceMiniportNoCheck(a1, 0x10u);
    Pool2->Context = a1;
    Pool2->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedUpdatePMCapabilities;
    ndisScheduleWorkItemInternal(Pool2);
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v2,
        14,
        120,
        (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids);
    }
    return 3221225626LL;
  }
}
