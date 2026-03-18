/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1402EE738
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14012A9E8 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x140195A58 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1402EEA4C (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1402EEB24 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2,
        struct tagWND *a3)
{
  int v3; // r15d
  struct tagWND *v6; // r9
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[5]; // [rsp+38h] [rbp-38h] BYREF

  v3 = *((_DWORD *)this + 14);
  memset(&v12[2], 0, 24);
  if ( a2 )
  {
    if ( (*((_DWORD *)a3 + 95) & 0x40000000) != 0
      && (v6 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 472LL) + 128LL)) != 0LL )
    {
      v7 = *(_OWORD *)(*((_QWORD *)v6 + 5) + 104LL);
    }
    else
    {
      v6 = a3;
      v7 = *(_OWORD *)(*((_QWORD *)a3 + 5) + 88LL);
    }
    v12[1] = *((_QWORD *)&v7 + 1);
    LODWORD(v12[0]) = v7 + (DWORD2(v7) - (int)v7) / 2;
    HIDWORD(v12[0]) = DWORD1(v7) + (HIDWORD(v7) - DWORD1(v7)) / 2;
    LogicalToPhysicalDPIPoint(v12, v12, *(unsigned int *)(*((_QWORD *)v6 + 5) + 288LL), 0LL);
    if ( v3 == 2 && !(unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
      goto LABEL_9;
    KeQueryPerformanceCounter(0LL);
    *(_DWORD *)((char *)&v12[2] + 2) = 67109376;
    HIWORD(v12[2]) = a2;
    InputTraceLogging::Mouse::InjectInput();
    LOBYTE(v8) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v11, v8);
    *(_QWORD *)((char *)&v12[3] + 4) = v12[0];
    SynthesizeMouseInput(0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v11);
    xxxProcessMouseEvent(v9);
    if ( v3 == 2 )
LABEL_9:
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
