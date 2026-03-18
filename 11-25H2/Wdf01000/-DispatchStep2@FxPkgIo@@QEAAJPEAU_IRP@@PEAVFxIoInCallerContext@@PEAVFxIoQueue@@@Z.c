/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140027830
 * Callers:
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x140026A60 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qLsqd @ 0x14000A9C0 (WPP_IFR_SF_qLsqd.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x14000ABD0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x14000D190 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     FxAllocateFromNPagedLookasideList @ 0x140028CD0 (FxAllocateFromNPagedLookasideList.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1400446E0 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x140045C68 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     WPP_IFR_SF_qiid @ 0x1400560A4 (WPP_IFR_SF_qiid.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x140057940 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140059E28 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x140070C9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x14008009C (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AFC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x140082628 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLiveDump @ 0x1400837E4 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BC0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1400A0E14 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1400A1698 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchStep2(
        FxPkgIo *this,
        _IRP *Irp,
        FxIoInCallerContext *IoInCallerCtx,
        FxIoQueue *Queue)
{
  unsigned __int64 v6; // rdx
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxObject *p_RequestAttributes; // rax
  FxDeviceBase *m_DeviceBase; // r13
  const void *v10; // rsi
  FxRequest *v11; // r14
  __int64 v12; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  FX_POOL_TRACKER *v14; // rax
  _FX_DRIVER_GLOBALS *v15; // rdx
  unsigned int v16; // r8d
  FX_POOL_TRACKER *v17; // rbx
  _QWORD *p_Flink; // rdi
  _QWORD *v19; // rbx
  _DWORD *v20; // rdi
  _QWORD *p_m_ExecutionLevel; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  PIRP v25; // rcx
  __int64 v26; // rcx
  unsigned __int8 *v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int16 v30; // cx
  FxObject *flags; // r12
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  char *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdi
  signed int v39; // edi
  bool v40; // al
  FxPkgIo *v41; // r12
  PIRP v42; // r13
  FxIoInCallerContext *v43; // rbx
  char m_ObjectFlags; // al
  KIRQL v45; // bl
  unsigned __int8 v46; // r8
  unsigned __int16 v47; // r9
  _FX_IO_QUEUE_STATE m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *v49; // rcx
  KIRQL v51; // r12
  KIRQL v52; // cl
  _LIST_ENTRY *v53; // r8
  _LIST_ENTRY *v54; // rdx
  __int64 v55; // rax
  char *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdi
  signed int _a1; // r14d
  _WDF_BUGCHECK_CODES v61; // edx
  _FX_DRIVER_GLOBALS *v62; // rcx
  const char *v63; // r12
  _FX_DRIVER_GLOBALS *v64; // r10
  unsigned __int8 v65; // r8
  FxDeviceBase *v66; // rbx
  _FX_DRIVER_GLOBALS *v67; // rcx
  char m_Globals_high; // al
  unsigned __int64 v69; // rbx
  WDFQUEUE__ *v70; // rcx
  WDFREQUEST__ *v71; // rdx
  FxRequestContext *m_RequestContext; // rcx
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  _FX_DRIVER_GLOBALS *v74; // r12
  _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY m_Policy; // ecx
  KIRQL v76; // bl
  _LIST_ENTRY *p_m_ReservedRequestList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v79; // rdx
  _LIST_ENTRY *v80; // rcx
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *v82; // r8
  FxRequestBase *v83; // rcx
  unsigned __int64 *p_m_Lock; // rcx
  __int64 v85; // rax
  _FX_DRIVER_GLOBALS *v86; // rcx
  unsigned __int8 m_CompletionState; // al
  FxDeviceBase *v88; // rcx
  unsigned __int64 v89; // rdx
  unsigned __int16 v90; // r8
  unsigned __int64 v91; // rcx
  KIRQL v92; // al
  bool v93; // zf
  KIRQL v94; // r8
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v96; // rcx
  KIRQL v97; // dl
  unsigned __int8 v98; // dl
  unsigned __int16 v99; // r9
  signed __int32 v100; // edx
  unsigned int v101; // edx
  _LIST_ENTRY *v102; // rcx
  void *v103; // rbx
  KIRQL v104; // al
  KIRQL v105; // al
  FxVerifierLock *v106; // rcx
  FxVerifierLock *v107; // rcx
  _FX_DRIVER_GLOBALS *v108; // rdx
  signed int v109; // r14d
  _WDF_BUGCHECK_CODES v110; // edx
  _FX_DRIVER_GLOBALS *v111; // rcx
  const char *DriverName; // r12
  KIRQL v113; // dl
  KIRQL v114; // dl
  const void *v115; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v117; // r15
  int ReservedRequest; // eax
  __int32 v119; // ecx
  int v120; // ecx
  _WDF_IO_FORWARD_PROGRESS_ACTION (__fastcall *Method)(WDFQUEUE__ *, _IRP *); // rax
  unsigned __int64 v122; // rcx
  int v123; // eax
  const void *v124; // rax
  const void *v125; // r11
  const char *v126; // r8
  const void *v127; // rdx
  const void *v128; // rdx
  const void *v129; // rdx
  unsigned __int8 v130; // r8
  unsigned __int8 v131; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-49h]
  bool v133; // [rsp+50h] [rbp-19h]
  char v134; // [rsp+51h] [rbp-18h]
  KIRQL v135; // [rsp+52h] [rbp-17h]
  KIRQL v136; // [rsp+52h] [rbp-17h]
  FxRequest *request; // [rsp+58h] [rbp-11h] BYREF
  FxObject *v138; // [rsp+60h] [rbp-9h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+68h] [rbp-1h] BYREF
  FxObject **v140; // [rsp+70h] [rbp+7h] BYREF
  __int16 v141; // [rsp+78h] [rbp+Fh]
  __int16 v142; // [rsp+7Ah] [rbp+11h]
  int v143; // [rsp+7Ch] [rbp+13h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  FxPkgIo *v145; // [rsp+D0h] [rbp+67h] BYREF
  PIRP v146; // [rsp+D8h] [rbp+6Fh] BYREF
  FxIoInCallerContext *v147; // [rsp+E0h] [rbp+77h]
  void *globals; // [rsp+E8h] [rbp+7Fh] BYREF

  v147 = IoInCallerCtx;
  v146 = Irp;
  v145 = this;
  v134 = 0;
  v133 = Queue && Queue->m_SupportForwardProgress;
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v134 = 1;
  }
  if ( Queue && (m_CxDeviceInfo = Queue->m_CxDeviceInfo) != 0LL )
    p_RequestAttributes = (FxObject *)&m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = (FxDeviceBase *)((char *)this->m_DeviceBase + 584);
  m_DeviceBase = this->m_DeviceBase;
  v10 = 0LL;
  globals = p_RequestAttributes;
  v11 = 0LL;
  v138 = p_RequestAttributes;
  v12 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  m_Globals = m_DeviceBase->m_Globals;
  request = 0LL;
  if ( v12 && *(_WORD *)(v12 + 8) == 4354 && *(_BYTE *)(v12 + 1787) )
  {
    v17 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v17 )
      goto LABEL_13;
    v14 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                               HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                               HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                               LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
  }
  else
  {
    v14 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(
                               (_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock,
                               v6);
  }
  v17 = v14;
LABEL_13:
  if ( !v17 )
    goto LABEL_178;
  if ( m_Globals->FxPoolTrackingOn )
  {
    p_Flink = &v17[1].Link.Flink;
    FxPoolInsertNonPagedAllocateTracker(
      &m_Globals->FxPoolFrameworks,
      v17,
      (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
      m_Globals->Tag,
      retaddr);
  }
  else
  {
    p_Flink = &v17->Link.Flink;
  }
  *p_Flink = v17;
  v19 = p_Flink + 2;
  p_Flink[1] = m_Globals;
  v20 = globals;
  if ( globals )
  {
    p_m_ExecutionLevel = globals;
  }
  else
  {
    p_m_ExecutionLevel = &m_DeviceBase[2].m_ExecutionLevel;
    v138 = (FxDeviceBase *)((char *)m_DeviceBase + 584);
  }
  if ( m_Globals->FxVerifierHandle )
  {
    *(_OWORD *)v19 = 0LL;
    *((_OWORD *)v19 + 1) = 0LL;
    *((_OWORD *)v19 + 2) = 0LL;
    *((_DWORD *)v19 + 8) = 1146058822;
    v19 += 6;
  }
  v19[47] = 0LL;
  v19[48] = 0LL;
  v19[49] = 0LL;
  v19[50] = 0LL;
  v19[51] = 0LL;
  v19[46] = v19;
  if ( p_m_ExecutionLevel )
  {
    v22 = p_m_ExecutionLevel[6];
    if ( v22 )
    {
      v23 = p_m_ExecutionLevel[5];
      if ( !v23 )
        v23 = *(_QWORD *)(v22 + 16);
      memset(v19 + 52, 0, (v23 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      p_m_ExecutionLevel = &v138->__vftable;
    }
    v19[50] = p_m_ExecutionLevel[6];
  }
  if ( !v19 )
  {
LABEL_178:
    v39 = -1073741670;
    WPP_IFR_SF_D(m_DeviceBase->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
    goto LABEL_60;
  }
  v19[2] = m_DeviceBase->m_Globals;
  *v19 = FxObject::`vftable';
  *((_DWORD *)v19 + 2) = 24121352;
  v19[7] = 0LL;
  *((_BYTE *)v19 + 48) = 1;
  *((_DWORD *)v19 + 3) = 1;
  *((_DWORD *)v19 + 6) = 0x10000;
  v19[8] = 0LL;
  v19[5] = v19 + 4;
  v19[4] = v19 + 4;
  v19[10] = v19 + 9;
  v19[9] = v19 + 9;
  v24 = v19[2];
  v19[11] = 0LL;
  v19[12] = 0LL;
  if ( *(_BYTE *)(v24 + 324) )
    FxObject::Vf_VerifyConstruct((FxObject *)v19, v15, 0);
  *v19 = FxNonPagedObject::`vftable';
  v19[14] = 0LL;
  *((_BYTE *)v19 + 104) = 1;
  if ( *((char *)v19 + 24) < 0 )
  {
    v108 = (_FX_DRIVER_GLOBALS *)v19[2];
    if ( v108->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v108, (FxObject *)v19);
      *(v19 - 5) = VerifierLock;
    }
  }
  v25 = v146;
  v19[19] = v146;
  v19[23] = 0LL;
  v19[24] = 0LL;
  *((_BYTE *)v19 + 214) = v25 == 0LL;
  *((_WORD *)v19 + 106) = 0;
  *((_BYTE *)v19 + 238) = 1;
  v19[20] = 0LL;
  v19[25] = 0LL;
  *((_BYTE *)v19 + 215) = 0;
  *((_BYTE *)v19 + 236) = 0;
  v19[21] = 0LL;
  v19[22] = 0LL;
  v19[16] = v19 + 15;
  v19[15] = v19 + 15;
  v19[18] = 0LL;
  v19[27] = 216LL;
  v19[28] = 0LL;
  *((_DWORD *)v19 + 52) = 0;
  v19[30] = 0LL;
  *((_DWORD *)v19 + 58) = 232;
  *((_BYTE *)v19 + 237) = 0;
  v19[32] = FxRequestSystemBuffer::`vftable';
  v19[33] = 0LL;
  v19[34] = FxRequestOutputBuffer::`vftable';
  v19[35] = 0LL;
  v19[31] = 0LL;
  *((_BYTE *)v19 + 353) = 0;
  v19[37] = v19 + 36;
  v19[36] = v19 + 36;
  v19[39] = v19 + 38;
  v19[38] = v19 + 38;
  v19[41] = v19 + 40;
  v19[40] = v19 + 40;
  *v19 = FxRequestFromLookaside::`vftable';
  *((_BYTE *)v19 + 352) = 0;
  *((_WORD *)v19 + 177) = 0;
  v19[42] = 0LL;
  v19[43] = 0LL;
  v19[12] = m_DeviceBase->m_DeviceBase;
  if ( v25 )
  {
    v26 = v19[19];
    v27 = *(unsigned __int8 **)(v26 + 184);
    v16 = *v27;
    if ( v16 != 15 )
    {
      if ( v16 == 3 || v16 == 4 )
      {
        if ( m_DeviceBase[1].m_Refcnt == 1 )
        {
          if ( *(_BYTE *)(v26 + 64) )
            goto LABEL_40;
          v85 = *(_QWORD *)(v26 + 112);
        }
        else
        {
          if ( m_DeviceBase[1].m_Refcnt != 2 )
            goto LABEL_40;
          v85 = *(_QWORD *)(v26 + 24);
        }
        v19[33] = v85;
        goto LABEL_36;
      }
      if ( v16 != 14 )
        goto LABEL_40;
    }
    v28 = *((_DWORD *)v27 + 6) & 3;
    if ( v28 == 3 )
    {
      if ( (_BYTE)v16 != 15 && *(_BYTE *)(v26 + 64) )
        goto LABEL_40;
      v19[33] = *((_QWORD *)v27 + 4);
      v29 = *(_QWORD *)(v26 + 112);
    }
    else
    {
      if ( v28 )
      {
        if ( (unsigned int)(v28 - 1) <= 1 )
          v19[33] = *(_QWORD *)(v26 + 24);
        goto LABEL_36;
      }
      v19[33] = *(_QWORD *)(v26 + 24);
      v29 = *(_QWORD *)(v26 + 24);
    }
    v19[35] = v29;
LABEL_36:
    if ( v19[33] )
      *((_BYTE *)v19 + 235) |= 1u;
    if ( v19[35] )
      *((_BYTE *)v19 + 235) |= 2u;
  }
LABEL_40:
  v30 = *((_WORD *)v19 + 5);
  if ( m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
  {
    v138 = 0LL;
    flags = 0LL;
    if ( v30 )
    {
      if ( v20 )
      {
        if ( v20[6] == 2 )
        {
          v104 = KeAcquireSpinLockRaiseToDpc(v19 + 7);
          *((_WORD *)v19 + 12) |= 0x11u;
          KeReleaseSpinLock(v19 + 7, v104);
          flags = v138;
        }
        v32 = *((_QWORD *)v20 + 4);
        globals = (void *)v32;
        if ( v32 )
        {
          LOWORD(v33) = 0;
          flags = (FxObject *)(~v32 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( (v32 & 1) != 0 )
          {
            v33 = LOWORD(flags->__vftable);
            flags = (FxObject *)((char *)flags - v33);
          }
          if ( flags->m_Type == 4096 )
          {
            v138 = flags;
          }
          else
          {
            v141 = 4096;
            v140 = &v138;
            v142 = v33;
            v143 = 0;
            if ( flags->QueryInterface(flags, (FxQueryInterfaceParams *)&v140) < 0 )
            {
              v103 = globals;
              WPP_IFR_SF_qDqD(flags->m_Globals, v98, v16, v99, traceGuid, globals, 0x1000u, flags, flags->m_Type);
              FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)v103, 0x1000uLL);
            }
            flags = v138;
          }
        }
      }
      if ( !flags )
      {
LABEL_51:
        if ( v20 )
        {
          v34 = *((unsigned __int16 *)v19 + 5);
          if ( (_WORD)v34 )
            v35 = (char *)v19 + v34;
          else
            v35 = 0LL;
          v36 = *((_QWORD *)v20 + 2);
          if ( v36 )
            *((_QWORD *)v35 + 3) = v36;
          v37 = *((_QWORD *)v20 + 1);
          if ( v37 )
          {
            *((_QWORD *)v35 + 2) = v37;
            *((_WORD *)v19 + 12) |= 0x400u;
          }
        }
        *((_WORD *)v19 + 12) |= 8u;
        v38 = *(_QWORD *)(v19[2] + 336LL);
        if ( !v38 || *(_DWORD *)v38 )
          goto LABEL_59;
        if ( *((_WORD *)v19 + 4) == 4098 )
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(v38 + 20)) >= 2 )
            _InterlockedAdd((volatile signed __int32 *)(v38 + 12), *(_DWORD *)(v38 + 8));
          goto LABEL_198;
        }
        if ( *((_WORD *)v19 + 4) != 4104 || *((_BYTE *)v19 + 213) == 2 )
        {
LABEL_198:
          *((_WORD *)v19 + 12) |= 0x40u;
          v109 = _InterlockedIncrement((volatile signed __int32 *)(v38 + 16));
          if ( v109 >= *(_DWORD *)(v38 + 12)
            && !KeGetCurrentIrql()
            && !_InterlockedCompareExchange((volatile signed __int32 *)v38, 1, 0) )
          {
            WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v19[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, v109);
            if ( *(_BYTE *)(v38 + 4) )
              DbgBreakPoint();
            v111 = (_FX_DRIVER_GLOBALS *)v19[2];
            DriverName = v111->Public.DriverName;
            FxLiveDump(v111, v110, (unsigned __int64)v111->Public.DriverName, v109);
            if ( v109 >= *(_DWORD *)(v38 + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM(DriverName, v109, 0);
          }
        }
LABEL_59:
        v39 = 0;
        v11 = (FxRequest *)v19;
        request = (FxRequest *)v19;
        goto LABEL_60;
      }
      v92 = KeAcquireSpinLockRaiseToDpc(v19 + 7);
      v93 = *((_WORD *)v19 + 13) == 1;
      LOBYTE(globals) = v92;
      if ( v93 )
      {
        if ( !v19[8] )
        {
          v94 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
          v136 = v94;
          if ( flags->m_ObjectState == 1 )
          {
            Blink = flags->m_ChildListHead.Blink;
            v96 = (_LIST_ENTRY *)(v19 + 9);
            if ( Blink->Flink != &flags->m_ChildListHead )
              goto LABEL_217;
            v96->Flink = &flags->m_ChildListHead;
            v19[10] = Blink;
            Blink->Flink = v96;
            flags->m_ChildListHead.Blink = v96;
            if ( !v19[12] )
              v19[12] = flags->m_DeviceBase;
            KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v94);
            v97 = (unsigned __int8)globals;
            v19[8] = flags;
            KeReleaseSpinLock(v19 + 7, v97);
            goto LABEL_51;
          }
          FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
          KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v136);
          v113 = (unsigned __int8)globals;
          goto LABEL_211;
        }
        v114 = v92;
LABEL_213:
        KeReleaseSpinLock(v19 + 7, v114);
        v39 = -1071644147;
        goto LABEL_193;
      }
      FxObject::TraceDroppedEvent((FxObject *)v19, FxObjectDroppedEventAssignParentObject);
      v113 = (unsigned __int8)globals;
      goto LABEL_211;
    }
    v39 = -1073741816;
  }
  else
  {
    if ( v30 )
    {
      if ( v20 && v20[6] == 2 )
      {
        v105 = KeAcquireSpinLockRaiseToDpc(v19 + 7);
        *((_WORD *)v19 + 12) |= 0x11u;
        KeReleaseSpinLock(v19 + 7, v105);
      }
      v51 = KeAcquireSpinLockRaiseToDpc(v19 + 7);
      if ( *((_WORD *)v19 + 13) == 1 )
      {
        if ( v19[8] )
        {
          v114 = v51;
          goto LABEL_213;
        }
        v52 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
        v135 = v52;
        if ( m_DeviceBase->m_ObjectState == 1 )
        {
          v53 = m_DeviceBase->m_ChildListHead.Blink;
          v54 = (_LIST_ENTRY *)(v19 + 9);
          if ( v53->Flink != &m_DeviceBase->m_ChildListHead )
            goto LABEL_217;
          v54->Flink = &m_DeviceBase->m_ChildListHead;
          v19[10] = v53;
          v53->Flink = v54;
          m_DeviceBase->m_ChildListHead.Blink = v54;
          if ( !v19[12] )
            v19[12] = m_DeviceBase->m_DeviceBase;
          KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v52);
          v19[8] = m_DeviceBase;
          KeReleaseSpinLock(v19 + 7, v51);
          if ( v20 )
          {
            v55 = *((unsigned __int16 *)v19 + 5);
            if ( (_WORD)v55 )
              v56 = (char *)v19 + v55;
            else
              v56 = 0LL;
            v57 = *((_QWORD *)v20 + 2);
            if ( v57 )
              *((_QWORD *)v56 + 3) = v57;
            v58 = *((_QWORD *)v20 + 1);
            if ( v58 )
            {
              *((_QWORD *)v56 + 2) = v58;
              *((_WORD *)v19 + 12) |= 0x400u;
            }
          }
          *((_WORD *)v19 + 12) |= 8u;
          v59 = *(_QWORD *)(v19[2] + 336LL);
          if ( !v59 || *(_DWORD *)v59 )
            goto LABEL_59;
          if ( *((_WORD *)v19 + 4) == 4098 )
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)(v59 + 20)) >= 2 )
              _InterlockedAdd((volatile signed __int32 *)(v59 + 12), *(_DWORD *)(v59 + 8));
          }
          else if ( *((_WORD *)v19 + 4) == 4104 && *((_BYTE *)v19 + 213) != 2 )
          {
            goto LABEL_59;
          }
          *((_WORD *)v19 + 12) |= 0x40u;
          _a1 = _InterlockedIncrement((volatile signed __int32 *)(v59 + 16));
          if ( _a1 >= *(_DWORD *)(v59 + 12)
            && !KeGetCurrentIrql()
            && !_InterlockedCompareExchange((volatile signed __int32 *)v59, 1, 0) )
          {
            WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v19[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
            if ( *(_BYTE *)(v59 + 4) )
              DbgBreakPoint();
            v62 = (_FX_DRIVER_GLOBALS *)v19[2];
            v63 = v62->Public.DriverName;
            FxLiveDump(v62, v61, (unsigned __int64)v62->Public.DriverName, _a1);
            if ( _a1 >= *(_DWORD *)(v59 + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM(v63, _a1, 0);
          }
          goto LABEL_59;
        }
        FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v135);
      }
      else
      {
        FxObject::TraceDroppedEvent((FxObject *)v19, FxObjectDroppedEventAssignParentObject);
      }
      v113 = v51;
LABEL_211:
      KeReleaseSpinLock(v19 + 7, v113);
      v39 = -1073741738;
      goto LABEL_193;
    }
    v39 = -1073741816;
  }
LABEL_193:
  WPP_IFR_SF_D(m_DeviceBase->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v39);
  FxObject::DeleteFromFailedCreate((FxObject *)v19);
LABEL_60:
  v40 = v133;
  v41 = v145;
  if ( v133 )
  {
    if ( v39 < 0 )
      goto LABEL_116;
    if ( (v145->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
      goto LABEL_122;
    v39 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v145, v11);
    v40 = v133;
  }
  if ( v39 >= 0 )
  {
    if ( !v40 )
    {
LABEL_63:
      v42 = v146;
      goto LABEL_64;
    }
LABEL_122:
    if ( !Queue->m_FwdProgContext->m_IoResourcesAllocate.Method )
      goto LABEL_63;
    v11->m_Presented = 1;
    v69 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
    v70 = (WDFQUEUE__ *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    v71 = (WDFREQUEST__ *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_ObjectSize )
      v71 = 0LL;
    if ( !Queue->m_ObjectSize )
      v70 = 0LL;
    if ( Queue->m_FwdProgContext->m_IoResourcesAllocate.Method(v70, v71) >= 0 )
      goto LABEL_63;
    m_RequestContext = v11->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v11);
      v69 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
    }
    if ( !v11->m_Presented )
      FxObject::ClearEvtCallbacks(v11);
    v11->DeleteObject(v11);
    m_FwdProgContext = Queue->m_FwdProgContext;
    v11 = 0LL;
    v74 = Queue->m_Globals;
    v42 = v146;
    request = 0LL;
    m_Policy = m_FwdProgContext->m_Policy;
    if ( m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
      goto LABEL_133;
    v119 = m_Policy - 2;
    if ( v119 )
    {
      if ( v119 == 1 )
      {
        if ( (v146->Flags & 2) == 0 || v146->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
          v120 = 1;
        else
          v120 = 2;
        goto LABEL_223;
      }
    }
    else
    {
      Method = m_FwdProgContext->m_IoExamineIrp.Method;
      if ( Method )
      {
        v122 = v69;
        if ( !Queue->m_ObjectSize )
          v122 = 0LL;
        v123 = Method((WDFQUEUE__ *)v122, v146);
        v120 = v123;
        if ( v123 < 1 || v123 > 2 )
        {
          v124 = 0LL;
          v39 = -1073741823;
          if ( Queue->m_ObjectSize )
            v124 = (const void *)v69;
          WPP_IFR_SF_qdd(v74, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v124, v120, -1073741823);
          FxVerifierDbgBreakPoint(v74);
          goto $CompleteIrp;
        }
LABEL_223:
        if ( v120 == 1 )
        {
          m_ObjectSize = Queue->m_ObjectSize;
          v117 = (const void *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
          v39 = -1073741823;
          if ( !m_ObjectSize )
            v117 = 0LL;
          WPP_IFR_SF_qqd(v74, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v117, v42, 0xC0000001);
          goto $CompleteIrp;
        }
      }
    }
LABEL_133:
    v76 = KeAcquireSpinLockRaiseToDpc(&Queue->m_FwdProgContext->m_PendedReserveLock.m_Lock);
    p_m_ReservedRequestList = &Queue->m_FwdProgContext->m_ReservedRequestList;
    Flink = p_m_ReservedRequestList->Flink;
    if ( p_m_ReservedRequestList->Flink != p_m_ReservedRequestList )
    {
      if ( Flink->Blink == p_m_ReservedRequestList )
      {
        v79 = Flink->Flink;
        if ( Flink->Flink->Blink == Flink )
        {
          p_m_ReservedRequestList->Flink = v79;
          v11 = (FxRequest *)&Flink[-20];
          v79->Blink = p_m_ReservedRequestList;
          v80 = Flink;
          p_m_ReservedRequestInUseList = &Queue->m_FwdProgContext->m_ReservedRequestInUseList;
          v82 = Queue->m_FwdProgContext->m_ReservedRequestInUseList.Blink;
          if ( v82->Flink == p_m_ReservedRequestInUseList )
          {
            v80->Flink = p_m_ReservedRequestInUseList;
            v80->Blink = v82;
            v82->Flink = v80;
            p_m_ReservedRequestInUseList->Blink = v80;
            v11->m_Irp.m_Irp = v42;
            FxRequest::AssignMemoryBuffers(v11, (_WDF_DEVICE_IO_TYPE)Queue->m_DeviceBase[1].m_Refcnt);
            if ( v74->FxVerifierOn )
              FxRequestBase::SetVerifierFlags(v83, 1024);
            p_m_Lock = &Queue->m_FwdProgContext->m_PendedReserveLock.m_Lock;
            request = v11;
            KeReleaseSpinLock(p_m_Lock, v76);
LABEL_229:
            v41 = v145;
            goto LABEL_64;
          }
        }
      }
LABEL_217:
      __fastfail(3u);
    }
    v39 = FxIoQueue::QueueForwardProgressIrpLocked(Queue, v42);
    KeReleaseSpinLock(&Queue->m_FwdProgContext->m_PendedReserveLock.m_Lock, v76);
    if ( v39 == 259 )
      goto $IrpIsGone;
    if ( v39 >= 0 )
      goto LABEL_229;
$CompleteIrp:
    v42->IoStatus.Status = v39;
    v42->IoStatus.Information = 0LL;
    IofCompleteRequest(v42, 0);
    goto $IrpIsGone;
  }
LABEL_116:
  if ( v41->m_Filter && !Queue )
    goto LABEL_118;
  if ( !v40 )
  {
    WPP_IFR_SF_D(v41->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v39);
LABEL_118:
    v42 = v146;
    goto $CompleteIrp;
  }
  v42 = v146;
  ReservedRequest = FxIoQueue::GetReservedRequest(Queue, v146, &request);
  v39 = ReservedRequest;
  if ( ReservedRequest == 259 )
    goto $IrpIsGone;
  if ( ReservedRequest < 0 )
    goto $CompleteIrp;
  v11 = request;
LABEL_64:
  v43 = v147;
  if ( v147 && v147->m_Method && !v11->m_Reserved )
  {
    v11->m_InternalContext = Queue;
    v86 = v41->m_Globals;
    v42->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v86->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v11, 33);
    if ( v11->m_Completed )
    {
      if ( v11->m_ObjectSize )
        v115 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v115 = 0LL;
      WPP_IFR_SF_q(v11->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v115);
      FxVerifierDbgBreakPoint(v11->m_Globals);
    }
    else
    {
      m_CompletionState = v11->m_CompletionState;
      v11->m_CompletionState = -126;
      if ( !m_CompletionState )
      {
        v100 = _InterlockedExchangeAdd(&v11->m_Refcnt, 1u);
        v11 = request;
        v101 = v100 + 1;
        if ( SLOBYTE(request->m_ObjectFlags) < 0 )
        {
          v102 = request[-1].m_OwnerListEntry2.Blink;
          if ( v102 )
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v102,
              (void *)0x74617453,
              1820,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v101);
        }
      }
    }
    v11->Release(v11, (void *)1952543827, 1741, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    v11->m_Presented = 1;
    v88 = v41->m_DeviceBase;
    v89 = 0LL;
    if ( v11->m_ObjectSize )
      v89 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v90 = v88->m_ObjectSize;
    if ( v43->m_Method )
    {
      v91 = (unsigned __int64)v88 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v90 )
        v91 = 0LL;
      v43->m_Method((WDFDEVICE__ *)v91, (WDFREQUEST__ *)v89);
    }
    goto LABEL_76;
  }
  m_ObjectFlags = Queue->m_ObjectFlags;
  globals = v11;
  LOBYTE(v146) = 0;
  if ( m_ObjectFlags < 0 && (v106 = *(FxVerifierLock **)&Queue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v106, (unsigned __int8 *)&v146, v16);
    v45 = (unsigned __int8)v146;
  }
  else
  {
    v45 = KeAcquireSpinLockRaiseToDpc(&Queue->m_NPLock.m_Lock);
    LOBYTE(v146) = v45;
  }
  if ( v11->m_Reserved )
    FxObject::AddRef(v11, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  m_QueueState = Queue->m_QueueState;
  if ( (m_QueueState & 1) != 0 )
  {
    v49 = Queue->m_Globals;
    if ( v49->FxVerboseOn )
    {
      v129 = (const void *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Queue->m_ObjectSize )
        v129 = 0LL;
      if ( v11->m_ObjectSize )
        v10 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(v49, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v10, v129);
    }
    if ( v11->m_Globals->FxVerifierIO )
    {
      LOBYTE(v145) = 0;
      FxNonPagedObject::Lock(v11, (unsigned __int8 *)&v145, v46);
      FxRequest::VerifyRequestIsNotCompleted(v11, v11->m_Globals);
      FxNonPagedObject::Unlock(v11, (unsigned __int8)v145, v130);
    }
    v11->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v11->m_Reserved )
    {
      if ( Queue->m_Dispatching )
      {
        FxIoQueue::InsertNewRequestLocked(Queue, (FxRequest **)&globals, (unsigned __int8)v146);
        FxNonPagedObject::Unlock(Queue, (unsigned __int8)v146, v131);
        goto LABEL_76;
      }
      v11 = request;
      v45 = (unsigned __int8)v146;
    }
    FxIoQueue::DispatchEvents(Queue, v45, v11, v47);
LABEL_76:
    v39 = 259;
    goto $IrpIsGone;
  }
  v64 = Queue->m_Globals;
  v39 = -1073741436;
  if ( v64->FxVerboseOn )
  {
    if ( v11->m_ObjectSize )
      v125 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v125 = 0LL;
    v126 = "power stopping (Drain) in progress,";
    if ( (m_QueueState & 0x10000) == 0 )
      v126 = a5;
    v127 = (const void *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Queue->m_ObjectSize )
      v127 = 0LL;
    WPP_IFR_SF_qLsqd(v64, 5u, (unsigned int)v126, 0x29u, traceGuid, v127, m_QueueState, v126, v125, -1073741436);
  }
  if ( SLOBYTE(Queue->m_ObjectFlags) < 0
    && (v107 = *(FxVerifierLock **)&Queue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v107, v45, v46);
  }
  else
  {
    KeReleaseSpinLock(&Queue->m_NPLock.m_Lock, v45);
  }
  v11->m_Irp.m_Irp->IoStatus.Information = 0LL;
  v66 = v11->m_DeviceBase;
  v67 = v11->m_Globals;
  if ( v67->FxVerboseOn )
  {
    v128 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_ObjectSize )
      v128 = 0LL;
    WPP_IFR_SF_qiid(
      v67,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      v128,
      v11->m_Irp.m_Irp,
      v11->m_Irp.m_Irp->IoStatus.Information,
      -1073741436);
  }
  if ( v66 )
    m_Globals_high = HIBYTE(v66[1].m_Globals);
  else
    m_Globals_high = 0;
  v11->m_PriorityBoost = m_Globals_high;
  FxRequest::CompleteInternal(v11, 0xC0000184, v65);
  v11->Release(v11, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
$IrpIsGone:
  if ( v134 )
    KeLeaveCriticalRegion();
  return (unsigned int)v39;
}
