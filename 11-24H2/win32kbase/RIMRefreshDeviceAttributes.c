/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1400548C0
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x140103DE0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1401893B0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMQueryDev @ 0x140055E98 (RIMQueryDev.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(__int64 a1, char *a2)
{
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // ebx
  _BYTE *v10; // rdi
  PVOID v11; // rsi
  char *v12; // rdx
  bool v13; // di
  bool v14; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // si
  bool v20; // bp
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  PVOID v24; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v24 = 0LL;
  Object = 0LL;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      107,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &v24);
  if ( v9 >= 0 )
  {
    v10 = v24;
    RIMLockExclusive((char *)v24 + 104);
    RIMLockExclusive(v10 + 760);
    if ( v10[81] || v10[82] )
    {
      v9 = -1073741637;
      v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 19392),
          3,
          1,
          108,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      v9 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v9 >= 0 )
      {
        v11 = Object;
        if ( Object )
          v12 = (char *)Object + 72;
        else
          v12 = 0LL;
        if ( *((_DWORD *)v12 + 12) == 2 )
          v9 = -1073741811;
        else
          v9 = RIMQueryDev(v10);
        ObfDereferenceObject(v11);
      }
    }
    RIMUnlockExclusive((__int64)(v10 + 760));
    RIMUnlockExclusive((__int64)(v10 + 104));
    ObfDereferenceObject(v10);
  }
  v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v17) = v14;
    LOBYTE(v18) = v13;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 19392),
      4,
      1,
      109,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
