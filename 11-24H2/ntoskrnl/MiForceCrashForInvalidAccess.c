/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x140AB11E8
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x140426B40 (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     ZwCreateThreadEx @ 0x1406A8CD0 (ZwCreateThreadEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DbgkQueueUserExceptionReport @ 0x140704FC4 (DbgkQueueUserExceptionReport.c)
 *     KeRequestTerminationProcess @ 0x140739A1C (KeRequestTerminationProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4BD0 (DbgkWerCaptureLiveKernelDump.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
 */

__int64 __fastcall MiForceCrashForInvalidAccess(PEPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v8[8]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v9; // [rsp+B0h] [rbp-50h]
  HANDLE ThreadHandle; // [rsp+170h] [rbp+70h] BYREF
  PVOID Object; // [rsp+178h] [rbp+78h] BYREF

  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CurrentThread->ApcStateIndex == 1 || (CurrentThread->MiscFlags & 0x400) != 0 )
  {
    _m_prefetchw(&Process[1].DirectoryTableBase);
    DirectoryTableBase = Process[1].DirectoryTableBase;
    do
    {
      v4 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase | 0x4000000,
                             DirectoryTableBase);
    }
    while ( v4 != DirectoryTableBase );
    if ( (DirectoryTableBase & 0x4000000) == 0 )
    {
      if ( (IoThreadToProcess(CurrentThread)[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
      {
        ProcessId = PsGetProcessId(Process);
        DbgkWerCaptureLiveKernelDump(
          L"MemoryManager",
          26LL,
          5504LL,
          -1073739994LL,
          (__int64)ProcessId,
          0LL,
          0LL,
          0LL,
          0);
      }
      else
      {
        memset_0(v8, 0, 0x98uLL);
        v8[0] = -1073739994;
        v8[6] = 1;
        v9 = PsGetProcessId(Process);
        DbgkQueueUserExceptionReport(CurrentThread, 0xEu, (__int64)v8);
      }
      PsFreezeProcess(Process, 0LL);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             0LL,
             0LL,
             1u,
             0LL,
             0x1000uLL,
             0x1000uLL,
             0LL) < 0 )
      {
        PsTerminateProcess(Process);
      }
      else
      {
        Object = 0LL;
        ObpReferenceObjectByHandleWithTag(
          (ULONG_PTR)ThreadHandle,
          0x1FFFFF,
          (__int64)PsThreadType,
          0,
          0x72506D4Du,
          &Object,
          0LL,
          0LL);
        KeRequestTerminationProcess((__int64)Object, 3);
        ObCloseHandle(ThreadHandle, 0);
        ObfDereferenceObjectWithTag(Object, 0x72506D4Du);
      }
    }
  }
  else
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 2);
  }
  return KeLeaveCriticalRegionThread();
}
