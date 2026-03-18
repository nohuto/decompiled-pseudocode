/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1401D7F10
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1401D4AD0 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, ULONG64 a3)
{
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // edi
  _BYTE *v10; // r15
  PVOID v11; // rsi
  char *v12; // rcx
  void *v13; // rax
  bool v14; // r14
  bool v15; // r15
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // si
  bool v20; // r14
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  bool v24; // si
  bool v25; // r14
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v31; // [rsp+58h] [rbp-30h]
  PVOID v34; // [rsp+A8h] [rbp+20h] BYREF

  v34 = 0LL;
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
      137,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v34);
  if ( v9 >= 0 )
  {
    v10 = v34;
    v31 = (__int64)v34 + 104;
    RIMLockExclusive((__int64)v34 + 104);
    if ( v10[81] )
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
          139,
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
        if ( (*((_DWORD *)v12 + 46) & 0x80u) == 0 )
        {
          v9 = -1073741637;
          v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v17) = v15;
            LOBYTE(v18) = v14;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v18,
              v17,
              *(_QWORD *)(v16 + 19392),
              3,
              1,
              138,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
          }
          v10 = v34;
        }
        else
        {
          v13 = (void *)a3;
          if ( a3 >= MmUserProbeAddress )
            v13 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v13, (const void *)(*((_QWORD *)v12 + 57) + 140LL), 0x10uLL);
        }
        ObfDereferenceObject(v11);
      }
    }
    RIMUnlockExclusive(v31);
    ObfDereferenceObject(v10);
  }
  v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
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
      140,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
