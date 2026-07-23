/*
 * XREFs of RtlReleaseResource @ 0x1800DDC90
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x1801097D0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x180163360 (ZwReleaseSemaphore.c)
 */

void __cdecl RtlReleaseResource(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  signed int NumberOfWaitingExclusive; // eax
  signed int v4; // ett
  int v5; // eax
  signed int v6; // eax
  signed int v7; // ett
  int v8; // eax
  LONG v9; // edx
  int v10; // eax
  LONG PreviousCount; // [rsp+30h] [rbp+8h] BYREF

  NumberOfActive = Resource->NumberOfActive;
  PreviousCount = 0;
  if ( NumberOfActive < 0 )
  {
    if ( NumberOfActive == -1 )
      Resource->ExclusiveOwnerThread = 0LL;
    if ( !_InterlockedIncrement(&Resource->NumberOfActive) )
    {
      if ( Resource->NumberOfWaitingShared )
      {
        v9 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
        if ( v9 )
        {
          v10 = ZwReleaseSemaphore(Resource->SharedSemaphore, v9, &PreviousCount);
          if ( v10 < 0 )
            RtlRaiseStatus(v10);
        }
      }
      NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
      while ( NumberOfWaitingExclusive > 0 )
      {
        v4 = NumberOfWaitingExclusive;
        NumberOfWaitingExclusive = _InterlockedCompareExchange(
                                     (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                                     NumberOfWaitingExclusive - 1,
                                     NumberOfWaitingExclusive);
        if ( v4 == NumberOfWaitingExclusive )
          goto LABEL_11;
      }
      if ( !NumberOfWaitingExclusive )
        return;
LABEL_11:
      v5 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
      if ( v5 < 0 )
        RtlRaiseStatus(v5);
    }
  }
  else if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) == 1 )
  {
    v6 = Resource->NumberOfWaitingExclusive;
    while ( v6 > 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive, v6 - 1, v6);
      if ( v7 == v6 )
        goto LABEL_16;
    }
    if ( !v6 )
      return;
LABEL_16:
    v8 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
    if ( v8 < 0 )
      RtlRaiseStatus(v8);
  }
}
