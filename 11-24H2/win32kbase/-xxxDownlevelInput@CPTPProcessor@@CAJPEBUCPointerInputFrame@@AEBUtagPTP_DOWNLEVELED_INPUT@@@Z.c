/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D33A8
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D32E0 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x1400969C0 (InternalMapVirtualKeyEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x14013A094 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x140193424 (ApiSetEditionSynthesizeMouseWheel.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 v6; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD LowPart; // r15d
  int v9; // r8d
  __int64 v10; // r8
  bool v11; // cf
  __int16 v12; // ax
  _BYTE v14[4]; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+34h] [rbp-2Ch]
  __int128 v16; // [rsp+38h] [rbp-28h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)PtiCurrent(0LL) + 157);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LowPart = PerformanceCounter.LowPart;
  InputTraceLogging::PTP::DownlevelInput(a1, a2, PerformanceCounter.QuadPart);
  v9 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 < 2u )
  {
    *(_QWORD *)&v17 = 0LL;
    v16 = 0LL;
    WORD1(v16) = 128;
    v12 = 1024;
    if ( v9 )
      v12 = 2048;
    WORD3(v16) = *((_WORD *)a2 + 2);
    WORD2(v16) = v12;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v14, 1);
    ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v16, v6, LowPart, 134120);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v14);
  }
  else if ( *(_DWORD *)a2 == 2 )
  {
    v10 = *((_QWORD *)PtiCurrent((unsigned int)(*(_DWORD *)a2 - 1)) + 60);
    v11 = *((_DWORD *)a2 + 1) != 0;
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = v5;
    *(_DWORD *)((char *)&v16 + 2) = (unsigned __int16)(v11 ? 16546 : -16222);
    v17 = 0LL;
    if ( v10 )
      LOBYTE(v16) = InternalMapVirtualKeyEx(0xA2u, 0, *(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL));
    xxxProcessKeyEvent((unsigned int)&v16, 0, 0, 0, 0LL, 0LL);
  }
  else
  {
    v15 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 376LL);
    return (unsigned int)-1073741811;
  }
  return v2;
}
