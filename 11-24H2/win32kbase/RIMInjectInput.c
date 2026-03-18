/*
 * XREFs of RIMInjectInput @ 0x140156010
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, char *a2, int a3, char *a4, unsigned int Size)
{
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  int v12; // r15d
  struct RawInputManagerObject *v13; // r14
  PVOID v14; // r13
  char *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // rcx
  void *v19; // r9
  char v20; // si
  bool v21; // r12
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  char v25; // si
  bool v26; // r12
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // si
  bool v31; // r14
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  PVOID v36; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-40h] BYREF

  v36 = 0LL;
  Object[0] = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      91,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v36);
  if ( v12 >= 0 )
  {
    v13 = (struct RawInputManagerObject *)v36;
    RIMLockExclusive((__int64)v36 + 104);
    if ( *((_BYTE *)v13 + 81) || *((_BYTE *)v13 + 82) )
    {
      v12 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 19392),
          3,
          1,
          94,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      v12 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, Object);
      if ( v12 >= 0 )
      {
        v14 = Object[0];
        v15 = (char *)Object[0] + 72;
        if ( !Object[0] )
          v15 = 0LL;
        Object[1] = v15;
        if ( (*((_DWORD *)v15 + 42) & 0x2000) != 0 )
        {
          RIMLockExclusive((__int64)v13 + 760);
          *((_DWORD *)v15 + 60) = 0;
          v16 = *((_QWORD *)v15 + 55);
          v17 = *(unsigned __int16 *)(v16 + 44);
          if ( Size < (unsigned int)v17 )
            v17 = Size;
          *((_QWORD *)v15 + 31) = (unsigned int)v17;
          if ( a3 )
          {
            v19 = *(void **)(v16 + 24);
            if ( &a4[v17] < a4 || (unsigned __int64)&a4[v17] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            RtlCopyVolatileMemory(v19, a4, (unsigned int)v17);
          }
          else
          {
            v18 = *(char **)(v16 + 24);
            if ( a4 != v18 )
              memmove(v18, a4, (unsigned int)v17);
          }
          rimProcessDeviceBufferAndStartRead(v13, (struct RIMDEV *)v15, 1);
          RIMUnlockExclusive((__int64)v13 + 760);
        }
        else
        {
          v12 = -1073741811;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v20 = 0;
          }
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
              93,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
          }
        }
        ObfDereferenceObject(v14);
      }
    }
    RIMUnlockExclusive((__int64)v13 + 104);
    ObfDereferenceObject(v13);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v30 = 0;
  }
  v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    LOBYTE(v33) = v31;
    LOBYTE(v34) = v30;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v33,
      *(_QWORD *)(v32 + 19392),
      4,
      1,
      95,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v12);
  }
  return (unsigned int)v12;
}
