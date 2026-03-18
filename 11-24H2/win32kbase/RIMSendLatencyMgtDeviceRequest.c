/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1400B0D94
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1400B0C70 (RIMUpdateDeviceForInputMode.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     ?DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x1400B144C (-DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDd @ 0x1400B15C4 (WPP_RECORDER_AND_TRACE_SF_qDDd.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct RIMDEV *a1, int a2)
{
  __int64 v4; // r15
  int v5; // edx
  int v6; // r8d
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  NTSTATUS Status; // edi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  ULONG ReportLength; // ebx
  NTSTATUS SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v16; // r15
  CHAR *v17; // rax
  CHAR *v18; // rsi
  PIRP v19; // rax
  IRP *v20; // rdi
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v22; // rax
  bool v23; // bl
  bool v24; // si
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  USHORT UsageList[4]; // [rsp+68h] [rbp-A0h] BYREF
  ULONG UsageLength[2]; // [rsp+70h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+B8h] [rbp-50h] BYREF

  *(_QWORD *)UsageLength = 0LL;
  DeviceObject = 0LL;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset(&ButtonCaps, 0, sizeof(ButtonCaps));
  v4 = *((_QWORD *)a1 + 55);
  UsageList[0] = 1;
  InputTraceLogging::RIM::DeliverLatencyRequest(a1, a2 != 0);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_qDDd(*((_QWORD *)WPP_GLOBAL_Control + 3), v11, v10, *(_QWORD *)(UserSessionState + 19392));
  }
  Status = RIMGetDeviceObjectPointer(
             (int)a1 + 192,
             v5,
             v6,
             (unsigned int)&Handle,
             (__int64)UsageLength,
             (__int64)&DeviceObject);
  if ( Status >= 0 )
  {
    PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v4 + 16);
    ReportLength = *(unsigned __int16 *)(v4 + 48);
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Feature, 0xDu, 0, 0x60u, &ButtonCaps, UsageList, PreparsedData);
    v16 = *(struct _FILE_OBJECT **)UsageLength;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v17 = (CHAR *)Win32AllocPoolZInitImpl(64LL, ReportLength, 0x69667352u);
      v18 = v17;
      if ( v17 )
      {
        *v17 = ButtonCaps.ReportID;
        if ( !a2
          || (UsageList[2] = 96,
              UsageLength[0] = 1,
              Status = HidP_SetUsages(
                         HidP_Feature,
                         0xDu,
                         0,
                         &UsageList[2],
                         UsageLength,
                         PreparsedData,
                         v17,
                         ReportLength),
              Status >= 0) )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v19 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v18,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  &Event,
                  &IoStatusBlock);
          v20 = v19;
          if ( v19 )
          {
            v19->Tail.Overlay.CurrentStackLocation[-1].FileObject = v16;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            Status = IofCallDriver(DeviceObject, v20);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            v22 = KeQueryPerformanceCounter(0LL);
            RimTelemetry::LogBlockingIoControlRequest(
              "SendLatencyMgtReq",
              a1,
              (unsigned __int64)(1000 * (v22.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
              Status,
              0);
          }
          else
          {
            v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v32) = v30;
              LOBYTE(v33) = v29;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v33,
                v32,
                *(_QWORD *)(v31 + 19392),
                3,
                1,
                70,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
            }
            Status = -1073741668;
          }
        }
        GreDeleteFastMutex(v18);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v16);
    ZwClose(Handle);
  }
  v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v26) = v24;
    LOBYTE(v27) = v23;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v26,
      *(_QWORD *)(v25 + 19392),
      2,
      1,
      71,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      Status);
  }
  return (unsigned int)Status;
}
