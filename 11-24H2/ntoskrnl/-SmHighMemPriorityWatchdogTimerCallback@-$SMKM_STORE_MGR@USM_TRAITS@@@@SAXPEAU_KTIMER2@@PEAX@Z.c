/*
 * XREFs of ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1404B5D30
 * Callers:
 *     <none>
 * Callees:
 *     SmQueueExWorkItem @ 0x1404A44A4 (SmQueueExWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogTimerCallback(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2 + 1960;
  v4 = 0LL;
  if ( (int)guard_dispatch_icall_no_overrides(a2, &v4) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 24), v2, 0LL) )
      guard_dispatch_icall_no_overrides(a2, 0LL);
    else
      SmQueueExWorkItem((struct _WORK_QUEUE_ITEM *)v2, NormalWorkQueue, v4);
  }
}
