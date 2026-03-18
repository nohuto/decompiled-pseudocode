/*
 * XREFs of NtUserGetPointerFrameTimes @ 0x14016D2C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D4090 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerFrameTimes(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v3; // rsi
  int PointerFrameTimesInternal; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  PointerFrameTimesInternal = 0;
  if ( !a1 || HIWORD(a1) || (unsigned int)(v3 - 1) > 0x63 || !a3 || a1 == 1 )
  {
    UserSetLastError(87);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 144 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
    UserSessionState = W32GetUserSessionState(v7);
    PointerFrameTimesInternal = CTouchProcessor::GetPointerFrameTimesInternal(
                                  *(CTouchProcessor **)(UserSessionState + 3264),
                                  v11,
                                  a1,
                                  v3,
                                  (struct TELEMETRY_POINTER_FRAME_TIMES *)a3);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return PointerFrameTimesInternal;
}
