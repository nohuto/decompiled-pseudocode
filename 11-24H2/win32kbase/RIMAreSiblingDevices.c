/*
 * XREFs of RIMAreSiblingDevices @ 0x1401D6B80
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1401D48D0 (NtRIMAreSiblingDevices.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMAreSiblingDevices(char *a1, char *a2, _DWORD *a3, int a4)
{
  bool v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  unsigned int v12; // r14d
  int v13; // r15d
  int v14; // eax
  int v15; // r12d
  PVOID v16; // rsi
  const void *v17; // rcx
  const void *v18; // rdx
  unsigned int v19; // eax
  int v20; // r9d
  bool v21; // bl
  bool v22; // si
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  _DWORD Src[4]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  PVOID v29; // [rsp+68h] [rbp-20h] BYREF

  Object = 0LL;
  v29 = 0LL;
  v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
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
      131,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v12 = 0;
  v13 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  Src[1] = v13;
  v14 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &v29);
  v15 = v14;
  Src[2] = v14;
  if ( v13 < 0 || v14 < 0 )
  {
    v12 = v14;
    if ( v13 < 0 )
      v12 = v13;
    v16 = Object;
  }
  else
  {
    Src[0] = 0;
    v16 = Object;
    v17 = (const void *)*((_QWORD *)Object + 47);
    if ( v17 )
    {
      v18 = (const void *)*((_QWORD *)v29 + 47);
      if ( v18 )
      {
        v19 = *((_DWORD *)Object + 96);
        if ( v19 )
        {
          v20 = *((_DWORD *)v29 + 96);
          if ( v20 )
          {
            if ( v19 == v20 )
              Src[0] = RtlCompareMemory(v17, v18, v19) == v19;
          }
        }
      }
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a3, Src, 4uLL);
    }
    else
    {
      *a3 = Src[0];
    }
  }
  if ( v13 >= 0 )
    ObfDereferenceObject(v16);
  if ( v15 >= 0 )
    ObfDereferenceObject(v29);
  v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v21;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v24,
      *(_QWORD *)(v23 + 19392),
      4,
      1,
      132,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v12);
  }
  return v12;
}
