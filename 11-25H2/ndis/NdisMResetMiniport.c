/*
 * XREFs of NdisMResetMiniport @ 0x1400A9990
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140012DA0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x14005ABD0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall NdisMResetMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_WORK_ITEM *Pool2; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      17,
      10,
      (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
      (char)a1);
  if ( a1->DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx && (unsigned __int8)ndisReferenceMiniport(a1, 8u) )
  {
    Pool2 = (struct _NDIS_WORK_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950);
    if ( Pool2 )
    {
      Pool2->Context = a1;
      Pool2->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedResetMiniport;
      ndisScheduleWorkItemInternal(Pool2);
    }
    else
    {
      ndisDereferenceMiniport(a1, 8u);
    }
  }
}
