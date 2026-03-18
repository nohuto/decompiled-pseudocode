/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x140054C40
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x140054BC0 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpRemoveComplete @ 0x140055BD4 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(__int64 a1, int a2)
{
  bool v4; // bl
  bool v5; // di
  int v6; // esi
  bool v7; // bl
  bool v8; // di
  _QWORD *v10; // rdi
  __int64 i; // rbx
  int v12; // eax
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // bl
  bool v20; // bp
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v17) = v5;
    LOBYTE(v18) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      96,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v6 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v6 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((char *)Object + 104);
    if ( *((_BYTE *)v10 + 81) )
    {
      v6 = -1073741637;
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
          97,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      for ( i = v10[53]; i; i = *(_QWORD *)(i + 40) )
      {
        v12 = *(_DWORD *)(i + 168);
        if ( (v12 & 0x2000) == 0 && (v12 & 0x400) == 0 && *(_DWORD *)(i + 48) == a2 )
        {
          *(_DWORD *)(i + 168) = v12 | 8;
          rimOnPnpRemoveComplete(v10, i);
        }
      }
    }
    RIMUnlockExclusive((__int64)(v10 + 13));
    ObfDereferenceObject(v10);
  }
  v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v14) = v8;
    LOBYTE(v15) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(v13 + 19392),
      4,
      1,
      98,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
