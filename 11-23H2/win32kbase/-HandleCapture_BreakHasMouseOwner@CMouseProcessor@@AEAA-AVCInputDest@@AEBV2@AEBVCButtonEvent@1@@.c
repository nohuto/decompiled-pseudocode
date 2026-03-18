/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C01F7A08
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00092AC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C000B5F0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0053338 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0057318 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00BCDF0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01B4F70 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        __int64 a4)
{
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v9; // rdx
  struct tagTHREADINFO *PtiFromInputDest; // rax
  HWND WindowHandle; // rax
  __int64 v12; // rcx
  int v13; // eax
  bool v14; // zf
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+38h] [rbp-60h] BYREF

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4174);
  if ( *(_DWORD *)(a4 + 32) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4175);
  CInputDest::CInputDest(a2, (__int64 **)(a1 + 3576));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 3576));
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v9 )
  {
    if ( v9 == ThreadInfo )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( ThreadInfo || !CInputDest::operator==((int *)(a1 + 3576), (__int64)a3) )
  {
LABEL_10:
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest((__int64)a3, 2);
    CInputGlobals::SetPtiLastWoken(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1), PtiFromInputDest, 0);
  }
LABEL_11:
  if ( (*(_DWORD *)(*(_QWORD *)(a4 + 8) + 112LL) & 2) != 0 )
  {
    WindowHandle = CInputDest::GetWindowHandle(a2);
    CBaseProcessor::PostQEventWork(v12, (__int64)WindowHandle, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_DWORD *)(a4 + 28) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7397);
  v13 = ~*(_DWORD *)(a4 + 28);
  v14 = (v13 & *(_DWORD *)(a1 + 3572)) == 0;
  *(_DWORD *)(a1 + 3572) &= v13;
  if ( v14 )
  {
    CInputDest::SetEmpty((CInputDest *)(a1 + 3576));
    _InterlockedExchange((volatile __int32 *)(a1 + 3696), 0);
    if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 64LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0289810,
        (unsigned __int8 *)dword_1C025EADA,
        0LL,
        0LL,
        2u,
        &v16);
  }
  return a2;
}
