/*
 * XREFs of ?ndisWdfNotifyStuckOperation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CX_STUCK_OPERATION_TYPE@@_K@Z @ 0x1400B0DA4
 * Callers:
 *     ndisWatchdogReportTimeoutToDriver @ 0x1400C6420 (ndisWatchdogReportTimeoutToDriver.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1401385C0 (ndisNblTrackerWatchdogWorkerRoutine.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLi @ 0x1400B0E7C (WPP_RECORDER_SF_qLi.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisWdfNotifyStuckOperation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        unsigned __int64 a3,
        int a4)
{
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  int v8; // edx
  int v9; // r9d
  void (__fastcall *EvtCxReportStuckOperation)(void *, _NDIS_CX_STUCK_OPERATION_TYPE, unsigned __int64); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLi(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
    if ( !CxBlockFromMiniport )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v9 = 11;
      goto LABEL_7;
    }
    EvtCxReportStuckOperation = CxBlockFromMiniport->Chars.EvtCxReportStuckOperation;
    if ( EvtCxReportStuckOperation )
    {
      EvtCxReportStuckOperation(a1->MiniportAdapterContext, (_NDIS_CX_STUCK_OPERATION_TYPE)a2, a3);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 12;
LABEL_7:
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        13,
        v9,
        (struct _GUID *)&WPP_38c80a5c1c293fb2a854dfeb168e50db_Traceguids,
        (char)a1);
    }
  }
}
