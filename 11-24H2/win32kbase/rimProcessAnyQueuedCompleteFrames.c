/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x14017FDE8
 * Callers:
 *     rimCompleteReads @ 0x14005CF54 (rimCompleteReads.c)
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1400EE620 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1401204E0 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x140130970 (rimDispatchCompleteFrame.c)
 *     rimDispatchCompleteFrames @ 0x1401309D4 (rimDispatchCompleteFrames.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFindOtherQueuedFrames @ 0x1401ED5E8 (rimFindOtherQueuedFrames.c)
 */

_UNKNOWN **__fastcall rimProcessAnyQueuedCompleteFrames(struct RawInputManagerObject *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  struct RawInputManagerObject *v5; // rcx
  char *v6; // rbp
  __int64 v7; // r15
  int v8; // eax
  char v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  struct RawInputManagerObject **v15; // rax
  char v16; // si
  char v17; // r14
  __int64 v18; // rax
  int OtherQueuedFrames; // eax
  struct RIMDEV *v20; // rdx
  int v21; // [rsp+20h] [rbp-68h]
  int v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+38h] [rbp-50h]
  int v24; // [rsp+90h] [rbp+8h] BYREF
  PVOID Buffer; // [rsp+98h] [rbp+10h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 )
  {
    v24 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 850LL);
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x200) != 0 )
  {
    v24 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 851LL);
  }
  result = (_UNKNOWN **)((char *)a1 + 744);
  v5 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 93);
  if ( v5 != (struct RawInputManagerObject *)((char *)a1 + 744) && *((_BYTE *)a1 + 776) )
  {
    v6 = (char *)v5 - 8;
    v7 = *((_QWORD *)v5 + 4);
    if ( (*((_QWORD *)a1 + 104) || *((_DWORD *)a1 + 264))
      && (v8 = *(_DWORD *)(v7 + 240), (v8 & 0x2000) != 0)
      && (v8 & 0x1000000) == 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v9 = 0;
      }
      result = &WPP_RECORDER_INITIALIZED;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v13,
                              v12,
                              *(_QWORD *)(UserSessionState + 19392),
                              4,
                              1,
                              20,
                              (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids);
      }
    }
    else
    {
      v14 = *(_QWORD *)v5;
      if ( *(struct RawInputManagerObject **)(*(_QWORD *)v5 + 8LL) != v5
        || (v15 = (struct RawInputManagerObject **)*((_QWORD *)v5 + 1), *v15 != v5) )
      {
        __fastfail(3u);
      }
      *v15 = (struct RawInputManagerObject *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      *((_QWORD *)v5 + 1) = v5;
      *(_QWORD *)v5 = v5;
      *((_QWORD *)v6 + 5) = 0LL;
      --*(_QWORD *)(v7 + 248);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_qi(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v17,
          *(_QWORD *)(v18 + 19392),
          v21,
          v22,
          0x13u,
          v23);
      }
      if ( ((unsigned int)RimDeviceTypeToRimInputType((v7 + 72) & -(__int64)(v7 != 0), 2) & *((_DWORD *)a1 + 21)) == 0 )
      {
        v24 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 910LL);
      }
      if ( (*(_DWORD *)(((v7 + 72) & -(__int64)(v7 != 0)) + 0xB8) & 0x80u) == 0 )
      {
        v24 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 911LL);
      }
      *((_BYTE *)a1 + 776) = 0;
      InputTraceLogging::RIM::DispatchFrame((v7 + 72) & -(__int64)(v7 != 0), (int *)v6, 1);
      v26 = 0LL;
      Buffer = 0LL;
      v24 = 0;
      OtherQueuedFrames = rimFindOtherQueuedFrames(a1, (v7 + 72) & -(__int64)(v7 != 0), v6, &v26, &Buffer, &v24);
      v20 = (struct RIMDEV *)((v7 + 72) & -(__int64)(v7 != 0));
      if ( OtherQueuedFrames )
      {
        rimDispatchCompleteFrames(a1, v20, v26, (unsigned int *)Buffer, v24);
        GreDeleteFastMutex((char *)Buffer);
      }
      else
      {
        rimDispatchCompleteFrame(a1, v20, (int *)v6);
      }
      return (_UNKNOWN **)ObfDereferenceObject((PVOID)v7);
    }
  }
  return result;
}
