/*
 * XREFs of ?ndisNblTrackerHitBreakNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAXK@Z @ 0x1400A9C24
 * Callers:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 * Callees:
 *     ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A9CEC (-ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall __noreturn ndisNblTrackerHitBreakNbl(struct _NET_BUFFER_LIST *a1, unsigned __int64 a2, unsigned int a3)
{
  DbgPrint("Break on NBL %p (ndis!ndisBreakNbl)\n", a1);
  if ( a2 )
  {
    if ( a3 >= 0x1F )
    {
      DbgPrint("NBL will be given to: ");
      ndisNblTrackerPrintComponentNameToDebugger((struct _NDIS_NBL_TRACKER *)(a2 & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  __debugbreak();
}
