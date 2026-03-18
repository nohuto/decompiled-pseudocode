/*
 * XREFs of rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C00768A0
 * Callers:
 *     <none>
 * Callees:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00765F4 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 */

LONG_PTR __fastcall rimNormalApcIoUnregisterPlugPlayNotificationEx(__int64 a1)
{
  return rimApcIoUnregisterPlugPlayNotificationExWorker((_QWORD *)(a1 - 88));
}
