/*
 * XREFs of rimSignalReadComplete @ 0x14005D0F0
 * Callers:
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     rimDispatchCompleteFrames @ 0x1401309D4 (rimDispatchCompleteFrames.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMIsInputSuppressed @ 0x14005D5E4 (RIMIsInputSuppressed.c)
 *     ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x14005D6CC (-ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x14005D7A0 (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@PEAU_IO_STATUS_BL.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x14005DB88 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D75DC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x14019CA54 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 */

void __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, struct RIMDEV *a2, struct _IO_STATUS_BLOCK *a3)
{
  _DWORD *v4; // rdi
  struct _IO_STATUS_BLOCK *v5; // r13
  __int64 v7; // rcx
  char v8; // r15
  __int64 v9; // rbx
  char v10; // si
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v21; // rcx
  bool v22; // r13
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  char v26; // di
  __int64 v27; // rbx
  __int64 UserSessionState; // rax
  char v29; // r14
  char v30; // di
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // [rsp+28h] [rbp-70h]
  int updated; // [rsp+B8h] [rbp+20h]

  v4 = (_DWORD *)((char *)a2 + 184);
  v5 = a3;
  v8 = 0;
  if ( (unsigned int)RIMIsInputSuppressed(a2) && (*v4 & 0x80u) == 0 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
      v8 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = *((_QWORD *)a2 + 2);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v26,
        *(_QWORD *)(UserSessionState + 19392),
        4u,
        1u,
        0xAu,
        (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
        a2,
        v27);
    }
    InputTraceLogging::RIM::DropInput(a2, 5LL);
    *((_BYTE *)a1 + 776) = 1;
  }
  else if ( *((_BYTE *)a1 + 776) )
  {
    InputTraceLogging::RIM::SkipReadComplete(a1, a2);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v29 = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = *((_QWORD *)a2 + 2);
      v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v30,
        *(_QWORD *)(v32 + 19392),
        4u,
        1u,
        0xDu,
        (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
        a2,
        v31);
    }
  }
  else
  {
    v9 = W32GetUserSessionState(v7) + 88;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
    v10 = 1;
    *((LARGE_INTEGER *)a1 + 113) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)a1 + 228) = 1;
    if ( *(_QWORD *)(W32GetUserSessionState(v11) + 176) && !*(_BYTE *)(W32GetUserSessionState(v12) + 170) )
    {
      *(_BYTE *)(W32GetUserSessionState(v12) + 170) = 1;
      v34 = W32GetUserSessionState(v33);
      KeSetTimer(*(PKTIMER *)(v34 + 176), (LARGE_INTEGER)-50000000LL, 0LL);
    }
    v13 = W32GetUserSessionState(v12);
    *(_QWORD *)(v13 + 96) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 88, 0LL);
    KeLeaveCriticalRegion();
    if ( (*v4 & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a2 + 57) + 24LL) != 7 )
    {
      v35 = 0;
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL);
      if ( updated < 0 )
      {
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v21 = *((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( (v21 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
            v8 = 1;
        }
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = W32GetUserSessionState(v21);
          LOBYTE(v24) = v22;
          LOBYTE(v25) = v8;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            v24,
            *(_QWORD *)(v23 + 19392),
            4,
            1,
            11,
            (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
            updated);
        }
        v5 = a3;
      }
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v10 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *((_QWORD *)a1 + 105);
      v16 = *((_QWORD *)a2 + 2);
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v18) = v14;
      LOBYTE(v19) = v10;
      WPP_RECORDER_AND_TRACE_SF_qqqq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 19392),
        4,
        v35,
        12,
        (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
        (char)a1,
        (char)a2,
        v16,
        v15);
    }
    InputTraceLogging::RIM::ReadComplete(a1, a2, v5);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a2 + 282) = *((_QWORD *)a2 + 283);
    *((_QWORD *)a2 + 285) = *((_QWORD *)a2 + 286);
    *((LARGE_INTEGER *)a2 + 284) = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::RIM::ReadComplete(PerformanceCounter.QuadPart);
    *((_DWORD *)a2 + 43) |= 8u;
    ZwSetEvent(*((HANDLE *)a1 + 105), 0LL);
    ZwClose(*((HANDLE *)a1 + 105));
    *((_QWORD *)a1 + 105) = 0LL;
  }
}
