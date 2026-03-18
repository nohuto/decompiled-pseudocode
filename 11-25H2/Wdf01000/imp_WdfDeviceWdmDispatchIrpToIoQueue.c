/*
 * XREFs of imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14002A6F0
 * Callers:
 *     <none>
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
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14002C940 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1400446E0 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qiid @ 0x1400560A4 (WPP_IFR_SF_qiid.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x140057940 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140059E28 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x140070C9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x14008009C (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AFC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x140082628 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLiveDump @ 0x1400837E4 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BC0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1400A0E14 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1400A1698 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
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
  PSLIST_ENTRY v28; // rax
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
  unsigned __int16 v57; // r9
  unsigned int v58; // eax
  _FX_DRIVER_GLOBALS *v59; // rcx
  FxObject *v60; // rdi
  _WDF_EXECUTION_LEVEL *v61; // rcx
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  char *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdi
  signed int _a1; // r12d
  _WDF_BUGCHECK_CODES v70; // edx
  _FX_DRIVER_GLOBALS *v71; // rcx
  const char *DriverName; // r13
  _FX_DRIVER_GLOBALS *v74; // rcx
  unsigned __int8 v75; // r8
  FxDeviceBase *v76; // rbx
  _FX_DRIVER_GLOBALS *v77; // rcx
  char m_Globals_high; // al
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  FxRequestContext *m_RequestContext; // rcx
  __int64 v82; // rdx
  _FX_DRIVER_GLOBALS *v83; // rbx
  int v84; // ecx
  KIRQL v85; // r13
  __int64 **v86; // rcx
  __int64 *v87; // rax
  __int64 *v88; // rdx
  __int64 *v89; // rcx
  __int64 v90; // rax
  __int64 **v91; // r8
  FxRequestBase *v92; // rcx
  unsigned __int64 *v93; // rcx
  __int64 v94; // rax
  _FX_DRIVER_GLOBALS *v95; // rcx
  unsigned __int8 m_CompletionState; // al
  FxDeviceBase *v97; // rcx
  unsigned __int64 v98; // rdx
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v100; // rcx
  FxDevice_vtbl *v101; // rax
  unsigned __int8 v102; // dl
  unsigned int v103; // r8d
  unsigned __int16 v104; // r9
  __int64 v105; // rax
  unsigned __int8 v106; // dl
  unsigned int v107; // r8d
  unsigned __int16 v108; // r9
  __int64 v109; // rax
  __int64 p_m_InCallerContextCallback; // rax
  unsigned __int8 v111; // dl
  unsigned __int16 v112; // r9
  signed __int32 v113; // edx
  unsigned int v114; // edx
  _LIST_ENTRY *Blink; // rcx
  void *v116; // rbx
  KIRQL v117; // al
  KIRQL v118; // al
  FxVerifierLock *v119; // rcx
  FxVerifierLock *v120; // rcx
  _FX_DRIVER_GLOBALS *v121; // rdx
  _WDF_BUGCHECK_CODES v122; // edx
  _FX_DRIVER_GLOBALS *v123; // rcx
  const void *v124; // rax
  const void *v125; // rsi
  int v126; // eax
  int v127; // ecx
  int v128; // eax
  __int64 (__fastcall *v129)(unsigned __int64, _IRP *); // rax
  unsigned __int64 v130; // rcx
  const void *v131; // rsi
  const void *v132; // rdx
  const char *v133; // r10
  const void *v134; // r8
  const void *v135; // rdx
  const void *v136; // rax
  unsigned __int8 v137; // r8
  unsigned __int8 v138; // r8
  const _GUID *traceGuid; // [rsp+28h] [rbp-81h]
  bool v140; // [rsp+58h] [rbp-51h]
  unsigned __int8 v141; // [rsp+59h] [rbp-50h] BYREF
  char v142; // [rsp+5Ah] [rbp-4Fh]
  FxDevice *v143; // [rsp+60h] [rbp-49h] BYREF
  _WDF_EXECUTION_LEVEL *v144; // [rsp+68h] [rbp-41h]
  FxRequest *ReservedRequest; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v146; // [rsp+78h] [rbp-31h] BYREF
  FxPkgIo *v147; // [rsp+80h] [rbp-29h]
  void *globals; // [rsp+88h] [rbp-21h]
  FxObject *v149; // [rsp+90h] [rbp-19h] BYREF
  void (__fastcall **v150)(unsigned __int64, unsigned __int64); // [rsp+98h] [rbp-11h]
  FxRequest *Request; // [rsp+A0h] [rbp-9h] BYREF
  __int16 v152; // [rsp+A8h] [rbp-1h]
  __int16 v153; // [rsp+AAh] [rbp+1h]
  int v154; // [rsp+ACh] [rbp+3h]
  FxVerifierLock *VerifierLock; // [rsp+B0h] [rbp+7h] BYREF
  unsigned __int64 *v156; // [rsp+B8h] [rbp+Fh] BYREF
  __int16 v157; // [rsp+C0h] [rbp+17h]
  __int16 v158; // [rsp+C2h] [rbp+19h]
  int v159; // [rsp+C4h] [rbp+1Bh]
  FxObject **v160; // [rsp+C8h] [rbp+1Fh] BYREF
  __int16 v161; // [rsp+D0h] [rbp+27h]
  __int16 v162; // [rsp+D2h] [rbp+29h]
  int v163; // [rsp+D4h] [rbp+2Bh]
  void *retaddr; // [rsp+100h] [rbp+57h]
  unsigned __int8 PreviousIrql; // [rsp+110h] [rbp+67h] BYREF

  v5 = 0LL;
  v150 = 0LL;
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
    v143 = flags;
  }
  else
  {
    v143 = 0LL;
    Request = (FxRequest *)&v143;
    v153 = v10;
    v154 = 0;
    v101 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v152 = 4098;
    if ( v101->QueryInterface(flags, (FxQueryInterfaceParams *)&Request) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v102,
        v103,
        v104,
        traceGuid,
        (const void *)Device,
        0x1002u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = v143;
  }
  m_Globals = flags->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    flags = v143;
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
    v146 = v14;
  }
  else
  {
    v146 = 0LL;
    v156 = &v146;
    v158 = v13;
    v159 = 0;
    v105 = *(_QWORD *)v14;
    v157 = 4099;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64 **))(v105 + 40))(v14, &v156) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v14 + 16),
        v106,
        v107,
        v108,
        traceGuid,
        (const void *)Queue,
        0x1003u,
        (const void *)v14,
        *(unsigned __int16 *)(v14 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v14 + 16), WDF_INVALID_HANDLE, Queue, 0x1003uLL);
    }
    v14 = v146;
    flags = v143;
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
    v14 = v146;
    flags = v143;
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
    v143 = v143->m_ParentDevice;
    v19->DeviceObject = v143->m_DeviceObject.m_DeviceObject;
    v14 = v146;
    flags = v143;
  }
  if ( (v15 & 1) != 0 )
  {
    v109 = *(_QWORD *)(v14 + 360);
    if ( v109 )
      p_m_InCallerContextCallback = v109 + 24;
    else
      p_m_InCallerContextCallback = (__int64)&flags->m_PkgIo->m_InCallerContextCallback;
    v150 = (void (__fastcall **)(unsigned __int64, unsigned __int64))p_m_InCallerContextCallback;
  }
  m_PkgIo = flags->m_PkgIo;
  v147 = m_PkgIo;
  v142 = 0;
  v140 = v14 && *(_BYTE *)(v14 + 136);
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v142 = 1;
  }
  if ( v14 && (v22 = *(_QWORD *)(v14 + 360)) != 0 )
    p_m_ExecutionLevel = (_WDF_EXECUTION_LEVEL *)(v22 + 32);
  else
    p_m_ExecutionLevel = &m_PkgIo->m_DeviceBase[2].m_ExecutionLevel;
  m_DeviceBase = m_PkgIo->m_DeviceBase;
  v25 = 0LL;
  v144 = p_m_ExecutionLevel;
  globals = p_m_ExecutionLevel;
  ReservedRequest = 0LL;
  v26 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  v27 = m_DeviceBase->m_Globals;
  if ( v26 && *(_WORD *)(v26 + 8) == 4354 && *(_BYTE *)(v26 + 1787) )
  {
    v30 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v30 )
      goto LABEL_34;
    v28 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                          HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                          HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                          LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
  }
  else
  {
    v28 = FxAllocateFromNPagedLookasideList((_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock, v21);
  }
  v30 = (FX_POOL_TRACKER *)v28;
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
    if ( v144 )
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
        v121 = (_FX_DRIVER_GLOBALS *)v32[2];
        if ( v121->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v121, (FxObject *)v32);
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
            v94 = *(_QWORD *)(v37 + 24);
          }
          else
          {
            if ( *(_BYTE *)(v37 + 64) )
              goto LABEL_60;
            v94 = *(_QWORD *)(v37 + 112);
          }
          v32[33] = v94;
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
          if ( v144 && *((_DWORD *)v144 + 6) == 2 )
          {
            v118 = KeAcquireSpinLockRaiseToDpc(v32 + 7);
            *((_WORD *)v32 + 12) |= 0x11u;
            KeReleaseSpinLock(v32 + 7, v118);
          }
          v44 = FxObject::AssignParentObject((FxObject *)v32, m_DeviceBase);
          if ( v44 >= 0 )
          {
            v45 = v144;
            if ( v144 )
            {
              v46 = *((unsigned __int16 *)v32 + 5);
              if ( (_WORD)v46 )
                v47 = (char *)v32 + v46;
              else
                v47 = 0LL;
              v48 = *((_QWORD *)v144 + 2);
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
            v123 = (_FX_DRIVER_GLOBALS *)v32[2];
            DriverName = v123->Public.DriverName;
            FxLiveDump(v123, v122, (unsigned __int64)v123->Public.DriverName, _a1);
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
      v149 = 0LL;
      v60 = 0LL;
      if ( v43 )
      {
        v61 = v144;
        if ( v144 )
        {
          if ( *((_DWORD *)v144 + 6) == 2 )
          {
            v117 = KeAcquireSpinLockRaiseToDpc(v32 + 7);
            *((_WORD *)v32 + 12) |= 0x11u;
            KeReleaseSpinLock(v32 + 7, v117);
            v61 = v144;
            v60 = v149;
          }
          v62 = *((_QWORD *)v61 + 4);
          globals = (void *)v62;
          if ( v62 )
          {
            LOWORD(v63) = 0;
            v60 = (FxObject *)(~v62 & 0xFFFFFFFFFFFFFFF8uLL);
            if ( (v62 & 1) != 0 )
            {
              v63 = LOWORD(v60->__vftable);
              v60 = (FxObject *)((char *)v60 - v63);
            }
            LOBYTE(v40) = 0;
            if ( v60->m_Type == 4096 )
            {
              v149 = v60;
            }
            else
            {
              v162 = v63;
              v160 = &v149;
              v161 = 4096;
              v163 = 0;
              if ( ((int (__fastcall *)(FxObject *, FxObject ***, __int64, __int64))v60->QueryInterface)(
                     v60,
                     &v160,
                     4096LL,
                     m_Refcnt) < 0 )
              {
                v116 = globals;
                WPP_IFR_SF_qDqD(v60->m_Globals, v111, v40, v112, traceGuid, globals, 0x1000u, v60, v60->m_Type);
                FxVerifierBugCheckWorker(v60->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)v116, 0x1000uLL);
              }
              v60 = v149;
              v61 = v144;
            }
          }
        }
        if ( !v60 )
          goto LABEL_101;
        v44 = FxObject::AssignParentObject((FxObject *)v32, v60);
        if ( v44 >= 0 )
        {
          v61 = v144;
LABEL_101:
          if ( v61 )
          {
            v64 = *((unsigned __int16 *)v32 + 5);
            if ( (_WORD)v64 )
              v65 = (char *)v32 + v64;
            else
              v65 = 0LL;
            v66 = *((_QWORD *)v61 + 2);
            if ( v66 )
              *((_QWORD *)v65 + 3) = v66;
            v67 = *((_QWORD *)v61 + 1);
            if ( v67 )
            {
              *((_QWORD *)v65 + 2) = v67;
              *((_WORD *)v32 + 12) |= 0x400u;
            }
          }
          *((_WORD *)v32 + 12) |= 8u;
          v68 = *(_QWORD *)(v32[2] + 336LL);
          if ( !v68 || *(_DWORD *)v68 )
            goto LABEL_74;
          if ( *((_WORD *)v32 + 4) == 4098 )
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)(v68 + 20)) >= 2 )
              _InterlockedAdd((volatile signed __int32 *)(v68 + 12), *(_DWORD *)(v68 + 8));
          }
          else if ( *((_WORD *)v32 + 4) == 4104 && *((_BYTE *)v32 + 213) != 2 )
          {
            goto LABEL_74;
          }
          *((_WORD *)v32 + 12) |= 0x40u;
          _a1 = _InterlockedIncrement((volatile signed __int32 *)(v68 + 16));
          if ( _a1 < *(_DWORD *)(v68 + 12)
            || KeGetCurrentIrql()
            || _InterlockedCompareExchange((volatile signed __int32 *)v68, 1, 0) )
          {
            goto LABEL_74;
          }
          WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v32[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
          if ( *(_BYTE *)(v68 + 4) )
            DbgBreakPoint();
          v71 = (_FX_DRIVER_GLOBALS *)v32[2];
          DriverName = v71->Public.DriverName;
          FxLiveDump(v71, v70, (unsigned __int64)v71->Public.DriverName, _a1);
          if ( _a1 < *(_DWORD *)(v68 + 12) )
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
  v51 = v140;
  v52 = v147;
  if ( v140 )
  {
    if ( v44 < 0 )
      goto LABEL_120;
    if ( (v147->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
      goto LABEL_135;
    v44 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v147, v25);
    v51 = v140;
  }
  if ( v44 < 0 )
  {
LABEL_120:
    if ( !v52->m_Filter || v14 )
    {
      if ( v51 )
      {
        v126 = FxIoQueue::GetReservedRequest((FxIoQueue *)v14, Irp, &ReservedRequest);
        v44 = v126;
        if ( v126 == 259 )
          goto LABEL_123;
        if ( v126 >= 0 )
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
    v79 = (unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v25->m_ObjectSize )
      v79 = 0LL;
    v80 = *(_WORD *)(v14 + 10) ? v14 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)(v14 + 128) + 16LL))(v80, v79) < 0 )
    {
      m_RequestContext = v25->m_RequestContext;
      if ( m_RequestContext )
        m_RequestContext->ReleaseAndRestore(m_RequestContext, v25);
      if ( !v25->m_Presented )
        FxObject::ClearEvtCallbacks(v25);
      v25->DeleteObject(v25);
      v82 = *(_QWORD *)(v14 + 128);
      v25 = 0LL;
      v83 = *(_FX_DRIVER_GLOBALS **)(v14 + 16);
      ReservedRequest = 0LL;
      v84 = *(_DWORD *)(v82 + 32);
      if ( v84 == 1 )
        goto LABEL_146;
      v127 = v84 - 2;
      if ( v127 )
      {
        if ( v127 == 1 )
        {
          if ( (Irp->Flags & 2) == 0 || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
            v128 = 1;
          else
            v128 = 2;
          goto LABEL_237;
        }
      }
      else
      {
        v129 = *(__int64 (__fastcall **)(unsigned __int64, _IRP *))(v82 + 24);
        if ( v129 )
        {
          if ( *(_WORD *)(v14 + 10) )
            v130 = v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v130 = 0LL;
          v128 = v129(v130, Irp);
          if ( (unsigned int)(v128 - 1) > 1 )
          {
            if ( *(_WORD *)(v14 + 10) )
              v131 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v131 = 0LL;
            v44 = -1073741823;
            WPP_IFR_SF_qdd(v83, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v131, v128, -1073741823);
            FxVerifierDbgBreakPoint(v83);
            goto LABEL_122;
          }
LABEL_237:
          if ( v128 == 1 )
          {
            if ( *(_WORD *)(v14 + 10) )
              v125 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v125 = 0LL;
            v44 = -1073741823;
            WPP_IFR_SF_qqd(v83, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v125, Irp, 0xC0000001);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v85 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v14 + 128) + 96LL));
      v86 = (__int64 **)(*(_QWORD *)(v14 + 128) + 40LL);
      v87 = *v86;
      if ( *v86 != (__int64 *)v86 )
      {
        if ( (__int64 **)v87[1] != v86
          || (v88 = (__int64 *)*v87, *(__int64 **)(*v87 + 8) != v87)
          || (*v86 = v88,
              v25 = (FxRequest *)(v87 - 40),
              v88[1] = (__int64)v86,
              v89 = v87,
              v90 = *(_QWORD *)(v14 + 128) + 56LL,
              v91 = *(__int64 ***)(*(_QWORD *)(v14 + 128) + 64LL),
              *v91 != (__int64 *)v90) )
        {
          __fastfail(3u);
        }
        *v89 = v90;
        v89[1] = (__int64)v91;
        *v91 = v89;
        *(_QWORD *)(v90 + 8) = v89;
        v25->m_Irp.m_Irp = Irp;
        FxRequest::AssignMemoryBuffers(v25, *(_WDF_DEVICE_IO_TYPE *)(*(_QWORD *)(v14 + 96) + 212LL));
        if ( v83->FxVerifierOn )
          FxRequestBase::SetVerifierFlags(v92, 1024);
        v93 = (unsigned __int64 *)(*(_QWORD *)(v14 + 128) + 96LL);
        ReservedRequest = v25;
        KeReleaseSpinLock(v93, v85);
LABEL_244:
        v52 = v147;
        goto LABEL_78;
      }
      v44 = FxIoQueue::QueueForwardProgressIrpLocked((FxIoQueue *)v14, Irp);
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v14 + 128) + 96LL), v85);
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
  v53 = v150;
  if ( v150 && *v150 && !v25->m_Reserved )
  {
    v25->m_InternalContext = (void *)v14;
    v95 = v52->m_Globals;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v95->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v25, 33);
    if ( v25->m_Completed )
    {
      if ( v25->m_ObjectSize )
        v124 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v124 = 0LL;
      WPP_IFR_SF_q(v25->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v124);
      FxVerifierDbgBreakPoint(v25->m_Globals);
    }
    else
    {
      m_CompletionState = v25->m_CompletionState;
      v25->m_CompletionState = -126;
      if ( !m_CompletionState )
      {
        v113 = _InterlockedExchangeAdd(&v25->m_Refcnt, 1u);
        v25 = ReservedRequest;
        v114 = v113 + 1;
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
              v114);
        }
      }
    }
    v25->Release(v25, (void *)1952543827, 1741, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    v25->m_Presented = 1;
    v97 = v52->m_DeviceBase;
    v98 = 0LL;
    if ( v25->m_ObjectSize )
      v98 = (unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL;
    m_ObjectSize = v97->m_ObjectSize;
    if ( *v53 )
    {
      v100 = (unsigned __int64)v97 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v100 = 0LL;
      (*v53)(v100, v98);
      v44 = 259;
      goto LABEL_123;
    }
    goto LABEL_90;
  }
  v54 = *(_BYTE *)(v14 + 24);
  Request = v25;
  PreviousIrql = 0;
  if ( v54 < 0 && (v119 = *(FxVerifierLock **)(v14 - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v119, &PreviousIrql, v40);
    v55 = PreviousIrql;
  }
  else
  {
    v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 112));
    PreviousIrql = v55;
  }
  if ( v25->m_Reserved )
    FxObject::AddRef(v25, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  v58 = *(_DWORD *)(v14 + 188);
  if ( (v58 & 1) == 0 )
  {
    v74 = *(_FX_DRIVER_GLOBALS **)(v14 + 16);
    v44 = -1073741436;
    if ( v74->FxVerboseOn )
    {
      if ( v25->m_ObjectSize )
        v132 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v132 = 0LL;
      v133 = "power stopping (Drain) in progress,";
      if ( (v58 & 0x10000) == 0 )
        v133 = a5;
      if ( *(_WORD *)(v14 + 10) )
        v134 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v134 = 0LL;
      WPP_IFR_SF_qLsqd(v74, 5u, (unsigned int)v134, 0x29u, traceGuid, v134, v58, v133, v132, -1073741436);
    }
    if ( *(char *)(v14 + 24) < 0 && (v120 = *(FxVerifierLock **)(v14 - 40)) != 0LL )
      FxVerifierLock::Unlock(v120, v55, v56);
    else
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 112), v55);
    v25->m_Irp.m_Irp->IoStatus.Information = 0LL;
    v76 = v25->m_DeviceBase;
    v77 = v25->m_Globals;
    if ( v77->FxVerboseOn )
    {
      v135 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v25->m_ObjectSize )
        v135 = 0LL;
      WPP_IFR_SF_qiid(
        v77,
        5u,
        0x10u,
        0xBu,
        WPP_FxRequest_hpp_Traceguids,
        v135,
        v25->m_Irp.m_Irp,
        v25->m_Irp.m_Irp->IoStatus.Information,
        -1073741436);
    }
    if ( v76 )
      m_Globals_high = HIBYTE(v76[1].m_Globals);
    else
      m_Globals_high = 0;
    v25->m_PriorityBoost = m_Globals_high;
    FxRequest::CompleteInternal(v25, 0xC0000184, v75);
    v25->Release(v25, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_123;
  }
  v59 = *(_FX_DRIVER_GLOBALS **)(v14 + 16);
  if ( v59->FxVerboseOn )
  {
    if ( *(_WORD *)(v14 + 10) )
      v136 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v136 = 0LL;
    if ( v25->m_ObjectSize )
      v5 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(v59, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v5, v136);
  }
  if ( v25->m_Globals->FxVerifierIO )
  {
    v141 = 0;
    FxNonPagedObject::Lock(v25, &v141, v56);
    FxRequest::VerifyRequestIsNotCompleted(v25, v25->m_Globals);
    FxNonPagedObject::Unlock(v25, v141, v137);
  }
  v25->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( v25->m_Reserved )
  {
    if ( *(_DWORD *)(v14 + 368) )
    {
      FxIoQueue::InsertNewRequestLocked((FxIoQueue *)v14, &Request, PreviousIrql);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v14, PreviousIrql, v138);
      goto LABEL_90;
    }
    v25 = ReservedRequest;
    v55 = PreviousIrql;
  }
  FxIoQueue::DispatchEvents((FxIoQueue *)v14, v55, v25, v57);
LABEL_90:
  v44 = 259;
LABEL_123:
  if ( v142 )
    KeLeaveCriticalRegion();
  return (unsigned int)v44;
}
