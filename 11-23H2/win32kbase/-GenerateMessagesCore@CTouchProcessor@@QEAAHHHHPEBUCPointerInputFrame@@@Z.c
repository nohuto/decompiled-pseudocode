/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4EF8
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01C1D88 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01D17C8 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D354C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     IsTouchIVEnabled @ 0x1C00A8698 (IsTouchIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C00A86CC (IsPenIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00A8700 (IsPTPIVEnabled.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C00D41B0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     PopW32ThreadLock @ 0x1C00D6166 (PopW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00E1448 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E3A96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C00E42E6 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     IsTouchpadDevice @ 0x1C00E5A5C (IsTouchpadDevice.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C0138BA0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C01390C0 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C01390F0 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C0139460 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BC678 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01BFD1C (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01C272C (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C2DE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C4038 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C42C0 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1C01C4610 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01C5AC8 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C65A8 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01CCA54 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C01CD5CC (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01CF2CC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01D0BE4 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01D16A0 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01D71D8 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLL @ 0x1C01DAB80 (WPP_RECORDER_AND_TRACE_SF_LLL.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01DF340 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        CTouchProcessor *this,
        int a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  struct _KTHREAD **v5; // r13
  int v6; // r15d
  int v7; // r12d
  unsigned int v8; // r14d
  const struct CPointerInputFrame *v9; // rbx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  const struct CPointerInfoNode *v13; // rsi
  unsigned int i; // edi
  int v15; // edi
  BOOL v16; // esi
  LARGE_INTEGER PerformanceCounter; // r14
  bool v18; // al
  LARGE_INTEGER *v19; // rcx
  CTouchProcessor *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // esi
  unsigned __int64 v24; // rdi
  int v25; // r15d
  unsigned int v26; // r13d
  int v27; // r12d
  CTouchProcessor *v28; // rcx
  CTouchProcessor *v29; // rcx
  struct CPointerMsgData *PrevMsgId; // rax
  int v31; // ecx
  int v32; // eax
  __int64 *v33; // rdi
  unsigned int v34; // esi
  int v35; // r13d
  CTouchProcessor *v36; // r12
  CTouchProcessor *v37; // rcx
  unsigned __int64 *v38; // rdi
  unsigned int v39; // esi
  int v40; // r13d
  CTouchProcessor *v41; // rcx
  int v42; // edx
  int v43; // r8d
  struct DEVICEINFO *v44; // rax
  struct CPTPProcessor *Processor; // rax
  unsigned int v46; // edi
  int v47; // esi
  int v48; // r14d
  unsigned int v49; // r12d
  CTouchProcessor *v50; // r15
  unsigned int v51; // r14d
  __int64 v52; // rax
  unsigned int v53; // esi
  unsigned __int64 v54; // rdi
  CTouchProcessor *v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // esi
  __int64 *j; // rdi
  CTouchProcessor *v59; // rcx
  LARGE_INTEGER v60; // rsi
  bool v61; // al
  LARGE_INTEGER *v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v66; // rdx
  CTouchProcessor *v67; // rcx
  int v68; // r8d
  const struct CPointerInfoNode *v69; // rsi
  __int64 v70; // r9
  __int16 v71; // di
  bool v72; // cf
  unsigned __int16 v73; // di
  unsigned __int16 v74; // bx
  int v76; // [rsp+28h] [rbp-A1h]
  int v77; // [rsp+30h] [rbp-99h]
  int v78; // [rsp+40h] [rbp-89h]
  unsigned int v79; // [rsp+68h] [rbp-61h]
  int v80; // [rsp+6Ch] [rbp-5Dh]
  int v81; // [rsp+70h] [rbp-59h]
  int v82; // [rsp+74h] [rbp-55h]
  __int64 v83; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v84[2]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v85; // [rsp+88h] [rbp-41h] BYREF
  __int64 v86; // [rsp+98h] [rbp-31h]
  __int64 *v87; // [rsp+A0h] [rbp-29h] BYREF
  CInpLockGuard *v88[14]; // [rsp+A8h] [rbp-21h] BYREF
  CTouchProcessor *v89; // [rsp+128h] [rbp+5Fh] BYREF
  int v90; // [rsp+130h] [rbp+67h]
  int v91; // [rsp+138h] [rbp+6Fh]
  int v92; // [rsp+140h] [rbp+77h]

  v92 = a4;
  v91 = a3;
  v90 = a2;
  v89 = this;
  v5 = (struct _KTHREAD **)this;
  v6 = a4;
  v7 = a2;
  v85 = 0LL;
  *(_QWORD *)v84 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v86 = 0LL;
  v8 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      71,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  if ( v5[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2319);
  v9 = a5;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)v5, *((_DWORD *)a5 + 10)) )
  {
    LODWORD(a5) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2320);
  }
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)
    && gptiManipulationThread )
  {
    if ( !v6 )
    {
      if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v10, v9) )
      {
        EtwTraceDwmManipulationFrameStart(*((unsigned int *)v9 + 10), *((_DWORD *)v9 + 12), v12);
        if ( qword_1C0295450 )
          qword_1C0295450(v9, &v85, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
        CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)v5, (__int64)v9, 0);
        if ( qword_1C0295460 )
          qword_1C0295460(&v85);
      }
      goto LABEL_29;
    }
  }
  else if ( !v6 )
  {
    goto LABEL_29;
  }
  v13 = (const struct CPointerInfoNode *)*((_QWORD *)v9 + 30);
  for ( i = 0; i < *((_DWORD *)v9 + 12); ++i )
  {
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v10, v9, v13, v6) )
      ++v8;
    v13 = (const struct CPointerInfoNode *)((char *)v13 + 480);
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)v9 + 10), v8, v11);
  v8 = 0;
