/*
 * XREFs of NtUserGetPointerFrameTimes @ 0x1C00DFE30
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01C9214 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 */

__int64 __fastcall NtUserGetPointerFrameTimes(__int64 a1, __int64 a2, volatile void *a3, __int64 a4)
{
  __int64 v5; // r14
  int v6; // edi
  struct tagTHREADINFO *v7; // r15
  int PointerFrameTimesInternal; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v5 = (unsigned int)a2;
  v6 = a1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, (__int64)a3, a4);
  PointerFrameTimesInternal = 0;
  if ( !v6 || HIWORD(v6) || (unsigned int)(v5 - 1) > 0x63 || !a3 || v6 == 1 )
  {
    UserSetLastError(87);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 144 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
    v14 = SGDGetUserSessionState(v11, v10, v12, v13);
    PointerFrameTimesInternal = CTouchProcessor::GetPointerFrameTimesInternal(
                                  *(CTouchProcessor **)(v14 + 3424),
                                  v7,
                                  v6,
                                  v5,
                                  (struct TELEMETRY_POINTER_FRAME_TIMES *)a3);
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return PointerFrameTimesInternal;
}
