/*
 * XREFs of ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1404BAE90
 * Callers:
 *     <none>
 * Callees:
 *     SmQueueExWorkItem @ 0x1404AA2A8 (SmQueueExWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogTimerCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v4; // rbx
  __int64 v6; // r9
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2 + 1960;
  v7 = 0LL;
  if ( (int)guard_dispatch_icall_no_overrides(a2, &v7, 8LL, a4) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), v4, 0LL) )
      guard_dispatch_icall_no_overrides(a2, 0LL, 9LL, v6);
    else
      SmQueueExWorkItem((struct _WORK_QUEUE_ITEM *)v4, NormalWorkQueue, v7);
  }
}
