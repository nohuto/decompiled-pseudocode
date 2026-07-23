/*
 * XREFs of MiReturnCcAccessLog @ 0x14044B208
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x14044B1B4 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x140939B54 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnCcAccessLog(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rcx

  if ( a3 )
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 24);
  if ( (*(_QWORD *)(a1 + 17408) || _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 17408), a2, 0LL))
    && a2 )
  {
    if ( *(_QWORD *)(a2 + 32) == a2 + 64 )
    {
      if ( !*(_DWORD *)(a2 + 8) )
      {
        v4 = *(void **)(a2 + 56);
        if ( (unsigned __int64)v4 > 1 )
          ObDereferenceObjectDeferDeleteWithTag(v4, 0x4C416D4Du);
      }
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      MiQueuePageAccessLog(a1, a2);
    }
  }
}
