/*
 * XREFs of RIMGetProductString @ 0x14013B8BC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     wcscmp_0 @ 0x14023F38C (wcscmp_0.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall RIMGetProductString(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _FILE_OBJECT *a3,
        struct RIMDEV *a4)
{
  unsigned int Status; // esi
  void *OutputBuffer; // r12
  PIRP v10; // rax
  IRP *v11; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v13; // rax
  __int64 v15; // rax
  size_t Information; // r8
  void *v17; // rcx
  const wchar_t *v18; // r8
  _WORD *v19; // rdx
  unsigned __int64 i; // rax
  __int16 v21; // cx
  char v22; // bl
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  char v27; // bl
  bool v28; // di
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  memset(&Event, 0, sizeof(Event));
  Status = -1073741811;
  IoStatusBlock = 0LL;
  OutputBuffer = (void *)Win32AllocPoolZInitImpl(64LL, 0x200uLL, 0x6B707352u);
  if ( OutputBuffer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v10 = IoBuildDeviceIoControlRequest(0xB01BEu, a2, 0LL, 0, OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
    v11 = v10;
    if ( v10 )
    {
      v10->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      Status = IofCallDriver(a2, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      v13 = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        "GetProductString",
        a4,
        (unsigned __int64)(1000 * (v13.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
        Status,
        0);
      if ( Status )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v27 = 0;
        }
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v30) = v28;
          LOBYTE(v31) = v27;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v30,
            *(_QWORD *)(UserSessionState + 19392),
            3,
            1,
            21,
            (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
            Status);
        }
      }
      else if ( IoStatusBlock.Information <= 0x200 )
      {
        v15 = Win32AllocPoolZInitImpl(256LL, IoStatusBlock.Information + 2, 0x77647352u);
        *(_QWORD *)(a1 + 384) = v15;
        if ( v15 )
        {
          *(_WORD *)(v15 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v17 = *(void **)(a1 + 384);
          *(_WORD *)(a1 + 376) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 378) = Information + 2;
          memmove(v17, OutputBuffer, Information);
          v18 = *(const wchar_t **)(a1 + 384);
          if ( v18 )
          {
            v19 = *(_WORD **)(a1 + 384);
            for ( i = (unsigned __int64)*(unsigned __int16 *)(a1 + 378) >> 1; i; --i )
            {
              if ( !*v19 )
                break;
              ++v19;
            }
            if ( i )
              v21 = (*(_WORD *)(a1 + 378) >> 1) - i;
            else
              v21 = 0;
            if ( i )
              *(_WORD *)(a1 + 376) = 2 * v21;
          }
          if ( !wcscmp_0(v18, L"VHidPen") )
            *(_DWORD *)(a1 + 368) |= 0x2000u;
        }
      }
      else
      {
        Status = -1073741811;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 19392),
          3,
          1,
          20,
          (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
      }
    }
    GreDeleteFastMutex((char *)OutputBuffer);
  }
  return Status;
}
