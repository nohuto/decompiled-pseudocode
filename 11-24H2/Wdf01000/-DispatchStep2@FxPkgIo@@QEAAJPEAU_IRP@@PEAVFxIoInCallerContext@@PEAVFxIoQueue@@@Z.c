/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140017EF0
 * Callers:
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x140017120 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qiid @ 0x1400028A4 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     FxAllocateFromNPagedLookasideList @ 0x140019390 (FxAllocateFromNPagedLookasideList.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400230F0 (WPP_IFR_SF_qLsqd.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140023300 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1400258C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x14004B508 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x140053950 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140056F48 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x14007009C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x14007FB5C (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AEC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x140082618 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLiveDump @ 0x1400837D4 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BB0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1400A0EE4 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1400A1768 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
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
  _FX_IO_QUEUE_STATE m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *v48; // rcx
  KIRQL v50; // r12
  KIRQL v51; // cl
  _LIST_ENTRY *v52; // r8
  _LIST_ENTRY *v53; // rdx
  __int64 v54; // rax
  char *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdi
  signed int _a1; // r14d
  _WDF_BUGCHECK_CODES v60; // edx
  _FX_DRIVER_GLOBALS *v61; // rcx
  const char *v62; // r12
  _FX_DRIVER_GLOBALS *v63; // r10
  FxDeviceBase *v64; // rbx
  _FX_DRIVER_GLOBALS *v65; // rcx
  char m_Globals_high; // al
  unsigned __int64 v67; // rbx
  WDFQUEUE__ *v68; // rcx
  WDFREQUEST__ *v69; // rdx
  FxRequestContext *m_RequestContext; // rcx
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  _FX_DRIVER_GLOBALS *v72; // r12
  _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY m_Policy; // ecx
  KIRQL v74; // bl
  _LIST_ENTRY *p_m_ReservedRequestList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v77; // rdx
  _LIST_ENTRY *v78; // rcx
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *v80; // r8
  FxRequestBase *v81; // rcx
  unsigned __int64 *p_m_Lock; // rcx
  __int64 v83; // rax
  _FX_DRIVER_GLOBALS *v84; // rcx
  unsigned __int8 m_CompletionState; // al
  FxDeviceBase *v86; // rcx
  unsigned __int64 v87; // rdx
  unsigned __int16 v88; // r8
  unsigned __int64 v89; // rcx
  KIRQL v90; // al
  bool v91; // zf
  KIRQL v92; // r8
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v94; // rcx
  KIRQL v95; // dl
  unsigned __int8 v96; // dl
  unsigned __int16 v97; // r9
  signed __int32 v98; // edx
  unsigned int v99; // edx
  _LIST_ENTRY *v100; // rcx
  void *v101; // rbx
  KIRQL v102; // al
  KIRQL v103; // al
  FxVerifierLock *v104; // rcx
  FxVerifierLock *v105; // rcx
  _FX_DRIVER_GLOBALS *v106; // rdx
  signed int v107; // r14d
  _WDF_BUGCHECK_CODES v108; // edx
  _FX_DRIVER_GLOBALS *v109; // rcx
  const char *DriverName; // r12
  KIRQL v111; // dl
  KIRQL v112; // dl
  const void *v113; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v115; // r15
  int ReservedRequest; // eax
  __int32 v117; // ecx
  int v118; // ecx
  _WDF_IO_FORWARD_PROGRESS_ACTION (__fastcall *Method)(WDFQUEUE__ *, _IRP *); // rax
  unsigned __int64 v120; // rcx
  int v121; // eax
  const void *v122; // rax
  const void *v123; // r11
  const char *v124; // r8
  const void *v125; // rdx
  const void *v126; // rdx
  const void *v127; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-49h]
  bool v129; // [rsp+50h] [rbp-19h]
  char v130; // [rsp+51h] [rbp-18h]
  KIRQL v131; // [rsp+52h] [rbp-17h]
  KIRQL v132; // [rsp+52h] [rbp-17h]
  FxRequest *request; // [rsp+58h] [rbp-11h] BYREF
  FxObject *v134; // [rsp+60h] [rbp-9h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+68h] [rbp-1h] BYREF
  FxObject **v136; // [rsp+70h] [rbp+7h] BYREF
  __int16 v137; // [rsp+78h] [rbp+Fh]
  __int16 v138; // [rsp+7Ah] [rbp+11h]
  int v139; // [rsp+7Ch] [rbp+13h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  FxPkgIo *v141; // [rsp+D0h] [rbp+67h] BYREF
  PIRP v142; // [rsp+D8h] [rbp+6Fh] BYREF
  FxIoInCallerContext *v143; // [rsp+E0h] [rbp+77h]
  void *globals; // [rsp+E8h] [rbp+7Fh] BYREF

  v143 = IoInCallerCtx;
  v142 = Irp;
  v141 = this;
  v130 = 0;
  v129 = Queue && Queue->m_SupportForwardProgress;
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v130 = 1;
  }
  if ( Queue && (m_CxDeviceInfo = Queue->m_CxDeviceInfo) != 0LL )
    p_RequestAttributes = (FxObject *)&m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = (FxDeviceBase *)((char *)this->m_DeviceBase + 584);
  m_DeviceBase = this->m_DeviceBase;
  v10 = 0LL;
  globals = p_RequestAttributes;
  v11 = 0LL;
  v134 = p_RequestAttributes;
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
    v134 = (FxDeviceBase *)((char *)m_DeviceBase + 584);
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
      p_m_ExecutionLevel = &v134->__vftable;
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
    v106 = (_FX_DRIVER_GLOBALS *)v19[2];
    if ( v106->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v106, (FxObject *)v19);
      *(v19 - 5) = VerifierLock;
    }
  }
  v25 = v142;
  v19[19] = v142;
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
          v83 = *(_QWORD *)(v26 + 112);
        }
        else
        {
          if ( m_DeviceBase[1].m_Refcnt != 2 )
            goto LABEL_40;
          v83 = *(_QWORD *)(v26 + 24);
        }
        v19[33] = v83;
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
    v134 = 0LL;
    flags = 0LL;
    if ( v30 )
    {
      if ( v20 )
      {
        if ( v20[6] == 2 )
        {
          v102 = KeAcquireSpinLockRaiseToDpc(v19 + 7);
          *((_WORD *)v19 + 12) |= 0x11u;
          KeReleaseSpinLock(v19 + 7, v102);
          flags = v134;
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
            v134 = flags;
          }
          else
          {
            v137 = 4096;
            v136 = &v134;
            v138 = v33;
            v139 = 0;
            if ( flags->QueryInterface(flags, (FxQueryInterfaceParams *)&v136) < 0 )
            {
              v101 = globals;
              WPP_IFR_SF_qDqD(flags->m_Globals, v96, v16, v97, traceGuid, globals, 0x1000u, flags, flags->m_Type);
              FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)v101, 0x1000uLL);
            }
            flags = v134;
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
          v107 = _InterlockedIncrement((volatile signed __int32 *)(v38 + 16));
          if ( v107 >= *(_DWORD *)(v38 + 12)
            && !KeGetCurrentIrql()
            && !_InterlockedCompareExchange((volatile signed __int32 *)v38, 1, 0) )
          {
            WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v19[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, v107);
            if ( *(_BYTE *)(v38 + 4) )
              DbgBreakPoint();
            v109 = (_FX_DRIVER_GLOBALS *)v19[2];
            DriverName = v109->Public.DriverName;
            FxLiveDump(v109, v108, (unsigned __int64)v109->Public.DriverName, v107);
            if ( v107 >= *(_DWORD *)(v38 + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM(DriverName, v107, 0);
          }
        }
LABEL_59:
        v39 = 0;
        v11 = (FxRequest *)v19;
        request = (FxRequest *)v19;
        goto LABEL_60;
      }
      v90 = KeAcquireSpinLockRaiseToDpc(v19 + 7);
      v91 = *((_WORD *)v19 + 13) == 1;
      LOBYTE(globals) = v90;
      if ( v91 )
      {
        if ( !v19[8] )
        {
          v92 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
          v132 = v92;
          if ( flags->m_ObjectState == 1 )
          {
            Blink = flags->m_ChildListHead.Blink;
            v94 = (_LIST_ENTRY *)(v19 + 9);
            if ( Blink->Flink != &flags->m_ChildListHead )
              goto LABEL_217;
            v94->Flink = &flags->m_ChildListHead;
            v19[10] = Blink;
            Blink->Flink = v94;
            flags->m_ChildListHead.Blink = v94;
            if ( !v19[12] )
              v19[12] = flags->m_DeviceBase;
            KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v92);
            v95 = (unsigned __int8)globals;
            v19[8] = flags;
            KeReleaseSpinLock(v19 + 7, v95);
            goto LABEL_51;
          }
          FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
          KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v132);
          v111 = (unsigned __int8)globals;
          goto LABEL_211;
        }
        v112 = v90;
