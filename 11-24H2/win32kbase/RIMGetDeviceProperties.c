/*
 * XREFs of RIMGetDeviceProperties @ 0x140135310
 * Callers:
 *     NtRIMGetDeviceProperties @ 0x1401352F0 (NtRIMGetDeviceProperties.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetDevicePropertiesLockfree @ 0x140135580 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall RIMGetDeviceProperties(char *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  bool v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // edi
  _BYTE *v14; // rsi
  bool v15; // bl
  bool v16; // bp
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  bool v20; // bl
  bool v21; // si
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF

  Object = 0LL;
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      128,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v13 >= 0 )
  {
    v14 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v14[81] )
    {
      v13 = -1073741637;
      v15 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 19392),
          3,
          1,
          129,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      v13 = RIMGetDevicePropertiesLockfree(a2, a3, a4);
    }
    RIMUnlockExclusive((__int64)(v14 + 104));
    ObfDereferenceObject(v14);
  }
  v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v20;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(v22 + 19392),
      4,
      1,
      130,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v13);
  }
  return (unsigned int)v13;
}
