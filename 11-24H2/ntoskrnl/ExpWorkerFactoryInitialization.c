/*
 * XREFs of ExpWorkerFactoryInitialization @ 0x140C45D44
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeRegisterObjectNotification @ 0x14032D090 (KeRegisterObjectNotification.c)
 *     KeInitializeQueue @ 0x1404717A0 (KeInitializeQueue.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 */

__int64 ExpWorkerFactoryInitialization()
{
  int v0; // eax
  int v1; // ebx
  HANDLE ThreadHandle; // [rsp+40h] [rbp-49h] BYREF
  __int16 v4; // [rsp+50h] [rbp-39h] BYREF
  int v5; // [rsp+58h] [rbp-31h]
  __int128 v6; // [rsp+5Ch] [rbp-2Dh]
  int v7; // [rsp+6Ch] [rbp-1Dh]
  int v8; // [rsp+74h] [rbp-15h]
  int v9; // [rsp+7Ch] [rbp-Dh]
  __int64 (__fastcall *v10)(__int64, char *, __int64, __int64); // [rsp+90h] [rbp+7h]
  void (__fastcall *v11)(PVOID *); // [rsp+98h] [rbp+Fh]

  v0 = ExpWorkerFactoryThreadCreationTimeoutInSeconds;
  ThreadHandle = 0LL;
  if ( ExpWorkerFactoryThreadCreationTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadCreationTimeoutInSeconds > 0x258 )
    {
      v0 = 600;
      ExpWorkerFactoryThreadCreationTimeoutInSeconds = 600;
    }
  }
  else
  {
    v0 = 1;
    ExpWorkerFactoryThreadCreationTimeoutInSeconds = 1;
  }
  if ( ExpWorkerFactoryThreadIdleTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadIdleTimeoutInSeconds > 0x258 )
      ExpWorkerFactoryThreadIdleTimeoutInSeconds = 600;
  }
  else
  {
    ExpWorkerFactoryThreadIdleTimeoutInSeconds = 1;
  }
  ExpWorkerFactoryDeferredMediumTimeout = -1200000LL;
  ExpWorkerFactoryDeferredLongTimeout = -10000000LL * v0;
  ExpWorkerFactoryDeferredShortTimeout.QuadPart = -300000LL;
  if ( ((unsigned __int8)&ExpWorkerFactoryThreadCreationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ExpWorkerFactoryThreadCreationList = 0LL;
  KeInitializeQueue(&ExpWorkerFactoryManagerQueue, 0);
  *(_QWORD *)&ExpWorkerFactoryThreadCreationTimer.Header.Lock = 9LL;
  ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead.Blink = &ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead;
  ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead.Flink = &ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead;
  ExpWorkerFactoryThreadCreationTimer.DueTime.QuadPart = 0LL;
  ExpWorkerFactoryThreadCreationTimer.Period = 0;
  ExpWorkerFactoryThreadCreationTimer.Processor = 0;
  KeRegisterObjectNotification(
    (__int64)&ExpWorkerFactoryThreadCreationTimer,
    (__int64)&ExpWorkerFactoryManagerQueue,
    (__int64)&ExpWorkerFactoryThreadCreationBlock);
  ExpWorkerFactoryThreadCreationState = 0;
  memset_0(&v4, 0, 0x78uLL);
  v4 = 120;
  v10 = ExpCloseWorkerFactory;
  v5 = 256;
  v11 = ExpDeleteWorkerFactory;
  v8 = 512;
  v9 = 672;
  v6 = ExpWorkerFactoryMapping;
  v7 = 983295;
  v1 = ObCreateObjectType((const UNICODE_STRING *)&qword_140C73F40, &v4, 0LL, (__int64)&ExpWorkerFactoryObjectType);
  if ( v1 >= 0 )
  {
    v1 = PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           0LL,
           0LL,
           0LL,
           (PKSTART_ROUTINE)ExpWorkerFactoryManagerThread,
           0LL);
    if ( v1 >= 0 )
      ZwClose(ThreadHandle);
  }
  return (unsigned int)v1;
}
