/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140185B9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1401FAE28 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x1401FC890 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140204F50 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     IsTouchpadDevice @ 0x140048B4C (IsTouchpadDevice.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     IsPTPIVEnabled @ 0x14004FBE8 (IsPTPIVEnabled.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x140052770 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1400DE50C (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1400DE554 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1400DEA1C (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1400ED5F0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1400ED670 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1400F2860 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1400F2900 (EtwTraceDwmManipulationFrameStart.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105780 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x14011C4BC (-GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     EditionProcessPointerInputAsMouse @ 0x140125580 (EditionProcessPointerInputAsMouse.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140184258 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401844F0 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401F7794 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1401FB800 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1401FD700 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401FE264 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x140200878 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x140201288 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1402037CC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x14020452C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140204E1C (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLL @ 0x14020A580 (WPP_RECORDER_AND_TRACE_SF_LLL.c)
 *     IsPenIVEnabled @ 0x140217E98 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x140217EF0 (IsTouchIVEnabled.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        PERESOURCE *this,
        int a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  int v8; // r12d
  __int64 v9; // rcx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  unsigned int v17; // ebx
  unsigned int v18; // r14d
  const struct CPointerInfoNode *i; // rdi
  int MessagesForNode; // eax
  __int64 v21; // rcx
  BOOL v22; // r14d
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v24; // rcx
  BOOL v25; // edx
  struct tagTHREADINFO *v26; // rax
  __int64 v27; // rcx
  unsigned int *v28; // rbx
  __int64 v29; // r8
  unsigned int *v30; // r12
  __int64 v31; // rcx
  unsigned int v32; // ecx
  __int64 **v33; // r15
  int v34; // eax
  int v35; // r13d
  __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  unsigned int v38; // r14d
  unsigned int v39; // ebx
  CTouchProcessor *v40; // rcx
  CTouchProcessor *v41; // rcx
  unsigned __int64 PrevMsgId; // rax
  int v43; // ecx
  int v44; // eax
  __int64 v45; // rax
  unsigned __int64 **v46; // r14
  __int64 *v47; // rbx
  unsigned int v48; // edi
  CTouchProcessor *v49; // rcx
  unsigned __int64 **v50; // rdi
  unsigned __int64 *v51; // rbx
  unsigned int v52; // r15d
  CTouchProcessor *v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // r12d
  struct DEVICEINFO *v56; // rax
  struct CPTPProcessor *Processor; // rax
  unsigned int v58; // r14d
  char v59; // di
  int v60; // ebx
  __int64 UserSessionState; // rax
  int v62; // r8d
  int v63; // r15d
  int v64; // edx
  int v65; // r13d
  char v66; // r15
  char v67; // di
  int v68; // ebx
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  unsigned int v72; // r15d
  unsigned __int64 **v73; // r14
  __int64 v74; // rax
  unsigned int v75; // r15d
  unsigned __int64 v76; // rbx
  CTouchProcessor *v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // edi
  unsigned __int64 *j; // rbx
  CTouchProcessor *v81; // rcx
  LARGE_INTEGER v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r8
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v89; // rdx
  CTouchProcessor *v90; // rcx
  int v91; // r8d
  const struct CPointerInfoNode *v92; // rdi
  __int64 v93; // rcx
  unsigned __int16 v94; // bx
  struct tagTHREADINFO *v95; // rax
  struct CEResourceLock *v96; // rdx
  unsigned __int16 v97; // si
  __int64 v98; // rdx
  __int64 v99; // rcx
  int (*v100)(void); // rax
  __int64 v101; // rcx
  struct tagTHREADINFO *v102; // rax
  unsigned int v104; // [rsp+28h] [rbp-B1h]
  unsigned int v105; // [rsp+30h] [rbp-A9h]
  int v106; // [rsp+40h] [rbp-99h]
  unsigned int v107; // [rsp+70h] [rbp-69h]
  int v108; // [rsp+74h] [rbp-65h]
  unsigned __int64 v109; // [rsp+78h] [rbp-61h]
  int v110; // [rsp+80h] [rbp-59h]
  int v111; // [rsp+84h] [rbp-55h]
  __int64 v112; // [rsp+90h] [rbp-49h] BYREF
  const struct CPointerInputFrame *v113; // [rsp+98h] [rbp-41h]
  void (__fastcall *v114)(CTouchProcessor **); // [rsp+A0h] [rbp-39h]
  __int64 *v115; // [rsp+A8h] [rbp-31h] BYREF
  struct CEResourceLock *v116; // [rsp+B0h] [rbp-29h]
  PERESOURCE *v117[14]; // [rsp+B8h] [rbp-21h] BYREF
  int v119; // [rsp+140h] [rbp+67h]
  int v120; // [rsp+148h] [rbp+6Fh]
  int v122; // [rsp+158h] [rbp+7Fh]

  v120 = a3;
  v119 = a2;
  v8 = a2;
  v109 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      72,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  v116 = (struct CEResourceLock *)(this + 4);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2428);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2429);
  if ( IsInputThread(v9) && *(_QWORD *)(W32GetUserSessionState(v10) + 18880) )
  {
    if ( !a4 )
    {
      if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v10, a5) )
      {
        EtwTraceDwmManipulationFrameStart(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v12);
        v14 = PtiCurrent(v13);
        v112 = *((_QWORD *)v14 + 48);
        *((_QWORD *)v14 + 48) = &v112;
        v113 = a5;
        v114 = CTouchProcessor::DereferencePointerInputFrameAndMessageData;
        CTouchProcessor::ForwardInputToManipulationThread((__int64)this, (__int64)a5, 0);
        v16 = PtiCurrent(v15);
        *((_QWORD *)v16 + 48) = v112;
      }
      goto LABEL_26;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_26;
  }
  v17 = 0;
  v18 = 0;
  for ( i = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 30); v18 < *((_DWORD *)a5 + 12); v17 = (unsigned int)v10 )
  {
    MessagesForNode = CTouchProcessor::ShouldGenerateMessagesForNode(v10, a5, i, a4);
    v10 = (CTouchProcessor *)(v17 + 1);
    if ( !MessagesForNode )
      v10 = (CTouchProcessor *)v17;
    i = (const struct CPointerInfoNode *)((char *)i + 480);
    ++v18;
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a5 + 10), v17, v11);
LABEL_26:
  v21 = -(*((_DWORD *)a5 + 57) & 1);
  v22 = (*((_DWORD *)a5 + 57) & 1) == 0;
  if ( (*((_DWORD *)a5 + 57) & 1) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)((char *)a5 + (isChildPartition(v24) ? 0x48 : 0) + 120) = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)a5 + 72),
      *((_BYTE *)a5 + 228) & 1);
    v25 = v22;
    goto LABEL_33;
  }
  if ( (*((_DWORD *)a5 + 57) & 8) != 0 )
  {
    v26 = PtiCurrent(v21);
    v112 = *((_QWORD *)v26 + 48);
    *((_QWORD *)v26 + 48) = &v112;
    v114 = CTouchProcessor::DereferencePointerInputFrameAndMessageData;
    v113 = a5;
    CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)this, a5, a4 != 0);
    v21 = (__int64)PtiCurrent(v27);
    *(_QWORD *)(v21 + 384) = v112;
