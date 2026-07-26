/*
 * XREFs of NdisMReenumerateFailedAdapter @ 0x1400A79A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1400371A0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall NdisMReenumerateFailedAdapter(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_RESET_INTERFACE_STANDARD *ReenumerateSelfInterface; // rax
  struct _NDIS_IF_BLOCK *v3; // rdi
  struct _NDIS_WORK_ITEM *Pool2; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2,
      13,
      65,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1);
  if ( a1->DriverHandle->ReenumerateFailedAdapterHandler )
  {
    ReenumerateSelfInterface = a1->ReenumerateSelfInterface;
    if ( ReenumerateSelfInterface )
    {
      if ( ReenumerateSelfInterface->DeviceReset && (unsigned __int8)ndisReferenceMiniport(a1, 9u) )
      {
        v3 = ndisMReferenceIfBlock(a1, 0x13u);
        if ( v3 )
        {
          Pool2 = (struct _NDIS_WORK_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950LL);
          if ( Pool2 )
          {
            if ( v3->LastMiniportFatalErrorReason == NdisMEvent_Unknown )
              v3->LastMiniportFatalErrorReason = NdisMEventErr_MiniportRequested;
            Pool2->Context = a1;
            Pool2->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedReenumerateFailedAdapter;
            ndisScheduleWorkItemInternal(Pool2);
            return;
          }
          ndisMDereferenceIfBlock(a1, 0x13u);
        }
        ndisDereferenceMiniport(a1, 9u);
      }
    }
  }
}
