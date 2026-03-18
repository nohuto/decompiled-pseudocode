/*
 * XREFs of RIMGetDeviceProperties @ 0x1C0177E40
 * Callers:
 *     NtRIMGetDeviceProperties @ 0x1C0174DE0 (NtRIMGetDeviceProperties.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C0178080 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall RIMGetDeviceProperties(char *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v6; // r15
  int v8; // ebx
  _BYTE *v9; // rsi
  int v10; // edx
  int v11; // r8d
  char v12; // dl
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF

  Object = 0LL;
  v5 = a3;
  v6 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      132,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v9[81] )
    {
      v8 = -1073741637;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          (_DWORD)gRimLog,
          3,
          1,
          133,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
    }
    else
    {
      v8 = RIMGetDevicePropertiesLockfree(v6, v5, a4);
    }
    *((_QWORD *)v9 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v9);
  }
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x86u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v8);
  return (unsigned int)v8;
}
