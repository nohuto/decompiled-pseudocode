/*
 * XREFs of RIMDeviceIoControl @ 0x14017AF70
 * Callers:
 *     NtRIMDeviceIoControl @ 0x14017ACF0 (NtRIMDeviceIoControl.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140210714 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x1401269E0 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x14012D12C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1401455B8 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x140145A9C (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        char *a1,
        char *a2,
        ULONG a3,
        void *a4,
        ULONG InputBufferLength,
        volatile void *Address,
        ULONG Length,
        _DWORD *a8,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        int a10,
        int a11,
        int a12)
{
  bool v13; // si
  bool v14; // r14
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v19; // esi
  struct RawInputManagerObject *v20; // r15
  char *v21; // rsi
  struct _FILE_OBJECT *v22; // r14
  void *v23; // rcx
  PIRP v24; // rax
  IRP *v25; // r13
  NTSTATUS v26; // eax
  bool i; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  void *v29; // rcx
  char v30; // r14
  bool v31; // r12
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  char v35; // si
  bool v36; // r14
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  char v40; // r14
  bool v41; // r15
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  int Status; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v47; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-A0h]
  struct _IO_STATUS_BLOCK Src; // [rsp+70h] [rbp-98h] BYREF
  PVOID v51; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v52[8]; // [rsp+88h] [rbp-80h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v54[3]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v55; // [rsp+C0h] [rbp-48h]
  int *v56; // [rsp+C8h] [rbp-40h]
  BOOL v60; // [rsp+168h] [rbp+60h]

  v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      133,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v47 = 0LL;
  Object = 0LL;
  if ( a12 == 1 )
    ProbeForWrite(Address, Length, 1u);
  v19 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v47);
  Status = v19;
  if ( v19 >= 0 )
  {
    v20 = (struct RawInputManagerObject *)v47;
    v60 = *((_QWORD *)v47 + 14) == (_QWORD)KeGetCurrentThread();
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v52,
      (struct RIMLOCK *)((char *)v47 + 104));
    if ( *((_BYTE *)v20 + 81) )
    {
      Status = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v35 = 0;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 19392),
          3,
          1,
          135,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( Status >= 0 )
      {
        v21 = (char *)Object;
        if ( *((_QWORD *)Object + 35) && (v22 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 36)) != 0LL )
        {
          if ( (*((_DWORD *)Object + 60) & 0x2000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4261LL);
            v23 = (void *)*((_QWORD *)v21 + 35);
            if ( a12 == 1 )
              NtDeviceIoControlFile(v23, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v23, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
          }
          else
          {
            Src = 0LL;
            memset(&Event, 0, sizeof(Event));
            DeviceObject = IoGetRelatedDeviceObject(v22);
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v24 = IoBuildDeviceIoControlRequest(
                    a3,
                    DeviceObject,
                    a4,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &Src);
            v25 = v24;
            if ( v24 )
            {
              v24->RequestorMode = a12;
              ObfReferenceObject(v22);
              v25->Tail.Overlay.CurrentStackLocation[-1].FileObject = v22;
              if ( v60 )
                KeBugCheckEx(0x164u, 0x24uLL, (ULONG_PTR)(v21 + 264), 0LL, 0LL);
              RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
                (RimTelemetryScopedIoctlObserver *)v54,
                "RimDeviceIoControl",
                (struct RIMDEV *const)(v21 + 72),
                &Status,
                a3);
              RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v51, v20);
              v26 = IofCallDriver(DeviceObject, v25);
              for ( i = v26 == 259; ; i = v26 == 257 )
              {
                Status = v26;
                if ( !i )
                  break;
                v26 = KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL);
              }
              Status = Src.Status;
              RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v51);
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              RimTelemetry::LogBlockingIoControlRequest(
                (const char *)v54[2],
                (struct RIMDEV *const)v54[1],
                (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v54[0])) / gliQpcFreq.QuadPart,
                *v56,
                v55);
              ObfDereferenceObject(v22);
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v29 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v29 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v29, &Src.Information, 4uLL);
            }
            else
            {
              *a8 = Src.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v30 = 0;
          }
          v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v32 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
            LOBYTE(v33) = v31;
            LOBYTE(v34) = v30;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v34,
              v33,
              *(_QWORD *)(v32 + 19392),
              3,
              1,
              134,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
          }
        }
        ObfDereferenceObject(v21);
      }
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v52);
    ObfDereferenceObject(v20);
    v19 = Status;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v40 = 0;
  }
  v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v42 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v43) = v41;
    LOBYTE(v44) = v40;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v44,
      v43,
      *(_QWORD *)(v42 + 19392),
      4,
      1,
      136,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v19);
    return (unsigned int)Status;
  }
  return (unsigned int)v19;
}
