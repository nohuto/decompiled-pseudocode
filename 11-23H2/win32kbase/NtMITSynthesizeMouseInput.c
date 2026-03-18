/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C0142200
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C01403A0 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01F6B28 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  char v16; // al
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 MouseProcessor; // rax
  __int64 v29; // [rsp+28h] [rbp-90h] BYREF
  __int64 *v30; // [rsp+38h] [rbp-80h] BYREF
  __int128 v31; // [rsp+40h] [rbp-78h] BYREF
  __int128 v32; // [rsp+50h] [rbp-68h]
  __int64 v33; // [rsp+60h] [rbp-58h]
  __int128 v34; // [rsp+70h] [rbp-48h]
  __int128 v35; // [rsp+80h] [rbp-38h]
  __int64 v36; // [rsp+90h] [rbp-28h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v30, "MITSynthesizeMouseInput", 0LL);
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v6 = 0;
  LODWORD(v7) = 0;
  v29 = 0LL;
  LOBYTE(v8) = 1;
  v12 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v8, v9, v10, v11);
  gptiCurrent = v12;
  if ( v12 )
  {
    *((_DWORD *)v12 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v15 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v15 && (*(_DWORD *)(v15 + 12) & 0x8000) != 0 )
    {
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v16 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v16 = 0;
      if ( v16 )
      {
        while ( 1 )
        {
          v17 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v17[2] = 0LL;
          if ( !*(_DWORD *)(*v17 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v17);
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v34 = *(_OWORD *)a1;
    v35 = *(_OWORD *)(a1 + 16);
    v36 = *(_QWORD *)(a1 + 32);
    v31 = v34;
    v32 = v35;
    v33 = v36;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v7 = *a3;
      v29 = *a3;
    }
    InputTraceLogging::Mouse::InjectInput();
    v22 = (unsigned __int64)&v29 & -(__int64)((_DWORD)v7 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v24, v23, v25, v26);
    if ( MouseProcessor )
      v6 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, &v31, a2, v22);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v30);
  return v6;
}
