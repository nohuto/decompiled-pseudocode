/*
 * XREFs of RtlpHeapPerformCrossProcessQuery @ 0x180098190
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800983A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800E0D80 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpHpStackTraceConfig @ 0x1801201E8 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014D778 (RtlpHpStackTraceSerializeRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800B4FC0 (RtlpCreateUserThreadEx.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800DE890 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x18011FE80 (RtlpDestroyExecutionRequiredRequest.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180163960 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x180163C60 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x180163C80 (NtTerminateThread.c)
 */

__int64 __fastcall RtlpHeapPerformCrossProcessQuery(HANDLE ProcessHandle, HANDLE *Buffer)
{
  HANDLE v2; // rsi
  NTSTATUS UserThread; // ebx
  HANDLE v6; // rdi
  int v8; // eax
  int v9; // [rsp+30h] [rbp-29h]
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp+7h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+Fh] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+17h] BYREF
  __int64 v13[2]; // [rsp+78h] [rbp+1Fh] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE ThreadHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  NumberOfBytesWritten = 0LL;
  v2 = 0LL;
  BaseAddress = 0LL;
  ThreadHandle = 0LL;
  Handle = 0LL;
  RegionSize = 96LL;
  *(_OWORD *)v13 = 0LL;
  UserThread = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( UserThread < 0 )
    goto LABEL_11;
  UserThread = RtlpCreateUserThreadEx(
                 ProcessHandle,
                 0LL,
                 0LL,
                 v9,
                 RtlpExtendedHeapInformationWorkerThread,
                 BaseAddress,
                 (__int64)&ThreadHandle,
                 (__int64)v13);
  if ( UserThread < 0 )
    goto LABEL_8;
  if ( *Buffer )
  {
    UserThread = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, *Buffer, ProcessHandle, Buffer, 0xF001Fu, 0, 0);
    if ( UserThread < 0 )
      goto LABEL_8;
  }
  UserThread = NtWriteVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x60uLL, &NumberOfBytesWritten);
  if ( UserThread < 0 )
    goto LABEL_8;
  if ( NumberOfBytesWritten != 96 )
  {
    UserThread = -2147483635;
LABEL_8:
    v6 = ThreadHandle;
    goto LABEL_9;
  }
  v8 = RtlpCreateExecutionRequiredRequest(ProcessHandle, &Handle);
  v6 = ThreadHandle;
  UserThread = v8;
  if ( v8 < 0 || (UserThread = ZwResumeThread(ThreadHandle, 0LL), UserThread < 0) )
  {
    v2 = Handle;
LABEL_9:
    if ( v6 )
    {
      NtTerminateThread(v6, 0);
      NtClose(v6);
    }
    goto LABEL_11;
  }
  NtWaitForSingleObject(v6, 0, 0LL);
  v2 = Handle;
  if ( Handle )
  {
    RtlpDestroyExecutionRequiredRequest(Handle);
    v2 = 0LL;
  }
  NtClose(v6);
  v6 = 0LL;
  UserThread = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x60uLL, &NumberOfBytesWritten);
  if ( UserThread >= 0 )
  {
    if ( NumberOfBytesWritten != 96 )
    {
      UserThread = -2147483635;
      goto LABEL_11;
    }
    UserThread = *((_DWORD *)Buffer + 7);
    goto LABEL_9;
  }
LABEL_11:
  if ( BaseAddress )
    ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
  if ( v2 )
    RtlpDestroyExecutionRequiredRequest(v2);
  return (unsigned int)UserThread;
}
