/*
 * XREFs of RtlpHpEnvThreadSuspend @ 0x180033BC0
 * Callers:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180033990 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x180163C60 (ZwResumeThread.c)
 *     ZwGetContextThread @ 0x180165170 (ZwGetContextThread.c)
 *     ZwOpenThread @ 0x180165930 (ZwOpenThread.c)
 *     NtSuspendThread @ 0x180166BF0 (NtSuspendThread.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpEnvThreadSuspend(unsigned int a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  NTSTATUS ContextThread; // ebx
  HANDLE ThreadHandle; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *ThreadInformation; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+54h] [rbp-ACh]
  _CLIENT_ID ClientId; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  struct _CONTEXT ThreadContext; // [rsp+A0h] [rbp-60h] BYREF

  ThreadHandle = 0LL;
  ClientId.UniqueProcess = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ClientId.UniqueThread = (void *)a1;
  ContextThread = ZwOpenThread(&ThreadHandle, 0x81Au, &ObjectAttributes, &ClientId);
  if ( ContextThread >= 0 )
  {
    ContextThread = NtSuspendThread(ThreadHandle, 0LL);
    if ( ContextThread >= 0 )
    {
      ContextThread = ZwGetContextThread(ThreadHandle, &ThreadContext);
      if ( ContextThread >= 0 )
      {
        v11 = 0LL;
        ThreadInformation = &v11;
        v14 = 8;
        v13 = 6232;
        ContextThread = ZwQueryInformationThread(
                          ThreadHandle,
                          ThreadTebInformationAtomic,
                          &ThreadInformation,
                          0x10u,
                          0LL);
        if ( ContextThread >= 0 )
        {
          if ( v11 != a2 )
          {
            v10 = 0;
            ZwQueryInformationThread(ThreadHandle, ThreadIdealProcessorEx, &v10, 4u, 0LL);
            ContextThread = 0;
            *a3 = ThreadHandle;
            *a4 = BYTE2(v10);
            return (unsigned int)ContextThread;
          }
          ContextThread = -2147483631;
        }
      }
      ZwResumeThread(ThreadHandle, 0LL);
    }
  }
  if ( ThreadHandle )
    NtClose(ThreadHandle);
  return (unsigned int)ContextThread;
}
