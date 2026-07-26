/*
 * XREFs of NdisNblTrackerRecordEvent @ 0x1400AA1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall NdisNblTrackerRecordEvent(unsigned __int64 a1, void *a2, unsigned int a3, unsigned int a4)
{
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, 0LL, a3, a2, a4);
}