LABEL_31:
    v25 = v22;
    if ( (*((_DWORD *)a5 + 57) & 2) != 0 && !a4 )
      goto LABEL_141;
    goto LABEL_33;
  }
  v25 = (*((_DWORD *)a5 + 57) & 1) == 0;
  if ( (*((_DWORD *)a5 + 57) & 1) == 0 )
    goto LABEL_31;
LABEL_33:
  if ( v25 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v115, "GenerateFrameMessages", 0LL);
    v28 = (unsigned int *)((char *)a5 + 48);
    EtwTraceBeginPointerFrameMessageGeneration(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v29);
    v30 = (unsigned int *)((char *)a5 + 48);
    if ( isRootPartition(v31)
      && ((unsigned __int8)IsTouchIVEnabled() || (unsigned __int8)IsPenIVEnabled() || IsPTPIVEnabled()) )
    {
      CTouchProcessor::CheckandDeliverContainerInput(this, a5, v119, a4);
      v30 = (unsigned int *)((char *)a5 + 48);
    }
    v32 = *v28;
    v33 = (__int64 **)((char *)a5 + 240);
    v111 = 0;
    v107 = 0;
    v34 = 0;
    v110 = 0;
    v35 = 0;
    v122 = 0;
    v36 = 0LL;
    v37 = *((_QWORD *)a5 + 30);
    v38 = 0;
    v108 = 0;
    if ( *v28 )
    {
      v39 = 0;
      do
      {
        v40 = (CTouchProcessor *)&(*v33)[60 * v32];
        if ( v37 >= (unsigned __int64)v40 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2582);
        if ( (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                             v40,
                             a5,
                             (const struct CPointerInfoNode *)v37,
                             a4) )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v41, *(_QWORD *)(v37 + 16));
          CTouchProcessor::ProcessAndUnreferencePreviousInput(
            (CTouchProcessor *)this,
            (const struct CPointerInfoNode *)v37,
            PrevMsgId,
            v109,
            v119,
            v120);
          v43 = *(_DWORD *)v37;
          if ( (*(_DWORD *)v37 & 0x1000) == 0 )
          {
            if ( (v43 & 8) != 0 )
            {
              if ( __CFSHR__(v43, 7) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2604);
              ++v35;
            }
            else if ( __CFSHR__(v43, 7) )
            {
              ++v108;
            }
            v44 = *(_DWORD *)(v37 + 180);
            if ( (v44 & 1) != 0 )
              ++v39;
            if ( (v44 & 2) == 0 )
              ++v111;
            if ( (v44 & 0x10000) != 0 )
            {
              ++v107;
            }
            else if ( (v44 & 0x40000) != 0 )
            {
              ++v122;
            }
            else
            {
              if ( (v44 & 0x20000) == 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2629);
              ++v110;
            }
          }
        }
        v32 = *v30;
        v37 += 480LL;
        ++v38;
      }
      while ( v38 < *v30 );
      v34 = v108;
      v33 = (__int64 **)((char *)a5 + 240);
      v30 = (unsigned int *)((char *)a5 + 48);
      v36 = v39;
    }
    if ( v35 || v34 || (v45 = v32, v46 = (unsigned __int64 **)v33, (_DWORD)v36) )
    {
      v47 = *v33;
      v48 = 0;
      v45 = v32;
      v46 = (unsigned __int64 **)v33;
      if ( v32 )
      {
        do
        {
          v49 = (CTouchProcessor *)&(*v33)[60 * v32];
          if ( v47 >= (__int64 *)v49 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2650);
          if ( (*(_DWORD *)v47 & 0x1000) == 0
            && (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                               v49,
                               a5,
                               (const struct CPointerInfoNode *)v47,
                               a4) )
          {
            CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v48, v47[2], v109, v119, v120);
          }
          v45 = *v30;
          v47 += 60;
          ++v48;
          v32 = v45;
        }
        while ( v48 < (unsigned int)v45 );
        v46 = (unsigned __int64 **)((char *)a5 + 240);
      }
    }
    v50 = v46;
    if ( v108 )
    {
      v51 = *v46;
      v52 = 0;
      if ( (_DWORD)v45 )
      {
        do
        {
          v53 = (CTouchProcessor *)&(*v46)[60 * v45];
          if ( v51 >= (unsigned __int64 *)v53 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2679);
          if ( (*(_DWORD *)v51 & 0x1000) == 0
            && (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                               v53,
                               a5,
                               (const struct CPointerInfoNode *)v51,
                               a4) )
          {
            CTouchProcessor::GenerateRoutedToMessages((CTouchProcessor *)this, a5, v52, v51[2], v109, v119, v120);
          }
          v45 = *((unsigned int *)a5 + 12);
          v51 += 60;
          ++v52;
        }
        while ( v52 < (unsigned int)v45 );
        v50 = (unsigned __int64 **)((char *)a5 + 240);
      }
    }
    if ( IsTouchpadDevice(*((_QWORD *)a5 + 8), v36) )
    {
      if ( isRootPartition(v54) )
      {
        v55 = v107;
        if ( IsPTPIVEnabled() )
        {
          if ( v107 )
          {
            v56 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)a5 + 8), 19);
            Processor = CPTPProcessorFactory::GetProcessor(v56);
            if ( Processor )
            {
              *((_DWORD *)Processor + 97) &= ~2u;
              *((_DWORD *)Processor + 96) = 0;
            }
          }
        }
      }
      else
      {
        v55 = v107;
      }
      v58 = 0;
      if ( (*((_DWORD *)a5 + 57) & 8) != 0 && v55 > 1 )
      {
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
        {
          LOBYTE(v58) = 1;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v59 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v59 = 0;
        }
        if ( (_BYTE)v58 || v59 )
        {
          v60 = *((_DWORD *)a5 + 10);
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v62) = v59;
          v63 = v122;
          LOBYTE(v64) = v58;
          WPP_RECORDER_AND_TRACE_SF_LLL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v64,
            v62,
            *(_QWORD *)(UserSessionState + 69400),
            v104,
            v105,
            73,
            v106,
            v60,
            v55,
            v122);
        }
        else
        {
          v63 = v122;
        }
        v65 = a4;
        v58 = 0x2000;
        CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v109, v119, v120, 0x2000u, 0, a4);
      }
      else
      {
        v63 = v122;
        v65 = a4;
      }
      if ( !v110 && v55 && v63 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v66 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v67 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v67 = 0;
        }
        if ( v66 || v67 )
        {
          v68 = *((_DWORD *)a5 + 10);
          v69 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v70) = v67;
          LOBYTE(v71) = v66;
          WPP_RECORDER_AND_TRACE_SF_LLL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v71,
            v70,
            *(_QWORD *)(v69 + 69400),
            v104,
            v105,
            74,
            v106,
            v68,
            v55,
            v122);
        }
        CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v109, v119, v120, 0x10000u, v58, v65);
        v58 |= 0x10000u;
      }
      v50 = (unsigned __int64 **)((char *)a5 + 240);
    }
    else
    {
      v58 = 0;
    }
    v72 = v109;
    CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v109, v119, v120, 0, v58, a4);
    v73 = v50;
    if ( v122 )
    {
      v74 = *((unsigned int *)a5 + 12);
      v75 = 0;
      v76 = *((_QWORD *)a5 + 30);
      if ( (_DWORD)v74 )
      {
        do
        {
          v77 = (CTouchProcessor *)&(*v50)[60 * v74];
          if ( v76 >= (unsigned __int64)v77 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2837);
          if ( (*(_DWORD *)v76 & 0x1000) == 0
            && (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                               v77,
                               a5,
                               (const struct CPointerInfoNode *)v76,
                               a4)
            && (*(_DWORD *)(v76 + 180) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              (CTouchProcessor *)this,
              *(_WORD *)(v76 + 172),
              1,
              a5,
              v75,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v74 = *((unsigned int *)a5 + 12);
          v76 += 480LL;
          ++v75;
        }
        while ( v75 < (unsigned int)v74 );
        v73 = (unsigned __int64 **)((char *)a5 + 240);
      }
      v72 = v109;
    }
    if ( v111 )
    {
      v78 = *((unsigned int *)a5 + 12);
      v79 = 0;
      for ( j = *v73; v79 < (unsigned int)v78; ++v79 )
      {
        v81 = (CTouchProcessor *)&(*v73)[60 * v78];
        if ( j >= (unsigned __int64 *)v81 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2866);
        if ( (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                             v81,
                             a5,
                             (const struct CPointerInfoNode *)j,
                             a4) )
          CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)this, a5, v79, j[2], v72, v119, v120);
        v78 = *((unsigned int *)a5 + 12);
        j += 60;
      }
    }
    v82 = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)((char *)a5 + (isChildPartition(v83) ? 0x48 : 0) + 120) = v82;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)a5 + 72),
      0);
    InputTraceLogging::Pointer::GenerateFrameMessages(a5, v84, v85, v86);
    EtwTraceEndPointerFrameMessageGeneration(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v87);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v115);
    v8 = v119;
  }
