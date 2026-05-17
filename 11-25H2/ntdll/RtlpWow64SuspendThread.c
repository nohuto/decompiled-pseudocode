/*
 * XREFs of RtlpWow64SuspendThread @ 0x1800FAB70
 * Callers:
 *     RtlWow64SuspendThread @ 0x180112F10 (RtlWow64SuspendThread.c)
 *     RtlWow64ChangeThreadState @ 0x180115610 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800B4FC0 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwQueryObject @ 0x180163420 (ZwQueryObject.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1801636E0 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x180163C60 (ZwResumeThread.c)
 *     NtChangeThreadState @ 0x180164530 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x180166BF0 (NtSuspendThread.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpWow64SuspendThread(__int64 a1, __int64 a2, _DWORD *a3)
{
  int VirtualMemory; // ebx
  void *UniqueProcess; // rcx
  HANDLE v8; // rdi
  int v9; // edi
  __int64 v11; // rcx
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  __int64 v13; // [rsp+30h] [rbp-D0h]
  HANDLE ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v17; // [rsp+78h] [rbp-88h] BYREF
  __int128 v18; // [rsp+80h] [rbp-80h]
  __int128 v19; // [rsp+90h] [rbp-70h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  _DWORD v23[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-38h]
  __int64 v25; // [rsp+D0h] [rbp-30h]
  int v26; // [rsp+D8h] [rbp-28h]
  int v27; // [rsp+DCh] [rbp-24h]
  __int128 v28; // [rsp+E0h] [rbp-20h]
  _OWORD v29[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]
  _OWORD v32[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v33; // [rsp+140h] [rbp+40h]
  _OWORD v34[3]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v35; // [rsp+178h] [rbp+78h]

  ProcessHandle = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v30 = 0LL;
  memset(v29, 0, sizeof(v29));
  v31 = 0;
  v35 = 0LL;
  memset(v34, 0, sizeof(v34));
  v33 = 0LL;
  v23[1] = 0;
  v27 = 0;
  memset(v32, 0, sizeof(v32));
  v21 = 0LL;
  v22 = 0;
  v19 = 0LL;
  Handle = 0LL;
  v20 = 0LL;
  VirtualMemory = ZwDuplicateObject(-1LL, a1, -1LL, &Handle, 2048, 0, 0);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  HIDWORD(ReturnLength) = 0;
  VirtualMemory = ZwQueryInformationThread(Handle, 0LL, &v19);
  NtClose(Handle);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  v18 = v20;
  if ( (void *)v20 == UniqueProcess )
  {
    ProcessHandle = (HANDLE)-1LL;
  }
  else
  {
    v23[0] = 48;
    v24 = 0LL;
    v26 = 0;
    v25 = 0LL;
    v28 = 0LL;
    VirtualMemory = NtOpenProcess(&ProcessHandle, 1106LL, v23, &v20);
  }
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( v18 == *(_OWORD *)&NtCurrentTeb()->ClientId )
    goto LABEL_11;
  v8 = ProcessHandle;
  Handle = 0LL;
  VirtualMemory = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &Handle, 8u, 0LL);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( !Handle )
    goto LABEL_11;
  VirtualMemory = ZwReadVirtualMemory(v8, (char *)Handle + 1160, v32, 40LL, 0LL);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( (BYTE4(v32[0]) & 2) == 0 )
  {
LABEL_11:
    v9 = 0;
LABEL_12:
    if ( a2 )
    {
      LODWORD(ReturnLength) = 0;
      VirtualMemory = NtChangeThreadState(a2, a1, 0LL, 0LL, ReturnLength, 0);
      if ( v9 )
        ZwResumeThread(a1, 0LL);
    }
    else if ( !v9 )
    {
      VirtualMemory = NtSuspendThread(a1, a3);
    }
    goto LABEL_15;
  }
  VirtualMemory = ZwQueryObject(a1, 0LL, v34, 56LL, 0LL);
  if ( VirtualMemory < 0 )
    goto LABEL_15;
  if ( (BYTE4(v34[0]) & 2) == 0 )
  {
    VirtualMemory = -1073741790;
    goto LABEL_15;
  }
  VirtualMemory = ZwDuplicateObject(-1LL, a1, ProcessHandle, &v16, 1050634, 0, 0);
  if ( VirtualMemory >= 0 )
  {
    v9 = 1;
    v11 = v16;
    if ( (void *)v18 != NtCurrentTeb()->ClientId.UniqueProcess )
      v11 = v16 | 1;
    VirtualMemory = RtlpCreateUserThreadEx(
                      (__int64)ProcessHandle,
                      0LL,
                      102,
                      0,
                      0LL,
                      0LL,
                      v13,
                      (__int64)RtlpWow64SuspendThreadWorker,
                      v11,
                      &v17,
                      0LL);
    if ( VirtualMemory >= 0 )
    {
      NtWaitForSingleObject(v17, 0, 0LL);
      HIDWORD(ReturnLength) = 0;
      ZwQueryInformationThread(v17, 0LL, v29);
      VirtualMemory = v29[0];
      if ( SLODWORD(v29[0]) >= 0 )
      {
        if ( a3 )
          *a3 = v29[0];
        VirtualMemory = 0;
        goto LABEL_12;
      }
    }
  }
LABEL_15:
  if ( v16 )
    ZwDuplicateObject(ProcessHandle, v16, 0LL, 0LL, 0, 0, 3);
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  if ( v17 )
    NtClose(v17);
  return (unsigned int)VirtualMemory;
}
