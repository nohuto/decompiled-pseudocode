/*
 * XREFs of ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14013FAD8
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14013F790 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 */

__int64 __fastcall SendSyncOutputIrpRequest(
        ULONG IoControlCode,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        struct _FILE_OBJECT *a4,
        PDEVICE_OBJECT DeviceObject,
        struct DEVICEINFO *a6)
{
  unsigned int Status; // ebp
  PIRP v11; // rax
  IRP *v12; // rbx
  LARGE_INTEGER PerformanceCounter; // r12
  bool v14; // bp
  bool v15; // r14
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // di
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  LARGE_INTEGER v24; // rax
  bool v25; // di
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-38h] BYREF

  memset(&Object, 0, sizeof(Object));
  Status = -1073741668;
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v11 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          0LL,
          0,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Object,
          &IoStatusBlock);
  v12 = v11;
  if ( v11 )
  {
    v11->Tail.Overlay.CurrentStackLocation[-1].FileObject = a4;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    Status = IofCallDriver(DeviceObject, v12);
    if ( Status == 259 )
    {
      v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(UserSessionState + 19392),
          4,
          1,
          10,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status )
    {
      v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 19392),
          3,
          1,
          11,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
    }
    v24 = KeQueryPerformanceCounter(0LL);
    RimTelemetry::LogBlockingIoControlRequest(
      "SendSyncOutputIrpRequest",
      a6,
      (unsigned __int64)(1000 * (v24.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
      Status,
      0);
  }
  else
  {
    v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 19392),
        3,
        1,
        12,
        (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
    }
  }
  return Status;
}
