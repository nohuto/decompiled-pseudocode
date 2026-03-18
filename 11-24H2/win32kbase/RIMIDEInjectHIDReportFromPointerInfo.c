/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1401E68D8
 * Callers:
 *     NtUserInjectPointerInput @ 0x1401BB770 (NtUserInjectPointerInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E3FA8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 *     RIMIDEGetTimeStampDelta @ 0x1401E62C4 (RIMIDEGetTimeStampDelta.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(
        struct RawInputManagerDeviceObject *a1,
        struct tagPOINTER_TYPE_INFO *a2,
        int a3)
{
  int v3; // eax
  struct tagPOINTER_TYPE_INFO *v5; // rsi
  unsigned int v7; // ebx
  bool v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // r15d
  unsigned int v15; // edi
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_DWORD *)a2;
  v5 = a2;
  if ( *(_DWORD *)a2 == 2 )
  {
    v7 = 10;
  }
  else if ( v3 == 3 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 5;
    if ( v3 != 5 )
      return 3221225485LL;
  }
  v16 = 0;
  if ( !(unsigned int)RIMIDEGetTimeStampDelta((__int64)a1, (__int64)a2 + 8, &v16) )
  {
    v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 19392),
        2,
        1,
        51,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
    }
    return 3221225485LL;
  }
  v14 = v16;
  result = 0LL;
  v15 = a3;
  while ( v15 )
  {
    if ( v15 <= v7 )
      return RIMIDEInjectPartialFrameFromPointerInfo(a1, v5, v15, a3, v14);
    result = RIMIDEInjectPartialFrameFromPointerInfo(a1, v5, v7, a3, v14);
    v15 -= v7;
    a3 = 0;
    v5 = (struct tagPOINTER_TYPE_INFO *)((char *)v5 + 152 * v7);
    if ( (int)result < 0 )
      return result;
  }
  return result;
}
