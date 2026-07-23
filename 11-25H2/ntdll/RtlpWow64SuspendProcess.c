/*
 * XREFs of RtlpWow64SuspendProcess @ 0x180133EC8
 * Callers:
 *     RtlWow64ChangeProcessState @ 0x180133C60 (RtlWow64ChangeProcessState.c)
 *     RtlWow64SuspendProcess @ 0x180133E90 (RtlWow64SuspendProcess.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800B4FC0 (RtlpCreateUserThreadEx.c)
 *     RtlIsCurrentProcess @ 0x1800E50C0 (RtlIsCurrentProcess.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800F8F40 (RtlWow64GetSharedInfoProcess.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwQueryObject @ 0x180163420 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     NtChangeProcessState @ 0x180164510 (NtChangeProcessState.c)
 *     ZwSuspendProcess @ 0x180166BD0 (ZwSuspendProcess.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpWow64SuspendProcess(HANDLE ProcessHandle, HANDLE ProcessStateChangeHandle, unsigned __int8 a3)
{
  __int64 v3; // r15
  HANDLE v5; // rdi
  int SharedInfoProcess; // ebx
  __int64 v8; // rbx
  BOOLEAN IsCurrentProcess; // al
  __int64 v10; // rcx
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG HandleAttributes[2]; // [rsp+28h] [rbp-D8h]
  ULONG Options; // [rsp+30h] [rbp-D0h]
  _BYTE v17[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TargetHandle; // [rsp+70h] [rbp-90h] BYREF
  _OWORD ThreadInformation[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+A0h] [rbp-60h]
  _OWORD v23[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-38h]
  _OWORD ObjectInformation[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v26; // [rsp+100h] [rbp+0h]

  v3 = a3;
  v21 = 0LL;
  v22 = 0;
  v26 = 0LL;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  v17[0] = 0;
  v5 = 0LL;
  v24 = 0LL;
  memset(ObjectInformation, 0, sizeof(ObjectInformation));
  Handle = 0LL;
  TargetHandle = 0LL;
  memset(v23, 0, sizeof(v23));
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(ProcessHandle, v17, v23);
  if ( SharedInfoProcess >= 0 )
  {
    if ( v17[0] && (BYTE4(v23[0]) & 2) != 0 )
    {
      SharedInfoProcess = ZwQueryObject(ProcessHandle, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL);
      if ( SharedInfoProcess >= 0 )
      {
        if ( (WORD2(ObjectInformation[0]) & 0x800) != 0 )
        {
          if ( !ProcessStateChangeHandle
            || (SharedInfoProcess = ZwDuplicateObject(
                                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                      ProcessStateChangeHandle,
                                      ProcessHandle,
                                      &TargetHandle,
                                      0,
                                      0,
                                      2u),
                SharedInfoProcess >= 0) )
          {
            v8 = (__int64)TargetHandle;
            IsCurrentProcess = RtlIsCurrentProcess(ProcessHandle);
            v10 = v8 | 1;
            if ( IsCurrentProcess )
              v10 = v8;
            v11 = RtlpCreateUserThreadEx(
                    ProcessHandle,
                    0LL,
                    102,
                    0,
                    0LL,
                    0LL,
                    Options,
                    (PUSER_THREAD_START_ROUTINE)RtlpWow64SuspendLocalProcess,
                    (PVOID)(v3 | v10),
                    &Handle,
                    0LL);
            v5 = Handle;
            SharedInfoProcess = v11;
            if ( v11 >= 0 )
            {
              NtWaitForSingleObject(Handle, 0, 0LL);
              ZwQueryInformationThread(v5, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
              SharedInfoProcess = ThreadInformation[0];
            }
          }
        }
        else
        {
          SharedInfoProcess = -1073741790;
        }
      }
    }
    else
    {
      if ( ProcessStateChangeHandle )
      {
        HandleAttributes[0] = 0;
        LODWORD(ReturnLength) = 0;
        v12 = NtChangeProcessState(
                ProcessStateChangeHandle,
                ProcessHandle,
                ProcessStateChangeSuspend,
                0LL,
                (SIZE_T)ReturnLength,
                *(ULONG64 *)HandleAttributes);
      }
      else
      {
        v12 = ZwSuspendProcess(ProcessHandle);
      }
      SharedInfoProcess = v12;
    }
  }
  if ( TargetHandle )
    ZwDuplicateObject(ProcessHandle, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( v5 )
    NtClose(v5);
  return (unsigned int)SharedInfoProcess;
}
