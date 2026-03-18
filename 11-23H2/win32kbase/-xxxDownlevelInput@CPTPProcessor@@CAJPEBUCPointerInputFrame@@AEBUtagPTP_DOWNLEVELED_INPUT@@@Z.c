/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E1050
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E1218 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C006BBB0 (InternalMapVirtualKeyEx.c)
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C01DEA90 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C0207988 (ApiSetEditionSynthesizeMouseWheel.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 v6; // r12
  DWORD LowPart; // r15d
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r8
  bool v12; // cf
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[4]; // [rsp+30h] [rbp-30h] BYREF
  int v19; // [rsp+34h] [rbp-2Ch]
  __int128 v20; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+48h] [rbp-18h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)gptiCurrent + 147);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LowPart = KeQueryPerformanceCounter(0LL).LowPart;
  InputTraceLogging::PTP::DownlevelInput(a1, a2);
  v9 = *(unsigned int *)a2;
  v10 = (unsigned int)v9;
  if ( !(_DWORD)v9 || (v10 = (unsigned int)(v9 - 1), (_DWORD)v9 == 1) )
  {
    *(_QWORD *)&v21 = 0LL;
    v20 = 0LL;
    WORD1(v20) = 128;
    v13 = 1024;
    if ( (_DWORD)v9 )
      v13 = 2048;
    WORD3(v20) = *((_WORD *)a2 + 2);
    WORD2(v20) = v13;
    UserSessionSwitchLeaveCrit(v8, WORD3(v20), v10, v9);
    ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v20, v6, LowPart, 134120);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v18, v14, v15, v16);
  }
  else if ( (_DWORD)v9 == 2 )
  {
    v11 = *((_QWORD *)gptiCurrent + 55);
    v12 = *((_DWORD *)a2 + 1) != 0;
    *(_QWORD *)&v20 = 0LL;
    *((_QWORD *)&v20 + 1) = v5;
    *(_DWORD *)((char *)&v20 + 2) = (unsigned __int16)(v12 ? 16546 : -16222);
    v21 = 0LL;
    if ( v11 )
      LOBYTE(v20) = InternalMapVirtualKeyEx(0xA2u, 0, *(_QWORD *)(*(_QWORD *)(v11 + 48) + 32LL));
    xxxProcessKeyEvent((unsigned __int16 *)&v20, 0LL, 0, 0, 0LL, 0LL);
  }
  else
  {
    v19 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 382);
    return (unsigned int)-1073741811;
  }
  return v2;
}
