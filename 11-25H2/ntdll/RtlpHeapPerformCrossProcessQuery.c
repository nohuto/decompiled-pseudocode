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

__int64 __fastcall RtlpHeapPerformCrossProcessQuery(__int64 a1, __int64 a2)
{
  HANDLE v2; // rsi
  int UserThread; // ebx
  HANDLE v6; // rdi
  int v8; // eax
  __int64 v9; // [rsp+60h] [rbp+7h] BYREF
  HANDLE v10; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v11; // [rsp+70h] [rbp+17h] BYREF
  __int128 v12; // [rsp+78h] [rbp+1Fh]
  __int64 v13; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh]

  v9 = 0LL;
  v2 = 0LL;
  v13 = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  v11 = 96LL;
  v12 = 0LL;
  UserThread = ZwAllocateVirtualMemory(a1, &v13, 0LL, &v11, 12288, 4);
  if ( UserThread < 0 )
    goto LABEL_11;
  UserThread = RtlpCreateUserThreadEx(a1, 0, 3, 0, 0LL, 0LL);
  if ( UserThread < 0 )
    goto LABEL_8;
  if ( *(_QWORD *)a2 )
  {
    UserThread = ZwDuplicateObject(-1LL, *(_QWORD *)a2, a1, a2, 983071, 0, 0);
    if ( UserThread < 0 )
      goto LABEL_8;
  }
  UserThread = NtWriteVirtualMemory(a1, v13, a2, 96LL, &v9);
  if ( UserThread < 0 )
    goto LABEL_8;
  if ( v9 != 96 )
  {
    UserThread = -2147483635;
LABEL_8:
    v6 = Handle;
    goto LABEL_9;
  }
  v8 = RtlpCreateExecutionRequiredRequest(a1, &v10);
  v6 = Handle;
  UserThread = v8;
  if ( v8 < 0 || (UserThread = ZwResumeThread(Handle, 0LL), UserThread < 0) )
  {
    v2 = v10;
LABEL_9:
    if ( v6 )
    {
      NtTerminateThread(v6, 0LL);
      NtClose(v6);
    }
    goto LABEL_11;
  }
  NtWaitForSingleObject(v6, 0, 0LL);
  v2 = v10;
  if ( v10 )
  {
    RtlpDestroyExecutionRequiredRequest(v10);
    v2 = 0LL;
  }
  NtClose(v6);
  v6 = 0LL;
  UserThread = ZwReadVirtualMemory(a1, v13, a2, 96LL, &v9);
  if ( UserThread >= 0 )
  {
    if ( v9 != 96 )
    {
      UserThread = -2147483635;
      goto LABEL_11;
    }
    UserThread = *(_DWORD *)(a2 + 28);
    goto LABEL_9;
  }
LABEL_11:
  if ( v13 )
    ZwFreeVirtualMemory(a1, &v13, &v11, 0x8000LL);
  if ( v2 )
    RtlpDestroyExecutionRequiredRequest(v2);
  return (unsigned int)UserThread;
}
