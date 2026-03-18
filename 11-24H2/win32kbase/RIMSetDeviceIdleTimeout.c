/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x14017C3B0
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x14005432C (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x1401269E0 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401366D8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x140153C50 (-DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct RIMDEV *a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // di
  char v6; // si
  __int64 UserSessionState; // rax
  __int64 result; // rax
  struct _FILE_OBJECT *v9; // r15
  struct _DEVICE_OBJECT *v10; // rsi
  _DWORD *v11; // rax
  void *v12; // r14
  PIRP v13; // rax
  IRP *v14; // rdi
  char v15; // bl
  bool v16; // di
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  char v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v28[3]; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+7h]
  int *v30; // [rsp+98h] [rbp+Fh]
  PVOID v31; // [rsp+F0h] [rbp+67h] BYREF
  int Status; // [rsp+F8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  Status = a2;
  v31 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  if ( !a1 )
  {
    Status = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2626LL);
  }
  InputTraceLogging::RIM::DeliverIdleTimeoutRequest(a1, a2);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 19392),
      4u,
      1u,
      0x53u,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      a1,
      30000);
  }
  result = RIMGetDeviceObjectPointer(
             (struct _UNICODE_STRING *)a1 + 12,
             v3,
             v4,
             &Handle,
             &v31,
             (PDEVICE_OBJECT *)&Object);
  Status = result;
  if ( (int)result >= 0 )
  {
    v9 = (struct _FILE_OBJECT *)v31;
    IoStatusBlock = 0LL;
    memset(&Event, 0, sizeof(Event));
    if ( !v31 )
    {
      LODWORD(v31) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2643LL);
    }
    v10 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
    {
      LODWORD(v31) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2644LL);
    }
    ObfReferenceObject(v10);
    v11 = (_DWORD *)Win32AllocPoolZInitImpl(64LL, 4uLL, 0x70707352u);
    v12 = v11;
    if ( v11 )
    {
      *v11 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v13 = IoBuildDeviceIoControlRequest(0xB01B0u, v10, v12, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      v14 = v13;
      if ( v13 )
      {
        v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = v9;
        RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
          (RimTelemetryScopedIoctlObserver *)v28,
          "SetIdleTimeout",
          a1,
          &Status,
          0);
        Status = IofCallDriver(v10, v14);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        RimTelemetry::LogBlockingIoControlRequest(
          (const char *)v28[2],
          (struct RIMDEV *const)v28[1],
          (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v28[0])) / gliQpcFreq.QuadPart,
          *v30,
          v29);
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
          v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v18) = v16;
          LOBYTE(v19) = v15;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v19,
            v18,
            *(_QWORD *)(v17 + 19392),
            3,
            1,
            84,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
        }
        Status = -1073741668;
      }
      GreDeleteFastMutex((char *)v12);
    }
    if ( Status < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v21 = 0;
      }
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
          85,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
      }
    }
    ObfDereferenceObject(v9);
    ObfDereferenceObject(v10);
    ZwClose(Handle);
    return (unsigned int)Status;
  }
  return result;
}
