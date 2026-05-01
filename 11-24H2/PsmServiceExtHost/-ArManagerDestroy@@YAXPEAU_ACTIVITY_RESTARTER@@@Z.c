/*
 * XREFs of ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180078198
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180077910 (PsmInitializeServiceExtension4.c)
 *     ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800780C4 (-ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800067DC (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180078220 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall ArManagerDestroy(struct _ACTIVITY_RESTARTER *a1)
{
  _BYTE v2[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v2, 0, 0x88uLL);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v2);
  ArManagerRundown(a1);
  HamDisconnectFromServer(*((_QWORD *)a1 + 10));
  HampFreeHeap(a1);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
