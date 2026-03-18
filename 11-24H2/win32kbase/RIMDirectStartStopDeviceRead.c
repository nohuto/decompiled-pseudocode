/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x140063CD0
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x140063C00 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMApiSetIsRemoteConnection @ 0x140063C6C (RIMApiSetIsRemoteConnection.c)
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     RIMIsRawInputActive @ 0x14011573C (RIMIsRawInputActive.c)
 *     RIMChildInputTypeIsVirtualized @ 0x14014BC20 (RIMChildInputTypeIsVirtualized.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMHidValidExclusive @ 0x1401E33D8 (RIMHidValidExclusive.c)
 *     rimFakePnpRemoveComplete @ 0x1401E9900 (rimFakePnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(char *a1)
{
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  int v7; // ebp
  char *v8; // rsi
  char *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rdi
  int v18; // eax
  char v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  char v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  int v31; // [rsp+A0h] [rbp+18h]

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      104,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 >= 0 )
  {
    v8 = (char *)Object;
    v9 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( v8[81] || v8[82] || (unsigned int)RIMApiSetIsRemoteConnection(v10) )
    {
      v7 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
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
          105,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      v11 = *((_QWORD *)v8 + 53);
      if ( v11 )
      {
        do
        {
          v12 = *(_QWORD *)(v11 + 40);
          v13 = RimDeviceTypeToRimInputType(v11, *(unsigned int *)(v11 + 48));
          v15 = v13;
          if ( (v13 & 0x3C) != 0 )
          {
            v16 = *(_DWORD *)(v11 + 168);
            if ( (v16 & 0x2000) == 0
              && (v16 & 1) == 0
              && (v16 & 2) == 0
              && (v16 & 4) == 0
              && (v16 & 8) == 0
              && (v16 & 0x400) == 0
              && (v16 & 0x10000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v11 + 32) + 64LL) || !(unsigned __int8)RIMChildInputTypeIsVirtualized(v13)) )
            {
              v17 = *(_QWORD *)(v11 + 448);
              if ( v17 )
              {
                if ( (unsigned int)RIMIsRawInputActive(v11, v14, v15) )
                {
                  if ( !*(_QWORD *)(v11 + 208) )
                  {
                    *(_DWORD *)(v11 + 168) |= 1u;
                    rimOnPnpArrived(v8, v11, -1LL);
                    if ( *(_QWORD *)(v11 + 208) )
                    {
                      if ( (*(_DWORD *)(v11 + 168) & 0x400) != 0 )
                      {
                        LODWORD(Object) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3227LL);
                      }
                      *(_DWORD *)(v11 + 184) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( (*(_DWORD *)(v11 + 168) & 0x20000) != 0
                    && (*(_DWORD *)(v17 + 24) || *(_DWORD *)(v17 + 32) > (unsigned int)RIMHidValidExclusive(v17)) )
                  {
                    v31 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3242LL);
                  }
                  if ( *(_QWORD *)(v11 + 208) )
                  {
                    v18 = *(_DWORD *)(v11 + 184);
                    if ( (v18 & 0x80u) == 0 && (v18 & 0x100) == 0 && (v18 & 0x200) == 0 )
                      rimFakePnpRemoveComplete(v8, v11);
                  }
                }
              }
            }
          }
          v11 = v12;
        }
        while ( v12 );
        v9 = v8 + 104;
      }
    }
    RIMUnlockExclusive((__int64)v9);
    ObfDereferenceObject(v8);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v24 = 0;
  }
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v24;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v27,
      *(_QWORD *)(v26 + 19392),
      4,
      1,
      106,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
