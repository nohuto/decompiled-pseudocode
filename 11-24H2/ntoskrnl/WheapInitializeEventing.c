/*
 * XREFs of WheapInitializeEventing @ 0x140C44B04
 * Callers:
 *     WheaInitialize @ 0x140C440FC (WheaInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 */

PSLIST_ENTRY WheapInitializeEventing()
{
  struct _SLIST_ENTRY *v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  LOWORD(WheapWaitingETWEventLock.Header.Lock) = 1;
  qword_140EF9A98 = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEvents = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEventLock.Header.Size = 6;
  WheapDispatchPtr.SecurityDescriptor = &WheapDispatchPtr.ActiveThreadCount;
  *(_QWORD *)&WheapDispatchPtr.ActiveThreadCount = &WheapDispatchPtr.ActiveThreadCount;
  WheapWaitingETWEventLock.Header.SignalState = 1;
  WheapWaitingETWEventLock.Header.WaitListHead.Blink = &WheapWaitingETWEventLock.Header.WaitListHead;
  WheapWaitingETWEventLock.Header.WaitListHead.Flink = &WheapWaitingETWEventLock.Header.WaitListHead;
  LOWORD(WheapDeferredInternalLogsEventLock.Header.Lock) = 1;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Blink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Flink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  qword_140EF9A10 = 0LL;
  WheapDeferredInternalLogsEventLock.Header.Size = 6;
  WheapDeferredInternalLogsEventLock.Header.SignalState = 1;
  WheapHighIrqlLogSelHandler = 0LL;
  if ( EtwRegister(&WHEA_ETW_PROVIDER, (PETWENABLECALLBACK)WheapEtwEnableCallback, 0LL, &WheapEtwHandle) )
    WheapEtwHandle = 0LL;
  if ( ((unsigned __int8)&WheapIpmiLogEntryList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = &WheapIpmiLogEntry;
  WheapIpmiLogEntryList = 0LL;
  v1 = 128LL;
  do
  {
    memset_0(v0, 0, 0x70uLL);
    result = RtlpInterlockedPushEntrySList(&WheapIpmiLogEntryList, v0);
    v0 += 7;
    --v1;
  }
  while ( v1 );
  return result;
}
