/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x14044B1B4
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x140684820 (MiEmptyAccessLogs.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x14044B208 (MiReturnCcAccessLog.c)
 */

void __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx

  if ( *(_QWORD *)(a1 + 17408) )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)(a1 + 17408), 0LL);
    if ( v4 )
    {
      if ( a2 - *(_QWORD *)(v4 + 16) > (unsigned __int64)PfKernelGlobals || (a3 & 1) != 0 )
        MiQueuePageAccessLog(a1, v4);
      else
        MiReturnCcAccessLog(a1, v4, 0LL);
    }
  }
}
