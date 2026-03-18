/*
 * XREFs of xxxUserResetDisplayDevice @ 0x140135460
 * Callers:
 *     PowerOnGdi @ 0x140134F50 (PowerOnGdi.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x140093938 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140131520 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall xxxUserResetDisplayDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  result = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(result + 19200) )
  {
    EtwTracexxxUserResetDisplayDeviceBegin(0xFFFFFFFFLL);
    *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19232) = 0LL;
    v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19928);
    v8 = *(_DWORD *)(v7 + 4964);
    UserSessionState = W32GetUserSessionState(v7, v9);
    zzzInternalSetCursorPos(*(unsigned int *)(*(_QWORD *)(UserSessionState + 19928) + 4960LL), v8, 2, 1);
    LOBYTE(v11) = 1;
    SetPointerInternal(v11, 6LL);
    v14 = W32GetUserSessionState(v13, v12);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
      BugCheckParameter3,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 19200) + 8LL) + 24LL));
    v17 = W32GetUserSessionState(v16, v15);
    xxxRedrawWindow(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v17 + 19200) + 8LL) + 24LL), 0LL, 0LL, 133);
    EtwTracexxxUserResetDisplayDeviceEnd(0xFFFFFFFFLL);
    v20 = PtiCurrent(v19, v18);
    return Win32HM_UnlockFromThread<1>((ULONG_PTR)v20, BugCheckParameter3);
  }
  return result;
}
