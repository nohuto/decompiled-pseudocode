/*
 * XREFs of RtlAcquireResourceShared @ 0x1800D7910
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPossibleDeadlock @ 0x180030A80 (RtlpPossibleDeadlock.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     NtWaitForSingleObject @ 0x1801600D0 (NtWaitForSingleObject.c)
 */

BOOLEAN __cdecl RtlAcquireResourceShared(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // r8d
  bool v5; // zf
  signed __int32 v6; // eax
  int v8; // ebp
  LARGE_INTEGER *v9; // rsi
  int v10; // eax
  signed int NumberOfWaitingShared; // eax
  signed int v12; // ett

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 && Resource->ExclusiveOwnerThread == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement(&Resource->NumberOfActive);
    return 1;
  }
  else
  {
    while ( 1 )
    {
LABEL_2:
      while ( NumberOfActive >= 0 )
      {
        v6 = _InterlockedCompareExchange(&Resource->NumberOfActive, NumberOfActive + 1, NumberOfActive);
        v5 = NumberOfActive == v6;
        NumberOfActive = v6;
        if ( v5 )
          return 1;
      }
      if ( !Wait )
        return 0;
      ++Resource->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingShared);
      NumberOfActive = Resource->NumberOfActive;
      if ( NumberOfActive >= 0 )
      {
        NumberOfWaitingShared = Resource->NumberOfWaitingShared;
        while ( NumberOfWaitingShared > 0 )
        {
          v12 = NumberOfWaitingShared;
          NumberOfWaitingShared = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&Resource->NumberOfWaitingShared,
                                    NumberOfWaitingShared - 1,
                                    NumberOfWaitingShared);
          if ( v12 == NumberOfWaitingShared )
            goto LABEL_2;
        }
        if ( NumberOfWaitingShared )
          continue;
      }
      v8 = 0;
      while ( 1 )
      {
        v9 = 0LL;
        if ( (Resource->Flags & 1) == 0 )
          v9 = &RtlpTimeout;
        v10 = NtWaitForSingleObject(Resource->SharedSemaphore, 0, v9);
        if ( v10 != 258 )
          break;
        DbgPrintEx(
          0x65u,
          0,
          "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n",
          v8,
          ((unsigned __int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 63)
        + ((__int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 23));
        DbgPrintEx(0x65u, 0, "RTL: Resource at %p\n", Resource);
        if ( (unsigned int)++v8 > 2 )
          RtlpPossibleDeadlock((unsigned __int64)Resource);
        DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
      }
      if ( v10 < 0 )
        RtlRaiseStatus(v10);
      NumberOfActive = Resource->NumberOfActive;
    }
  }
}
