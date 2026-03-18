/*
 * XREFs of RIMHidGetPreparsedData @ 0x1401DD6CC
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x1401269E0 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall RIMHidGetPreparsedData(
        struct _UNICODE_STRING *a1,
        void **a2,
        PVOID *a3,
        PDEVICE_OBJECT *a4,
        _DWORD *OutputBuffer)
{
  char v8; // di
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  char v14; // r15
  bool v15; // r12
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  PIRP v19; // rax
  IRP *v20; // r15
  bool v21; // di
  bool v22; // si
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  char v27; // r15
  bool v28; // di
  bool v29; // si
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  void *v33; // r13
  char v34; // r15
  bool v35; // r12
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  PIRP v39; // rax
  IRP *v40; // r15
  char v41; // di
  bool v42; // si
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  LARGE_INTEGER v46; // rax
  char v47; // r15
  char v48; // di
  bool v49; // si
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int16 InternalDeviceIoControl; // [rsp+38h] [rbp-61h]
  int Status; // [rsp+58h] [rbp-41h] BYREF
  int v55; // [rsp+5Ch] [rbp-3Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-29h] BYREF
  __int64 v58; // [rsp+88h] [rbp-11h] BYREF
  struct RIMDEV *v59; // [rsp+90h] [rbp-9h]
  char *v60; // [rsp+98h] [rbp-1h]
  unsigned int v61; // [rsp+A0h] [rbp+7h]
  int *v62; // [rsp+A8h] [rbp+Fh]

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  Status = RIMGetDeviceObjectPointer(a1 + 12, (__int64)a2, (__int64)a3, a2, a3, a4);
  if ( Status < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        31,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        Status);
    }
    return 0LL;
  }
  if ( !*a3 )
  {
    v55 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 723);
  }
  if ( !*a4 )
  {
    v55 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 724);
  }
  ObfReferenceObject(*a4);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v14 = 0;
  }
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 19392),
      4,
      1,
      32,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      (char)a1);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v19 = IoBuildDeviceIoControlRequest(0xB01A8u, *a4, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
  v20 = v19;
  if ( !v19 )
  {
    v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_76;
    v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
    InternalDeviceIoControl = 33;
    goto LABEL_30;
  }
  v19->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
  RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
    (RimTelemetryScopedIoctlObserver *)&v58,
    "GetPreparsedData",
    (struct RIMDEV *const)a1,
    &Status,
    0);
  Status = IofCallDriver(*a4, v20);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  RimTelemetry::LogBlockingIoControlRequest(
    v60,
    v59,
    (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v58)) / gliQpcFreq.QuadPart,
    *v62,
    v61);
  v27 = Status;
  if ( Status )
  {
    v28 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 19392),
        3,
        1,
        34,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v27);
    }
    goto LABEL_76;
  }
  v33 = (void *)Win32AllocPoolZInitImpl(64LL, (unsigned int)*OutputBuffer, 0x70707352u);
  if ( !v33 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_76;
    v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
    InternalDeviceIoControl = 35;
LABEL_30:
    LOBYTE(v24) = v22;
    LOBYTE(v23) = v21;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v24,
      v25,
      3,
      1,
      InternalDeviceIoControl,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
LABEL_76:
    ObfDereferenceObject(*a3);
    *a3 = 0LL;
    ZwClose(*a2);
    *a2 = 0LL;
    if ( !*a4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 825);
    ObfDereferenceObject(*a4);
    *a4 = 0LL;
    return 0LL;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v34 = 0;
  }
  v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v37) = v35;
    LOBYTE(v38) = v34;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v38,
      v37,
      *(_QWORD *)(v36 + 19392),
      4,
      1,
      36,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      (char)a1);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v39 = IoBuildDeviceIoControlRequest(0xB0193u, *a4, 0LL, 0, v33, *OutputBuffer, 0, &Event, &IoStatusBlock);
  v40 = v39;
  if ( !v39 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v41 = 0;
    }
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v44) = v42;
      LOBYTE(v45) = v41;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v44,
        *(_QWORD *)(v43 + 19392),
        3,
        1,
        37,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
LABEL_75:
    GreDeleteFastMutex((char *)v33);
    goto LABEL_76;
  }
  v39->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
  RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
    (RimTelemetryScopedIoctlObserver *)&v58,
    "GetCollectionDescriptor",
    (struct RIMDEV *const)a1,
    &Status,
    0);
  Status = IofCallDriver(*a4, v40);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  v46 = KeQueryPerformanceCounter(0LL);
  RimTelemetry::LogBlockingIoControlRequest(
    v60,
    v59,
    (unsigned __int64)(1000 * (v46.QuadPart - v58)) / gliQpcFreq.QuadPart,
    *v62,
    v61);
  v47 = Status;
  if ( Status )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v48 = 0;
    }
    v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v50 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v51) = v49;
      LOBYTE(v52) = v48;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v52,
        v51,
        *(_QWORD *)(v50 + 19392),
        3,
        1,
        38,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v47);
    }
    goto LABEL_75;
  }
  return v33;
}
