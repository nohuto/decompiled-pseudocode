/*
 * XREFs of WheaInitializeServices @ 0x140C467B0
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x1407C8364 (WheapInitializeInUsePageOfflineNotifications.c)
 *     WheapSetDefaultErrorSourceConfiguration @ 0x140C46B84 (WheapSetDefaultErrorSourceConfiguration.c)
 */

PVOID *WheaInitializeServices()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  WheapSetDefaultErrorSourceConfiguration();
  WheapPfaLock = 0LL;
  qword_140EEFA18 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  _InterlockedOr(v1, 0);
  WheapPfaInitialized = 1;
  *(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type = &WheapDispatchPtr.AlignmentRequirement;
  *(_QWORD *)&WheapDispatchPtr.AlignmentRequirement = &WheapDispatchPtr.AlignmentRequirement;
  WheapDispatchPtr.DeviceQueue.1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)&WheapDispatchPtr.DeviceQueue.Lock;
  WheapDispatchPtr.DeviceQueue.Lock = (KSPIN_LOCK)&WheapDispatchPtr.DeviceQueue.Lock;
  WheaDrsDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = 1;
  WheapDispatchPtr.Queue.Wcb.DeviceObject = 0LL;
  LODWORD(WheapDispatchPtr.Queue.Wcb.CurrentIrp) = 0;
  LOWORD(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = 1;
  BYTE2(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = 6;
  HIDWORD(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = 0;
  WheaPassiveDrsListLock = 0LL;
  WheaDrsDpc.TargetInfoAsUlong = 275;
  WheaDrsDpc.DeferredContext = 0LL;
  WheaDrsDpc.DpcData = 0LL;
  WheaDrsDpc.ProcessorHistory = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v1, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
