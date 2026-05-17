/*
 * XREFs of RtlpCtContextFree @ 0x180147998
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x180147750 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x1801479E4 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180147AF0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     TpReleaseWork @ 0x18006CCA0 (TpReleaseWork.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180099E20 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall RtlpCtContextFree(unsigned __int64 *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = a1[1];
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = (void *)a1[2];
  if ( v3 )
  {
    NtClose(v3);
    a1[2] = 0LL;
  }
  if ( *a1 )
    TpReleaseWork(*a1);
  return RtlpSysVolFree((__int64)a1);
}
