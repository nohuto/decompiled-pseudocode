/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1402031E4
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140184868 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     EtwTraceUIPIInputError @ 0x1400256B0 (EtwTraceUIPIInputError.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400952AC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL @ 0x1400C9E90 (WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL.c)
 *     flagString @ 0x1400D13C0 (flagString.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1400FAC58 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104354 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     messageString @ 0x140107DFC (messageString.c)
 *     GetPointerInputSource @ 0x140108F80 (GetPointerInputSource.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x14014D734 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ApiSetEditionPostInputMessage @ 0x140192E3C (ApiSetEditionPostInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 */

__int64 __fastcall CTouchProcessor::PostPointerMessage(
        CTouchProcessor *this,
        const struct CInputDest *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerInfoNode *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  const struct CPointerInfoNode *v10; // r15
  __int64 v11; // rcx
  __int64 Queue; // r13
  char v13; // bl
  struct tagTHREADINFO *ThreadInfo; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // xmm0_8
  int v19; // eax
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // xmm6_8
  int v25; // ebx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  unsigned int v29; // r14d
  unsigned __int64 v30; // r13
  bool v31; // al
  __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // r14d
  bool v38; // di
  __int64 UserSessionState; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // [rsp+28h] [rbp-C1h]
  int v43; // [rsp+30h] [rbp-B9h]
  int v44; // [rsp+38h] [rbp-B1h]
  int v45; // [rsp+40h] [rbp-A9h]
  char v46; // [rsp+98h] [rbp-51h]
  __int64 v47; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-41h] BYREF
  int v49; // [rsp+B0h] [rbp-39h]
  __int128 v50; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-21h]
  char v52; // [rsp+138h] [rbp+4Fh]

  v47 = 0LL;
  v10 = a4;
  Queue = CInputDest::GetQueue(a2, 0);
  v13 = 1;
  if ( !Queue )
    goto LABEL_24;
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v11) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10309);
  ThreadInfo = CInputDest::GetThreadInfo(a2);
  if ( !ThreadInfo )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10312);
  if ( !a8 || (*(_DWORD *)v10 & 0x800) != 0 || a9 )
    goto LABEL_24;
  v15 = HMValidateHandleNoSecure(*((_QWORD *)v10 + 23), 19);
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10323);
  if ( UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*(_QWORD *)(v15 + 456) + 952LL),
         (const struct tagUIPI_INFO *)(Queue + 472),
         0LL)
    || (v16 = *(_QWORD *)(*(_QWORD *)(v15 + 368) + 88LL)) != 0
    && (*(_BYTE *)(v16 + 816) & 0x30) == 0x10
    && (v17 = *((_QWORD *)ThreadInfo + 58), v16 == v17)
    && (v18 = *(_QWORD *)(v17 + 872),
        v19 = *(_DWORD *)(v17 + 880),
        v48 = v18,
        v49 = v19,
        (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)ThreadInfo, &v48, 0)) )
  {
LABEL_24:
    v29 = a6;
    v30 = *((unsigned __int16 *)v10 + 86);
    if ( a6 != 595 )
      v30 = *((unsigned __int16 *)v10 + 86) | ((unsigned __int64)(*((_WORD *)v10 + 90) & 0xE1F7) << 16);
    GetPointerInputSource(*((_DWORD *)v10 + 42), a8, a9, &v47);
    v31 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v52 = v31;
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      flagString(WORD1(v30));
      W32GetUserSessionState(v32);
      messageString(a6);
      WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL(*((_QWORD *)WPP_GLOBAL_Control + 3), v52, v46, v33, v42, v43, v44, v45);
      v10 = a4;
      v29 = a6;
      v13 = 1;
    }
    v34 = *((_DWORD *)v10 + 78);
    v35 = *((_QWORD *)v10 + 31);
    v51 = 0LL;
    v50 = 0LL;
    v37 = ApiSetEditionPostInputMessage(
            (__int64)a2,
            0LL,
            v29,
            v30,
            a5,
            a7,
            v35,
            0LL,
            v34 != 0 ? 8 : 0,
            &v47,
            (__int64)&v50);
    if ( v37 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v36 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v36 & 8) == 0)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v13 = 0;
      }
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v36);
        LOBYTE(v40) = v38;
        LOBYTE(v41) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v40,
          *(_QWORD *)(UserSessionState + 69400),
          4,
          4,
          276,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
    }
    return v37;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v13 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69400),
        3,
        4,
        274,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput();
    v24 = *(_QWORD *)(Queue + 472);
    v25 = *(_DWORD *)(Queue + 480);
    v27 = PtiCurrent(v26);
    v48 = v24;
    v49 = v25;
    EtwTraceUIPIInputError((__int64)v27, (__int64)ThreadInfo, Queue, &v48, 8);
    return 0LL;
  }
}
