/*
 * XREFs of RtlSetProcessDebugInformation @ 0x180135690
 * Callers:
 *     RtlpSetProcessDebugInformationRemote @ 0x180135AD0 (RtlpSetProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180099350 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCreateUserThreadEx @ 0x1800B4FC0 (RtlpCreateUserThreadEx.c)
 *     RtlControlStackTraceDataBase @ 0x1800E4904 (RtlControlStackTraceDataBase.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x180163C60 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x180163C80 (NtTerminateThread.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlSetProcessDebugInformation(void *a1, int a2, __int64 a3)
{
  int InformationThread; // ebx
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v7; // r8
  HANDLE v8; // rdi
  NTSTATUS v9; // eax
  HANDLE v10; // rcx
  int *v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // r8
  __int64 v14; // [rsp+30h] [rbp-29h]
  _OWORD v15[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+88h] [rbp+2Fh]
  HANDLE v18; // [rsp+C0h] [rbp+67h] BYREF
  int v19; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+7Fh] BYREF

  Timeout.QuadPart = -600000000LL;
  v16 = 0LL;
  memset(v15, 0, sizeof(v15));
  v17 = 0;
  InformationThread = 0;
  Handle = 0LL;
  *(_DWORD *)(a3 + 64) = a2;
  v5 = a2;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
  {
    if ( (a2 & 1) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x2000100) != 0 )
    {
      v11 = *(int **)(a3 + 144);
      if ( !v11 )
        return (unsigned int)-1073741801;
      v19 = *v11;
      InformationThread = ((__int64 (__fastcall *)(_QWORD, int *))qword_1801CE630)(0LL, &v19);
      if ( InformationThread )
        return (unsigned int)InformationThread;
    }
    if ( (v5 & 2) == 0 )
      return (unsigned int)InformationThread;
    v12 = *(_QWORD *)(a3 + 104);
    if ( v12 )
    {
      if ( *(_DWORD *)v12 )
      {
        v13 = (_QWORD *)(v12 + 8);
      }
      else
      {
        if ( *(_DWORD *)(v12 + 4) < 0x18u )
          return (unsigned int)-1073741811;
        v13 = (_QWORD *)(v12 + 8);
        if ( *(_QWORD *)(v12 + 8) || *(_QWORD *)(v12 + 16) )
          return (unsigned int)-1073741811;
      }
      return (unsigned int)RtlControlStackTraceDataBase(*(_DWORD *)v12, *(_DWORD *)(v12 + 4), v13);
    }
    return (unsigned int)-1073741801;
  }
  v18 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget((_QWORD *)a3, (unsigned __int64)a1, 0, &v18);
  if ( (int)result < 0 )
    return result;
  v7 = *(_QWORD *)(a3 + 72);
  if ( v7 > 0xD0 )
    memmove((void *)(a3 + *(_QWORD *)(a3 + 88) + 208LL), (const void *)(a3 + 208), v7 - 208);
  InformationThread = RtlpCreateUserThreadEx(
                        (__int64)v18,
                        0LL,
                        7,
                        0,
                        0LL,
                        0LL,
                        v14,
                        (__int64)RtlpSetProcessDebugInformationRemote,
                        *(_QWORD *)(a3 + 16),
                        &Handle,
                        0LL);
  if ( InformationThread >= 0 )
  {
    v8 = Handle;
    v9 = ZwResumeThread(Handle, 0LL);
    InformationThread = v9;
    v10 = v8;
    if ( v9 < 0 || (v9 = NtWaitForSingleObject(v8, 1u, &Timeout), InformationThread = v9, v10 = v8, v9 < 0) )
    {
      NtTerminateThread(v10, (unsigned int)v9);
    }
    else
    {
      InformationThread = ZwQueryInformationThread(v8, 0LL, v15);
      if ( InformationThread >= 0 )
        InformationThread = v15[0];
    }
    NtClose(v8);
  }
  NtClose(v18);
  return (unsigned int)InformationThread;
}
