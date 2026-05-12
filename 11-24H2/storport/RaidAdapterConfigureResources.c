/*
 * XREFs of RaidAdapterConfigureResources @ 0x140054EDC
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidInitializeDeferredQueue @ 0x14006B018 (RaidInitializeDeferredQueue.c)
 *     RaidInitializeResourceList @ 0x140181284 (RaidInitializeResourceList.c)
 *     RaidDeleteResourceList @ 0x1401812E0 (RaidDeleteResourceList.c)
 *     RaInitializeBus @ 0x1401BC2BC (RaInitializeBus.c)
 */

__int64 __fastcall RaidAdapterConfigureResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // r8

  v3 = a1 + 360;
  RaidDeleteResourceList(a1 + 360);
  result = RaidInitializeResourceList(v3, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)RaInitializeBus(a1 + 776, *(_QWORD *)(a1 + 24)) != -1073741637 || (*(_BYTE *)(a1 + 104) & 8) != 0 )
    {
      if ( *(char *)(a1 + 110) >= 0 )
        RaidInitializeDeferredQueue(a1 + 1008, *(_QWORD *)(a1 + 8), v8, 80LL, RaidAdapterDeferredRoutine);
      KeInitializeDpc((PRKDPC)(a1 + 1520), (PKDEFERRED_ROUTINE)RaidpAdapterTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1648), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1848), RaidCompletionDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 4200), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1912), RaidAdapterBusChangeDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1712), RaidAdapterRestartDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 5464), RaidQueueWaitCheckDpcRoutine, *(PVOID *)(a1 + 8));
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
