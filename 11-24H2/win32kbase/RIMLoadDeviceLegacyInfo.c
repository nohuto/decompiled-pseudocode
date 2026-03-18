/*
 * XREFs of RIMLoadDeviceLegacyInfo @ 0x1401D2038
 * Callers:
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsHIDMouse @ 0x1400A83C0 (RIMIsHIDMouse.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x1401269E0 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     rimBlockingDeviceIoControlFile @ 0x140144F3C (rimBlockingDeviceIoControlFile.c)
 *     RIMApiSetCheckForLegacyTouchPad @ 0x14017D3A4 (RIMApiSetCheckForLegacyTouchPad.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

LONG_PTR __fastcall RIMLoadDeviceLegacyInfo(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  char v5; // r14
  bool v6; // r15
  LONG_PTR result; // rax
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  char v15; // di
  bool v16; // r15
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // [rsp+44h] [rbp-15h] BYREF
  PVOID Object; // [rsp+48h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  PVOID v23; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v24[3]; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+1Fh]
  int *v26; // [rsp+80h] [rbp+27h]
  __int64 v27; // [rsp+88h] [rbp+2Fh] BYREF
  int v28; // [rsp+90h] [rbp+37h]

  Handle = 0LL;
  v23 = 0LL;
  Object = 0LL;
  v4 = 0;
  v20 = RIMGetDeviceObjectPointer(a1 + 12, a2, a3, &Handle, &v23, (PDEVICE_OBJECT *)&Object);
  if ( v20 >= 0 )
  {
    if ( !v23 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1584);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1585);
    ObfReferenceObject(Object);
    if ( (unsigned int)RIMIsHIDMouse((struct _DEVICE_OBJECT *)Object) )
    {
      v27 = 0LL;
      v28 = 0;
      v4 = 1;
      RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        (RimTelemetryScopedIoctlObserver *)v24,
        "LoadDeviceLegacyInfo",
        (struct RIMDEV *const)a1,
        &v20,
        0);
      v20 = rimBlockingDeviceIoControlFile(Handle, v11, v12, v13, &v27);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        (const char *)v24[2],
        (struct RIMDEV *const)v24[1],
        (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v24[0])) / gliQpcFreq.QuadPart,
        *v26,
        v25);
      if ( v20 >= 0 )
      {
        a1[54].MaximumLength = HIWORD(v27);
        *(&a1[54].MaximumLength + 1) = v28;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v15 = 0;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v18) = v16;
          LOBYTE(v19) = v15;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v19,
            v18,
            *(_QWORD *)(UserSessionState + 19392),
            3,
            1,
            28,
            (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids);
        }
      }
    }
    RIMApiSetCheckForLegacyTouchPad(
      (struct DEVICEINFO *)a1,
      (struct _FILE_OBJECT *)v23,
      (struct _DEVICE_OBJECT *)Object,
      v4);
    goto LABEL_24;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  result = 0LL;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(v8 + 19392),
      2,
      1,
      27,
      (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids);
LABEL_24:
    result = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    ObfDereferenceObject(v23);
    return ObfDereferenceObject(Object);
  }
  return result;
}
