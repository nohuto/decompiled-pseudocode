/*
 * XREFs of RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1401D6E40
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x14020F320 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x14011D9CC (RIMSyncWalkRimObjList.c)
 *     _lambda_396116378ddc845dddb42d191e6dcd2c_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401D4144 (_lambda_396116378ddc845dddb42d191e6dcd2c_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

void RIMDirectStartUserModeRimDeviceClassNotifications()
{
  bool v0; // bl
  bool v1; // di
  __int64 UserSessionState; // rax
  int v3; // r8d
  int v4; // edx
  void (__fastcall *v5)(__int64); // rax
  bool v6; // bl
  bool v7; // di
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx

  v0 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v1 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v3) = v1;
    LOBYTE(v4) = v0;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v3,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      120,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v5 = lambda_396116378ddc845dddb42d191e6dcd2c_::operator_void____cdecl___RawInputManagerObject___void___();
  RIMSyncWalkRimObjList(0LL, 0LL, (void (__fastcall *)(void *, __int64))v5);
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(v8 + 19392),
      4,
      1,
      121,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
}
