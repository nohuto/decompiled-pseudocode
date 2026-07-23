/*
 * XREFs of RtlpCreateDeferredCriticalSectionEvent @ 0x1800064C0
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x18013C320 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateEvent @ 0x180163B20 (ZwCreateEvent.c)
 */

HANDLE __fastcall RtlpCreateDeferredCriticalSectionEvent(__int64 a1)
{
  signed __int64 v1; // rdi
  signed __int64 v3; // rbx
  HANDLE EventHandle; // [rsp+40h] [rbp+8h] BYREF

  v1 = -1LL;
  EventHandle = (HANDLE)-1LL;
  if ( RtlpForceCSToUseEvents )
  {
    if ( ZwCreateEvent(&EventHandle, 0x100003u, 0LL, SynchronizationEvent, 0) >= 0 )
      v1 = (signed __int64)EventHandle;
    else
      EventHandle = (HANDLE)-1LL;
  }
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1, 0LL);
  if ( !v3 )
    return EventHandle;
  if ( EventHandle != (HANDLE)-1LL )
    NtClose(EventHandle);
  return (HANDLE)v3;
}
