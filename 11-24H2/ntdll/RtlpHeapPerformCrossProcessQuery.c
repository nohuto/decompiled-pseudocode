/*
 * XREFs of RtlpHeapPerformCrossProcessQuery @ 0x1801109D0
 * Callers:
 *     RtlpHpTagQueryHeapsRemote @ 0x1800A2080 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceConfig @ 0x18011CB48 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014A590 (RtlpHpStackTraceSerializeRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800A7DD0 (RtlpCreateUserThreadEx.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800DC860 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x18011C7E0 (RtlpDestroyExecutionRequiredRequest.c)
 *     NtWaitForSingleObject @ 0x1801600D0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180160790 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1801607D0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180160830 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x180160A90 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x180160AB0 (NtTerminateThread.c)
 */

__int64 __fastcall RtlpHeapPerformCrossProcessQuery(HANDLE ProcessHandle, HANDLE *Buffer)
{
  HANDLE v2; // rsi
  NTSTATUS v5; // ebx
  HANDLE v6; // rdi
  NTSTATUS v8; // eax
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
  v5 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v5 < 0 )
    goto LABEL_11;
  v5 = RtlpCreateUserThreadEx(
         ProcessHandle,
         0LL,
         3,
         0,
         0LL,
         0LL,
         v9,
         RtlpExtendedHeapInformationWorkerThread,
         BaseAddress,
         &ThreadHandle,
         v13);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( *Buffer )
  {
    v5 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, *Buffer, ProcessHandle, Buffer, 0xF001Fu, 0, 0);
    if ( v5 < 0 )
      goto LABEL_8;
  }
  v5 = NtWriteVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x60uLL, &NumberOfBytesWritten);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( NumberOfBytesWritten != 96 )
  {
    v5 = -2147483635;
LABEL_8:
    v6 = ThreadHandle;
    goto LABEL_9;
  }
  v8 = RtlpCreateExecutionRequiredRequest(ProcessHandle, &Handle);
  v6 = ThreadHandle;
  v5 = v8;
  if ( v8 < 0 || (v5 = ZwResumeThread(ThreadHandle, 0LL), v5 < 0) )
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
  v5 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x60uLL, &NumberOfBytesWritten);
  if ( v5 >= 0 )
  {
    if ( NumberOfBytesWritten != 96 )
    {
      v5 = -2147483635;
      goto LABEL_11;
    }
    v5 = *((_DWORD *)Buffer + 7);
    goto LABEL_9;
  }
LABEL_11:
  if ( BaseAddress )
    ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
  if ( v2 )
    RtlpDestroyExecutionRequiredRequest(v2);
  return (unsigned int)v5;
}
