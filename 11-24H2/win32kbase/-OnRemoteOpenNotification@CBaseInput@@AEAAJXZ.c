/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x14020CDA0
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020C970 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x140054F78 (RimInputTypeToDeviceInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D65E0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  unsigned int v2; // r15d
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  __int64 v10; // rbp
  char v11; // bl
  bool v12; // bp
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  char v16; // bl
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 CurrentProcess; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  char v29; // [rsp+20h] [rbp-68h]
  __int16 v30; // [rsp+30h] [rbp-58h]
  char v31; // [rsp+40h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  void *v33; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v34; // [rsp+98h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v34, "OnRemoteOpenNotification", 0LL);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  UserSessionState = W32GetUserSessionState(v3);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      LODWORD(v33) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1314);
      v9 = -1073741816;
      goto LABEL_7;
    }
    v10 = *(_QWORD *)(UserSessionState + 68920);
  }
  else
  {
    v10 = *(_QWORD *)(UserSessionState + 68904);
  }
  v9 = -1073741816;
  if ( v10 != -1 )
  {
    if ( !v10 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69400),
          2,
          2,
          13,
          (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
      }
      v9 = 0;
      goto LABEL_41;
    }
    v33 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
    v26 = PsGetCurrentProcess(v23, v22, v24, v25);
    v9 = ObDuplicateObject(v26, v10, CurrentProcess, &v33, 0, 512, 2, 0);
    if ( v9 >= 0 )
    {
      v9 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(*((char **)this + 1), &DestinationString, v2, v33, 0, 0LL);
      if ( v9 >= 0 )
        goto LABEL_41;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v11 = 0;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v31 = v9;
      v15 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v30 = 15;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v27 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v27 & 2) == 0)
        || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v11 = 0;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v31 = v9;
      v15 = *(_QWORD *)(W32GetUserSessionState(v27) + 69400);
      v30 = 14;
    }
    v29 = 2;
    goto LABEL_40;
  }
LABEL_7:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = v2;
    v15 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v30 = 12;
    v29 = 4;
LABEL_40:
    LOBYTE(v14) = v12;
    LOBYTE(v13) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v14,
      v15,
      v29,
      2,
      v30,
      (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
      v31);
  }
LABEL_41:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v34);
  return (unsigned int)v9;
}
