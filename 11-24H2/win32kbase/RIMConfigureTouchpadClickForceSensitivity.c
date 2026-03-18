/*
 * XREFs of RIMConfigureTouchpadClickForceSensitivity @ 0x1401DB850
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1400B0C70 (RIMUpdateDeviceForInputMode.c)
 *     CBaseInput::ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___ @ 0x1401B1360 (CBaseInput--ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x1401269E0 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401366D8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMGetTouhpadClickForceSensitivityCaps @ 0x14019A684 (RIMGetTouhpadClickForceSensitivityCaps.c)
 *     ?SetFeatureClickForce@RIM@InputTraceLogging@@SAXPEBURIMDEV@@AEBU_HIDP_VALUE_CAPS@@HKJ@Z @ 0x1401DAA54 (-SetFeatureClickForce@RIM@InputTraceLogging@@SAXPEBURIMDEV@@AEBU_HIDP_VALUE_CAPS@@HKJ@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMConfigureTouchpadClickForceSensitivity(struct _UNICODE_STRING *a1, unsigned int a2)
{
  PWSTR Buffer; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  unsigned __int64 ReportLength; // r14
  char v7; // bl
  char v8; // si
  __int64 UserSessionState; // rax
  CHAR *Report; // rax
  CHAR *v11; // rsi
  USHORT LinkCollection; // r8
  int v13; // r15d
  ULONG UsageValue; // r15d
  __int64 v15; // rdx
  __int64 v16; // r8
  PIRP v17; // rax
  PVOID v18; // r14
  IRP *v19; // rbx
  char v20; // bl
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  NTSTATUS Status; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  char v27; // di
  bool v28; // si
  char v29; // bl
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  HANDLE Handle; // [rsp+50h] [rbp-89h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-81h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v37[3]; // [rsp+80h] [rbp-59h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-41h]
  int *v39; // [rsp+A0h] [rbp-39h]
  struct _HIDP_VALUE_CAPS v40; // [rsp+B0h] [rbp-29h] BYREF
  int v41; // [rsp+140h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+150h] [rbp+77h] BYREF
  PVOID Object; // [rsp+158h] [rbp+7Fh] BYREF

  Buffer = a1[27].Buffer;
  v41 = 0;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)Buffer + 2);
  ReportLength = Buffer[24];
  v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      *(_QWORD *)(UserSessionState + 19392),
      4u,
      1u,
      0x4Du,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      a1,
      a2);
  }
  memset(&v40, 0, sizeof(v40));
  if ( RIMGetTouhpadClickForceSensitivityCaps(PreparsedData, (__int64)&v40) )
  {
    Report = (CHAR *)Win32AllocPoolZInitImpl(256LL, ReportLength, 0x69667352u);
    v11 = Report;
    if ( Report )
    {
      LinkCollection = v40.LinkCollection;
      v13 = (unsigned __int64)(1374389535LL * (int)(a2 * (v40.LogicalMax - v40.LogicalMin))) >> 32;
      *Report = v40.ReportID;
      UsageValue = v40.LogicalMin + ((unsigned int)v13 >> 31) + (v13 >> 5);
      v41 = HidP_SetUsageValue(
              HidP_Feature,
              0xDu,
              LinkCollection,
              0xB0u,
              UsageValue,
              PreparsedData,
              Report,
              ReportLength);
      if ( v41 >= 0 )
      {
        Object = 0LL;
        DeviceObject = 0LL;
        Handle = 0LL;
        v41 = RIMGetDeviceObjectPointer(a1 + 12, v15, v16, &Handle, &Object, &DeviceObject);
        if ( v41 >= 0 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, NotificationEvent, 0);
          IoStatusBlock = 0LL;
          v17 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v11,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  &Event,
                  &IoStatusBlock);
          v18 = Object;
          v19 = v17;
          if ( v17 )
          {
            v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
            RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
              (RimTelemetryScopedIoctlObserver *)v37,
              "ConfigClickForceSens",
              (struct RIMDEV *const)a1,
              &v41,
              0);
            Status = IofCallDriver(DeviceObject, v19);
            v41 = Status;
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
              v41 = IoStatusBlock.Status;
            }
            InputTraceLogging::RIM::SetFeatureClickForce((const struct RIMDEV *)a1, &v40, a2, UsageValue, Status);
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            RimTelemetry::LogBlockingIoControlRequest(
              (const char *)v37[2],
              (struct RIMDEV *const)v37[1],
              (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v37[0])) / gliQpcFreq.QuadPart,
              *v39,
              v38);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v20 = 0;
            }
            v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v23) = v21;
              LOBYTE(v24) = v20;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v24,
                v23,
                *(_QWORD *)(v22 + 19392),
                3,
                1,
                78,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
            }
            v41 = -1073741668;
          }
          ObfDereferenceObject(v18);
          ZwClose(Handle);
        }
      }
      GreDeleteFastMutex(v11);
    }
    else
    {
      v41 = -1073741670;
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v27 = 0;
  }
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = v41;
    v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v31) = v28;
    LOBYTE(v32) = v27;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v31,
      *(_QWORD *)(v30 + 19392),
      2,
      1,
      79,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      v29);
  }
  return (unsigned int)v41;
}
