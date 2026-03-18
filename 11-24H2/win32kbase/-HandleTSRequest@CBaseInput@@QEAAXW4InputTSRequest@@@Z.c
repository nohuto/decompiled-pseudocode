/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020C970
 * Callers:
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x140106334 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x14020CDA0 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x14020D850 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x14020D954 (-SensorInitialized@CBaseInput@@IEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

char __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, unsigned int a2)
{
  __int64 v2; // rdi
  _UNKNOWN **v4; // rax
  char v5; // si
  bool v6; // bl
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(v4) = isChildPartition((__int64)a1);
  if ( !(_BYTE)v4 )
  {
    if ( CBaseInput::SensorInitialized(a1) )
    {
      if ( (unsigned int)v2 < 4 )
      {
        if ( *((_DWORD *)&unk_140254530 + 6 * v2) != (_DWORD)v2 )
        {
          v11 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1105);
        }
        if ( *((_DWORD *)&unk_140254530 + 6 * v2 + 4) >= 0x13u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
        {
          funcs_14020CADC[3 * v2](a1);
        }
        else
        {
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v11, 1);
          CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_140254530 + 6 * v2 + 4));
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v11);
        }
      }
      LOBYTE(v4) = (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v2);
    }
    else
    {
      if ( (((_DWORD)v2 - 1) & 0xFFFFFFFD) != 0 )
      {
        v11 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1037);
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v5 = 0;
      }
      v4 = &WPP_RECORDER_INITIALIZED;
      v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v8) = v6;
        LOBYTE(v9) = v5;
        LOBYTE(v4) = WPP_RECORDER_AND_TRACE_SF_(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v9,
                       v8,
                       *(_QWORD *)(UserSessionState + 69400),
                       3,
                       3,
                       11,
                       (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
      }
    }
  }
  return (char)v4;
}
