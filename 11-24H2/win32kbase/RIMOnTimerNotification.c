/*
 * XREFs of RIMOnTimerNotification @ 0x14005A190
 * Callers:
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x140058F50 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     NtRIMOnTimerNotification @ 0x1401D4B40 (NtRIMOnTimerNotification.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMEndAllStaleContacts @ 0x1400592A8 (RIMEndAllStaleContacts.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *Handle)
{
  struct RawInputManagerObject *v2; // rbx
  bool v3; // di
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  NTSTATUS v8; // edi
  bool v9; // si
  bool v10; // bp
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  void *v14; // rcx
  bool v15; // bl
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  bool v21; // si
  bool v22; // bp
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  union _LARGE_INTEGER DueTime; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Handle);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      71,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = -1073741816;
  }
  else
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 3u, ExRawInputManagerObjectType, 1, &Object, 0LL);
    if ( v8 >= 0 )
    {
      if ( *((_DWORD *)Object + 1) == 1 )
      {
        v2 = (struct RawInputManagerObject *)Object;
      }
      else
      {
        v8 = -1073741788;
        ObfDereferenceObject(Object);
      }
    }
    if ( v8 >= 0 )
    {
      RIMLockExclusive((char *)v2 + 104);
      if ( *((_BYTE *)v2 + 81) || *((_BYTE *)v2 + 82) )
      {
        v8 = -1073741637;
        v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v24) = v22;
          LOBYTE(v25) = v21;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            v24,
            *(_QWORD *)(v23 + 19392),
            3,
            1,
            73,
            (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
        }
      }
      else
      {
        RIMLockExclusive((char *)v2 + 760);
        v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v12) = v10;
          LOBYTE(v13) = v9;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v13,
            v12,
            *(_QWORD *)(v11 + 19392),
            4,
            1,
            72,
            (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
        }
        RIMEndAllStaleContacts(v2);
        v14 = (void *)*((_QWORD *)v2 + 42);
        if ( *((_DWORD *)v2 + 116) )
        {
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v14, &DueTime, 0LL, 0LL, 0, 0, 0LL);
        }
        else
        {
          ZwCancelTimer(v14, 0LL);
          *((_DWORD *)v2 + 117) = 0;
        }
        RIMUnlockExclusive((__int64)v2 + 760);
      }
      RIMUnlockExclusive((__int64)v2 + 104);
      ObfDereferenceObject(v2);
    }
  }
  v15 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 19392),
      4,
      1,
      74,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
