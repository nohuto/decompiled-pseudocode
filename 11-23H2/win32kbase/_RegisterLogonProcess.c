/*
 * XREFs of _RegisterLogonProcess @ 0x1C00BE030
 * Callers:
 *     NtUserRegisterLogonProcess @ 0x1C00BDF70 (NtUserRegisterLogonProcess.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     isInputVirtualizationEnabled @ 0x1C004FF0C (isInputVirtualizationEnabled.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     CreateKernelEvent @ 0x1C00AEA20 (CreateKernelEvent.c)
 *     ImSessionStart @ 0x1C00BB5B0 (ImSessionStart.c)
 *     IsPrivileged @ 0x1C00C2690 (IsPrivileged.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00CFFF4 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1C01ED804 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 *     WmsgpConnect @ 0x1C02BFB4C (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 KernelEvent; // rdi
  __int64 v19; // rax
  char *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int *v26; // rax
  _QWORD v27[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  if ( !gpidLogon )
  {
    if ( !(unsigned int)IsPrivileged(&psTcb) )
    {
      v7 = 5;
      goto LABEL_4;
    }
    if ( !isInputVirtualizationEnabled(v15, v14, v16, v17) || gpIVThread )
      goto LABEL_25;
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    v19 = CreateKernelEvent(SynchronizationEvent, 0);
    if ( KernelEvent )
    {
      if ( v19 )
      {
        v27[0] = KernelEvent;
        v27[1] = v19;
        v21 = SendIVWorkerThreadRequest((struct _IVWORKER_INIT *)v27);
        goto LABEL_24;
      }
      v20 = (char *)KernelEvent;
    }
    else
    {
      if ( !v19 )
      {
LABEL_23:
        v21 = -1073741801;
LABEL_24:
        if ( v21 < 0 )
          return 0LL;
LABEL_25:
        gpidLogon = v2;
        *((_DWORD *)gpsi + 567) = v2;
        if ( gbWinLogonRpcHandleRundownCompleted )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 130LL);
          ExReInitializeRundownProtection(&gWinLogonRpcHandleRundownRef);
        }
        else
        {
          ExInitializeRundownProtection(&gWinLogonRpcHandleRundownRef);
        }
        gbWinLogonRpcHandleRundownCompleted = 0;
        v26 = (unsigned int *)SGDGetUserSessionState(v23, v22, v24, v25);
        v13 = WmsgpConnect(a2, *v26);
        goto LABEL_29;
      }
      v20 = (char *)v19;
    }
    Win32FreePool(v20);
    goto LABEL_23;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v7 = 0x2000000;
LABEL_4:
    UserSetLastError(v7);
    return 0LL;
  }
  gpidLogonUI = v2;
  if ( !(unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage(v5, v4, v6)
    || gbImInitialized
    || *(_DWORD *)SGDGetUserSessionState(v10, v9, v11, v12) == gServiceSessionId
    || (v13 = ImSessionStart(), v13 < 0) )
  {
    v13 = 0;
  }
  else
  {
    gbImInitialized = 1;
  }
LABEL_29:
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  return v13 >= 0;
}
