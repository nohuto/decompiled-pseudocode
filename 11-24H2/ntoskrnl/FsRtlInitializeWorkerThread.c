/*
 * XREFs of FsRtlInitializeWorkerThread @ 0x140C1B49C
 * Callers:
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     KeInitializeQueue @ 0x1404717A0 (KeInitializeQueue.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 */

NTSTATUS FsRtlInitializeWorkerThread()
{
  NTSTATUS v0; // ebx
  unsigned int i; // edi
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  v0 = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  ThreadHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  for ( i = 0; i < 2; ++i )
  {
    KeInitializeQueue((PRKQUEUE)&FsRtlWorkerQueues + i, 0);
    result = PsCreateSystemThread(
               &ThreadHandle,
               0x1FFFFFu,
               &ObjectAttributes,
               0LL,
               0LL,
               (PKSTART_ROUTINE)FsRtlWorkerThread,
               (PVOID)i);
    v0 = result;
    if ( result < 0 )
      return result;
    ZwClose(ThreadHandle);
  }
  LOWORD(StackOverflowFallbackSerialEvent.Header.Lock) = 1;
  StackOverflowFallbackSerialEvent.Header.WaitListHead.Blink = &StackOverflowFallbackSerialEvent.Header.WaitListHead;
  StackOverflowFallbackSerialEvent.Header.WaitListHead.Flink = &StackOverflowFallbackSerialEvent.Header.WaitListHead;
  result = v0;
  StackOverflowFallbackSerialEvent.Header.Size = 6;
  StackOverflowFallbackSerialEvent.Header.SignalState = 1;
  return result;
}
