/*
 * XREFs of ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x1800E7930
 * Callers:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180145E20 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024D0C0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E8790 (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened(__int64 a1, int a2, int a3, int a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  int v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+34h] [rbp-55h] BYREF
  _DWORD v13[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+78h] [rbp-11h]
  int v19; // [rsp+7Ch] [rbp-Dh]
  __int64 *v20; // [rsp+80h] [rbp-9h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  _DWORD *v22; // [rsp+90h] [rbp+7h]
  __int64 v23; // [rsp+98h] [rbp+Fh]
  int *v24; // [rsp+A0h] [rbp+17h]
  __int64 v25; // [rsp+A8h] [rbp+1Fh]
  int *v26; // [rsp+B0h] [rbp+27h]
  __int64 v27; // [rsp+B8h] [rbp+2Fh]

  v8 = LauncherTelemetryLogging::Provider();
  if ( *(_DWORD *)v8 > 4u
    && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x400000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v9 = *(_QWORD *)(a1 + 272);
    v26 = &v11;
    v27 = 4LL;
    v24 = &v12;
    v25 = 4LL;
    v22 = v13;
    v20 = &v14;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = *((_QWORD *)v8 + 1);
    v23 = 4LL;
    EventDescriptor.Keyword = 0x400000000000LL;
    v11 = a4;
    v12 = a3;
    v13[0] = a2;
    v14 = 0x1000000LL;
    v21 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v17 = &unk_1807FA83E;
    UserData.Reserved = 2;
    v18 = 55;
    v19 = 1;
    v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v8) = EventWriteTransfer(*((_QWORD *)v8 + 4), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 6u, &UserData);
  }
  return (int)v8;
}
