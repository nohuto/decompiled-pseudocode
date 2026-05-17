/*
 * XREFs of RtlpCtContextFree @ 0x180148F48
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x180148D00 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x180148F94 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801490A0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180005490 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     TpReleaseWork @ 0x18003A420 (TpReleaseWork.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

__int64 __fastcall RtlpCtContextFree(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  void *v5; // rcx

  v4 = a1[1];
  if ( v4 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v4);
  v5 = (void *)a1[2];
  if ( v5 )
  {
    NtClose(v5);
    a1[2] = 0LL;
  }
  if ( *a1 )
    TpReleaseWork(*a1, a2, a3);
  return RtlpSysVolFree((__int64)a1);
}
