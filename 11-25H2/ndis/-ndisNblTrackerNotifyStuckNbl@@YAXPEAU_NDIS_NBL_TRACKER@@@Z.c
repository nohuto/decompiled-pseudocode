/*
 * XREFs of ?ndisNblTrackerNotifyStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A9C88
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x14006C610 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x140082380 (-ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A9BA4 (-ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400AA00C (-ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400B74E0 (-NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall ndisNblTrackerNotifyStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  int v1; // edi
  int v3; // edi

  v1 = *(_DWORD *)ndisNblTrackerStuckNblDisposition;
  if ( (*((_DWORD *)a1 + 4) & 0x10000) == 0 )
  {
    *((_WORD *)a1 + 9) |= 1u;
    NdisTraceLoggingStuckNbl(a1);
    ndisNblTrackerReportStuckNbl(a1);
    ndisLastFailedNblTracker = a1;
    v3 = v1 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        ndisNblTrackerSetSqmFlag(a1);
    }
    else
    {
      ndisNblTrackerDebugBreak(a1);
    }
  }
}
