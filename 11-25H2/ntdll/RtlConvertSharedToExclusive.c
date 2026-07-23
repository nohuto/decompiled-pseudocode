/*
 * XREFs of RtlConvertSharedToExclusive @ 0x1801097D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireResourceExclusive @ 0x1800DD8A0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x1800DDC90 (RtlReleaseResource.c)
 */

void __cdecl RtlConvertSharedToExclusive(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive >= 0 )
  {
    while ( NumberOfActive == 1 )
    {
      NumberOfActive = _InterlockedCompareExchange(&Resource->NumberOfActive, -1, 1);
      if ( NumberOfActive == 1 )
      {
        Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
        return;
      }
    }
    RtlReleaseResource(Resource);
    RtlAcquireResourceExclusive(Resource, 1u);
  }
}
