/*
 * XREFs of RIMGetSourceProcessId @ 0x140142E90
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x140142E70 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, ULONG64 a3)
{
  bool v4; // si
  bool v5; // r14
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // r14d
  _BYTE *v10; // r13
  char *v11; // r12
  __int64 v12; // rcx
  PVOID v13; // rsi
  char *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rax
  bool v20; // si
  bool v21; // r15
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // si
  bool v26; // r15
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  PVOID v31; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object[8]; // [rsp+58h] [rbp-40h] BYREF
  int Src; // [rsp+B8h] [rbp+20h] BYREF

  v31 = 0LL;
  Object[0] = 0LL;
  Src = 0;
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
      141,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v31);
  if ( v9 >= 0 )
  {
    v10 = v31;
    v11 = (char *)v31 + 104;
    Object[1] = (char *)v31 + 104;
    RIMLockExclusive((__int64)v31 + 104);
    if ( v10[81] )
    {
      v9 = -1073741637;
      v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(v22 + 19392),
          3,
          1,
          142,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      v9 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, Object);
      if ( v9 >= 0 )
      {
        v13 = Object[0];
        if ( Object[0] )
          v14 = (char *)Object[0] + 72;
        else
          v14 = 0LL;
        if ( *((_QWORD *)v14 + 46) )
        {
          v15 = W32GetUserSessionState(v12);
          RIMLockExclusive(v15 + 56);
          v17 = *(_QWORD *)(*((_QWORD *)v14 + 46) + 88LL);
          if ( v17 )
            Src = *(_DWORD *)(v17 + 56);
          v18 = W32GetUserSessionState(v16);
          RIMUnlockExclusive(v18 + 56);
        }
        v19 = (void *)a3;
        if ( a3 >= MmUserProbeAddress )
          v19 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v19, &Src, 4uLL);
        ObfDereferenceObject(v13);
      }
    }
    RIMUnlockExclusive((__int64)v11);
    ObfDereferenceObject(v10);
  }
  v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v28) = v26;
    LOBYTE(v29) = v25;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      *(_QWORD *)(v27 + 19392),
      4,
      1,
      143,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
