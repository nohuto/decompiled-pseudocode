/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1401B8CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14010F668 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x14021CA78 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(void *Src, unsigned int a2, void *a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  __int64 v8; // rcx
  _QWORD *UserSessionState; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  int **v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 MouseProcessor; // rax
  __int64 v17; // [rsp+28h] [rbp-A0h] BYREF
  __int64 *v18; // [rsp+38h] [rbp-90h] BYREF
  __int128 v19; // [rsp+40h] [rbp-88h] BYREF
  __int128 v20; // [rsp+50h] [rbp-78h]
  __int64 v21; // [rsp+60h] [rbp-68h]
  __int128 v22; // [rsp+68h] [rbp-60h] BYREF
  __int128 v23; // [rsp+78h] [rbp-50h]
  __int64 v24; // [rsp+88h] [rbp-40h]
  __int64 v25; // [rsp+E8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v18, "MITSynthesizeMouseInput", 0LL);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v6 = 0;
  v7 = 0;
  v17 = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v8);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v10;
  if ( v10 )
  {
    while ( 1 )
    {
      v12 = (int **)UserSessionState[2471];
      if ( !v12 )
        break;
      UserSessionState[2471] = v12[2];
      v12[2] = 0LL;
      if ( !(*v12)[2] )
      {
        LODWORD(v25) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v12);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( IsInputThread(v11) )
  {
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    RtlCopyFromUser(&v19, Src, 0x28uLL);
    v22 = v19;
    v23 = v20;
    v24 = v21;
    if ( a3 )
    {
      v25 = 0LL;
      RtlCopyFromUser(&v25, a3, 8uLL);
      v7 = v25;
      v17 = v25;
    }
    InputTraceLogging::Mouse::InjectInput();
    v13 = (unsigned __int64)&v17 & -(__int64)(v7 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v14);
    if ( MouseProcessor )
      v6 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, &v22, a2, v13);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v18);
  return v6;
}