LABEL_213:
        KeReleaseSpinLock(v19 + 7, v112);
        v39 = -1071644147;
        goto LABEL_193;
      }
      FxObject::TraceDroppedEvent((FxObject *)v19, FxObjectDroppedEventAssignParentObject);
      v111 = (unsigned __int8)globals;
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
        v103 = KeAcquireSpinLockRaiseToDpc(v19 + 7);
        *((_WORD *)v19 + 12) |= 0x11u;
        KeReleaseSpinLock(v19 + 7, v103);
      }
      v50 = KeAcquireSpinLockRaiseToDpc(v19 + 7);
      if ( *((_WORD *)v19 + 13) == 1 )
      {
        if ( v19[8] )
        {
          v112 = v50;
          goto LABEL_213;
        }
        v51 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
        v131 = v51;
        if ( m_DeviceBase->m_ObjectState == 1 )
        {
          v52 = m_DeviceBase->m_ChildListHead.Blink;
          v53 = (_LIST_ENTRY *)(v19 + 9);
          if ( v52->Flink != &m_DeviceBase->m_ChildListHead )
            goto LABEL_217;
          v53->Flink = &m_DeviceBase->m_ChildListHead;
          v19[10] = v52;
          v52->Flink = v53;
          m_DeviceBase->m_ChildListHead.Blink = v53;
          if ( !v19[12] )
            v19[12] = m_DeviceBase->m_DeviceBase;
          KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v51);
          v19[8] = m_DeviceBase;
          KeReleaseSpinLock(v19 + 7, v50);
          if ( v20 )
          {
            v54 = *((unsigned __int16 *)v19 + 5);
            if ( (_WORD)v54 )
              v55 = (char *)v19 + v54;
            else
              v55 = 0LL;
            v56 = *((_QWORD *)v20 + 2);
            if ( v56 )
              *((_QWORD *)v55 + 3) = v56;
            v57 = *((_QWORD *)v20 + 1);
            if ( v57 )
            {
              *((_QWORD *)v55 + 2) = v57;
              *((_WORD *)v19 + 12) |= 0x400u;
            }
          }
          *((_WORD *)v19 + 12) |= 8u;
          v58 = *(_QWORD *)(v19[2] + 336LL);
          if ( !v58 || *(_DWORD *)v58 )
            goto LABEL_59;
          if ( *((_WORD *)v19 + 4) == 4098 )
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)(v58 + 20)) >= 2 )
              _InterlockedAdd((volatile signed __int32 *)(v58 + 12), *(_DWORD *)(v58 + 8));
          }
          else if ( *((_WORD *)v19 + 4) == 4104 && *((_BYTE *)v19 + 213) != 2 )
          {
            goto LABEL_59;
          }
          *((_WORD *)v19 + 12) |= 0x40u;
          _a1 = _InterlockedIncrement((volatile signed __int32 *)(v58 + 16));
          if ( _a1 >= *(_DWORD *)(v58 + 12)
            && !KeGetCurrentIrql()
            && !_InterlockedCompareExchange((volatile signed __int32 *)v58, 1, 0) )
          {
            WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v19[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
            if ( *(_BYTE *)(v58 + 4) )
              DbgBreakPoint();
            v61 = (_FX_DRIVER_GLOBALS *)v19[2];
            v62 = v61->Public.DriverName;
            FxLiveDump(v61, v60, (unsigned __int64)v61->Public.DriverName, _a1);
            if ( _a1 >= *(_DWORD *)(v58 + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM(v62, _a1, 0);
          }
          goto LABEL_59;
        }
        FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v131);
      }
      else
      {
        FxObject::TraceDroppedEvent((FxObject *)v19, FxObjectDroppedEventAssignParentObject);
      }
      v111 = v50;
