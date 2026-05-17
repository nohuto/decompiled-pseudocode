/*
 * XREFs of SendMessageToWERService @ 0x1800015D0
 * Callers:
 *     ReportExceptionInternal @ 0x18000287C (ReportExceptionInternal.c)
 *     RtlReportSilentProcessExit @ 0x180002F20 (RtlReportSilentProcessExit.c)
 * Callees:
 *     WaitForWerSvc @ 0x18000103C (WaitForWerSvc.c)
 *     WerpAllocateAndInitializeSid @ 0x1800010F8 (WerpAllocateAndInitializeSid.c)
 *     SignalStartWerSvc @ 0x18000182C (SignalStartWerSvc.c)
 *     WerpFreeSid @ 0x18011F494 (WerpFreeSid.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x180162BE0 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x180162E40 (ZwAlpcSendWaitReceivePort.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SendMessageToWERService(__int64 a1, __int64 a2)
{
  NTSTATUS started; // ebx
  int v6; // eax
  size_t v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  void *v12; // rdi
  char v13; // dl
  __int64 *v14; // rsi
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+28h] [rbp-D8h]
  int v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+38h] [rbp-C8h]
  int v21; // [rsp+40h] [rbp-C0h]
  int v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v24; // [rsp+64h] [rbp-9Ch]
  __int64 SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  void *v27; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  __int128 v30; // [rsp+90h] [rbp-70h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-50h]
  __int128 v33; // [rsp+C0h] [rbp-40h]
  _BYTE v34[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-20h]

  Handle = 0LL;
  v29 = 0LL;
  *(_QWORD *)&v33 = 0LL;
  DWORD2(v33) = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  memset_thunk_772440563353939046(v34, 0, 0x48uLL);
  v27 = 0LL;
  v23 = 0;
  v24 = 1280;
  v28 = 0LL;
  SystemInformation = 0LL;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
    if ( started >= 0 )
    {
      v6 = WaitForWerSvc(SystemInformation);
      started = v6;
      if ( v6 >= 0 && v6 != 258 )
      {
        DWORD1(v30) = 0;
        *((_QWORD *)&v30 + 1) = L"\\WindowsErrorReportingServicePort";
        v7 = 2 * wcslen(L"\\WindowsErrorReportingServicePort");
        v35 = 1400LL;
        if ( v7 >= 0xFFFE )
          LOWORD(v7) = -4;
        LOWORD(v30) = v7;
        WORD1(v30) = v7 + 2;
        v11 = WerpAllocateAndInitializeSid((__int64)&v23, v8, v9, v10, v17, v18, v19, v20, v21, v22, &v27);
        v12 = v27;
        started = v11;
        if ( v11 >= 0 )
        {
          v33 = 0LL;
          LODWORD(v31) = 48;
          *((_QWORD *)&v31 + 1) = 0LL;
          DWORD2(v32) = 0;
          *(_QWORD *)&v32 = 0LL;
          if ( HIDWORD(SystemInformation) == -1 )
          {
            v13 = 1;
          }
          else
          {
            v13 = 0;
            v28 = -10000LL * SHIDWORD(SystemInformation);
          }
          v14 = &v28;
          if ( v13 )
            v14 = 0LL;
          v15 = NtAlpcConnectPort(&Handle, &v30, &v31, v34, 0x20000, v27, 0LL, 0LL, 0LL, 0LL, v14);
          started = v15;
          if ( v15 >= 0 && v15 != 258 )
          {
            v29 = 1400LL;
            v16 = ZwAlpcSendWaitReceivePort(Handle, 0x20000LL, a1, 0LL, a2, &v29, 0LL, v14);
            started = v16;
            if ( v16 >= 0 && v16 != 258 )
            {
              started = 0;
              if ( *(int *)(a2 + 44) < 0 )
                started = *(_DWORD *)(a2 + 44);
            }
          }
        }
        if ( v12 )
          WerpFreeSid(v12);
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)started;
}