LABEL_141:
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion((CTouchProcessor *)v21, a5);
  v92 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && (unsigned int)CTouchProcessor::NodeMatchesMTGeneration(v90, NodeForPointerPromotion) )
  {
    v93 = (*v89 & 0x8000u) >> 13;
    v94 = (v120 != 0 ? 2 : 0) | (v8 != 0) | v93 | ((*v89 & 0x10000u) >> 13) | ((*v89 & 0x40u) >> 2);
    if ( v89[44] != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2908);
    v95 = PtiCurrent(v93);
    v96 = v116;
    v112 = *((_QWORD *)v95 + 48);
    *((_QWORD *)v95 + 48) = &v112;
    v114 = CTouchProcessor::DereferencePointerInputFrameAndMessageData;
    v113 = a5;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v117, v96, 0LL);
    v97 = *((_WORD *)v92 + 80);
    v100 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v99, v98) + 48) + 6320LL);
    if ( v100 && v100() >= 0 )
      EditionProcessPointerInputAsMouse((__int64)v92 + 168, v97, v94);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v117);
    v102 = PtiCurrent(v101);
    *((_QWORD *)v102 + 48) = v112;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v89) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v89) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v91) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v91) = 0;
  }
  if ( (_BYTE)v89 || (_BYTE)v91 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v89,
      v91,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      75,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  return 1LL;
}
