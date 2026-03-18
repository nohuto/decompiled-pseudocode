/*
 * XREFs of RIMIDEValidateLogicalDeviceSize @ 0x1401E6F94
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1401DDEA4 (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMIDEValidateLogicalDeviceSize(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r9d
  bool v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // bl
  bool v11; // di
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx

  v3 = 0;
  if ( a2 == -1 || a3 == -1 )
  {
    v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 19392),
        2,
        1,
        58,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
    }
    v3 = -1073741668;
  }
  if ( a1[33] - a1[31] <= 1 || a1[34] - a1[32] <= 1 )
  {
    v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 19392),
        2,
        1,
        59,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
    }
    return (unsigned int)-1073741668;
  }
  return v3;
}
