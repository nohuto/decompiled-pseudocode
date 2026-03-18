/*
 * XREFs of RIMIsPrimaryPointerDeviceDown @ 0x1401D8290
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMIsPrimaryPointerDeviceDown(char *a1, int *a2)
{
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // esi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // di
  bool v14; // bp
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Object = 0LL;
  *a2 = 0;
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
      110,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v10 + 81) || *((_BYTE *)v10 + 82) )
    {
      v9 = -1073741637;
      v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(v15 + 19392),
          3,
          1,
          111,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)(v10 + 95));
      v11 = v10[60];
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 1024);
        if ( v12 )
          *a2 = (*(_DWORD *)(v12 + 2684) >> 2) & 1;
      }
      RIMUnlockExclusive((__int64)(v10 + 95));
    }
    RIMUnlockExclusive((__int64)(v10 + 13));
    ObfDereferenceObject(v10);
  }
  v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v18;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 19392),
      4,
      1,
      112,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
