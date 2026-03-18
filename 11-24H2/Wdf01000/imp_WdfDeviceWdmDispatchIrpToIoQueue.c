/*
 * XREFs of imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14001AD70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qiid @ 0x1400028A4 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     FxAllocateFromNPagedLookasideList @ 0x140019390 (FxAllocateFromNPagedLookasideList.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14001CFC0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
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
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x140053950 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140056F48 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x14007009C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x14007FB5C (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AEC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x140082618 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLiveDump @ 0x1400837D4 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BB0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1400A0EE4 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1400A1768 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1400E41E4 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp,
        unsigned __int64 Queue,
        const _GUID *Flags)
{
  const void *v5; // r14
  __int64 v10; // rcx
  FxDevice *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned int v15; // r12d
  int v16; // eax
  unsigned int v17; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v19; // rcx
  FxPkgIo *m_PkgIo; // rbx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // rax
  FxDeviceBase *m_DeviceBase; // r13
  FxRequest *v25; // r12
  __int64 v26; // rax
  _FX_DRIVER_GLOBALS *v27; // rdi
  FX_POOL_TRACKER *v28; // rax
  _FX_DRIVER_GLOBALS *v29; // rdx
  FX_POOL_TRACKER *v30; // rbx
  _QWORD *p_Flink; // rax
  _QWORD *v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 m_Refcnt; // r9
  unsigned __int8 *v39; // rcx
  unsigned int v40; // r8d
  int v41; // eax
  __int64 v42; // rax
  __int16 v43; // cx
  int v44; // edi
  _WDF_EXECUTION_LEVEL *v45; // rax
  __int64 v46; // rcx
  char *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdi
  bool v51; // al
  FxPkgIo *v52; // rbx
  void (__fastcall **v53)(unsigned __int64, unsigned __int64); // rdi
  char v54; // al
  unsigned __int8 v55; // bl
  unsigned __int8 v56; // r8
  unsigned int v57; // eax
  _FX_DRIVER_GLOBALS *v58; // rcx
  FxObject *v59; // rdi
  _WDF_EXECUTION_LEVEL *v60; // rcx
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  char *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdi
  signed int _a1; // r12d
  _WDF_BUGCHECK_CODES v69; // edx
  _FX_DRIVER_GLOBALS *v70; // rcx
  const char *DriverName; // r13
  _FX_DRIVER_GLOBALS *v73; // rcx
  FxDeviceBase *v74; // rbx
  _FX_DRIVER_GLOBALS *v75; // rcx
  char m_Globals_high; // al
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  FxRequestContext *m_RequestContext; // rcx
  __int64 v80; // rdx
  _FX_DRIVER_GLOBALS *v81; // rbx
  int v82; // ecx
  KIRQL v83; // r13
  __int64 **v84; // rcx
  __int64 *v85; // rax
  __int64 *v86; // rdx
  __int64 *v87; // rcx
  __int64 v88; // rax
  __int64 **v89; // r8
  FxRequestBase *v90; // rcx
  unsigned __int64 *v91; // rcx
  __int64 v92; // rax
  _FX_DRIVER_GLOBALS *v93; // rcx
  unsigned __int8 m_CompletionState; // al
  FxDeviceBase *v95; // rcx
  unsigned __int64 v96; // rdx
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v98; // rcx
  FxDevice_vtbl *v99; // rax
  unsigned __int8 v100; // dl
  unsigned int v101; // r8d
  unsigned __int16 v102; // r9
  __int64 v103; // rax
  unsigned __int8 v104; // dl
  unsigned int v105; // r8d
  unsigned __int16 v106; // r9
  __int64 v107; // rax
  __int64 p_m_InCallerContextCallback; // rax
  unsigned __int8 v109; // dl
  unsigned __int16 v110; // r9
  signed __int32 v111; // edx
  unsigned int v112; // edx
  _LIST_ENTRY *Blink; // rcx
  void *v114; // rbx
  KIRQL v115; // al
  KIRQL v116; // al
  FxVerifierLock *v117; // rcx
  FxVerifierLock *v118; // rcx
  _FX_DRIVER_GLOBALS *v119; // rdx
  _WDF_BUGCHECK_CODES v120; // edx
  _FX_DRIVER_GLOBALS *v121; // rcx
  const void *v122; // rax
  const void *v123; // rsi
  int v124; // eax
  int v125; // ecx
  int v126; // eax
  __int64 (__fastcall *v127)(unsigned __int64, _IRP *); // rax
  unsigned __int64 v128; // rcx
  const void *v129; // rsi
  const void *v130; // rdx
  const char *v131; // r10
  const void *v132; // r8
  const void *v133; // rdx
  const void *v134; // rax
  const _GUID *traceGuid; // [rsp+28h] [rbp-81h]
  bool v136; // [rsp+58h] [rbp-51h]
  unsigned __int8 v137; // [rsp+59h] [rbp-50h] BYREF
  char v138; // [rsp+5Ah] [rbp-4Fh]
  FxDevice *v139; // [rsp+60h] [rbp-49h] BYREF
  _WDF_EXECUTION_LEVEL *v140; // [rsp+68h] [rbp-41h]
  FxRequest *ReservedRequest; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v142; // [rsp+78h] [rbp-31h] BYREF
  FxPkgIo *v143; // [rsp+80h] [rbp-29h]
  void *globals; // [rsp+88h] [rbp-21h]
  FxObject *v145; // [rsp+90h] [rbp-19h] BYREF
  void (__fastcall **v146)(unsigned __int64, unsigned __int64); // [rsp+98h] [rbp-11h]
  FxRequest *Request; // [rsp+A0h] [rbp-9h] BYREF
  __int16 v148; // [rsp+A8h] [rbp-1h]
  __int16 v149; // [rsp+AAh] [rbp+1h]
  int v150; // [rsp+ACh] [rbp+3h]
  FxVerifierLock *VerifierLock; // [rsp+B0h] [rbp+7h] BYREF
  unsigned __int64 *v152; // [rsp+B8h] [rbp+Fh] BYREF
  __int16 v153; // [rsp+C0h] [rbp+17h]
  __int16 v154; // [rsp+C2h] [rbp+19h]
  int v155; // [rsp+C4h] [rbp+1Bh]
  FxObject **v156; // [rsp+C8h] [rbp+1Fh] BYREF
  __int16 v157; // [rsp+D0h] [rbp+27h]
  __int16 v158; // [rsp+D2h] [rbp+29h]
  int v159; // [rsp+D4h] [rbp+2Bh]
  void *retaddr; // [rsp+100h] [rbp+57h]
  unsigned __int8 PreviousIrql; // [rsp+110h] [rbp+67h] BYREF

  v5 = 0LL;
  v146 = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v10) = 0;
  flags = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v10 = LOWORD(flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    flags = (FxDevice *)((char *)flags - v10);
  }
  if ( flags->m_Type == 4098 )
  {
    v139 = flags;
  }
  else
  {
    v139 = 0LL;
    Request = (FxRequest *)&v139;
    v149 = v10;
    v150 = 0;
    v99 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v148 = 4098;
    if ( v99->QueryInterface(flags, (FxQueryInterfaceParams *)&Request) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v100,
        v101,
        v102,
        traceGuid,
        (const void *)Device,
        0x1002u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = v139;
  }
  m_Globals = flags->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_QWORD *)((unsigned int)(unk_1400C8080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C8070) = m_Globals;
    flags = v139;
  }
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v13) = 0;
  v14 = ~Queue & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Queue & 1) != 0 )
  {
    v13 = *(unsigned __int16 *)v14;
    v14 -= v13;
  }
  if ( *(_WORD *)(v14 + 8) == 4099 )
  {
    v142 = v14;
  }
  else
  {
    v142 = 0LL;
    v152 = &v142;
    v154 = v13;
    v155 = 0;
    v103 = *(_QWORD *)v14;
    v153 = 4099;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64 **))(v103 + 40))(v14, &v152) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v14 + 16),
        v104,
        v105,
        v106,
        traceGuid,
        (const void *)Queue,
        0x1003u,
        (const void *)v14,
        *(unsigned __int16 *)(v14 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v14 + 16), WDF_INVALID_HANDLE, Queue, 0x1003uLL);
    }
    v14 = v142;
    flags = v139;
  }
  if ( !Irp )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v15 = (unsigned int)Flags;
  if ( ((unsigned __int8)Flags & 2) != 0 )
  {
    --Irp->CurrentLocation;
    --Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( m_Globals->FxVerifierOn )
  {
    v16 = Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(m_Globals, flags, Irp, (FxIoQueue *)v14, v15);
    v17 = v16;
    if ( v16 < 0 )
    {
      Irp->IoStatus.Status = v16;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v17;
    }
    v14 = v142;
    flags = v139;
  }
  if ( flags->m_ParentDevice == *(FxDevice **)(v14 + 96) )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    --Irp->CurrentLocation;
    v19 = --Irp->Tail.Overlay.CurrentStackLocation;
    v139 = v139->m_ParentDevice;
    v19->DeviceObject = v139->m_DeviceObject.m_DeviceObject;
    v14 = v142;
    flags = v139;
  }
  if ( (v15 & 1) != 0 )
  {
    v107 = *(_QWORD *)(v14 + 360);
    if ( v107 )
      p_m_InCallerContextCallback = v107 + 24;
    else
      p_m_InCallerContextCallback = (__int64)&flags->m_PkgIo->m_InCallerContextCallback;
    v146 = (void (__fastcall **)(unsigned __int64, unsigned __int64))p_m_InCallerContextCallback;
  }
  m_PkgIo = flags->m_PkgIo;
  v143 = m_PkgIo;
  v138 = 0;
  v136 = v14 && *(_BYTE *)(v14 + 136);
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v138 = 1;
  }
  if ( v14 && (v22 = *(_QWORD *)(v14 + 360)) != 0 )
    p_m_ExecutionLevel = (_WDF_EXECUTION_LEVEL *)(v22 + 32);
  else
    p_m_ExecutionLevel = &m_PkgIo->m_DeviceBase[2].m_ExecutionLevel;
  m_DeviceBase = m_PkgIo->m_DeviceBase;
  v25 = 0LL;
  v140 = p_m_ExecutionLevel;
  globals = p_m_ExecutionLevel;
  ReservedRequest = 0LL;
  v26 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  v27 = m_DeviceBase->m_Globals;
  if ( v26 && *(_WORD *)(v26 + 8) == 4354 && *(_BYTE *)(v26 + 1787) )
  {
    v30 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v30 )
      goto LABEL_34;
    v28 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                               HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                               HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                               LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
  }
  else
  {
    v28 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(
                               (_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock,
                               v21);
  }
  v30 = v28;
LABEL_34:
  if ( v30 )
  {
    if ( v27->FxPoolTrackingOn )
    {
      FxPoolInsertNonPagedAllocateTracker(
        &v27->FxPoolFrameworks,
        v30,
        (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
        v27->Tag,
        retaddr);
      p_Flink = &v30[1].Link.Flink;
    }
    else
    {
      p_Flink = &v30->Link.Flink;
    }
    *p_Flink = v30;
    v32 = p_Flink + 2;
    p_Flink[1] = v27;
    if ( v140 )
    {
      v33 = globals;
    }
    else
    {
      v33 = &m_DeviceBase[2].m_ExecutionLevel;
      globals = &m_DeviceBase[2].m_ExecutionLevel;
    }
    if ( v27->FxVerifierHandle )
    {
      *(_OWORD *)v32 = 0LL;
      *((_OWORD *)v32 + 1) = 0LL;
      *((_OWORD *)v32 + 2) = 0LL;
      *((_DWORD *)v32 + 8) = 1146058822;
      v32 += 6;
    }
    v32[47] = 0LL;
    v32[48] = 0LL;
    v32[49] = 0LL;
    v32[50] = 0LL;
    v32[51] = 0LL;
    v32[46] = v32;
    if ( v33 )
    {
      v34 = v33[6];
      if ( v34 )
      {
        v35 = v33[5];
        if ( !v35 )
          v35 = *(_QWORD *)(v34 + 16);
        memset(v32 + 52, 0, (v35 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v33 = globals;
      }
      v32[50] = v33[6];
    }
    if ( v32 )
    {
      v32[2] = m_DeviceBase->m_Globals;
      *v32 = FxObject::`vftable';
      *((_DWORD *)v32 + 2) = 24121352;
      v32[7] = 0LL;
      *((_BYTE *)v32 + 48) = 1;
      *((_DWORD *)v32 + 3) = 1;
      *((_DWORD *)v32 + 6) = 0x10000;
      v32[8] = 0LL;
      v32[5] = v32 + 4;
      v32[4] = v32 + 4;
      v32[10] = v32 + 9;
      v32[9] = v32 + 9;
      v36 = v32[2];
      v32[11] = 0LL;
      v32[12] = 0LL;
      if ( *(_BYTE *)(v36 + 324) )
        FxObject::Vf_VerifyConstruct((FxObject *)v32, v29, 0);
      *v32 = FxNonPagedObject::`vftable';
      v32[14] = 0LL;
      *((_BYTE *)v32 + 104) = 1;
      if ( *((char *)v32 + 24) < 0 )
      {
        v119 = (_FX_DRIVER_GLOBALS *)v32[2];
        if ( v119->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v119, (FxObject *)v32);
          *(v32 - 5) = VerifierLock;
        }
      }
      v32[19] = Irp;
      v32[23] = 0LL;
      v32[24] = 0LL;
      *((_DWORD *)v32 + 53) = 0;
      *((_BYTE *)v32 + 238) = 1;
      v32[20] = 0LL;
      v32[25] = 0LL;
      *((_BYTE *)v32 + 236) = 0;
      v32[21] = 0LL;
      v32[22] = 0LL;
      v32[16] = v32 + 15;
      v32[15] = v32 + 15;
      v32[18] = 0LL;
      v32[27] = 216LL;
      v32[28] = 0LL;
      *((_DWORD *)v32 + 52) = 0;
      v32[30] = 0LL;
      *((_DWORD *)v32 + 58) = 232;
      *((_BYTE *)v32 + 237) = 0;
      v32[32] = FxRequestSystemBuffer::`vftable';
      v32[33] = 0LL;
      v32[34] = FxRequestOutputBuffer::`vftable';
      v32[35] = 0LL;
      v32[31] = 0LL;
      *((_BYTE *)v32 + 353) = 0;
      v32[37] = v32 + 36;
      v32[36] = v32 + 36;
      v32[39] = v32 + 38;
      v32[38] = v32 + 38;
      v32[41] = v32 + 40;
      v32[40] = v32 + 40;
      *v32 = FxRequestFromLookaside::`vftable';
      *((_BYTE *)v32 + 352) = 0;
      *((_WORD *)v32 + 177) = 0;
      v32[42] = 0LL;
      v32[43] = 0LL;
      v32[12] = m_DeviceBase->m_DeviceBase;
      v37 = v32[19];
      m_Refcnt = (unsigned int)m_DeviceBase[1].m_Refcnt;
      v39 = *(unsigned __int8 **)(v37 + 184);
      v40 = *v39;
      if ( v40 != 15 )
      {
        if ( v40 == 3 || v40 == 4 )
        {
          m_Refcnt = (unsigned int)(m_Refcnt - 1);
          if ( (_DWORD)m_Refcnt )
          {
            if ( (_DWORD)m_Refcnt != 1 )
              goto LABEL_60;
            v92 = *(_QWORD *)(v37 + 24);
          }
          else
          {
            if ( *(_BYTE *)(v37 + 64) )
              goto LABEL_60;
            v92 = *(_QWORD *)(v37 + 112);
          }
          v32[33] = v92;
          goto LABEL_56;
        }
        if ( v40 != 14 )
          goto LABEL_60;
      }
      v41 = *((_DWORD *)v39 + 6) & 3;
      if ( v41 == 3 )
      {
        if ( (_BYTE)v40 != 15 && *(_BYTE *)(v37 + 64) )
          goto LABEL_60;
        v32[33] = *((_QWORD *)v39 + 4);
        v42 = *(_QWORD *)(v37 + 112);
      }
      else
      {
        if ( v41 )
        {
          if ( (unsigned int)(v41 - 1) <= 1 )
            v32[33] = *(_QWORD *)(v37 + 24);
          goto LABEL_56;
        }
        v32[33] = *(_QWORD *)(v37 + 24);
        v42 = *(_QWORD *)(v37 + 24);
      }
      v32[35] = v42;
LABEL_56:
      if ( v32[33] )
        *((_BYTE *)v32 + 235) |= 1u;
      if ( v32[35] )
        *((_BYTE *)v32 + 235) |= 2u;
LABEL_60:
      v43 = *((_WORD *)v32 + 5);
      if ( !m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
      {
        if ( v43 )
        {
          if ( v140 && *((_DWORD *)v140 + 6) == 2 )
          {
            v116 = KeAcquireSpinLockRaiseToDpc(v32 + 7);
            *((_WORD *)v32 + 12) |= 0x11u;
            KeReleaseSpinLock(v32 + 7, v116);
          }
          v44 = FxObject::AssignParentObject((FxObject *)v32, m_DeviceBase);
          if ( v44 >= 0 )
          {
            v45 = v140;
            if ( v140 )
            {
              v46 = *((unsigned __int16 *)v32 + 5);
              if ( (_WORD)v46 )
                v47 = (char *)v32 + v46;
              else
                v47 = 0LL;
              v48 = *((_QWORD *)v140 + 2);
              if ( v48 )
                *((_QWORD *)v47 + 3) = v48;
              v49 = *((_QWORD *)v45 + 1);
              if ( v49 )
              {
                *((_QWORD *)v47 + 2) = v49;
                *((_WORD *)v32 + 12) |= 0x400u;
              }
            }
            *((_WORD *)v32 + 12) |= 8u;
            v50 = *(_QWORD *)(v32[2] + 336LL);
            if ( !v50 || *(_DWORD *)v50 )
              goto LABEL_74;
            if ( *((_WORD *)v32 + 4) == 4098 )
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)(v50 + 20)) >= 2 )
                _InterlockedAdd((volatile signed __int32 *)(v50 + 12), *(_DWORD *)(v50 + 8));
            }
            else if ( *((_WORD *)v32 + 4) == 4104 && *((_BYTE *)v32 + 213) != 2 )
            {
              goto LABEL_74;
            }
            *((_WORD *)v32 + 12) |= 0x40u;
            _a1 = _InterlockedIncrement((volatile signed __int32 *)(v50 + 16));
            if ( _a1 < *(_DWORD *)(v50 + 12)
              || KeGetCurrentIrql()
              || _InterlockedCompareExchange((volatile signed __int32 *)v50, 1, 0) )
            {
              goto LABEL_74;
            }
            WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v32[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
            if ( *(_BYTE *)(v50 + 4) )
              DbgBreakPoint();
            v121 = (_FX_DRIVER_GLOBALS *)v32[2];
            DriverName = v121->Public.DriverName;
            FxLiveDump(v121, v120, (unsigned __int64)v121->Public.DriverName, _a1);
            if ( _a1 < *(_DWORD *)(v50 + 12) )
              goto LABEL_74;
LABEL_119:
            MicrosoftTelemetryAssertTriggeredArgsKM(DriverName, _a1, 0);
LABEL_74:
            v25 = (FxRequest *)v32;
            ReservedRequest = (FxRequest *)v32;
            v44 = 0;
            goto LABEL_75;
          }
        }
        else
        {
          v44 = -1073741816;
        }
        goto LABEL_187;
      }
      v145 = 0LL;
      v59 = 0LL;
      if ( v43 )
      {
        v60 = v140;
        if ( v140 )
        {
          if ( *((_DWORD *)v140 + 6) == 2 )
          {
            v115 = KeAcquireSpinLockRaiseToDpc(v32 + 7);
            *((_WORD *)v32 + 12) |= 0x11u;
            KeReleaseSpinLock(v32 + 7, v115);
            v60 = v140;
            v59 = v145;
          }
          v61 = *((_QWORD *)v60 + 4);
          globals = (void *)v61;
          if ( v61 )
          {
            LOWORD(v62) = 0;
            v59 = (FxObject *)(~v61 & 0xFFFFFFFFFFFFFFF8uLL);
            if ( (v61 & 1) != 0 )
            {
              v62 = LOWORD(v59->__vftable);
              v59 = (FxObject *)((char *)v59 - v62);
            }
            LOBYTE(v40) = 0;
            if ( v59->m_Type == 4096 )
            {
              v145 = v59;
            }
            else
            {
              v158 = v62;
              v156 = &v145;
              v157 = 4096;
              v159 = 0;
              if ( ((int (__fastcall *)(FxObject *, FxObject ***, __int64, __int64))v59->QueryInterface)(
                     v59,
                     &v156,
                     4096LL,
                     m_Refcnt) < 0 )
              {
                v114 = globals;
                WPP_IFR_SF_qDqD(v59->m_Globals, v109, v40, v110, traceGuid, globals, 0x1000u, v59, v59->m_Type);
                FxVerifierBugCheckWorker(v59->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)v114, 0x1000uLL);
              }
              v59 = v145;
              v60 = v140;
            }
          }
        }
        if ( !v59 )
          goto LABEL_101;
        v44 = FxObject::AssignParentObject((FxObject *)v32, v59);
        if ( v44 >= 0 )
        {
          v60 = v140;
LABEL_101:
          if ( v60 )
          {
            v63 = *((unsigned __int16 *)v32 + 5);
            if ( (_WORD)v63 )
              v64 = (char *)v32 + v63;
            else
              v64 = 0LL;
            v65 = *((_QWORD *)v60 + 2);
            if ( v65 )
              *((_QWORD *)v64 + 3) = v65;
            v66 = *((_QWORD *)v60 + 1);
            if ( v66 )
            {
              *((_QWORD *)v64 + 2) = v66;
              *((_WORD *)v32 + 12) |= 0x400u;
            }
          }
          *((_WORD *)v32 + 12) |= 8u;
          v67 = *(_QWORD *)(v32[2] + 336LL);
          if ( !v67 || *(_DWORD *)v67 )
            goto LABEL_74;
          if ( *((_WORD *)v32 + 4) == 4098 )
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)(v67 + 20)) >= 2 )
              _InterlockedAdd((volatile signed __int32 *)(v67 + 12), *(_DWORD *)(v67 + 8));
          }
          else if ( *((_WORD *)v32 + 4) == 4104 && *((_BYTE *)v32 + 213) != 2 )
          {
            goto LABEL_74;
          }
          *((_WORD *)v32 + 12) |= 0x40u;
          _a1 = _InterlockedIncrement((volatile signed __int32 *)(v67 + 16));
          if ( _a1 < *(_DWORD *)(v67 + 12)
            || KeGetCurrentIrql()
            || _InterlockedCompareExchange((volatile signed __int32 *)v67, 1, 0) )
          {
            goto LABEL_74;
          }
          WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v32[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
          if ( *(_BYTE *)(v67 + 4) )
            DbgBreakPoint();
          v70 = (_FX_DRIVER_GLOBALS *)v32[2];
          DriverName = v70->Public.DriverName;
          FxLiveDump(v70, v69, (unsigned __int64)v70->Public.DriverName, _a1);
          if ( _a1 < *(_DWORD *)(v67 + 12) )
            goto LABEL_74;
          goto LABEL_119;
        }
      }
      else
      {
        v44 = -1073741816;
      }
LABEL_187:
      WPP_IFR_SF_D(m_DeviceBase->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v44);
      FxObject::DeleteFromFailedCreate((FxObject *)v32);
      goto LABEL_75;
    }
  }
  v44 = -1073741670;
  WPP_IFR_SF_D(m_DeviceBase->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
LABEL_75:
  v51 = v136;
  v52 = v143;
  if ( v136 )
  {
    if ( v44 < 0 )
      goto LABEL_120;
    if ( (v143->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
      goto LABEL_135;
    v44 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v143, v25);
    v51 = v136;
  }
  if ( v44 < 0 )
  {
LABEL_120:
    if ( !v52->m_Filter || v14 )
    {
      if ( v51 )
      {
        v124 = FxIoQueue::GetReservedRequest((FxIoQueue *)v14, Irp, &ReservedRequest);
        v44 = v124;
        if ( v124 == 259 )
          goto LABEL_123;
        if ( v124 >= 0 )
        {
          v25 = ReservedRequest;
          goto LABEL_78;
        }
      }
      else
      {
        WPP_IFR_SF_D(v52->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v44);
      }
    }
    goto LABEL_122;
  }
  if ( !v51 )
    goto LABEL_78;
LABEL_135:
  if ( *(_QWORD *)(*(_QWORD *)(v14 + 128) + 16LL) )
  {
    v25->m_Presented = 1;
    v77 = (unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v25->m_ObjectSize )
      v77 = 0LL;
    v78 = *(_WORD *)(v14 + 10) ? v14 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)(v14 + 128) + 16LL))(v78, v77) < 0 )
    {
      m_RequestContext = v25->m_RequestContext;
      if ( m_RequestContext )
        m_RequestContext->ReleaseAndRestore(m_RequestContext, v25);
      if ( !v25->m_Presented )
        FxObject::ClearEvtCallbacks(v25);
      v25->DeleteObject(v25);
      v80 = *(_QWORD *)(v14 + 128);
      v25 = 0LL;
      v81 = *(_FX_DRIVER_GLOBALS **)(v14 + 16);
      ReservedRequest = 0LL;
      v82 = *(_DWORD *)(v80 + 32);
      if ( v82 == 1 )
        goto LABEL_146;
      v125 = v82 - 2;
      if ( v125 )
      {
        if ( v125 == 1 )
        {
          if ( (Irp->Flags & 2) == 0 || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
            v126 = 1;
          else
            v126 = 2;
          goto LABEL_237;
        }
      }
      else
      {
        v127 = *(__int64 (__fastcall **)(unsigned __int64, _IRP *))(v80 + 24);
        if ( v127 )
        {
          if ( *(_WORD *)(v14 + 10) )
            v128 = v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v128 = 0LL;
          v126 = v127(v128, Irp);
          if ( (unsigned int)(v126 - 1) > 1 )
          {
            if ( *(_WORD *)(v14 + 10) )
              v129 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v129 = 0LL;
            v44 = -1073741823;
            WPP_IFR_SF_qdd(v81, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v129, v126, -1073741823);
            FxVerifierDbgBreakPoint(v81);
            goto LABEL_122;
          }
LABEL_237:
          if ( v126 == 1 )
          {
            if ( *(_WORD *)(v14 + 10) )
              v123 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v123 = 0LL;
            v44 = -1073741823;
            WPP_IFR_SF_qqd(v81, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v123, Irp, 0xC0000001);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v83 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v14 + 128) + 96LL));
      v84 = (__int64 **)(*(_QWORD *)(v14 + 128) + 40LL);
      v85 = *v84;
      if ( *v84 != (__int64 *)v84 )
      {
        if ( (__int64 **)v85[1] != v84
          || (v86 = (__int64 *)*v85, *(__int64 **)(*v85 + 8) != v85)
          || (*v84 = v86,
              v25 = (FxRequest *)(v85 - 40),
              v86[1] = (__int64)v84,
              v87 = v85,
              v88 = *(_QWORD *)(v14 + 128) + 56LL,
              v89 = *(__int64 ***)(*(_QWORD *)(v14 + 128) + 64LL),
              *v89 != (__int64 *)v88) )
        {
          __fastfail(3u);
        }
        *v87 = v88;
        v87[1] = (__int64)v89;
        *v89 = v87;
        *(_QWORD *)(v88 + 8) = v87;
        v25->m_Irp.m_Irp = Irp;
        FxRequest::AssignMemoryBuffers(v25, *(_WDF_DEVICE_IO_TYPE *)(*(_QWORD *)(v14 + 96) + 212LL));
        if ( v81->FxVerifierOn )
          FxRequestBase::SetVerifierFlags(v90, 1024);
        v91 = (unsigned __int64 *)(*(_QWORD *)(v14 + 128) + 96LL);
        ReservedRequest = v25;
        KeReleaseSpinLock(v91, v83);
LABEL_244:
        v52 = v143;
        goto LABEL_78;
      }
      v44 = FxIoQueue::QueueForwardProgressIrpLocked((FxIoQueue *)v14, Irp);
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v14 + 128) + 96LL), v83);
      if ( v44 == 259 )
        goto LABEL_123;
      if ( v44 >= 0 )
        goto LABEL_244;
LABEL_122:
      Irp->IoStatus.Status = v44;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      goto LABEL_123;
    }
  }
LABEL_78:
  v53 = v146;
  if ( v146 && *v146 && !v25->m_Reserved )
  {
    v25->m_InternalContext = (void *)v14;
    v93 = v52->m_Globals;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v93->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v25, 33);
    if ( v25->m_Completed )
    {
      if ( v25->m_ObjectSize )
        v122 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v122 = 0LL;
      WPP_IFR_SF_q(v25->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v122);
      FxVerifierDbgBreakPoint(v25->m_Globals);
    }
    else
    {
      m_CompletionState = v25->m_CompletionState;
      v25->m_CompletionState = -126;
      if ( !m_CompletionState )
      {
        v111 = _InterlockedExchangeAdd(&v25->m_Refcnt, 1u);
        v25 = ReservedRequest;
        v112 = v111 + 1;
        if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0 )
        {
          Blink = ReservedRequest[-1].m_OwnerListEntry2.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)Blink,
              (void *)0x74617453,
              1820,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v112);
        }
      }
    }
    v25->Release(v25, (void *)1952543827, 1741, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    v25->m_Presented = 1;
    v95 = v52->m_DeviceBase;
    v96 = 0LL;
    if ( v25->m_ObjectSize )
      v96 = (unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL;
    m_ObjectSize = v95->m_ObjectSize;
    if ( *v53 )
    {
      v98 = (unsigned __int64)v95 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v98 = 0LL;
      (*v53)(v98, v96);
      v44 = 259;
      goto LABEL_123;
    }
    goto LABEL_90;
  }
  v54 = *(_BYTE *)(v14 + 24);
  Request = v25;
  PreviousIrql = 0;
  if ( v54 < 0 && (v117 = *(FxVerifierLock **)(v14 - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v117, &PreviousIrql, v40);
    v55 = PreviousIrql;
  }
  else
  {
    v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 112));
    PreviousIrql = v55;
  }
  if ( v25->m_Reserved )
    FxObject::AddRef(v25, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  v57 = *(_DWORD *)(v14 + 188);
  if ( (v57 & 1) == 0 )
  {
    v73 = *(_FX_DRIVER_GLOBALS **)(v14 + 16);
    v44 = -1073741436;
    if ( v73->FxVerboseOn )
    {
      if ( v25->m_ObjectSize )
        v130 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v130 = 0LL;
      v131 = "power stopping (Drain) in progress,";
      if ( (v57 & 0x10000) == 0 )
        v131 = a5;
      if ( *(_WORD *)(v14 + 10) )
        v132 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v132 = 0LL;
      WPP_IFR_SF_qLsqd(v73, 5u, (unsigned int)v132, 0x29u, traceGuid, v132, v57, v131, v130, -1073741436);
    }
    if ( *(char *)(v14 + 24) < 0 && (v118 = *(FxVerifierLock **)(v14 - 40)) != 0LL )
      FxVerifierLock::Unlock(v118, v55, v56);
    else
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 112), v55);
    v25->m_Irp.m_Irp->IoStatus.Information = 0LL;
    v74 = v25->m_DeviceBase;
    v75 = v25->m_Globals;
    if ( v75->FxVerboseOn )
    {
      v133 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v25->m_ObjectSize )
        v133 = 0LL;
      WPP_IFR_SF_qiid(
        v75,
        5u,
        0x10u,
        0xBu,
        WPP_FxRequest_hpp_Traceguids,
        v133,
        v25->m_Irp.m_Irp,
        v25->m_Irp.m_Irp->IoStatus.Information,
        -1073741436);
    }
    if ( v74 )
      m_Globals_high = HIBYTE(v74[1].m_Globals);
    else
      m_Globals_high = 0;
    v25->m_PriorityBoost = m_Globals_high;
    FxRequest::CompleteInternal(v25, -1073741436);
    v25->Release(v25, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_123;
  }
  v58 = *(_FX_DRIVER_GLOBALS **)(v14 + 16);
  if ( v58->FxVerboseOn )
  {
    if ( *(_WORD *)(v14 + 10) )
      v134 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v134 = 0LL;
    if ( v25->m_ObjectSize )
      v5 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(v58, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v5, v134);
  }
  if ( v25->m_Globals->FxVerifierIO )
  {
    v137 = 0;
    FxNonPagedObject::Lock(v25, &v137);
    FxRequest::VerifyRequestIsNotCompleted(v25, v25->m_Globals);
    FxNonPagedObject::Unlock(v25, v137);
  }
  v25->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( v25->m_Reserved )
  {
    if ( *(_DWORD *)(v14 + 368) )
    {
      FxIoQueue::InsertNewRequestLocked((FxIoQueue *)v14, &Request, PreviousIrql);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v14, PreviousIrql);
      goto LABEL_90;
    }
    v25 = ReservedRequest;
    v55 = PreviousIrql;
  }
  FxIoQueue::DispatchEvents((FxIoQueue *)v14, v55, v25);
LABEL_90:
  v44 = 259;
LABEL_123:
  if ( v138 )
    KeLeaveCriticalRegion();
  return (unsigned int)v44;
}
