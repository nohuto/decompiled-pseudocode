/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14018F1A8
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14004FFF4 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140051ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     EtwTraceMouseInputCoalesced @ 0x1400925D0 (EtwTraceMouseInputCoalesced.c)
 *     ?QueueEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GG@Z @ 0x1400F3768 (-QueueEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GG@Z.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x140121784 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x1401292B4 (IsEditionComputeInjectorUIPISupported.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x140157398 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?ComputeCoalescingStrategy@CMouseProcessor@@AEBA?AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@AEBUtagINPUT_MESSAGE_SOURCE@@W4RawMouseProcessingOptions@@PEBUMouseInputProcessingState@@@Z @ 0x14018BDEC (-ComputeCoalescingStrategy@CMouseProcessor@@AEBA-AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x14018C154 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x14018CA28 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1401921A4 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        struct MouseInputProcessingState *a3,
        const struct _SUBPIXELS *a4,
        const struct tagUIPI_INFO_INT *a5,
        const struct tagPOINT *a6)
{
  struct MouseInputProcessingState *v8; // r13
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // xmm6
  char v13; // r15
  bool v14; // al
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  __int64 v18; // xmm0_8
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r8
  struct W32_PUSH_LOCK *v22; // rbx
  int v23; // r12d
  int v24; // eax
  _WORD *v25; // rsi
  __int64 v26; // rcx
  char v27; // r12
  bool v28; // r13
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  CTouchProcessor *v35; // rcx
  char v36; // r12
  bool v37; // r13
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  _WORD *v44; // rsi
  CTouchProcessor *v45; // rcx
  bool v46; // si
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  char v53; // si
  bool v54; // r12
  __int64 UserSessionState; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // rcx
  char v59; // r12
  bool v60; // r13
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rcx
  bool v66; // zf
  int v67; // eax
  bool v68; // [rsp+40h] [rbp-40h]
  bool v69; // [rsp+41h] [rbp-3Fh]
  int v70; // [rsp+44h] [rbp-3Ch]
  __int128 v71; // [rsp+50h] [rbp-30h] BYREF
  int v72; // [rsp+60h] [rbp-20h]
  char v73; // [rsp+C0h] [rbp+40h]

  v8 = a3;
  v68 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
  v9 = 0;
  v69 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 256);
  v73 = 0;
  v12 = 0LL;
  v71 = 0LL;
  v13 = 1;
  if ( v68 && (int)IsEditionComputeInjectorUIPISupported(v11, v10) >= 0 )
  {
    v14 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 1);
    if ( a5 )
    {
      if ( v14 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3245LL);
      v12 = *(_OWORD *)a5;
      v73 = 1;
    }
    else if ( !v14 )
    {
      v73 = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
      if ( CurrentProcessWin32Process )
      {
        v17 = -*(_QWORD *)CurrentProcessWin32Process;
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      }
      v18 = *(_QWORD *)(CurrentProcessWin32Process + 872);
      v19 = *(_DWORD *)(CurrentProcessWin32Process + 880);
      *(_QWORD *)&v71 = v18;
      DWORD2(v71) = v19;
      v20 = PsGetCurrentProcessWin32Process(v17);
      v21 = v20;
      if ( v20 )
        v21 = -(__int64)(*(_QWORD *)v20 != 0LL) & v20;
      HIDWORD(v71) = *(int *)(v21 + 12) < 0;
      v12 = v71;
    }
  }
  *(_QWORD *)&v71 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v71);
  v22 = (CMouseProcessor *)((char *)this + 3008);
  W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008), 0);
  v70 = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions((__int64)a2);
  v23 = v70;
  v24 = CMouseProcessor::ComputeCoalescingStrategy((__int64)this, (__int64)a2, &v71, v70, (__int64)v8);
  switch ( v24 )
  {
    case 0:
      v25 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 56), 1);
      if ( !v25 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v53 = 0;
        }
        v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v56) = v54;
          LOBYTE(v57) = v53;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v57,
            v56,
            *(_QWORD *)(UserSessionState + 69400),
            2,
            6,
            20,
            (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
        }
        InputTraceLogging::Mouse::DropInput();
        W32ReleasePushLockExclusiveEx(v22, 0LL);
        v58 = 1LL;
        LOBYTE(v9) = *((_DWORD *)a2 + 22) != 0;
        goto LABEL_98;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v59 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v59 = 0;
      }
      v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v59 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v61 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v62) = v60;
        LOBYTE(v63) = v59;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v63,
          v62,
          *(_QWORD *)(v61 + 69400),
          4,
          6,
          21,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
      }
      goto LABEL_72;
    case 1:
      v44 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 56), 0);
      if ( (*((_DWORD *)v44 + 30) & 0x800) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3314LL);
      *((_DWORD *)v44 + 30) |= 0x10000u;
      v45 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v13 = 0;
      }
      v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v47 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v48) = v46;
        LOBYTE(v49) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v49,
          v48,
          *(_QWORD *)(v47 + 69400),
          4,
          6,
          23,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
      }
      EtwTraceMouseInputCoalesced((__int64)v45);
      InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7), v50, v51, v52);
      W32ReleasePushLockExclusiveEx(v22, 0LL);
      return;
    case 2:
      v25 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 56), 0);
      if ( (*((_DWORD *)v25 + 30) & 0x800) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3332LL);
      *((_DWORD *)v25 + 30) |= 0x10000u;
      v35 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v36 = 0;
      }
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v39) = v37;
        LOBYTE(v40) = v36;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v40,
          v39,
          *(_QWORD *)(v38 + 69400),
          4,
          6,
          24,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
      }
      EtwTraceMouseInputCoalesced((__int64)v35);
      InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7), v41, v42, v43);
