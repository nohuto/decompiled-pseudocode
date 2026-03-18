/*
 * XREFs of ACPIInitializeWorker @ 0x1400C7E20
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 */

NTSTATUS ACPIInitializeWorker()
{
  bool (__fastcall **Pool2)(__int64, int); // rdi
  __int64 v1; // rcx
  int v2; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 44);
  ThreadHandle = 0LL;
  KeInitializeSpinLock(&ACPIWorkerQueueSpinLock);
  ACPIWorkItem.Parameter = 0LL;
  ACPIWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ACPIDeviceWorkerThread;
  ACPIWorkItem.List.Flink = 0LL;
  qword_140089B18 = (__int64)&ACPIDeviceWorkQueue;
  ACPIDeviceWorkQueue = (__int64)&ACPIDeviceWorkQueue;
  KeInitializeEvent(&ACPIProcessWorkQueueEvent, NotificationEvent, 0);
  KeInitializeEvent(&ACPITerminateEvent, NotificationEvent, 0);
  qword_140089B08 = (__int64)&ACPIWorkQueue;
  ACPIWorkQueue = (__int64)&ACPIWorkQueue;
  ObjectAttributes.Length = 48;
  if ( AcpiDriverProxyExtension )
  {
    Pool2 = (bool (__fastcall **)(__int64, int))ExAllocatePool2(64LL, 64LL, 1399874369LL);
    if ( !Pool2 )
      ACPIInternalError(0xE0071uLL);
    v1 = AcpiDriverProxyExtension;
    *Pool2 = ACPIWorkerThreadWorker;
    Pool2[6] = (bool (__fastcall *)(__int64, int))&ACPIProcessWorkQueueEvent;
    Pool2[7] = (bool (__fastcall *)(__int64, int))&ACPITerminateEvent;
    *((_DWORD *)Pool2 + 10) = 2;
    Pool2[2] = (bool (__fastcall *)(__int64, int))1;
    *((_BYTE *)Pool2 + 24) = 0;
    v2 = IoDriverProxyCreateHotSwappableWorkerThread(v1, &ThreadHandle, 0x1FFFFFLL, &ObjectAttributes, 0LL, 0LL, Pool2);
    ExFreePoolWithTag(Pool2, 0);
    if ( v2 )
      ACPIInternalError(0xE008EuLL);
  }
  else if ( PsCreateSystemThread(
              &ThreadHandle,
              0x1FFFFFu,
              &ObjectAttributes,
              0LL,
              0LL,
              (PKSTART_ROUTINE)ACPIWorkerThread,
              0LL) )
  {
    ACPIInternalError(0xE00A0uLL);
  }
  Object = 0LL;
  if ( ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL) )
    ACPIInternalError(0xE00ADuLL);
  return ZwClose(ThreadHandle);
}
