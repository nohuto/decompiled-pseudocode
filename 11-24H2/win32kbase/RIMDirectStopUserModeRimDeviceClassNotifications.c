/*
 * XREFs of RIMDirectStopUserModeRimDeviceClassNotifications @ 0x14011D7AC
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x14020F320 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x14011D9CC (RIMSyncWalkRimObjList.c)
 *     _lambda_009a2c515aa32fb2c064293734de7ddc_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401D4134 (_lambda_009a2c515aa32fb2c064293734de7ddc_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

__int64 RIMDirectStopUserModeRimDeviceClassNotifications()
{
  bool v0; // bl
  bool v1; // di
  __int64 v2; // rax
  __int64 result; // rax
  bool v4; // bl
  bool v5; // di
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  v0 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v1 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v10) = v1;
    LOBYTE(v11) = v0;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      122,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v2 = lambda_009a2c515aa32fb2c064293734de7ddc_::operator_void____cdecl___RawInputManagerObject___void___();
  result = RIMSyncWalkRimObjList(0LL, 0LL, v2);
  v4 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v4 = 1;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v8,
             v7,
             *(_QWORD *)(v6 + 19392),
             4,
             1,
             124,
             (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  return result;
}