LABEL_72:
      v8 = a3;
      v23 = v70;
LABEL_73:
      v25[12] = *(_WORD *)a2;
      v25[14] = *((_WORD *)a2 + 2);
      v25[15] = *((_WORD *)a2 + 3);
      *((_DWORD *)v25 + 8) = *((_DWORD *)a2 + 2);
      v25[18] = *((_WORD *)a2 + 1);
      *((_QWORD *)v25 + 14) = v71;
      *((_DWORD *)v25 + 43) = *((_DWORD *)a2 + 18);
      *(_QWORD *)(v25 + 82) = *((_QWORD *)a2 + 10);
      goto LABEL_74;
  }
  if ( v24 != 3 )
  {
    v25 = 0LL;
    goto LABEL_73;
  }
  v25 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 56), 0);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (v26 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v26 & 0x20) == 0)
    || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v27 = 0;
  }
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = W32GetUserSessionState(v26);
    LOBYTE(v30) = v28;
    LOBYTE(v31) = v27;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v30,
      *(_QWORD *)(v29 + 69400),
      4,
      6,
      22,
      (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
  }
  EtwTraceMouseInputCoalesced(v26);
  InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7), v32, v33, v34);
  v8 = a3;
  v23 = v70;
  if ( ((*((_BYTE *)v25 + 120) | (unsigned __int8)v70) & 0x10) == 0 )
  {
    if ( *((_WORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3361LL);
    if ( v25[14] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3362LL);
    if ( (*((_BYTE *)a2 + 2) & 1) == 0 && (v25[18] & 1) == 0 && ((*((_DWORD *)v25 + 30) | v70) & 0x2000) == 0 )
    {
      *((_DWORD *)a3 + 2) += *((_DWORD *)v25 + 11) + *((_DWORD *)v25 + 19);
      *((_DWORD *)a3 + 3) += *((_DWORD *)v25 + 12) + *((_DWORD *)v25 + 20);
    }
  }
LABEL_74:
  *(_OWORD *)v25 = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)v25 + 2) = *((_QWORD *)a2 + 5);
  *((_DWORD *)v25 + 10) = *((_DWORD *)a2 + 5);
  *(_QWORD *)(v25 + 30) = 0LL;
  *(_QWORD *)(v25 + 38) = 0LL;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x8000) )
  {
    *(_QWORD *)&v71 = *(_QWORD *)((char *)a2 + 12);
    v65 = v71;
    *(_QWORD *)(v25 + 26) = v71;
    *(_QWORD *)(v25 + 22) = 0LL;
  }
  else
  {
    v65 = *(_QWORD *)(W32GetUserSessionState(v64) + 19240);
    *(_QWORD *)(v25 + 26) = v65;
    *(_QWORD *)&v71 = *(_QWORD *)((char *)a2 + 12);
    *(_QWORD *)(v25 + 22) = v71;
    if ( a4 )
      *(_QWORD *)(v25 + 30) = *(_QWORD *)a4;
  }
  *(_QWORD *)(v25 + 34) = v65;
  if ( *((_DWORD *)v8 + 2) || *((_DWORD *)v8 + 3) )
  {
    if ( (*((_BYTE *)a2 + 2) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3409LL);
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3410LL);
    *(_QWORD *)(v25 + 38) = *((_QWORD *)v8 + 1);
    *((_QWORD *)v8 + 1) = 0LL;
  }
  v66 = (*((_DWORD *)v25 + 30) & 0x10000) == 0;
  *(_OWORD *)(v25 + 44) = *((_OWORD *)a2 + 3);
  *((_QWORD *)v25 + 13) = *((_QWORD *)a2 + 8);
  *((_DWORD *)v25 + 30) = v23;
  if ( !v66 )
  {
    if ( (v23 & 0x800) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3431LL);
    *((_DWORD *)v25 + 30) |= 0x10000u;
  }
  if ( v73 )
  {
    if ( !v68 || CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3438LL);
    LOBYTE(v72) = 1;
    v67 = v72;
    *(_OWORD *)(v25 + 62) = v12;
    *((_DWORD *)v25 + 35) = v67;
  }
  if ( a6 )
  {
    *((_DWORD *)v25 + 30) |= 0x4000u;
    *(struct tagPOINT *)(v25 + 34) = *a6;
  }
  W32ReleasePushLockExclusiveEx(v22, 0LL);
  InputTraceLogging::Mouse::QueueEvent(
    *((_QWORD *)v25 + 12),
    (const struct tagPOINT *)(v25 + 26),
    (unsigned __int16)v25[14],
    (unsigned __int16)v25[15]);
  if ( v69 )
  {
    LOBYTE(v9) = *((_DWORD *)a2 + 22) != 0;
    v58 = 0LL;
LABEL_98:
    ApiSetEditionInitiateMouseEventProcessing(v58, v9);
  }
}