LABEL_29:
  v15 = -(*((_DWORD *)v9 + 57) & 1);
  v16 = (*((_DWORD *)v9 + 57) & 1) == 0;
  if ( (*((_DWORD *)v9 + 57) & 1) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v18 = isChildPartition();
    v19 = (LARGE_INTEGER *)((char *)v9 + 120);
    if ( v18 )
      v19 = (LARGE_INTEGER *)((char *)v9 + 192);
    *v19 = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)v9 + 72),
      *((_BYTE *)v9 + 228) & 1);
    v20 = (CTouchProcessor *)v16;
    v8 = 0;
    goto LABEL_41;
  }
  if ( (*((_DWORD *)v9 + 57) & 8) != 0 )
  {
    if ( qword_1C0295450 )
      qword_1C0295450(v9, &v85, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)v5, v9, v6 != 0);
    if ( qword_1C0295460 )
    {
      qword_1C0295460(&v85);
LABEL_39:
      v20 = (CTouchProcessor *)v16;
      if ( (*((_DWORD *)v9 + 57) & 2) != 0 && !v6 )
        goto LABEL_152;
      goto LABEL_41;
    }
  }
  v20 = (CTouchProcessor *)v16;
  if ( !v15 )
    goto LABEL_39;
LABEL_41:
  if ( (_DWORD)v20 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v87, "GenerateFrameMessages", 0LL);
    EtwTraceBeginPointerFrameMessageGeneration(*((unsigned int *)v9 + 10), *((_DWORD *)v9 + 12), v21);
    if ( isRootPartition() && (IsTouchIVEnabled() || IsPenIVEnabled() || IsPTPIVEnabled()) )
      CTouchProcessor::CheckandDeliverContainerInput(v5, v9, v7, v6);
    v22 = *((unsigned int *)v9 + 12);
    v23 = 0;
    v24 = *((_QWORD *)v9 + 30);
    v25 = 0;
    v81 = 0;
    v26 = 0;
    v80 = 0;
    v27 = 0;
    LODWORD(a5) = 0;
    if ( (_DWORD)v22 )
    {
      do
      {
        v28 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v22);
        if ( v24 >= (unsigned __int64)v28 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2482);
        if ( CTouchProcessor::ShouldGenerateMessagesForNode(v28, v9, (const struct CPointerInfoNode *)v24, v92) )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v29, *(_QWORD *)(v24 + 16));
          CTouchProcessor::ProcessAndUnreferencePreviousInput(
            v89,
            (const struct CPointerInfoNode *)v24,
            (unsigned __int64)PrevMsgId,
            v84[0],
            v90,
            v91);
          v31 = *(_DWORD *)v24;
          if ( (*(_DWORD *)v24 & 0x1000) == 0 )
          {
            if ( (v31 & 8) != 0 )
            {
              if ( __CFSHR__(v31, 7) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2504);
              ++v23;
            }
            else if ( __CFSHR__(v31, 7) )
            {
              ++v27;
            }
            v32 = *(_DWORD *)(v24 + 180);
            if ( (v32 & 1) != 0 )
              ++v25;
            if ( (v32 & 2) == 0 )
              ++v81;
            if ( (v32 & 0x10000) != 0 )
            {
              ++v26;
            }
            else if ( (v32 & 0x40000) != 0 )
            {
              LODWORD(a5) = (_DWORD)a5 + 1;
            }
            else
            {
              if ( (v32 & 0x20000) == 0 )
              {
                LODWORD(v83) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2529);
              }
              ++v80;
            }
          }
        }
        v22 = *((unsigned int *)v9 + 12);
        v24 += 480LL;
        ++v8;
      }
      while ( v8 < (unsigned int)v22 );
      v79 = v26;
      v82 = v27;
      if ( v23 || v27 || v25 )
      {
        v33 = (__int64 *)*((_QWORD *)v9 + 30);
        v34 = 0;
        if ( (_DWORD)v22 )
        {
          v35 = v92;
          v36 = v89;
          do
          {
            v37 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v22);
            if ( v33 >= (__int64 *)v37 )
            {
              LODWORD(v83) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2550);
            }
            if ( (*(_DWORD *)v33 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v37, v9, (const struct CPointerInfoNode *)v33, v35) )
            {
              CTouchProcessor::GenerateEnterMessages(v36, v9, v34, v33[2], v84[0], v90, v91);
            }
            v22 = *((unsigned int *)v9 + 12);
            v33 += 60;
            ++v34;
          }
          while ( v34 < (unsigned int)v22 );
          v27 = v82;
          v26 = v79;
        }
        if ( v27 )
        {
          v38 = (unsigned __int64 *)*((_QWORD *)v9 + 30);
          v39 = 0;
          if ( (_DWORD)v22 )
          {
            v40 = v92;
            do
            {
              v41 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v22);
              if ( v38 >= (unsigned __int64 *)v41 )
              {
                LODWORD(v83) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2579);
              }
              if ( (*(_DWORD *)v38 & 0x1000) == 0
                && CTouchProcessor::ShouldGenerateMessagesForNode(v41, v9, (const struct CPointerInfoNode *)v38, v40) )
              {
                CTouchProcessor::GenerateRoutedToMessages(v89, v9, v39, v38[2], v84[0], v90, v91);
              }
              v22 = *((unsigned int *)v9 + 12);
              v38 += 60;
              ++v39;
            }
            while ( v39 < (unsigned int)v22 );
            v26 = v79;
          }
        }
      }
    }
    if ( IsTouchpadDevice(*((_QWORD *)v9 + 8)) )
    {
      if ( isRootPartition() )
      {
        if ( IsPTPIVEnabled() )
        {
          if ( v26 )
          {
            v44 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)v9 + 8), 19);
            Processor = CPTPProcessorFactory::GetProcessor(v44);
            if ( Processor )
            {
              *((_DWORD *)Processor + 99) &= ~2u;
              *((_DWORD *)Processor + 98) = 0;
            }
          }
        }
      }
      v46 = 0;
      if ( (*((_DWORD *)v9 + 57) & 8) != 0 && v26 > 1 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v42) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v43) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v43) = 0;
        }
        if ( (_BYTE)v42 || (_BYTE)v43 )
        {
          v47 = (int)a5;
          WPP_RECORDER_AND_TRACE_SF_LLL(
            WPP_GLOBAL_Control->AttachedDevice,
            v42,
            v43,
            72,
            v76,
            v77,
            72,
            v78,
            *((_DWORD *)v9 + 10),
            v26,
            (char)a5);
        }
        else
        {
          v47 = (int)a5;
        }
        v48 = v92;
        v49 = v84[0];
        v46 = 0x2000;
        v50 = v89;
        CTouchProcessor::GeneratePointerInputMessages(v89, v9, v84[0], v90, v91, 0x2000u, 0, v92);
      }
      else
      {
        v49 = v84[0];
        v50 = v89;
        v48 = v92;
        v47 = (int)a5;
      }
      if ( !v80 && v26 && v47 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v42) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v43) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v43) = 0;
        }
        if ( (_BYTE)v42 || (_BYTE)v43 )
          WPP_RECORDER_AND_TRACE_SF_LLL(
            WPP_GLOBAL_Control->AttachedDevice,
            v42,
            v43,
            73,
            v76,
            v77,
            73,
            v78,
            *((_DWORD *)v9 + 10),
            v26,
            v47);
        CTouchProcessor::GeneratePointerInputMessages(v50, v9, v49, v90, v91, 0x10000u, v46, v48);
        v46 |= 0x10000u;
      }
    }
    else
    {
      v47 = (int)a5;
      v46 = 0;
    }
    v6 = v92;
    v5 = (struct _KTHREAD **)v89;
    v7 = v90;
    v51 = v84[0];
    CTouchProcessor::GeneratePointerInputMessages(v89, v9, v84[0], v90, v91, 0, v46, v92);
    if ( v47 )
    {
      v52 = *((unsigned int *)v9 + 12);
      v53 = 0;
      v54 = *((_QWORD *)v9 + 30);
      if ( (_DWORD)v52 )
      {
        do
        {
          v55 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v52);
          if ( v54 >= (unsigned __int64)v55 )
          {
            LODWORD(v89) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2737);
          }
          if ( (*(_DWORD *)v54 & 0x1000) == 0
            && CTouchProcessor::ShouldGenerateMessagesForNode(v55, v9, (const struct CPointerInfoNode *)v54, v6)
            && (*(_DWORD *)(v54 + 180) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              (CTouchProcessor *)v5,
              *(_WORD *)(v54 + 172),
              1,
              v9,
              v53,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v52 = *((unsigned int *)v9 + 12);
          v54 += 480LL;
          ++v53;
        }
        while ( v53 < (unsigned int)v52 );
        v51 = v84[0];
        v7 = v90;
      }
    }
    if ( v81 )
    {
      v56 = *((unsigned int *)v9 + 12);
      v57 = 0;
      for ( j = (__int64 *)*((_QWORD *)v9 + 30); v57 < (unsigned int)v56; ++v57 )
      {
        v59 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v56);
        if ( j >= (__int64 *)v59 )
        {
          LODWORD(v89) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2766);
        }
        if ( CTouchProcessor::ShouldGenerateMessagesForNode(v59, v9, (const struct CPointerInfoNode *)j, v6) )
          CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)v5, v9, v57, j[2], v51, v7, v91);
        v56 = *((unsigned int *)v9 + 12);
        j += 60;
      }
    }
    v60 = KeQueryPerformanceCounter(0LL);
    v61 = isChildPartition();
    v62 = (LARGE_INTEGER *)((char *)v9 + 120);
    if ( v61 )
      v62 = (LARGE_INTEGER *)((char *)v9 + 192);
    *v62 = v60;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)v9 + 72),
      0);
    if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 32LL) )
    {
      LODWORD(v89) = *((_DWORD *)v9 + 12);
      LODWORD(a5) = *((_DWORD *)v9 + 10);
      *(_QWORD *)v84 = *((_QWORD *)v9 + 9);
      v83 = *((_QWORD *)v9 + 27);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0289810,
        byte_1C025C43A,
        v63,
        v64,
        (__int64)&v83,
        (__int64)v84,
        (__int64)&a5,
        (__int64)&v89);
    }
    EtwTraceEndPointerFrameMessageGeneration(*((unsigned int *)v9 + 10), *((_DWORD *)v9 + 12), v63);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v87);
  }
LABEL_152:
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion(v20, v9);
  v69 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v67, NodeForPointerPromotion, v6) )
  {
    v71 = (v7 != 0) | ((*v66 & 0x8000u) >> 13) | ((*v66 & 0x10000u) >> 13) | ((*v66 & 0x40u) >> 2);
    v72 = v91 != 0;
    v91 = -v91;
    v73 = (v72 ? 2 : 0) | v71;
    if ( v66[44] != *((_DWORD *)v9 + 10) )
    {
      LODWORD(v89) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2808);
    }
    if ( qword_1C0295450 )
      qword_1C0295450(v9, &v85, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v88,
      (struct CInpLockGuard *)(v5 + 4),
      0LL,
      v70);
    v74 = *((_WORD *)v69 + 80);
    if ( qword_1C02969B0 && (int)qword_1C02969B0() >= 0 && qword_1C02969B8 )
      qword_1C02969B8((char *)v69 + 168, v74, v73);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v88);
    PopW32ThreadLock((__int64)&v85);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v66) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v66) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v68) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v68) = 0;
  }
  if ( (_BYTE)v66 || (_BYTE)v68 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v66,
      v68,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      74,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  return 1LL;
}
