/*
 * XREFs of RtlpWow64SuspendThread @ 0x1800F3B20
 * Callers:
 *     RtlWow64SuspendThread @ 0x18010B240 (RtlWow64SuspendThread.c)
 *     RtlWow64ChangeThreadState @ 0x18010D980 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800A7DD0 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x1801600D0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwQueryObject @ 0x180160250 (ZwQueryObject.c)
 *     NtQueryInformationProcess @ 0x180160370 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x180160510 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1801607D0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180160830 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x180160A90 (ZwResumeThread.c)
 *     NtChangeThreadState @ 0x180161360 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x180163A20 (NtSuspendThread.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpWow64SuspendThread(
        HANDLE ThreadHandle,
        HANDLE ThreadStateChangeHandle,
        PULONG PreviousSuspendCount)
{
  NTSTATUS VirtualMemory; // ebx
  void *UniqueProcess; // rcx
  HANDLE v8; // rdi
  int v9; // edi
  void *v11; // rcx
  ACCESS_MASK DesiredAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG HandleAttributes[2]; // [rsp+28h] [rbp-D8h]
  ULONG Options; // [rsp+30h] [rbp-D0h]
  HANDLE ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE TargetHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE SourceHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  _CLIENT_ID v19; // [rsp+80h] [rbp-80h]
  __int128 ThreadInformation; // [rsp+90h] [rbp-70h] BYREF
  _CLIENT_ID ClientId; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v25[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v26; // [rsp+110h] [rbp+10h]
  int v27; // [rsp+118h] [rbp+18h]
  _OWORD Buffer[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v29; // [rsp+140h] [rbp+40h]
  _OWORD ObjectInformation[3]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v31; // [rsp+178h] [rbp+78h]

  ProcessHandle = 0LL;
  SourceHandle = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  memset(v25, 0, sizeof(v25));
  v27 = 0;
  v31 = 0LL;
  memset(ObjectInformation, 0, sizeof(ObjectInformation));
  v29 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(Buffer, 0, sizeof(Buffer));
  v22 = 0LL;
  v23 = 0;
  ThreadInformation = 0LL;
  TargetHandle = 0LL;
  ClientId = 0LL;
  VirtualMemory = ZwDuplicateObject(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    ThreadHandle,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &TargetHandle,
                    0x800u,
                    0,
                    0);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  VirtualMemory = ZwQueryInformationThread(TargetHandle, ThreadBasicInformation, &ThreadInformation, 0x30u, 0LL);
  NtClose(TargetHandle);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  v19 = ClientId;
  if ( ClientId.UniqueProcess == UniqueProcess )
  {
    ProcessHandle = (HANDLE)-1LL;
  }
  else
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    VirtualMemory = NtOpenProcess(&ProcessHandle, 0x452u, &ObjectAttributes, &ClientId);
  }
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( *(_OWORD *)&v19 == *(_OWORD *)&NtCurrentTeb()->ClientId )
    goto LABEL_11;
  v8 = ProcessHandle;
  TargetHandle = 0LL;
  VirtualMemory = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &TargetHandle, 8u, 0LL);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( !TargetHandle )
    goto LABEL_11;
  VirtualMemory = ZwReadVirtualMemory(v8, (char *)TargetHandle + 1168, Buffer, 0x28uLL, 0LL);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( (BYTE4(Buffer[0]) & 2) == 0 )
  {
LABEL_11:
    v9 = 0;
LABEL_12:
    if ( ThreadStateChangeHandle )
    {
      HandleAttributes[0] = 0;
      DesiredAccess[0] = 0;
      VirtualMemory = NtChangeThreadState(
                        ThreadStateChangeHandle,
                        ThreadHandle,
                        ThreadStateChangeSuspend,
                        0LL,
                        *(SIZE_T *)DesiredAccess,
                        *(ULONG64 *)HandleAttributes);
      if ( v9 )
        ZwResumeThread(ThreadHandle, 0LL);
    }
    else if ( !v9 )
    {
      VirtualMemory = NtSuspendThread(ThreadHandle, PreviousSuspendCount);
    }
    goto LABEL_15;
  }
  VirtualMemory = ZwQueryObject(ThreadHandle, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( (BYTE4(ObjectInformation[0]) & 2) == 0 )
  {
    VirtualMemory = -1073741790;
    goto LABEL_15;
  }
  VirtualMemory = ZwDuplicateObject(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    ThreadHandle,
                    ProcessHandle,
                    &SourceHandle,
                    0x10080Au,
                    0,
                    0);
  if ( VirtualMemory >= 0 )
  {
    v9 = 1;
    v11 = SourceHandle;
    if ( v19.UniqueProcess != NtCurrentTeb()->ClientId.UniqueProcess )
      v11 = (void *)((unsigned __int64)SourceHandle | 1);
    VirtualMemory = RtlpCreateUserThreadEx(
                      ProcessHandle,
                      0LL,
                      102,
                      0,
                      0LL,
                      0LL,
                      Options,
                      RtlpWow64SuspendThreadWorker,
                      v11,
                      &Handle,
                      0LL);
    if ( VirtualMemory >= 0 )
    {
      NtWaitForSingleObject(Handle, 0, 0LL);
      ZwQueryInformationThread(Handle, ThreadBasicInformation, v25, 0x30u, 0LL);
      VirtualMemory = v25[0];
      if ( SLODWORD(v25[0]) >= 0 )
      {
        if ( PreviousSuspendCount )
          *PreviousSuspendCount = v25[0];
        VirtualMemory = 0;
        goto LABEL_12;
      }
    }
  }
LABEL_15:
  if ( SourceHandle )
    ZwDuplicateObject(ProcessHandle, SourceHandle, 0LL, 0LL, 0, 0, 3u);
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)VirtualMemory;
}
