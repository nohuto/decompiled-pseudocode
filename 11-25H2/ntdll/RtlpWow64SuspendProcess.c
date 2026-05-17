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

__int64 __fastcall RtlpWow64SuspendProcess(void *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r15
  HANDLE v5; // rdi
  NTSTATUS SharedInfoProcess; // ebx
  __int64 v8; // rbx
  bool IsCurrentProcess; // al
  __int64 v10; // rcx
  int v11; // eax
  NTSTATUS v12; // eax
  __int64 v14; // [rsp+30h] [rbp-D0h]
  char v15[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v18[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+98h] [rbp-68h]
  int v20; // [rsp+A0h] [rbp-60h]
  _OWORD v21[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-38h]
  _OWORD v23[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v24; // [rsp+100h] [rbp+0h]

  v3 = a3;
  v19 = 0LL;
  v20 = 0;
  v24 = 0LL;
  memset(v18, 0, sizeof(v18));
  v15[0] = 0;
  v5 = 0LL;
  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  Handle = 0LL;
  v17 = 0LL;
  memset(v21, 0, sizeof(v21));
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(a1, v15, (__int64)v21);
  if ( SharedInfoProcess >= 0 )
  {
    if ( v15[0] && (BYTE4(v21[0]) & 2) != 0 )
    {
      SharedInfoProcess = ZwQueryObject(a1, 0LL, v23, 56LL, 0LL);
      if ( SharedInfoProcess >= 0 )
      {
        if ( (WORD2(v23[0]) & 0x800) != 0 )
        {
          if ( !a2 || (SharedInfoProcess = ZwDuplicateObject(-1LL, a2, a1, &v17, 0, 0, 2), SharedInfoProcess >= 0) )
          {
            v8 = v17;
            IsCurrentProcess = RtlIsCurrentProcess((__int64)a1);
            v10 = v8 | 1;
            if ( IsCurrentProcess )
              v10 = v8;
            v11 = RtlpCreateUserThreadEx(
                    (__int64)a1,
                    0LL,
                    102,
                    0,
                    0LL,
                    0LL,
                    v14,
                    (__int64)RtlpWow64SuspendLocalProcess,
                    v3 | v10,
                    &Handle,
                    0LL);
            v5 = Handle;
            SharedInfoProcess = v11;
            if ( v11 >= 0 )
            {
              NtWaitForSingleObject(Handle, 0, 0LL);
              ZwQueryInformationThread(v5, 0LL, v18);
              SharedInfoProcess = v18[0];
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
      if ( a2 )
        v12 = NtChangeProcessState(a2, a1, 0LL, 0LL, 0, 0);
      else
        v12 = ZwSuspendProcess(a1);
      SharedInfoProcess = v12;
    }
  }
  if ( v17 )
    ZwDuplicateObject(a1, v17, 0LL, 0LL, 0, 0, 3);
  if ( v5 )
    NtClose(v5);
  return (unsigned int)SharedInfoProcess;
}
