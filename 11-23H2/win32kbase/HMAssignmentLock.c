/*
 * XREFs of HMAssignmentLock @ 0x1C004FF50
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0064820 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 *     ?LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z @ 0x1C00AFE90 (-LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00B8300 (xxxChangeForegroundKeyboardTable.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C00C4464 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1C00CFF20 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 *     rimDispatchCompleteFrames @ 0x1C00E1F5C (rimDispatchCompleteFrames.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01B4F70 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B5004 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01B53CC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B57E4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01BE724 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01BF35C (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01E46A8 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E65EC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0056E30 (HMUnlockObjectInternal.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall HMAssignmentLock(__int64 **a1, int a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx

  v2 = a1[1];
  v3 = **a1;
  **a1 = (__int64)v2;
  if ( !v3 || (__int64 *)v3 != v2 )
  {
    if ( v2 )
    {
      if ( (*((_BYTE *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*(_DWORD *)v2 + 25) & 1) != 0 )
      {
        if ( a2 != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2799LL);
        UserSetLastError(87LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
    }
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal(v3);
  }
  return v3;
}
