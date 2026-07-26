/*
 * XREFs of ?ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A19F4
 * Callers:
 *     ?ndisNblTrackerNotifyStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A1AD8 (-ndisNblTrackerNotifyStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A1B3C (-ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall ndisNblTrackerDebugBreak(struct _NDIS_NBL_TRACKER *a1)
{
  DbgPrint(
    "NDIS has detected that a component has held a NET_BUFFER_LIST for too long.  Run !ndiskd.pendingnbls to see the packets.\n");
  ndisNblTrackerPrintComponentNameToDebugger(a1);
  __int2c();
}
