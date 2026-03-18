/*
 * XREFs of InputInitialize @ 0x140218A5C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x14005AA08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x14005AA28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x14014883C (--0CTouchProcessor@@QEAA@XZ.c)
 *     IsGetInputSensorThreadingModelSupported @ 0x140158344 (IsGetInputSensorThreadingModelSupported.c)
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 *     ShouldEnableInputVirtualization @ 0x14018A67C (ShouldEnableInputVirtualization.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ivrInitialize@@YAJXZ @ 0x140217B2C (-ivrInitialize@@YAJXZ.c)
 *     ?DeviceAcceleratorInitialize@@YAJXZ @ 0x140218904 (-DeviceAcceleratorInitialize@@YAJXZ.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x14023D618 (-InitializeInputGlobals@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 InputInitialize()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // rcx
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 (**v6)(void); // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(_QWORD); // rax
  CTouchProcessor *v17; // rax
  __int64 v18; // rcx
  CTouchProcessor *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 UserSessionState; // rbx
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(__int64); // rax
  char v31; // [rsp+78h] [rbp+20h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v31);
  *(_DWORD *)(W32GetUserSessionState(v0) + 19192) = 1;
  v2 = InitializeInputGlobals();
  if ( v2 >= 0 )
  {
    *(_QWORD *)(W32GetUserSessionState(v1) + 3072) = 0LL;
    v4 = 0;
    *(_BYTE *)(W32GetUserSessionState(v3) + 3088) = 1;
    v6 = (__int64 (**)(void))(W32GetUserSessionState(v5) + 3152);
    do
    {
      if ( v4 != *(_DWORD *)v6 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 68);
      v7 = (*(v6 - 4))();
      *(v6 - 1) = (__int64 (*)(void))v7;
      if ( !v7 )
      {
        v2 = -1073741823;
        goto LABEL_27;
      }
      v10 = *(_DWORD *)v6;
      v11 = 0;
      if ( (int)IsGetInputSensorThreadingModelSupported(v9, v8) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1346);
      if ( (int)IsGetInputSensorThreadingModelSupported(v13, v12) >= 0 )
      {
        v16 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15, v14) + 48) + 5352LL);
        if ( v16 )
          v11 = v16(v10);
      }
      *((_DWORD *)v6 - 4) = v11;
      if ( !v11 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 80);
      ++v4;
      v6 += 6;
    }
    while ( v4 < 3 );
    v17 = (CTouchProcessor *)Win32AllocPoolZInitImpl(256LL, 0xA8uLL, 0x43547072u);
    if ( v17 )
      v19 = CTouchProcessor::CTouchProcessor(v17);
    else
      v19 = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v18) + 3264) = v19;
    if ( *(_QWORD *)(W32GetUserSessionState(v20) + 3264) )
    {
      v2 = DeviceAcceleratorInitialize(v21);
      if ( v2 >= 0 )
      {
        if ( ShouldEnableInputVirtualization(v22) )
        {
          CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
          *(_DWORD *)(W32GetUserSessionState(v24) + 19508) = CurrentWin32kSessionId;
          *(_DWORD *)(W32GetUserSessionState(v25) + 19504) = 1;
          v2 = ivrInitialize();
          if ( v2 >= 0 )
          {
            UserSessionState = W32GetUserSessionState(v26);
            v29 = *(__int64 (__fastcall **)(__int64))(W32GetUserSessionState(v28) + 19568);
            if ( v29 )
              v2 = v29(UserSessionState + 19560);
            else
              v2 = -1073741637;
          }
        }
      }
    }
    else
    {
      v2 = -1073741801;
    }
    InitializeInputComponents();
  }
LABEL_27:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v31);
  return (unsigned int)v2;
}
