/*
 * XREFs of WheapProcessWaitingETWEvents @ 0x1407C8690
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x14065E260 (WheaProcessWaitingETWEvents.c)
 *     WheapEtwEnableCallback @ 0x1407C8340 (WheapEtwEnableCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     WheapFreeErrorRecord @ 0x14047808C (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1404780BC (WheapGenerateETWEvents.c)
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 */

LONG WheapProcessWaitingETWEvents()
{
  __int64 *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  LONG result; // eax

  while ( 1 )
  {
    KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
    v0 = (__int64 *)WheapWaitingETWEvents;
    if ( *(__int64 **)(WheapWaitingETWEvents + 8) != &WheapWaitingETWEvents
      || (v1 = *(_QWORD *)WheapWaitingETWEvents,
          *(_QWORD *)(*(_QWORD *)WheapWaitingETWEvents + 8LL) != WheapWaitingETWEvents) )
    {
LABEL_9:
      __fastfail(3u);
    }
    WheapWaitingETWEvents = *(_QWORD *)WheapWaitingETWEvents;
    *(_QWORD *)(v1 + 8) = &WheapWaitingETWEvents;
    KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
    if ( v0 == &WheapWaitingETWEvents )
      break;
    WheapGenerateETWEvents((__int64)(v0 + 5));
    WheapFreeErrorRecord((__int64)v0);
  }
  while ( 1 )
  {
    KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
    v2 = *(_QWORD *)&WheapDispatchPtr.ActiveThreadCount;
    if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&WheapDispatchPtr.ActiveThreadCount + 8LL) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.ActiveThreadCount )
      goto LABEL_9;
    v3 = **(_QWORD **)&WheapDispatchPtr.ActiveThreadCount;
    if ( *(_QWORD *)(**(_QWORD **)&WheapDispatchPtr.ActiveThreadCount + 8LL) != *(_QWORD *)&WheapDispatchPtr.ActiveThreadCount )
      goto LABEL_9;
    *(_QWORD *)&WheapDispatchPtr.ActiveThreadCount = **(_QWORD **)&WheapDispatchPtr.ActiveThreadCount;
    *(_QWORD *)(v3 + 8) = &WheapDispatchPtr.ActiveThreadCount;
    result = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    if ( (ULONG *)v2 == &WheapDispatchPtr.ActiveThreadCount )
      return result;
    WheaLogInternalEvent((_DWORD *)(v2 + 16));
  }
}
