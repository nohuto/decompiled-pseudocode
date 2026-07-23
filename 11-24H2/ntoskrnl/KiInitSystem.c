/*
 * XREFs of KiInitSystem @ 0x140C2A2B4
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     KeAbInitialize @ 0x1405C1648 (KeAbInitialize.c)
 *     KiForceSymbolReferences @ 0x140C2A010 (KiForceSymbolReferences.c)
 *     KiInitializeIdleProcess @ 0x140C2A7D0 (KiInitializeIdleProcess.c)
 */

__int64 __fastcall KiInitSystem(struct _KPROCESS *a1)
{
  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  qword_140F229A8 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_140F22318 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_140F22308 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_140F22328 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  qword_140F223B8 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_140F223A8 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = KiServiceTable;
  LODWORD(xmmword_1412018D0) = KiServiceLimit;
  *((_QWORD *)&xmmword_1412018D0 + 1) = KiArgumentTable;
  KiBalanceSetManagerPeriodicDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)KiBalanceSetManagerDeferredRoutine;
  KiBalanceSetManagerPeriodicDpc.DeferredContext = &KiBalanceSetManagerPeriodicEvent;
  qword_140F22710 = (__int64)&qword_140F22708;
  qword_140F22708 = (__int64)&qword_140F22708;
  LODWORD(xmmword_1412018F0) = 0;
  KiStackProtectNotifyEvent.Header.WaitListHead.Blink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  KiStackProtectNotifyEvent.Header.WaitListHead.Flink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSwapEvent.Header.Lock) = 1;
  KiSwapEvent.Header.Size = 6;
  KiSwapEvent.Header.SignalState = 0;
  KiProcessInSwapListHead = 0LL;
  KiProcessOutSwapListHead = 0LL;
  KiStackInSwapListHead = 0LL;
  KeServiceDescriptorTableShadow[0] = KeServiceDescriptorTable;
  xmmword_140FC72D0 = xmmword_1412018D0;
  *(_OWORD *)&xmmword_140FC72E0 = xmmword_1412018E0;
  xmmword_140FC72F0 = xmmword_1412018F0;
  KeServiceDescriptorTableFilter[0] = KeServiceDescriptorTable;
  xmmword_140FC7410 = xmmword_1412018D0;
  xmmword_140FC7420 = xmmword_1412018E0;
  xmmword_140FC7430 = xmmword_1412018F0;
  KiBalanceSetManagerPeriodicDpc.TargetInfoAsUlong = 275;
  KiBalanceSetManagerPeriodicDpc.DpcData = 0LL;
  KiBalanceSetManagerPeriodicDpc.ProcessorHistory = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_140F22702 = 6;
  dword_140F22704 = 0;
  LOWORD(KiStackProtectNotifyEvent.Header.Lock) = 0;
  KiStackProtectNotifyEvent.Header.Size = 6;
  KiStackProtectNotifyEvent.Header.SignalState = 0;
  KeAbInitialize();
  KiDynamicProcessorLock.Count = 1;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  KiDynamicMemoryLock.Count = 1;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Blink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Flink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicMemoryLock.Event.Header.WaitListHead.Blink = &KiDynamicMemoryLock.Event.Header.WaitListHead;
  KiDynamicMemoryLock.Event.Header.WaitListHead.Flink = &KiDynamicMemoryLock.Event.Header.WaitListHead;
  KiSetVirtualHeteroClockIntervalRequestDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  qword_140F227A8 = (__int64)&KiProcessListHead;
  KiProcessListHead = (__int64)&KiProcessListHead;
  KiDynamicMemoryLock.Owner = 0LL;
  KiDynamicMemoryLock.Contention = 0;
  LOWORD(KiDynamicMemoryLock.Event.Header.Lock) = 1;
  KiDynamicMemoryLock.Event.Header.Size = 6;
  KiDynamicMemoryLock.Event.Header.SignalState = 0;
  KiSetVirtualHeteroClockIntervalRequestDpc.TargetInfoAsUlong = 531;
  KiSetVirtualHeteroClockIntervalRequestDpc.DeferredContext = 0LL;
  KiSetVirtualHeteroClockIntervalRequestDpc.DpcData = 0LL;
  KiSetVirtualHeteroClockIntervalRequestDpc.ProcessorHistory = 0LL;
  return KiInitializeIdleProcess(a1);
}
