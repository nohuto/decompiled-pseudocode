/*
 * XREFs of RIMConfigureDeviceFeedback @ 0x1401DB3F0
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
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x140159124 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMConfigureDeviceFeedback(struct _UNICODE_STRING *a1, int a2)
{
  PWSTR Buffer; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  unsigned __int64 ReportLength; // r14
  char v7; // bl
  char v8; // si
  __int64 UserSessionState; // rax
  CHAR *Report; // rax
  CHAR *v11; // rsi
  USHORT v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  PIRP v15; // rax
  struct _FILE_OBJECT *v16; // r14
  IRP *v17; // rbx
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v24; // di
  bool v25; // si
  char v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v34[16]; // [rsp+80h] [rbp-29h] BYREF
  int Status; // [rsp+110h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+120h] [rbp+77h] BYREF
  struct _FILE_OBJECT *OutputBuffer; // [rsp+128h] [rbp+7Fh] BYREF

  Buffer = a1[27].Buffer;
  Status = 0;
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
      0x4Au,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      a1,
      a2);
  }
  memset(v34, 0, 0x48uLL);
  if ( (unsigned int)RIMGetDeviceFeedbackGlobalIntensityCaps(PreparsedData, (__int64)v34) )
  {
    Report = (CHAR *)Win32AllocPoolZInitImpl(256LL, ReportLength, 0x69667352u);
    v11 = Report;
    if ( Report )
    {
      v12 = HIWORD(v34[0]);
      *Report = BYTE2(v34[0]);
      Status = HidP_SetUsageValue(
                 HidP_Feature,
                 0xEu,
                 v12,
                 0x23u,
                 LODWORD(v34[5]) + a2 * (HIDWORD(v34[5]) - LODWORD(v34[5])) / 100,
                 PreparsedData,
                 Report,
                 ReportLength);
      if ( Status >= 0 )
      {
        OutputBuffer = 0LL;
        DeviceObject = 0LL;
        Handle = 0LL;
        Status = RIMGetDeviceObjectPointer(a1 + 12, v13, v14, &Handle, (PVOID *)&OutputBuffer, &DeviceObject);
        if ( Status >= 0 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, NotificationEvent, 0);
          IoStatusBlock = 0LL;
          v15 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v11,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  &Event,
                  &IoStatusBlock);
          v16 = OutputBuffer;
          v17 = v15;
          if ( v15 )
          {
            v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = OutputBuffer;
            RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
              (RimTelemetryScopedIoctlObserver *)v34,
              "ConfigDeviceFeedback",
              (struct RIMDEV *const)a1,
              &Status,
              0);
            Status = IofCallDriver(DeviceObject, v17);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            RimTelemetry::LogBlockingIoControlRequest(
              (const char *)v34[2],
              (struct RIMDEV *const)v34[1],
              (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v34[0])) / gliQpcFreq.QuadPart,
              *(_DWORD *)v34[4],
              v34[3]);
          }
          else
          {
            v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v21) = v19;
              LOBYTE(v22) = v18;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v22,
                v21,
                *(_QWORD *)(v20 + 19392),
                3,
                1,
                75,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
            }
            Status = -1073741668;
          }
          ObfDereferenceObject(v16);
          ZwClose(Handle);
        }
      }
      GreDeleteFastMutex(v11);
    }
    else
    {
      Status = -1073741670;
    }
  }
  v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = Status;
    v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v28) = v25;
    LOBYTE(v29) = v24;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      *(_QWORD *)(v27 + 19392),
      2,
      1,
      76,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      v26);
  }
  return (unsigned int)Status;
}
