/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050
 * Callers:
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x140008AC8 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140009330 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x140009AC0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x14000A1A0 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x14000AE30 (imp_WdfRequestForwardToIoQueue.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x14000CF70 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x14000D190 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14000DD00 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x140015500 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14001577C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140016AB0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x14001B1AC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StartPowerTransitionOn@FxIoQueue@@QEAAXXZ @ 0x14001B3F4 (-StartPowerTransitionOn@FxIoQueue@@QEAAXXZ.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C2C0 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x14001C590 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1400216B8 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140027830 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140028E00 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14002A6F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002C3B0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x14002FCD4 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x140046BFC (-DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x140047730 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x140047FB0 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x140058E10 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?QueueStart@FxIoQueue@@QEAAXXZ @ 0x140062BEC (-QueueStart@FxIoQueue@@QEAAXXZ.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x140071CCC (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140073C20 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x14000ABD0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x14000C1E0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14000FB50 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x140010590 (WPP_IFR_SF_qL.c)
 *     ?Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z @ 0x1400106C0 (-Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z.c)
 *     WPP_IFR_SF_qcq @ 0x140010740 (WPP_IFR_SF_qcq.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x140010844 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x140012E54 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x140012FE4 (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1400466C8 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140047420 (-InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x1400487EC (-CompleteWithInformation@FxRequest@@QEAAJJ_K@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x14004B2B8 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086664 (WPP_IFR_SF_ql.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::DispatchEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        FxRequest *NewRequest,
        unsigned __int16 a4)
{
  volatile unsigned __int8 m_Deleted; // al
  FxIoQueue *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxCallbackLock *m_CallbackLockPtr; // rcx
  unsigned int v8; // r13d
  _LIST_ENTRY *p_m_CanceledOnQueueList; // rsi
  _LIST_ENTRY *p_m_Cancelled; // rcx
  int v11; // edi
  int inserted; // eax
  unsigned __int8 v13; // al
  int v14; // eax
  unsigned __int8 v15; // al
  int m_PowerState; // edx
  unsigned int _a2; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *v19; // rdi
  const void *v21; // rcx
  FxRequest *v22; // rdi
  _FX_DRIVER_GLOBALS *v23; // rdx
  FxRequest_vtbl *v24; // rsi
  unsigned __int8 v25; // r15
  int v26; // r14d
  signed __int32 v27; // edx
  FxRequest *v28; // rdi
  unsigned int v29; // edx
  _IRP *v30; // rcx
  $296A67BADB4D0BFB9E59A0608284FDB2 *v31; // rdx
  _LIST_ENTRY *v32; // rax
  FxRequest *v33; // rdi
  FxIoQueueIoState m_ReadyNotify; // xmm0
  char v35; // al
  _FX_DRIVER_GLOBALS *v36; // rdi
  void *m_ReadyNotifyContext; // r15
  unsigned __int8 v38; // r8
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // r14
  FxCallbackLock *m_CallbackLock; // rsi
  unsigned __int64 v41; // rdi
  KIRQL v42; // al
  const void *id; // rdx
  unsigned __int8 v44; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rdi
  FxVerifierLock **p_m_WorkItemRunningCount; // r14
  _FX_DRIVER_GLOBALS *v47; // r12
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v49; // r15
  unsigned __int8 v50; // r8
  unsigned __int8 v51; // r8
  FxVerifierLock *v52; // rcx
  _FX_DRIVER_GLOBALS *v53; // rdx
  FxRequest_vtbl *v54; // rsi
  unsigned __int8 v55; // r15
  int v56; // r14d
  signed __int32 v57; // edx
  FxRequest *v58; // rdi
  unsigned int v59; // edx
  _IRP *v60; // rdx
  $296A67BADB4D0BFB9E59A0608284FDB2 *v61; // rcx
  _LIST_ENTRY *v62; // rax
  FxRequest *i; // rcx
  FxRequestCompletionCallback *p_m_CompletionRoutine; // rax
  FxRequest **v65; // rdx
  FxRequest *v66; // r9
  FxRequest **m_Completion; // rcx
  void (__fastcall *v68)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rdi
  __int64 v69; // rax
  void (__fastcall *v70)(FxRequest *, __int64, __int64, const char *); // rax
  FxRequest *v71; // rsi
  _FX_DRIVER_GLOBALS *v72; // rdx
  FxRequest_vtbl *v73; // r14
  unsigned __int8 v74; // r12
  int v75; // r15d
  signed __int32 v76; // edx
  FxRequest *v77; // rsi
  unsigned int v78; // edx
  _IRP *v79; // rcx
  $296A67BADB4D0BFB9E59A0608284FDB2 *v80; // rdx
  _LIST_ENTRY *v81; // rax
  bool v82; // zf
  __int64 v83; // rdx
  __int64 v84; // rsi
  KIRQL v85; // al
  char v86; // cl
  KIRQL v87; // r12
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 j; // rdx
  const FxPowerIdleTargetState *v91; // r8
  int v92; // r14d
  FxTagTracker *v93; // rcx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  _LIST_ENTRY *v95; // rdx
  unsigned __int64 *v96; // rsi
  KIRQL v97; // al
  __int64 v98; // rdi
  __int64 v99; // rsi
  _FX_DRIVER_GLOBALS *v100; // r14
  KIRQL v101; // r15
  __int64 v102; // rax
  unsigned int v103; // edx
  unsigned int v104; // r12d
  __int64 v105; // r14
  const FxPowerIdleTargetState *v106; // r8
  unsigned int PowerIdleState; // esi
  __int64 v108; // rdx
  const void *v109; // rcx
  char v110; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *v112; // rcx
  _FX_DRIVER_GLOBALS *v113; // rdx
  FxRequest_vtbl *v114; // rsi
  unsigned __int8 v115; // r15
  int v116; // r14d
  signed __int32 v117; // edx
  FxRequest *v118; // rdi
  unsigned int v119; // edx
  _IRP *v120; // rcx
  $296A67BADB4D0BFB9E59A0608284FDB2 *v121; // rdx
  _LIST_ENTRY *v122; // rax
  int v123; // esi
  bool v124; // sf
  _FX_DRIVER_GLOBALS *v125; // rdx
  FxRequest_vtbl *p_m_Queue; // rsi
  unsigned __int8 v127; // r15
  int v128; // r14d
  signed __int32 v129; // edx
  FxRequest *v130; // rdi
  unsigned int v131; // edx
  _IRP *m_Irp; // rcx
  $296A67BADB4D0BFB9E59A0608284FDB2 *v133; // rdx
  _LIST_ENTRY *v134; // rax
  unsigned int v135; // r14d
  __int64 v136; // rdx
  const void *v137; // rcx
  char v138; // al
  FxPowerIdleStates (__fastcall *v139)(FxPowerIdleMachine *); // rax
  FxIoQueueIoState m_IdleComplete; // xmm0
  char m_ObjectFlags; // al
  void *m_IdleCompleteContext; // r14
  _FX_DRIVER_GLOBALS *v143; // rsi
  WDFQUEUE__ *v144; // rdi
  int v145; // eax
  unsigned __int8 v146; // r8
  const void *v147; // rcx
  FxSystemWorkItem *v148; // rcx
  FxVerifierLock *v149; // rcx
  FxVerifierLock *v150; // rcx
  _LIST_ENTRY *v151; // rcx
  unsigned __int8 v152; // dl
  FxVerifierLock *v153; // rcx
  FxVerifierLock *v154; // rcx
  _LIST_ENTRY *v155; // rcx
  _LIST_ENTRY *v156; // rcx
  FxVerifierLock *v157; // rcx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v159; // rcx
  FxRequest_vtbl *v160; // r9
  FxRequest **v161; // rax
  FxRequest_vtbl *v162; // rax
  FxRequest_vtbl *v163; // r9
  FxRequest **v164; // rax
  FxRequest_vtbl *v165; // rax
  FxRequest_vtbl *v166; // r9
  FxRequest_vtbl **v167; // rax
  FxRequest_vtbl *v168; // rax
  FxRequest_vtbl *v169; // r9
  FxRequest **v170; // rax
  FxRequest_vtbl *v171; // rax
  FxRequest_vtbl *v172; // r9
  FxRequest **v173; // rax
  FxRequest_vtbl *v174; // rax
  struct _KTHREAD *CurrentThread; // rax
  const void *v176; // rcx
  const void *v177; // rax
  __int64 v178; // rax
  const void *v179; // rdx
  unsigned int v180; // edx
  FxVerifierDownlevelOption v181; // r9d
  _FX_DRIVER_GLOBALS *v182; // rcx
  const void *v183; // rcx
  const void *v184; // rdx
  const _GUID *traceGuid; // [rsp+28h] [rbp-89h]
  unsigned int _a1; // [rsp+30h] [rbp-81h]
  KIRQL v187; // [rsp+58h] [rbp-59h]
  unsigned __int8 v188[8]; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int8 v189[8]; // [rsp+68h] [rbp-49h] BYREF
  char v190[8]; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int8 v191[8]; // [rsp+78h] [rbp-39h] BYREF
  unsigned __int8 v192[8]; // [rsp+80h] [rbp-31h] BYREF
  unsigned __int8 v193[8]; // [rsp+88h] [rbp-29h] BYREF
  _FX_DRIVER_GLOBALS *v194; // [rsp+90h] [rbp-21h]
  unsigned int v195; // [rsp+98h] [rbp-19h]
  FxIoQueueIoState v196; // [rsp+A0h] [rbp-11h] BYREF
  FxIoQueueIoState v197; // [rsp+B0h] [rbp-1h]
  unsigned __int8 v199; // [rsp+120h] [rbp+6Fh] BYREF
  FxRequest *Request; // [rsp+128h] [rbp+77h] BYREF
  unsigned __int8 v201; // [rsp+130h] [rbp+7Fh] BYREF

  Request = NewRequest;
  v199 = PreviousIrql;
  m_Deleted = this->m_Deleted;
  v5 = this;
  m_Globals = this->m_Globals;
  v194 = m_Globals;
  if ( m_Deleted )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v154 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v154, v199, (unsigned __int8)NewRequest);
      return 0;
    }
    else
    {
      KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v199);
      return 0;
    }
  }
  if ( v199 && this->m_PassiveLevel )
  {
    id = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      id = 0LL;
    WPP_IFR_SF_qcq(
      this->m_Globals,
      (unsigned __int8)id,
      (unsigned int)NewRequest,
      a4,
      traceGuid,
      KeGetCurrentThread(),
      v199,
      id);
    if ( !v5->m_WorkItemQueued )
    {
      m_SystemWorkItem = v5->m_SystemWorkItem;
      v5->m_WorkItemQueued = 1;
      v201 = 0;
      p_m_WorkItemRunningCount = (FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount;
      v47 = m_SystemWorkItem->m_Globals;
      if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0 && *p_m_WorkItemRunningCount )
      {
        FxVerifierLock::Lock(*p_m_WorkItemRunningCount, &v201, v44);
        v49 = v201;
        p_m_Lock = &m_SystemWorkItem->m_NPLock.m_Lock;
      }
      else
      {
        p_m_Lock = &m_SystemWorkItem->m_NPLock.m_Lock;
        v49 = KeAcquireSpinLockRaiseToDpc(&m_SystemWorkItem->m_NPLock.m_Lock);
        v201 = v49;
      }
      if ( m_SystemWorkItem->m_Enqueued )
      {
        WPP_IFR_SF_qq(
          v47,
          2u,
          0x12u,
          0xEu,
          WPP_FxSystemWorkitem_cpp_Traceguids,
          m_SystemWorkItem,
          m_SystemWorkItem->m_WorkItem.m_WorkItem);
        FxVerifierDbgBreakPoint(v47);
        if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0 && *p_m_WorkItemRunningCount )
        {
          FxVerifierLock::Unlock(*p_m_WorkItemRunningCount, v49, v146);
          v5->m_WorkItemQueued = 0;
          goto LABEL_72;
        }
        KeReleaseSpinLock(p_m_Lock, v49);
      }
      else
      {
        if ( !m_SystemWorkItem->m_RunningDown )
        {
          KeClearEvent(&m_SystemWorkItem->m_WorkItemCompleted.m_Event.m_Event);
          m_SystemWorkItem->m_CallbackArg = v5;
          m_SystemWorkItem->m_Callback = FxIoQueue::_DeferredDispatchThreadThunk;
          m_SystemWorkItem->m_Enqueued = 1;
          _InterlockedIncrement(&m_SystemWorkItem->m_OutStandingWorkItem);
          if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0 && *p_m_WorkItemRunningCount )
            FxVerifierLock::Unlock(*p_m_WorkItemRunningCount, v201, v50);
          else
            KeReleaseSpinLock(p_m_Lock, v201);
          IoQueueWorkItem(
            m_SystemWorkItem->m_WorkItem.m_WorkItem,
            FxSystemWorkItem::_WorkItemThunk,
            DelayedWorkQueue,
            m_SystemWorkItem);
          goto LABEL_72;
        }
        WPP_IFR_SF_q(v47, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, m_SystemWorkItem);
        FxVerifierDbgBreakPoint(v47);
        FxNonPagedObject::Unlock(m_SystemWorkItem, v49);
      }
      v5->m_WorkItemQueued = 0;
    }
LABEL_72:
    v51 = v199;
    v5->m_RequeueDeferredDispatcher = 1;
    FxIoQueue::InsertNewRequest(v5, &Request, v51);
    if ( SLOBYTE(v5->m_ObjectFlags) >= 0 )
      goto LABEL_31;
LABEL_73:
    v52 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized;
    if ( v52 )
    {
      FxVerifierLock::Unlock(v52, v199, (unsigned __int8)NewRequest);
      return 1;
    }
LABEL_31:
    KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v199);
    return 1;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( m_CallbackLockPtr && m_CallbackLockPtr->IsOwner(m_CallbackLockPtr) )
  {
    v147 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5->m_ObjectSize )
      v147 = 0LL;
    WPP_IFR_SF_q(v5->m_Globals, 3u, 0xDu, 0x2Eu, WPP_FxIoQueue_cpp_Traceguids, v147);
    if ( v5->m_PassiveLevel )
    {
      if ( !v5->m_WorkItemQueued )
      {
        v148 = v5->m_SystemWorkItem;
        v5->m_WorkItemQueued = 1;
        if ( !FxSystemWorkItem::EnqueueWorker(v148, FxIoQueue::_DeferredDispatchThreadThunk, v5, 1u) )
          v5->m_WorkItemQueued = 0;
      }
    }
    else if ( !v5->m_DpcQueued )
    {
      v5->m_DpcQueued = 1;
      KeInsertQueueDpc(&v5->m_Dpc, 0LL, 0LL);
    }
    goto LABEL_72;
  }
  ++v5->m_Dispatching;
  v8 = 0;
  if ( m_Globals->FxVerboseOn )
  {
    CurrentThread = KeGetCurrentThread();
    v176 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5->m_ObjectSize )
      v176 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Fu, WPP_FxIoQueue_cpp_Traceguids, CurrentThread, v176);
  }
LABEL_6:
  p_m_CanceledOnQueueList = &v5->m_CanceledOnQueueList;
LABEL_7:
  p_m_Cancelled = &v5->m_Cancelled;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = (Request != 0LL) + v5->m_Queue.m_RequestCount + v5->m_DriverIoCount;
          if ( p_m_Cancelled->Flink == p_m_Cancelled )
            break;
          inserted = FxIoQueue::InsertNewRequest(v5, &Request, v199);
          p_m_Cancelled = &v5->m_Cancelled;
          if ( inserted >= 0 )
          {
            v13 = FxIoQueue::ProcessCancelledRequests(v5, &v199);
            p_m_Cancelled = &v5->m_Cancelled;
            if ( !v13 )
              break;
          }
        }
        if ( p_m_CanceledOnQueueList->Flink == p_m_CanceledOnQueueList )
          break;
        v14 = FxIoQueue::InsertNewRequest(v5, &Request, v199);
        p_m_Cancelled = &v5->m_Cancelled;
        if ( v14 >= 0 )
        {
          v15 = FxIoQueue::ProcessCancelledRequestsOnQueue(v5, &v199);
          p_m_Cancelled = &v5->m_Cancelled;
          if ( !v15 )
            break;
        }
      }
      if ( v5->m_IdleComplete.Method && v5->m_Dispatching == 1 && !v5->m_DriverIoCount )
      {
        if ( Request )
          FxIoQueue::InsertNewRequestLocked(v5, &Request, v199);
        m_IdleComplete = v5->m_IdleComplete;
        m_ObjectFlags = v5->m_ObjectFlags;
        m_IdleCompleteContext = v5->m_IdleCompleteContext;
        v143 = v5->m_Globals;
        v5->m_CancelDispatchedRequests = 0;
        v5->m_IdleComplete.Method = 0LL;
        v5->m_IdleCompleteContext = 0LL;
        v196 = m_IdleComplete;
        if ( m_ObjectFlags < 0 && (v157 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          FxVerifierLock::Unlock(v157, v199, (unsigned __int8)NewRequest);
        else
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v199);
        v144 = (WDFQUEUE__ *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( v143->FxVerboseOn )
        {
          v177 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v5->m_ObjectSize )
            v177 = 0LL;
          WPP_IFR_SF_q(v143, 5u, 0xDu, 0x51u, WPP_FxIoQueue_cpp_Traceguids, v177);
        }
        if ( v196.Method )
        {
          if ( !v5->m_ObjectSize )
            v144 = 0LL;
          FxIoQueueIoState::Invoke(&v196, v144, m_IdleCompleteContext);
        }
        FxNonPagedObject::Lock(v5, &v199);
        m_Globals = v194;
        goto LABEL_6;
      }
      if ( v5->m_PurgeComplete.Method && !v11 && v5->m_Dispatching == 1 )
      {
        FxIoQueue::InsertNewRequest(v5, &Request, v199);
        v5->m_CancelDispatchedRequests = 0;
        FxIoQueue::ProcessPurgeComplete(v5, &v199);
        goto LABEL_7;
      }
      if ( v5->m_IsDevicePowerPolicyOwner
        && v5->m_PowerManaged
        && v5->m_PowerReferenced
        && !v11
        && v5->m_Dispatching == 1 )
      {
        v98 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
        v99 = *(_QWORD *)(v98 + 624);
        v100 = *(_FX_DRIVER_GLOBALS **)(v99 + 16);
        v101 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v98 + 16));
        if ( !*(_DWORD *)(v98 + 24) )
        {
          v178 = *(_QWORD *)(v99 + 96);
          v179 = (const void *)(v178 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v178 + 10) )
            v179 = 0LL;
          WPP_IFR_SF_qq(
            v100,
            2u,
            0xCu,
            0xFu,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            v179,
            *(const void **)(v178 + 144));
          if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(v100, v180, 0xBu, v181) )
            FxVerifierDbgBreakPoint(v182);
        }
        v102 = *(unsigned __int8 *)(v98 + 225);
        v103 = 0;
        v104 = --*(_DWORD *)(v98 + 24);
        v105 = *(_QWORD *)(v98 + 624);
        *(_DWORD *)(v98 + 4 * v102 + 232) = 256;
        *(_BYTE *)(v98 + 225) = (*(_BYTE *)(v98 + 225) + 1) & 7;
        while ( v103 < FxPowerIdleMachine::m_StateTable[*(int *)(v98 + 228) - 1].TargetStatesCount )
        {
          v106 = &FxPowerIdleMachine::m_StateTable[*(int *)(v98 + 228) - 1].TargetStates[v103];
          if ( v106->PowerIdleEvent == PowerIdleEventIoDecrement )
          {
            PowerIdleState = v106->PowerIdleState;
            if ( PowerIdleState != 35 )
            {
              do
              {
                v108 = *(_QWORD *)(v105 + 96);
                v109 = (const void *)(v108 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !*(_WORD *)(v108 + 10) )
                  v109 = 0LL;
                WPP_IFR_SF_qqLL(
                  *(_FX_DRIVER_GLOBALS **)(v105 + 16),
                  4u,
                  0x15u,
                  0x11u,
                  WPP_PowerIdleStateMachine_cpp_Traceguids,
                  v109,
                  *(const void **)(v108 + 144),
                  PowerIdleState,
                  *(_DWORD *)(v98 + 228));
                *(_DWORD *)(v98 + 4LL * *(unsigned __int8 *)(v98 + 226) + 264) = PowerIdleState;
                v110 = *(_BYTE *)(v98 + 226) + 1;
                *(_DWORD *)(v98 + 228) = PowerIdleState;
                *(_BYTE *)(v98 + 226) = v110 & 7;
                StateFunc = FxPowerIdleMachine::m_StateTable[(int)PowerIdleState - 1].StateFunc;
                if ( !StateFunc )
                  break;
                PowerIdleState = StateFunc((FxPowerIdleMachine *)v98);
              }
              while ( PowerIdleState != 35 );
              v5 = this;
            }
            break;
          }
          ++v103;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v98 + 16), v101);
        v112 = *(FxTagTracker **)(v98 + 32);
        if ( v112 )
          FxTagTracker::UpdateTagHistory(v112, 0LL, 0, 0LL, TagRelease, v104);
        m_Globals = v194;
        v5->m_PowerReferenced = 0;
        goto LABEL_6;
      }
      m_PowerState = v5->m_PowerState;
      if ( (unsigned int)(m_PowerState - 1) <= 1 )
        break;
      if ( m_Globals->FxVerboseOn )
      {
        v183 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v5->m_ObjectSize )
          v183 = 0LL;
        WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, WPP_FxIoQueue_cpp_Traceguids, v183, m_PowerState);
      }
      v145 = FxIoQueue::InsertNewRequest(v5, &Request, v199);
      p_m_Cancelled = &v5->m_Cancelled;
      if ( v145 >= 0 )
      {
        if ( !FxIoQueue::ProcessPowerEvents(v5, &v199) )
          goto $Done_2;
        goto LABEL_7;
      }
    }
    if ( v5->m_Disposing && !v11 && v5->m_Dispatching == 1 )
      break;
    if ( v5->m_PowerState == FxIoQueuePowerOff )
    {
      v22 = Request;
      if ( !Request )
        goto $Done_2;
      v125 = Request->m_Globals;
      p_m_Queue = (FxRequest_vtbl *)&v5->m_Queue;
      v127 = v199;
      v188[0] = v199;
      if ( !v125->FxVerifierOn || (v128 = FxRequest::Vf_VerifyInsertIrpQueue(Request, v125, &v5->m_Queue), v128 >= 0) )
      {
        v129 = _InterlockedExchangeAdd(&v22->m_Refcnt, 1u);
        v130 = Request;
        v131 = v129 + 1;
        if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
        {
          Blink = Request[-1].m_OwnerListEntry2.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)Blink,
              (void *)0x75657551,
              1900,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v131);
        }
        m_Irp = v130->m_Irp.m_Irp;
        v133 = &v130->120;
        v130->m_IrpQueue = (FxIrpQueue *)p_m_Queue;
        if ( v130 == (FxRequest *)-120LL )
        {
          m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
        }
        else
        {
          m_Irp->Tail.Overlay.DriverContext[3] = v133;
          v130->m_CsqContext.Irp = m_Irp;
          v130->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
          v133->m_CsqContext.Type = 1;
        }
        v134 = v5->m_Queue.m_Queue.Blink;
        NewRequest = (FxRequest *)(&m_Irp->Tail.CompletionKey + 6);
        if ( (FxRequest_vtbl *)v134->Flink != p_m_Queue )
          goto LABEL_253;
        m_Irp->Tail.Overlay.ListEntry.Blink = v134;
        NewRequest->__vftable = p_m_Queue;
        v134->Flink = (_LIST_ENTRY *)NewRequest;
        v5->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
        ++v5->m_Queue.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
        {
          v169 = NewRequest->__vftable;
          if ( (FxRequest *)NewRequest->~FxObject != NewRequest )
            goto LABEL_253;
          v170 = (FxRequest **)m_Irp->Tail.Overlay.ListEntry.Blink;
          if ( *v170 != NewRequest )
            goto LABEL_253;
          *v170 = (FxRequest *)v169;
          v169->~FxObject = (void (__fastcall *)(FxObject *))v170;
          m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
          NewRequest->__vftable = (FxRequest_vtbl *)NewRequest;
          --v5->m_Queue.m_RequestCount;
          if ( v130 != (FxRequest *)-120LL )
            v130->m_CsqContext.Irp = 0LL;
          v22 = Request;
          m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
          v128 = -1073741536;
          v171 = v22->__vftable;
          v22->m_IrpQueue = 0LL;
          v171->Release(v22, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        else
        {
          v22 = Request;
          v128 = 0;
        }
        if ( v128 >= 0 )
          goto LABEL_86;
        v127 = v188[0];
      }
      FxNonPagedObject::Unlock(v5, v127);
      FxRequest::CompleteWithInformation(v22, v128, 0LL);
      v22->Release(v22, (void *)1886220099, 2636, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxNonPagedObject::Lock(v5, v188);
      m_Globals = v194;
      Request = 0LL;
      goto LABEL_6;
    }
    _a2 = v5->m_QueueState;
    if ( (_a2 & 2) == 0 )
    {
      v21 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v5->m_ObjectSize )
        v21 = 0LL;
      WPP_IFR_SF_qL(m_Globals, 3u, 0xDu, 0x31u, WPP_FxIoQueue_cpp_Traceguids, v21, _a2);
      v22 = Request;
      if ( !Request )
        goto $Done_2;
      v23 = Request->m_Globals;
      v24 = (FxRequest_vtbl *)&v5->m_Queue;
      v25 = v199;
      v193[0] = v199;
      if ( !v23->FxVerifierOn || (v26 = FxRequest::Vf_VerifyInsertIrpQueue(Request, v23, &v5->m_Queue), v26 >= 0) )
      {
        v27 = _InterlockedExchangeAdd(&v22->m_Refcnt, 1u);
        v28 = Request;
        v29 = v27 + 1;
        if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
        {
          v159 = Request[-1].m_OwnerListEntry2.Blink;
          if ( v159 )
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v159,
              (void *)0x75657551,
              1900,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v29);
        }
        v30 = v28->m_Irp.m_Irp;
        v31 = &v28->120;
        v28->m_IrpQueue = (FxIrpQueue *)v24;
        if ( v28 == (FxRequest *)-120LL )
        {
          v30->Tail.Overlay.DriverContext[3] = v24;
        }
        else
        {
          v30->Tail.Overlay.DriverContext[3] = v31;
          v28->m_CsqContext.Irp = v30;
          v28->m_CsqContext.Csq = (_IO_CSQ *)v24;
          v31->m_CsqContext.Type = 1;
        }
        v32 = v5->m_Queue.m_Queue.Blink;
        NewRequest = (FxRequest *)(&v30->Tail.CompletionKey + 6);
        if ( (FxRequest_vtbl *)v32->Flink != v24 )
          goto LABEL_253;
        v30->Tail.Overlay.ListEntry.Blink = v32;
        NewRequest->__vftable = v24;
        v32->Flink = (_LIST_ENTRY *)NewRequest;
        v5->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
        ++v5->m_Queue.m_RequestCount;
        v30->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64((volatile __int64 *)&v30->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( v30->Cancel && _InterlockedExchange64((volatile __int64 *)&v30->CancelRoutine, 0LL) )
        {
          v172 = NewRequest->__vftable;
          if ( (FxRequest *)NewRequest->~FxObject != NewRequest )
            goto LABEL_253;
          v173 = (FxRequest **)v30->Tail.Overlay.ListEntry.Blink;
          if ( *v173 != NewRequest )
            goto LABEL_253;
          *v173 = (FxRequest *)v172;
          v172->~FxObject = (void (__fastcall *)(FxObject *))v173;
          v30->Tail.Overlay.ListEntry.Blink = &v30->Tail.Overlay.ListEntry;
          NewRequest->__vftable = (FxRequest_vtbl *)NewRequest;
          --v5->m_Queue.m_RequestCount;
          if ( v28 != (FxRequest *)-120LL )
            v28->m_CsqContext.Irp = 0LL;
          v22 = Request;
          v30->Tail.Overlay.DriverContext[3] = 0LL;
          v26 = -1073741536;
          v174 = v22->__vftable;
          v22->m_IrpQueue = 0LL;
          v174->Release(v22, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        else
        {
          v22 = Request;
          v26 = 0;
        }
        if ( v26 >= 0 )
          goto LABEL_86;
        v25 = v193[0];
      }
      FxNonPagedObject::Unlock(v5, v25);
      FxRequest::CompleteWithInformation(v22, v26, 0LL);
      v22->Release(v22, (void *)1886220099, 2636, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxNonPagedObject::Lock(v5, v193);
      m_Globals = v194;
      Request = 0LL;
      goto LABEL_6;
    }
    m_Type = v5->m_Type;
    if ( m_Type != WdfIoQueueDispatchManual )
    {
      if ( m_Type == WdfIoQueueDispatchSequential && v5->m_DriverIoCount > 0 )
      {
        v22 = Request;
        if ( !Request )
          goto $Done_2;
        v53 = Request->m_Globals;
        v54 = (FxRequest_vtbl *)&v5->m_Queue;
        v55 = v199;
        v191[0] = v199;
        if ( v53->FxVerifierOn )
        {
          v56 = FxRequest::Vf_VerifyInsertIrpQueue(Request, v53, &v5->m_Queue);
          if ( v56 < 0 )
            goto LABEL_314;
        }
        v57 = _InterlockedExchangeAdd(&v22->m_Refcnt, 1u);
        v58 = Request;
        v59 = v57 + 1;
        if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
        {
          v156 = Request[-1].m_OwnerListEntry2.Blink;
          if ( v156 )
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v156,
              (void *)0x75657551,
              1900,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v59);
        }
        v60 = v58->m_Irp.m_Irp;
        v61 = &v58->120;
        v58->m_IrpQueue = (FxIrpQueue *)v54;
        if ( v58 == (FxRequest *)-120LL )
        {
          v60->Tail.Overlay.DriverContext[3] = v54;
        }
        else
        {
          v60->Tail.Overlay.DriverContext[3] = v61;
          v58->m_CsqContext.Irp = v60;
          v58->m_CsqContext.Csq = (_IO_CSQ *)v54;
          v61->m_CsqContext.Type = 1;
        }
        v62 = v5->m_Queue.m_Queue.Blink;
        NewRequest = (FxRequest *)(&v60->Tail.CompletionKey + 6);
        if ( (FxRequest_vtbl *)v62->Flink == v54 )
        {
          v60->Tail.Overlay.ListEntry.Blink = v62;
          NewRequest->__vftable = v54;
          v62->Flink = (_LIST_ENTRY *)NewRequest;
          v5->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
          ++v5->m_Queue.m_RequestCount;
          v60->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          _InterlockedExchange64(
            (volatile __int64 *)&v60->CancelRoutine,
            (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
          if ( !v60->Cancel || !_InterlockedExchange64((volatile __int64 *)&v60->CancelRoutine, 0LL) )
          {
            v22 = Request;
            v56 = 0;
            goto LABEL_85;
          }
          v166 = NewRequest->__vftable;
          if ( (FxRequest *)NewRequest->~FxObject == NewRequest )
          {
            v167 = (FxRequest_vtbl **)v60->Tail.Overlay.ListEntry.Blink;
            if ( *v167 == (FxRequest_vtbl *)NewRequest )
            {
              *v167 = v166;
              v166->~FxObject = (void (__fastcall *)(FxObject *))v167;
              v60->Tail.Overlay.ListEntry.Blink = &v60->Tail.Overlay.ListEntry;
              NewRequest->__vftable = (FxRequest_vtbl *)NewRequest;
              --v5->m_Queue.m_RequestCount;
              if ( v58 != (FxRequest *)-120LL )
                v58->m_CsqContext.Irp = 0LL;
              v22 = Request;
              v60->Tail.Overlay.DriverContext[3] = 0LL;
              v56 = -1073741536;
              v168 = v22->__vftable;
              v22->m_IrpQueue = 0LL;
              v168->Release(v22, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_85:
              if ( v56 >= 0 )
              {
LABEL_86:
                v22->m_IoQueue = v5;
                if ( v5->m_Queue.m_RequestCount == 1 || v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
                  FxIoQueue::SetTransitionFromEmpty(v5);
                Request = 0LL;
                goto $Done_2;
              }
              v55 = v191[0];
LABEL_314:
              FxNonPagedObject::Unlock(v5, v55);
              FxRequest::CompleteWithInformation(v22, v56, 0LL);
              v22->Release(
                v22,
                (void *)1886220099,
                2636,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
              FxNonPagedObject::Lock(v5, v191);
              m_Globals = v194;
              Request = 0LL;
              goto LABEL_6;
            }
          }
        }
LABEL_253:
        __fastfail(3u);
      }
      if ( v5->m_Type != WdfIoQueueDispatchParallel || v5->m_DriverIoCount < v5->m_MaxParallelQueuePresentedRequests )
      {
        if ( v5->m_Queue.m_RequestCount > 0 )
        {
          NewRequest = (FxRequest *)&v5->m_Queue;
          for ( i = (FxRequest *)v5->m_Queue.m_Queue.Flink; ; i = *v65 )
          {
            p_m_CompletionRoutine = &i[-1].m_CompletionRoutine;
            if ( i == NewRequest )
              p_m_CompletionRoutine = 0LL;
            if ( !p_m_CompletionRoutine )
              goto LABEL_29;
            v65 = (FxRequest **)&p_m_CompletionRoutine[21];
            if ( _InterlockedExchange64((volatile __int64 *)&p_m_CompletionRoutine[13], 0LL) )
              break;
          }
          v66 = *v65;
          if ( *(FxRequest ***)&(*v65)->m_Type != v65 )
            goto LABEL_253;
          m_Completion = (FxRequest **)p_m_CompletionRoutine[22].m_Completion;
          if ( *m_Completion != (FxRequest *)v65 )
            goto LABEL_253;
          *m_Completion = v66;
          *(_QWORD *)&v66->m_Type = m_Completion;
          p_m_CompletionRoutine[22].m_Completion = (void (__fastcall *)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *))&p_m_CompletionRoutine[21];
          *v65 = (FxRequest *)v65;
          --v5->m_Queue.m_RequestCount;
          v68 = p_m_CompletionRoutine[18].m_Completion;
          if ( *(_DWORD *)v68 == 1 )
            *((_QWORD *)v68 + 1) = 0LL;
          p_m_CompletionRoutine[18].m_Completion = 0LL;
          v69 = *((_QWORD *)v68 - 15);
          v19 = (FxRequest *)((char *)v68 - 120);
          v70 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v69 + 16);
          v19->m_IrpQueue = 0LL;
          v70(v19, 1969583441LL, 2062LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          v71 = Request;
          if ( Request )
          {
            v72 = Request->m_Globals;
            v73 = (FxRequest_vtbl *)&v5->m_Queue;
            v74 = v199;
            v192[0] = v199;
            if ( !v72->FxVerifierOn || (v75 = FxRequest::Vf_VerifyInsertIrpQueue(Request, v72, &v5->m_Queue), v75 >= 0) )
            {
              v76 = _InterlockedExchangeAdd(&v71->m_Refcnt, 1u);
              v77 = Request;
              v78 = v76 + 1;
              if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
              {
                v155 = Request[-1].m_OwnerListEntry2.Blink;
                if ( v155 )
                  FxTagTracker::UpdateTagHistory(
                    (FxTagTracker *)v155,
                    (void *)0x75657551,
                    1900,
                    "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                    TagAddRef,
                    v78);
              }
              v79 = v77->m_Irp.m_Irp;
              v80 = &v77->120;
              v77->m_IrpQueue = (FxIrpQueue *)v73;
              if ( v77 == (FxRequest *)-120LL )
              {
                v79->Tail.Overlay.DriverContext[3] = v73;
              }
              else
              {
                v79->Tail.Overlay.DriverContext[3] = v80;
                v77->m_CsqContext.Irp = v79;
                v77->m_CsqContext.Csq = (_IO_CSQ *)v73;
                v80->m_CsqContext.Type = 1;
              }
              v81 = v5->m_Queue.m_Queue.Blink;
              NewRequest = (FxRequest *)(&v79->Tail.CompletionKey + 6);
              if ( (FxRequest_vtbl *)v81->Flink != v73 )
                goto LABEL_253;
              v79->Tail.Overlay.ListEntry.Blink = v81;
              NewRequest->__vftable = v73;
              v81->Flink = (_LIST_ENTRY *)NewRequest;
              v5->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
              ++v5->m_Queue.m_RequestCount;
              v79->Tail.Overlay.CurrentStackLocation->Control |= 1u;
              _InterlockedExchange64(
                (volatile __int64 *)&v79->CancelRoutine,
                (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
              if ( v79->Cancel && _InterlockedExchange64((volatile __int64 *)&v79->CancelRoutine, 0LL) )
              {
                v163 = NewRequest->__vftable;
                if ( (FxRequest *)NewRequest->~FxObject != NewRequest )
                  goto LABEL_253;
                v164 = (FxRequest **)v79->Tail.Overlay.ListEntry.Blink;
                if ( *v164 != NewRequest )
                  goto LABEL_253;
                *v164 = (FxRequest *)v163;
                v163->~FxObject = (void (__fastcall *)(FxObject *))v164;
                v79->Tail.Overlay.ListEntry.Blink = &v79->Tail.Overlay.ListEntry;
                NewRequest->__vftable = (FxRequest_vtbl *)NewRequest;
                --v5->m_Queue.m_RequestCount;
                if ( v77 != (FxRequest *)-120LL )
                  v77->m_CsqContext.Irp = 0LL;
                v71 = Request;
                v79->Tail.Overlay.DriverContext[3] = 0LL;
                v75 = -1073741536;
                v165 = v71->__vftable;
                v71->m_IrpQueue = 0LL;
                v165->Release(v71, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
              }
              else
              {
                v71 = Request;
                v75 = 0;
              }
              if ( v75 >= 0 )
              {
                v71->m_IoQueue = v5;
                if ( v5->m_Queue.m_RequestCount == 1 || v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
                  FxIoQueue::SetTransitionFromEmpty(v5);
                goto LABEL_128;
              }
              v74 = v192[0];
            }
            FxNonPagedObject::Unlock(v5, v74);
            FxRequest::CompleteWithInformation(v71, v75, 0LL);
            v71->Release(
              v71,
              (void *)1886220099,
              2636,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxNonPagedObject::Lock(v5, v192);
            goto LABEL_128;
          }
        }
        else
        {
LABEL_29:
          v19 = Request;
          if ( !Request )
            goto $Done_2;
          Request->m_IoQueue = v5;
          v82 = v5->m_IsDevicePowerPolicyOwner == 0;
          v5->m_TransitionFromEmpty = 1;
          v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( !v82 && v5->m_PowerManaged && !v5->m_PowerReferenced )
          {
            v83 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
            if ( v83 )
              _InterlockedCompareExchange((volatile signed __int32 *)(v83 + 748), 11, 5);
            v84 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
            v85 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v84 + 16));
            v86 = *(_BYTE *)(v84 + 224);
            v87 = v85;
            v187 = v85;
            if ( (v86 & 0x10) != 0 )
            {
              v92 = -1073741101;
            }
            else if ( (v86 & 0x20) != 0 )
            {
              v88 = *(unsigned __int8 *)(v84 + 225);
              v8 = ++*(_DWORD *)(v84 + 24);
              v89 = *(_QWORD *)(v84 + 624);
              *(_DWORD *)(v84 + 4 * v88 + 232) = 512;
              LOBYTE(v88) = *(_BYTE *)(v84 + 225) + 1;
              v195 = v8;
              *(_BYTE *)(v84 + 225) = v88 & 7;
              for ( j = 0LL;
                    (unsigned int)j < FxPowerIdleMachine::m_StateTable[*(int *)(v84 + 228) - 1].TargetStatesCount;
                    j = (unsigned int)(j + 1) )
              {
                v91 = &FxPowerIdleMachine::m_StateTable[*(int *)(v84 + 228) - 1].TargetStates[j];
                if ( v91->PowerIdleEvent == PowerIdleEventIoIncrement )
                {
                  v135 = v91->PowerIdleState;
                  if ( v135 != 35 )
                  {
                    do
                    {
                      v136 = *(_QWORD *)(v89 + 96);
                      v137 = (const void *)(v136 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*(_WORD *)(v136 + 10) )
                        v137 = 0LL;
                      WPP_IFR_SF_qqLL(
                        *(_FX_DRIVER_GLOBALS **)(v89 + 16),
                        4u,
                        0x15u,
                        0x11u,
                        WPP_PowerIdleStateMachine_cpp_Traceguids,
                        v137,
                        *(const void **)(v136 + 144),
                        v135,
                        *(_DWORD *)(v84 + 228));
                      *(_DWORD *)(v84 + 4LL * *(unsigned __int8 *)(v84 + 226) + 264) = v135;
                      v138 = *(_BYTE *)(v84 + 226) + 1;
                      *(_DWORD *)(v84 + 228) = v135;
                      *(_BYTE *)(v84 + 226) = v138 & 7;
                      v139 = FxPowerIdleMachine::m_StateTable[(int)v135 - 1].StateFunc;
                      if ( !v139 )
                        break;
                      v135 = v139((FxPowerIdleMachine *)v84);
                    }
                    while ( v135 != 35 );
                    v5 = this;
                    v87 = v187;
                    v8 = v195;
                  }
                  break;
                }
              }
              v92 = 259;
              if ( KeReadStateEvent((PRKEVENT)(v84 + 192)) )
                v92 = 0;
            }
            else
            {
              v92 = -1073741101;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v84 + 16), v87);
            v93 = *(FxTagTracker **)(v84 + 32);
            if ( v93 && (!v92 || v92 == 259) )
            {
              _a1 = v8;
              v8 = 0;
              FxTagTracker::UpdateTagHistory(v93, 0LL, 0, 0LL, TagAddRef, _a1);
            }
            else
            {
              v8 = 0;
            }
            if ( v92 >= 0 )
              v5->m_PowerReferenced = 1;
          }
LABEL_128:
          Request = 0LL;
        }
        p_m_OwnerListEntry2 = &v19->m_OwnerListEntry2;
        ++v5->m_DriverIoCount;
        v95 = v5->m_DriverOwned.Blink;
        if ( v95->Flink == &v5->m_DriverOwned )
        {
          p_m_OwnerListEntry2->Flink = &v5->m_DriverOwned;
          v19->m_OwnerListEntry2.Blink = v95;
          v95->Flink = p_m_OwnerListEntry2;
          v5->m_DriverOwned.Blink = p_m_OwnerListEntry2;
          if ( SLOBYTE(v5->m_ObjectFlags) < 0
            && (v150 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v150, v199, (unsigned __int8)NewRequest);
            v96 = &v5->m_NPLock.m_Lock;
          }
          else
          {
            v96 = &v5->m_NPLock.m_Lock;
            KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v199);
          }
          FxIoQueue::DispatchRequestToDriver(v5, v19);
          if ( SLOBYTE(v5->m_ObjectFlags) >= 0
            || (v149 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) == 0LL )
          {
            v97 = KeAcquireSpinLockRaiseToDpc(v96);
            m_Globals = v194;
            v199 = v97;
            goto LABEL_6;
          }
          goto LABEL_220;
        }
        goto LABEL_253;
      }
      if ( FxIoQueue::InsertNewRequest(v5, &Request, v199) >= 0 )
        goto $Done_2;
      goto LABEL_7;
    }
    v33 = Request;
    if ( !Request )
      goto LABEL_48;
    v113 = Request->m_Globals;
    v114 = (FxRequest_vtbl *)&v5->m_Queue;
    v115 = v199;
    v189[0] = v199;
    if ( !v113->FxVerifierOn || (v116 = FxRequest::Vf_VerifyInsertIrpQueue(Request, v113, &v5->m_Queue), v116 >= 0) )
    {
      v117 = _InterlockedExchangeAdd(&v33->m_Refcnt, 1u);
      v118 = Request;
      v119 = v117 + 1;
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
      {
        v151 = Request[-1].m_OwnerListEntry2.Blink;
        if ( v151 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v151,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v119);
      }
      v120 = v118->m_Irp.m_Irp;
      v121 = &v118->120;
      v118->m_IrpQueue = (FxIrpQueue *)v114;
      if ( v118 == (FxRequest *)-120LL )
      {
        v120->Tail.Overlay.DriverContext[3] = v114;
      }
      else
      {
        v120->Tail.Overlay.DriverContext[3] = v121;
        v118->m_CsqContext.Irp = v120;
        v118->m_CsqContext.Csq = (_IO_CSQ *)v114;
        v121->m_CsqContext.Type = 1;
      }
      v122 = v5->m_Queue.m_Queue.Blink;
      NewRequest = (FxRequest *)(&v120->Tail.CompletionKey + 6);
      if ( (FxRequest_vtbl *)v122->Flink != v114 )
        goto LABEL_253;
      v120->Tail.Overlay.ListEntry.Blink = v122;
      NewRequest->__vftable = v114;
      v122->Flink = (_LIST_ENTRY *)NewRequest;
      v5->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
      ++v5->m_Queue.m_RequestCount;
      v120->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&v120->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( v120->Cancel && _InterlockedExchange64((volatile __int64 *)&v120->CancelRoutine, 0LL) )
      {
        v160 = NewRequest->__vftable;
        if ( (FxRequest *)NewRequest->~FxObject != NewRequest )
          goto LABEL_253;
        v161 = (FxRequest **)v120->Tail.Overlay.ListEntry.Blink;
        if ( *v161 != NewRequest )
          goto LABEL_253;
        *v161 = (FxRequest *)v160;
        v160->~FxObject = (void (__fastcall *)(FxObject *))v161;
        v120->Tail.Overlay.ListEntry.Blink = &v120->Tail.Overlay.ListEntry;
        NewRequest->__vftable = (FxRequest_vtbl *)NewRequest;
        --v5->m_Queue.m_RequestCount;
        if ( v118 != (FxRequest *)-120LL )
          v118->m_CsqContext.Irp = 0LL;
        v33 = Request;
        v120->Tail.Overlay.DriverContext[3] = 0LL;
        v123 = -1073741536;
        v162 = v33->__vftable;
        v33->m_IrpQueue = 0LL;
        v162->Release(v33, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        v33 = Request;
        v123 = 0;
      }
      v116 = v123;
      if ( v123 >= 0 )
      {
        v33->m_IoQueue = v5;
        if ( v5->m_Queue.m_RequestCount == 1 || v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
        {
          FxIoQueue::SetTransitionFromEmpty(v5);
          v116 = v123;
        }
        goto LABEL_160;
      }
      v115 = v189[0];
    }
    FxNonPagedObject::Unlock(v5, v115);
    FxRequest::CompleteWithInformation(v33, v116, 0LL);
    v33->Release(v33, (void *)1886220099, 2636, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(v5, v189);
LABEL_160:
    v124 = v116 < 0;
    Request = 0LL;
    m_Globals = v194;
    p_m_CanceledOnQueueList = &v5->m_CanceledOnQueueList;
    p_m_Cancelled = &v5->m_Cancelled;
    if ( !v124 )
    {
LABEL_48:
      if ( v5->m_ReadyNotify.Method && v5->m_TransitionFromEmpty )
      {
        m_ReadyNotify = v5->m_ReadyNotify;
        v35 = v5->m_ObjectFlags;
        v36 = v5->m_Globals;
        m_ReadyNotifyContext = v5->m_ReadyNotifyContext;
        v5->m_TransitionFromEmpty = 0;
        v197 = m_ReadyNotify;
        if ( v35 < 0 && (v153 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          FxVerifierLock::Unlock(v153, v199, (unsigned __int8)NewRequest);
        else
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v199);
        Method = v197.Method;
        if ( v197.Method )
        {
          m_CallbackLock = v197.m_CallbackLock;
          v41 = (unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
          v190[0] = 0;
          if ( !v5->m_ObjectSize )
            v41 = 0LL;
          if ( v197.m_CallbackLock )
            v197.m_CallbackLock->Lock(v197.m_CallbackLock, (unsigned __int8 *)v190);
          Method((WDFQUEUE__ *)v41, m_ReadyNotifyContext);
          if ( m_CallbackLock )
            m_CallbackLock->Unlock(m_CallbackLock, v190[0]);
        }
        else if ( v36->FxVerifierOn )
        {
          v184 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v5->m_ObjectSize )
            v184 = 0LL;
          WPP_IFR_SF_q(v36, 2u, 0xDu, 0x53u, WPP_FxIoQueue_cpp_Traceguids, v184);
          FxVerifierDbgBreakPoint(v36);
        }
        if ( SLOBYTE(v5->m_ObjectFlags) >= 0
          || (v149 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) == 0LL )
        {
          v42 = KeAcquireSpinLockRaiseToDpc(&v5->m_NPLock.m_Lock);
          m_Globals = v194;
          v199 = v42;
          goto LABEL_6;
        }
LABEL_220:
        FxVerifierLock::Lock(v149, &v199, v38);
        m_Globals = v194;
        goto LABEL_6;
      }
$Done_2:
      --v5->m_Dispatching;
      if ( SLOBYTE(v5->m_ObjectFlags) >= 0 )
        goto LABEL_31;
      goto LABEL_73;
    }
  }
  v152 = v199;
  v5->m_Deleted = 1;
  FxNonPagedObject::Unlock(v5, v152);
  KeSetEvent(&v5->m_FinishDisposing.m_Event, 0, 0);
  return 1;
}
