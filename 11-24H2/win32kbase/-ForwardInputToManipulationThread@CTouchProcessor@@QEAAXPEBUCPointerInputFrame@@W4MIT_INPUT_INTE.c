/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0
 * Callers:
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x14019C9C0 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140052A40 (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1400DE50C (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1401829E0 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1401857E4 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1401F704C (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FB714 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_UNKNOWN **__fastcall CTouchProcessor::ForwardInputToManipulationThread(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r13d
  CTouchProcessor *v7; // rcx
  unsigned int v8; // r14d
  char *v9; // rcx
  __int64 v10; // rax
  char v11; // bl
  _UNKNOWN **result; // rax
  char v13; // di
  __int64 UserSessionState; // rax
  _DWORD *v15; // r12
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v17; // rcx
  _DWORD *v18; // r15
  CTouchProcessor *v19; // rcx
  char v20; // di
  char v21; // r12
  unsigned int v22; // r13d
  struct CInputPointerNode *NodeById; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbx
  char v27; // cf
  unsigned int v28; // [rsp+50h] [rbp-69h]
  unsigned int v29[2]; // [rsp+50h] [rbp-69h]
  void *v30; // [rsp+58h] [rbp-61h]
  __int64 v31; // [rsp+60h] [rbp-59h] BYREF
  int v32; // [rsp+68h] [rbp-51h]
  int v33; // [rsp+6Ch] [rbp-4Dh]
  int v34; // [rsp+70h] [rbp-49h]
  int v35; // [rsp+74h] [rbp-45h]
  __int128 v36; // [rsp+80h] [rbp-39h]
  __int128 v37; // [rsp+90h] [rbp-29h]
  unsigned int Size; // [rsp+138h] [rbp+7Fh]

  v6 = CTouchProcessor::CountMTNodesReadyForRouting((CTouchProcessor *)a1, (const struct CPointerInputFrame *)a2);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3127LL);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3128LL);
  v7 = (CTouchProcessor *)(v6 - 1);
  if ( (unsigned __int64)(240LL * (_QWORD)v7) > 0xFFFFFFFF || (v8 = 240 * (_DWORD)v7 + 408, Size = v8, v8 < 0x198) )
  {
    v8 = 0;
    Size = 0;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3140LL);
  }
  if ( (unsigned __int64)v8 > *(_QWORD *)(a1 + 136) )
  {
    v9 = *(char **)(a1 + 128);
    if ( v9 )
    {
      GreDeleteFastMutex(v9);
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v10 = Win32AllocPoolZInitImpl(256LL, v8, 0x6D696955u);
    *(_QWORD *)(a1 + 128) = v10;
    if ( !v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3152LL);
    if ( !*(_QWORD *)(a1 + 128) )
    {
      v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      result = &WPP_RECORDER_INITIALIZED;
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_D(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v11,
                              v13,
                              *(_QWORD *)(UserSessionState + 69400),
                              2u,
                              4u,
                              0x4Eu,
                              (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
                              v8);
      }
      return result;
    }
    *(_QWORD *)(a1 + 136) = v8;
  }
  v15 = *(_DWORD **)(a1 + 128);
  v30 = v15;
  *v15 = a3;
  v28 = CTouchProcessor::CalcManipulationInputInfoSize(v7, v6);
  if ( v8 <= v28 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3165LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v18 = v15 + 2;
  *(LARGE_INTEGER *)((isChildPartition(v17) ? 0x48 : 0) + a2 + 104) = PerformanceCounter;
  CTouchProcessor::BuildManipulationInputInfo(
    v19,
    (struct tagMANIPULATION_INPUT_INFO *)(v15 + 2),
    v28,
    (const struct CPointerInputFrame *)a2);
  InputTraceLogging::TelemetryDebug::Pointer::SendFrameToUserMode((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a2 + 72));
  InputTraceLogging::Pointer::SendFrameToUserMode(
    (const struct CPointerInputFrame *)a2,
    v6,
    (const struct tagMANIPULATION_INPUT_INFO *)(v15 + 2));
  SendMessageTo(7LL, v15, v8);
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v36 = *((_OWORD *)v18 + 10);
  v37 = *((_OWORD *)v18 + 11);
  if ( !v18[37] )
    goto LABEL_36;
  do
  {
    *(_QWORD *)v29 = 240LL * v22;
    NodeById = CTouchProcessor::FindNodeById(
                 (CTouchProcessor *)a1,
                 *(_WORD *)((char *)v18 + *(_QWORD *)v29 + 164),
                 0,
                 0);
    if ( NodeById )
    {
      _InterlockedAdd((volatile signed __int32 *)NodeById + 9, 1u);
      if ( *((int *)NodeById + 9) <= 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3193LL);
    }
    v24 = *(_DWORD *)((char *)v18 + *(_QWORD *)v29 + 172);
    if ( (v24 & 2) != 0 )
      v21 = 1;
    if ( (v24 & 4) != 0 )
      v20 = 1;
    ++v22;
  }
  while ( v22 < v18[37] );
  v8 = Size;
  if ( !v20 )
  {
LABEL_36:
    if ( (_DWORD)v36 != 3 || !v21 )
    {
      v25 = HMValidateHandleNoSecure(v37, 19);
      if ( v25 && (v26 = *(_QWORD *)(v25 + 456)) != 0 )
      {
        v34 = *(_DWORD *)(v26 + 968);
        v27 = v18[38] & 1;
        v35 = 0;
        v31 = v37;
        v33 = -v27;
        v32 = v36;
        SendMessageTo(19LL, &v31, 24LL);
        *(_DWORD *)(v26 + 972) = 0;
      }
      else if ( HIDWORD(v36) != 0x800000 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3235LL);
      }
    }
  }
  return (_UNKNOWN **)memset(v30, 0, v8);
}
