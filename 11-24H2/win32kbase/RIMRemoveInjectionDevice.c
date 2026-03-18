/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1401D87A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005B144 (RIMIDERemoveInjectionDevice.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // esi
  PVOID v10; // rdi
  __int64 v11; // rbx
  bool v12; // di
  bool v13; // bp
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  bool v17; // bl
  bool v18; // di
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  PVOID v22; // r14
  bool v23; // di
  bool v24; // bp
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int16 v29; // [rsp+30h] [rbp-58h]
  char v30; // [rsp+40h] [rbp-48h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v32; // [rsp+A8h] [rbp+20h] BYREF

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
      50,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v32 = 0LL;
  Object = 0LL;
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
    if ( v9 < 0 )
    {
      v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v15,
          *(_QWORD *)(v14 + 19392),
          3,
          1,
          51,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      v10 = Object;
      v11 = *((_QWORD *)Object + 49);
      RIMLockExclusive(v11 + 104);
      RIMIDERemoveInjectionDevice((__int64)v10);
      RIMUnlockExclusive(v11 + 104);
      ObfDereferenceObject(v10);
    }
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v30 = v9;
      v29 = 52;
LABEL_48:
      LOBYTE(v21) = v18;
      LOBYTE(v20) = v17;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v21,
        *(_QWORD *)(v19 + 19392),
        4,
        1,
        v29,
        (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
        v30);
    }
  }
  else
  {
    v9 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v32);
    if ( v9 >= 0 )
    {
      v22 = v32;
      RIMLockExclusive((__int64)v32 + 104);
      v9 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v9 < 0 )
      {
        v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v26) = v24;
          LOBYTE(v27) = v23;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v27,
            v26,
            *(_QWORD *)(v25 + 19392),
            3,
            1,
            53,
            (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
        }
      }
      else
      {
        RIMIDERemoveInjectionDevice((__int64)Object);
        ObfDereferenceObject(Object);
      }
      RIMUnlockExclusive((__int64)v22 + 104);
      ObfDereferenceObject(v22);
    }
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v30 = v9;
      v29 = 54;
      goto LABEL_48;
    }
  }
  return (unsigned int)v9;
}