LABEL_211:
      KeReleaseSpinLock(v19 + 7, v111);
      v39 = -1073741738;
      goto LABEL_193;
    }
    v39 = -1073741816;
  }
LABEL_193:
  WPP_IFR_SF_D(m_DeviceBase->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v39);
  FxObject::DeleteFromFailedCreate((FxObject *)v19);
LABEL_60:
  v40 = v129;
  v41 = v141;
  if ( v129 )
  {
    if ( v39 < 0 )
      goto LABEL_116;
    if ( (v141->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
      goto LABEL_122;
    v39 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v141, v11);
    v40 = v129;
  }
  if ( v39 >= 0 )
  {
    if ( !v40 )
    {
LABEL_63:
      v42 = v142;
      goto LABEL_64;
    }
LABEL_122:
    if ( !Queue->m_FwdProgContext->m_IoResourcesAllocate.Method )
      goto LABEL_63;
    v11->m_Presented = 1;
    v67 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
    v68 = (WDFQUEUE__ *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    v69 = (WDFREQUEST__ *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_ObjectSize )
      v69 = 0LL;
    if ( !Queue->m_ObjectSize )
      v68 = 0LL;
    if ( Queue->m_FwdProgContext->m_IoResourcesAllocate.Method(v68, v69) >= 0 )
      goto LABEL_63;
    m_RequestContext = v11->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v11);
      v67 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
    }
    if ( !v11->m_Presented )
      FxObject::ClearEvtCallbacks(v11);
    v11->DeleteObject(v11);
    m_FwdProgContext = Queue->m_FwdProgContext;
    v11 = 0LL;
    v72 = Queue->m_Globals;
    v42 = v142;
    request = 0LL;
    m_Policy = m_FwdProgContext->m_Policy;
    if ( m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
      goto LABEL_133;
    v117 = m_Policy - 2;
    if ( v117 )
    {
      if ( v117 == 1 )
      {
        if ( (v142->Flags & 2) == 0 || v142->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
          v118 = 1;
        else
          v118 = 2;
        goto LABEL_223;
      }
    }
    else
    {
      Method = m_FwdProgContext->m_IoExamineIrp.Method;
      if ( Method )
      {
        v120 = v67;
        if ( !Queue->m_ObjectSize )
          v120 = 0LL;
        v121 = Method((WDFQUEUE__ *)v120, v142);
        v118 = v121;
        if ( v121 < 1 || v121 > 2 )
        {
          v122 = 0LL;
          v39 = -1073741823;
          if ( Queue->m_ObjectSize )
            v122 = (const void *)v67;
          WPP_IFR_SF_qdd(v72, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v122, v118, -1073741823);
          FxVerifierDbgBreakPoint(v72);
          goto $CompleteIrp;
        }
LABEL_223:
        if ( v118 == 1 )
        {
          m_ObjectSize = Queue->m_ObjectSize;
          v115 = (const void *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
          v39 = -1073741823;
          if ( !m_ObjectSize )
            v115 = 0LL;
          WPP_IFR_SF_qqd(v72, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v115, v42, 0xC0000001);
          goto $CompleteIrp;
        }
      }
    }
LABEL_133:
    v74 = KeAcquireSpinLockRaiseToDpc(&Queue->m_FwdProgContext->m_PendedReserveLock.m_Lock);
    p_m_ReservedRequestList = &Queue->m_FwdProgContext->m_ReservedRequestList;
    Flink = p_m_ReservedRequestList->Flink;
    if ( p_m_ReservedRequestList->Flink != p_m_ReservedRequestList )
    {
      if ( Flink->Blink == p_m_ReservedRequestList )
      {
        v77 = Flink->Flink;
        if ( Flink->Flink->Blink == Flink )
        {
          p_m_ReservedRequestList->Flink = v77;
          v11 = (FxRequest *)&Flink[-20];
          v77->Blink = p_m_ReservedRequestList;
          v78 = Flink;
          p_m_ReservedRequestInUseList = &Queue->m_FwdProgContext->m_ReservedRequestInUseList;
          v80 = Queue->m_FwdProgContext->m_ReservedRequestInUseList.Blink;
          if ( v80->Flink == p_m_ReservedRequestInUseList )
          {
            v78->Flink = p_m_ReservedRequestInUseList;
            v78->Blink = v80;
            v80->Flink = v78;
            p_m_ReservedRequestInUseList->Blink = v78;
            v11->m_Irp.m_Irp = v42;
            FxRequest::AssignMemoryBuffers(v11, (_WDF_DEVICE_IO_TYPE)Queue->m_DeviceBase[1].m_Refcnt);
            if ( v72->FxVerifierOn )
              FxRequestBase::SetVerifierFlags(v81, 1024);
            p_m_Lock = &Queue->m_FwdProgContext->m_PendedReserveLock.m_Lock;
            request = v11;
            KeReleaseSpinLock(p_m_Lock, v74);
LABEL_229:
            v41 = v141;
            goto LABEL_64;
          }
        }
      }
LABEL_217:
      __fastfail(3u);
    }
    v39 = FxIoQueue::QueueForwardProgressIrpLocked(Queue, v42);
    KeReleaseSpinLock(&Queue->m_FwdProgContext->m_PendedReserveLock.m_Lock, v74);
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
    v42 = v142;
    goto $CompleteIrp;
  }
  v42 = v142;
  ReservedRequest = FxIoQueue::GetReservedRequest(Queue, v142, &request);
  v39 = ReservedRequest;
  if ( ReservedRequest == 259 )
    goto $IrpIsGone;
  if ( ReservedRequest < 0 )
    goto $CompleteIrp;
  v11 = request;
LABEL_64:
  v43 = v143;
  if ( v143 && v143->m_Method && !v11->m_Reserved )
  {
    v11->m_InternalContext = Queue;
    v84 = v41->m_Globals;
    v42->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v84->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v11, 33);
    if ( v11->m_Completed )
    {
      if ( v11->m_ObjectSize )
        v113 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v113 = 0LL;
      WPP_IFR_SF_q(v11->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v113);
      FxVerifierDbgBreakPoint(v11->m_Globals);
    }
    else
    {
      m_CompletionState = v11->m_CompletionState;
      v11->m_CompletionState = -126;
      if ( !m_CompletionState )
      {
        v98 = _InterlockedExchangeAdd(&v11->m_Refcnt, 1u);
        v11 = request;
        v99 = v98 + 1;
        if ( SLOBYTE(request->m_ObjectFlags) < 0 )
        {
          v100 = request[-1].m_OwnerListEntry2.Blink;
          if ( v100 )
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v100,
              (void *)0x74617453,
              1820,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v99);
        }
      }
    }
    v11->Release(v11, (void *)1952543827, 1741, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    v11->m_Presented = 1;
    v86 = v41->m_DeviceBase;
    v87 = 0LL;
    if ( v11->m_ObjectSize )
      v87 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v88 = v86->m_ObjectSize;
    if ( v43->m_Method )
    {
      v89 = (unsigned __int64)v86 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v88 )
        v89 = 0LL;
      v43->m_Method((WDFDEVICE__ *)v89, (WDFREQUEST__ *)v87);
    }
    goto LABEL_76;
  }
  m_ObjectFlags = Queue->m_ObjectFlags;
  globals = v11;
  LOBYTE(v142) = 0;
  if ( m_ObjectFlags < 0 && (v104 = *(FxVerifierLock **)&Queue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v104, (unsigned __int8 *)&v142, v16);
    v45 = (unsigned __int8)v142;
  }
  else
  {
    v45 = KeAcquireSpinLockRaiseToDpc(&Queue->m_NPLock.m_Lock);
    LOBYTE(v142) = v45;
  }
  if ( v11->m_Reserved )
    FxObject::AddRef(v11, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  m_QueueState = Queue->m_QueueState;
  if ( (m_QueueState & 1) != 0 )
  {
    v48 = Queue->m_Globals;
    if ( v48->FxVerboseOn )
    {
      v127 = (const void *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Queue->m_ObjectSize )
        v127 = 0LL;
      if ( v11->m_ObjectSize )
        v10 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(v48, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v10, v127);
    }
    if ( v11->m_Globals->FxVerifierIO )
    {
      LOBYTE(v141) = 0;
      FxNonPagedObject::Lock(v11, (unsigned __int8 *)&v141);
      FxRequest::VerifyRequestIsNotCompleted(v11, v11->m_Globals);
      FxNonPagedObject::Unlock(v11, (unsigned __int8)v141);
    }
    v11->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v11->m_Reserved )
    {
      if ( Queue->m_Dispatching )
      {
        FxIoQueue::InsertNewRequestLocked(Queue, (FxRequest **)&globals, (unsigned __int8)v142);
        FxNonPagedObject::Unlock(Queue, (unsigned __int8)v142);
        goto LABEL_76;
      }
      v11 = request;
      v45 = (unsigned __int8)v142;
    }
    FxIoQueue::DispatchEvents(Queue, v45, v11);
LABEL_76:
    v39 = 259;
    goto $IrpIsGone;
  }
  v63 = Queue->m_Globals;
  v39 = -1073741436;
  if ( v63->FxVerboseOn )
  {
    if ( v11->m_ObjectSize )
      v123 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v123 = 0LL;
    v124 = "power stopping (Drain) in progress,";
    if ( (m_QueueState & 0x10000) == 0 )
      v124 = a5;
    v125 = (const void *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Queue->m_ObjectSize )
      v125 = 0LL;
    WPP_IFR_SF_qLsqd(v63, 5u, (unsigned int)v124, 0x29u, traceGuid, v125, m_QueueState, v124, v123, -1073741436);
  }
  if ( SLOBYTE(Queue->m_ObjectFlags) < 0
    && (v105 = *(FxVerifierLock **)&Queue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v105, v45, v46);
  }
  else
  {
    KeReleaseSpinLock(&Queue->m_NPLock.m_Lock, v45);
  }
  v11->m_Irp.m_Irp->IoStatus.Information = 0LL;
  v64 = v11->m_DeviceBase;
  v65 = v11->m_Globals;
  if ( v65->FxVerboseOn )
  {
    v126 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_ObjectSize )
      v126 = 0LL;
    WPP_IFR_SF_qiid(
      v65,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      v126,
      v11->m_Irp.m_Irp,
      v11->m_Irp.m_Irp->IoStatus.Information,
      -1073741436);
  }
  if ( v64 )
    m_Globals_high = HIBYTE(v64[1].m_Globals);
  else
    m_Globals_high = 0;
  v11->m_PriorityBoost = m_Globals_high;
  FxRequest::CompleteInternal(v11, -1073741436);
  v11->Release(v11, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
$IrpIsGone:
  if ( v130 )
    KeLeaveCriticalRegion();
  return (unsigned int)v39;
}
