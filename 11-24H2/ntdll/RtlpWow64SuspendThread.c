/*
 * XREFs of RtlpWow64SuspendThread @ 0x1800F8F50
 * Callers:
 *     RtlWow64SuspendThread @ 0x1801101A0 (RtlWow64SuspendThread.c)
 *     RtlWow64ChangeThreadState @ 0x1801126A0 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x18008C310 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwQueryObject @ 0x180161E90 (ZwQueryObject.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x180162150 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x1801626D0 (ZwResumeThread.c)
 *     NtChangeThreadState @ 0x180162FA0 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x180165660 (NtSuspendThread.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpWow64SuspendThread(__int64 a1, __int64 a2, _DWORD *a3)
{
  int VirtualMemory; // ebx
  void *UniqueProcess; // rcx
  HANDLE v8; // rdi
  int v9; // edi
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-D0h]
  HANDLE ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v15; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v16; // [rsp+78h] [rbp-88h] BYREF
  __int128 v17; // [rsp+80h] [rbp-80h]
  __int128 v18; // [rsp+90h] [rbp-70h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  _DWORD v22[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  int v25; // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+DCh] [rbp-24h]
  __int128 v27; // [rsp+E0h] [rbp-20h]
  _OWORD v28[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v29; // [rsp+110h] [rbp+10h]
  int v30; // [rsp+118h] [rbp+18h]
  _OWORD v31[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v32; // [rsp+140h] [rbp+40h]
  _OWORD v33[3]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v34; // [rsp+178h] [rbp+78h]

  ProcessHandle = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v29 = 0LL;
  memset(v28, 0, sizeof(v28));
  v30 = 0;
  v34 = 0LL;
  memset(v33, 0, sizeof(v33));
  v32 = 0LL;
  v22[1] = 0;
  v26 = 0;
  memset(v31, 0, sizeof(v31));
  v20 = 0LL;
  v21 = 0;
  v18 = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  VirtualMemory = ZwDuplicateObject(-1LL, a1, -1LL, &Handle, 2048, 0, 0);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  VirtualMemory = ZwQueryInformationThread(Handle, 0LL, &v18, 48LL, 0LL);
  NtClose(Handle);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  v17 = v19;
  if ( (void *)v19 == UniqueProcess )
  {
    ProcessHandle = (HANDLE)-1LL;
  }
  else
  {
    v22[0] = 48;
    v23 = 0LL;
    v25 = 0;
    v24 = 0LL;
    v27 = 0LL;
    VirtualMemory = NtOpenProcess(&ProcessHandle, 1106LL, v22, &v19);
  }
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( v17 == *(_OWORD *)&NtCurrentTeb()->ClientId )
    goto LABEL_11;
  v8 = ProcessHandle;
  Handle = 0LL;
  VirtualMemory = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &Handle, 8u, 0LL);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( !Handle )
    goto LABEL_11;
  VirtualMemory = ZwReadVirtualMemory(v8, (char *)Handle + 1160, v31, 40LL, 0LL);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( (BYTE4(v31[0]) & 2) == 0 )
  {
LABEL_11:
    v9 = 0;
LABEL_12:
    if ( a2 )
    {
      VirtualMemory = NtChangeThreadState(a2, a1, 0LL, 0LL, 0, 0);
      if ( v9 )
        ZwResumeThread(a1, 0LL);
    }
    else if ( !v9 )
    {
      VirtualMemory = NtSuspendThread(a1, a3);
    }
    goto LABEL_15;
  }
  VirtualMemory = ZwQueryObject(a1, 0LL, v33, 56LL, 0LL);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( (BYTE4(v33[0]) & 2) == 0 )
  {
    VirtualMemory = -1073741790;
    goto LABEL_15;
  }
  LODWORD(v12) = 0;
  VirtualMemory = ZwDuplicateObject(-1LL, a1, ProcessHandle, &v15, 1050634, 0, v12);
  if ( VirtualMemory >= 0 )
  {
    v9 = 1;
    v11 = v15;
    if ( (void *)v17 != NtCurrentTeb()->ClientId.UniqueProcess )
      v11 = v15 | 1;
    VirtualMemory = RtlpCreateUserThreadEx(
                      (__int64)ProcessHandle,
                      0LL,
                      102,
                      0,
                      0LL,
                      0LL,
                      v12,
                      (__int64)RtlpWow64SuspendThreadWorker,
                      v11,
                      &v16,
                      0LL);
    if ( VirtualMemory >= 0 )
    {
      NtWaitForSingleObject(v16, 0, 0LL);
      ZwQueryInformationThread(v16, 0LL, v28, 48LL, 0LL);
      VirtualMemory = v28[0];
      if ( SLODWORD(v28[0]) >= 0 )
      {
        if ( a3 )
          *a3 = v28[0];
        VirtualMemory = 0;
        goto LABEL_12;
      }
    }
  }
LABEL_15:
  if ( v15 )
  {
    LODWORD(v12) = 3;
    ZwDuplicateObject(ProcessHandle, v15, 0LL, 0LL, 0, 0, v12);
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  if ( v16 )
    NtClose(v16);
  return (unsigned int)VirtualMemory;
}
