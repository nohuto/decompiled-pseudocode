/*
 * XREFs of RIMDirectPnpRemoveUserModeRimDevices @ 0x14011D660
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x14020F320 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x14011D9CC (RIMSyncWalkRimObjList.c)
 *     _lambda_73e2fc7e3e0c65abbb028759e33d66b1_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401D4154 (_lambda_73e2fc7e3e0c65abbb028759e33d66b1_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

__int64 RIMDirectPnpRemoveUserModeRimDevices()
{
  bool v0; // bl
  bool v1; // di
  __int64 UserSessionState; // rax
  int v3; // r8d
  int v4; // edx
  __int64 v5; // rax
  __int64 result; // rax
  bool v7; // bl
  bool v8; // di
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx

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
      99,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v5 = lambda_73e2fc7e3e0c65abbb028759e33d66b1_::operator_void____cdecl___RawInputManagerObject___void___();
  result = RIMSyncWalkRimObjList(0LL, 0LL, v5);
  v7 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v7 = 1;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v11,
             v10,
             *(_QWORD *)(v9 + 19392),
             4,
             1,
             100,
             (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  return result;
}
