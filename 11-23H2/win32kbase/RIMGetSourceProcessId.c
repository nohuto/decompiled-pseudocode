/*
 * XREFs of RIMGetSourceProcessId @ 0x1C0178C80
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x1C0174E70 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, ULONG64 a3)
{
  int v4; // r14d
  _BYTE *v5; // r12
  char *v6; // r13
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID v12; // rsi
  char *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  _DWORD *v20; // rax
  _UNKNOWN **v21; // r8
  char v22; // dl
  PVOID v24; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object[8]; // [rsp+58h] [rbp-40h] BYREF
  char *v26; // [rsp+A8h] [rbp+10h]
  ULONG64 v27; // [rsp+B0h] [rbp+18h]
  int v28; // [rsp+B8h] [rbp+20h]

  v27 = a3;
  v26 = a2;
  v24 = 0LL;
  Object[0] = 0LL;
  v28 = 0;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      145,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v24);
  if ( v4 >= 0 )
  {
    v5 = v24;
    v6 = (char *)v24 + 104;
    Object[1] = (char *)v24 + 104;
    RIMLockExclusive((__int64)v24 + 104);
    if ( v5[81] )
    {
      v4 = -1073741637;
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v21 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          (_DWORD)v21,
          (_DWORD)gRimLog,
          3,
          1,
          146,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
    }
    else
    {
      v4 = RawInputManagerDeviceObjectResolveHandle(v26, 3u, 1, Object);
      if ( v4 >= 0 )
      {
        v12 = Object[0];
        if ( Object[0] )
          v13 = (char *)Object[0] + 72;
        else
          v13 = 0LL;
        if ( *((_QWORD *)v13 + 48) )
        {
          v14 = SGDGetUserSessionState(v9, v8, v10, v11);
          RIMLockExclusive(v14 + 240);
          v18 = *(_QWORD *)(*((_QWORD *)v13 + 48) + 88LL);
          if ( v18 )
            v28 = *(_DWORD *)(v18 + 56);
          v19 = SGDGetUserSessionState(v18, v15, v16, v17);
          *(_QWORD *)(v19 + 248) = 0LL;
          ExReleasePushLockExclusiveEx(v19 + 240, 0LL);
          KeLeaveCriticalRegion();
        }
        v20 = (_DWORD *)v27;
        if ( v27 >= MmUserProbeAddress )
          v20 = (_DWORD *)MmUserProbeAddress;
        *v20 = v28;
        ObfDereferenceObject(v12);
      }
    }
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v22,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x93u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v4);
  return (unsigned int)v4;
}
