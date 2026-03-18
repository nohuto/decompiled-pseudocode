/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x140AB6F10
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x1404CE618 (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     ZwCreateThreadEx @ 0x1406A7D30 (ZwCreateThreadEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     DbgkQueueUserExceptionReport @ 0x140707404 (DbgkQueueUserExceptionReport.c)
 *     KeRequestTerminationProcess @ 0x14073BAEC (KeRequestTerminationProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsTerminateProcess @ 0x140938BD4 (PsTerminateProcess.c)
 *     PsFreezeProcess @ 0x14093A750 (PsFreezeProcess.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA9B20 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall MiForceCrashForInvalidAccess(PEPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rax
  _DWORD v7[8]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v8; // [rsp+B0h] [rbp-50h]
  HANDLE Handle; // [rsp+170h] [rbp+70h] BYREF
  PVOID Object; // [rsp+178h] [rbp+78h] BYREF

  Handle = 0LL;
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
        memset_0(v7, 0, 0x98uLL);
        v7[0] = -1073739994;
        v7[6] = 1;
        v8 = PsGetProcessId(Process);
        DbgkQueueUserExceptionReport(CurrentThread, 0xEu, (__int64)v7);
      }
      PsFreezeProcess((__int64)Process, 0);
      if ( (int)ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL) < 0 )
      {
        PsTerminateProcess(Process);
      }
      else
      {
        Object = 0LL;
        ObpReferenceObjectByHandleWithTag(
          (ULONG_PTR)Handle,
          0x1FFFFF,
          (__int64)PsThreadType,
          0,
          0x72506D4Du,
          &Object,
          0LL,
          0LL);
        KeRequestTerminationProcess((__int64)Object, 3);
        ObCloseHandle(Handle, 0);
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
