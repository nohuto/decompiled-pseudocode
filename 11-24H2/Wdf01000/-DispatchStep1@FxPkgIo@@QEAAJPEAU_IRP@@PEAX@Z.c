/*
 * XREFs of ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140019480
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1400193B0 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1400584A0 (imp_WdfDeviceWdmDispatchIrp.c)
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
 *     WPP_IFR_SF_qcDqd @ 0x14007F080 (WPP_IFR_SF_qcDqd.c)
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
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400DCDF8 (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

NTSTATUS __fastcall FxPkgIo::DispatchStep1(FxPkgIo *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdi
  _LIST_ENTRY *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 MajorFunction; // rcx
  FxIoQueue *v9; // rsi
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // rax
  FxCxDeviceInfo *v12; // r15
  _WDF_EXECUTION_LEVEL *p_RequestAttributes; // r15
  FxDeviceBase *m_DeviceBase; // rcx
  const void *v15; // r14
  FxRequest *v16; // r12
  FxObject **p_m_ParentObject; // rdi
  unsigned __int64 v18; // rdx
  FX_POOL_TRACKER *v19; // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  FX_POOL_TRACKER *v21; // rbx
  _LIST_ENTRY *v22; // r8
  FX_POOL_TRACKER *v23; // rax
  FX_POOL **p_Pool; // rbx
  FxObject *v25; // rax
  FxObject *m_Globals; // r8
  FxObject *flags; // rdi
  FX_POOL *v28; // rax
  PIRP v29; // rax
  FX_POOL *v30; // rdx
  __int64 v31; // r9
  _LIST_ENTRY *Blink; // rcx
  __int64 Flink_low; // r8
  int v34; // eax
  FX_POOL *v35; // rax
  __int16 v36; // cx
  KIRQL v37; // al
  bool v38; // zf
  KIRQL v39; // cl
  unsigned __int16 **v40; // r8
  unsigned __int16 *v41; // rdx
  KIRQL v42; // dl
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  _LIST_ENTRY *v47; // rdi
  int v48; // edi
  KIRQL v49; // al
  PIRP v50; // rbx
  FxIoInCallerContext *v51; // rdi
  char m_ObjectFlags; // al
  KIRQL v53; // bl
  unsigned __int8 v54; // r8
  unsigned int m_QueueState; // eax
  _FX_DRIVER_GLOBALS *v56; // rcx
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  _LIST_ENTRY *Flink; // rdi
  signed int _a1; // r15d
  _WDF_BUGCHECK_CODES v65; // edx
  _FX_DRIVER_GLOBALS *v66; // rcx
  const char *DriverName; // r12
  _IO_STACK_LOCATION *v68; // r8
  int v69; // edx
  __int64 v70; // rsi
  __int64 v71; // r14
  _FX_DRIVER_GLOBALS *v72; // rdx
  int v73; // r12d
  PIRP v75; // rcx
  _FX_DRIVER_GLOBALS *v76; // rcx
  FxDeviceBase *v77; // rbx
  _FX_DRIVER_GLOBALS *v78; // rcx
  char m_Globals_high; // al
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  _FX_DRIVER_GLOBALS *v84; // r15
  _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY m_Policy; // ecx
  KIRQL v86; // al
  _LIST_ENTRY *p_m_ReservedRequestList; // rcx
  _LIST_ENTRY *v88; // rax
  _LIST_ENTRY *v89; // rdx
  __int64 *v90; // rcx
  __int64 p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *v92; // r8
  FxRequestBase *v93; // rcx
  unsigned __int64 *p_m_Lock; // rcx
  _LIST_ENTRY *v95; // r12
  _LIST_ENTRY *v96; // r11
  FxDeviceBase *v97; // rcx
  __int64 v98; // r11
  unsigned __int16 v99; // r9
  unsigned __int64 v100; // rcx
  FX_POOL *NonPagedBytes; // rax
  _FX_DRIVER_GLOBALS *v102; // rcx
  unsigned __int8 m_CompletionState; // al
  FxDeviceBase *v104; // rcx
  unsigned __int64 v105; // rdx
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v107; // rcx
  KIRQL v108; // r8
  unsigned __int16 **v109; // rdx
  unsigned __int16 *v110; // rcx
  KIRQL v111; // dl
  unsigned __int8 v112; // dl
  unsigned __int16 v113; // r9
  signed __int32 v114; // edx
  unsigned int v115; // edx
  _LIST_ENTRY *v116; // rcx
  void *v117; // rbx
  KIRQL v118; // al
  KIRQL v119; // al
  FxVerifierLock *v120; // rcx
  FxVerifierLock *v121; // rcx
  FxDeviceBase *v122; // rcx
  unsigned __int16 v123; // ax
  const void *v124; // rcx
  _FX_DRIVER_GLOBALS *v125; // rdx
  signed int v126; // r15d
  _WDF_BUGCHECK_CODES v127; // edx
  _FX_DRIVER_GLOBALS *v128; // rcx
  const char *v129; // r12
  const void *v130; // rax
  const void *v131; // rsi
  KIRQL v132; // r10
  FxDeviceBase *v133; // rcx
  unsigned __int16 v134; // ax
  const void *v135; // rcx
  int v136; // eax
  __int32 v137; // ecx
  int v138; // eax
  _WDF_IO_FORWARD_PROGRESS_ACTION (__fastcall *Method)(WDFQUEUE__ *, _IRP *); // rax
  unsigned __int64 v140; // rcx
  const void *v141; // rsi
  const void *v142; // rax
  const void *v143; // rdx
  const char *v144; // r10
  const void *v145; // r8
  const void *v146; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  int v148; // [rsp+48h] [rbp-31h]
  KIRQL v149; // [rsp+50h] [rbp-29h]
  FxRequest *ReservedRequest; // [rsp+58h] [rbp-21h] BYREF
  FxObject *v151; // [rsp+60h] [rbp-19h]
  FxObject *v152; // [rsp+68h] [rbp-11h] BYREF
  FxIoInCallerContext *p_m_InCallerContextCallback; // [rsp+70h] [rbp-9h]
  FxVerifierLock *VerifierLock; // [rsp+78h] [rbp-1h] BYREF
  FxObject **v155; // [rsp+80h] [rbp+7h] BYREF
  __int16 v156; // [rsp+88h] [rbp+Fh]
  __int16 v157; // [rsp+8Ah] [rbp+11h]
  int v158; // [rsp+8Ch] [rbp+13h]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  void *globals; // [rsp+E0h] [rbp+67h] BYREF
  PIRP v161; // [rsp+E8h] [rbp+6Fh] BYREF
  KIRQL v162; // [rsp+F0h] [rbp+77h]
  char v163; // [rsp+F8h] [rbp+7Fh]

  v161 = Irp;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = DispatchContext;
  if ( DispatchContext == &this->m_DynamicDispatchInfoListHead )
  {
LABEL_2:
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    v9 = this->m_DispatchTable[MajorFunction];
    if ( v9 )
    {
      m_CxDeviceInfo = v9->m_CxDeviceInfo;
      if ( m_CxDeviceInfo )
        p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      else
        p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
      p_m_InCallerContextCallback = p_IoInCallerContextCallback;
LABEL_6:
      if ( !this->m_Filter
        || p_IoInCallerContextCallback->m_Method
        || v9 != this->m_DefaultQueue
        || v9->m_Type == WdfIoQueueDispatchManual
        || v9->m_IoDefault.Method )
      {
        goto LABEL_7;
      }
      if ( (_DWORD)MajorFunction == 15 )
      {
        if ( v9->m_IoInternalDeviceControl.Method )
          goto LABEL_7;
      }
      else if ( (_BYTE)MajorFunction )
      {
        if ( (_DWORD)MajorFunction == 3 )
        {
          if ( v9->m_IoRead.Method )
            goto LABEL_7;
        }
        else
        {
          if ( (_DWORD)MajorFunction != 4 )
          {
            if ( (_DWORD)MajorFunction != 14 || !v9->m_IoDeviceControl.Method )
              goto $Forward;
LABEL_7:
            v163 = 0;
            v162 = v9 && v9->m_SupportForwardProgress;
            if ( KeGetCurrentIrql() <= 1u )
            {
              KeEnterCriticalRegion();
              v163 = 1;
            }
            if ( v9 && (v12 = v9->m_CxDeviceInfo) != 0LL )
              p_RequestAttributes = (_WDF_EXECUTION_LEVEL *)&v12->RequestAttributes;
            else
              p_RequestAttributes = &this->m_DeviceBase[2].m_ExecutionLevel;
            m_DeviceBase = this->m_DeviceBase;
            v15 = 0LL;
            v151 = m_DeviceBase;
            v16 = 0LL;
            ReservedRequest = 0LL;
            p_m_ParentObject = (FxObject **)p_RequestAttributes;
            v18 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
            globals = m_DeviceBase->m_Globals;
            if ( v18 && *(_WORD *)(v18 + 8) == 4354 && *(_BYTE *)(v18 + 1787) )
            {
              VerifierLock = (FxVerifierLock *)&m_DeviceBase[2].m_SpinLock;
              v21 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
              if ( v21 )
                goto LABEL_19;
              v19 = (FX_POOL_TRACKER *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&VerifierLock->m_Mutex.m_Lock.Count)(
                                         *((unsigned int *)&VerifierLock->m_OldIrql + 1),
                                         *((unsigned int *)&VerifierLock->m_Mutex.m_DbgFlagIsInitialized + 1),
                                         *(unsigned int *)&VerifierLock->m_Mutex.m_DbgFlagIsInitialized);
            }
            else
            {
              v19 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(
                                         (_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock,
                                         v18);
            }
            v21 = v19;
LABEL_19:
            if ( !v21 )
              goto LABEL_217;
            v22 = (_LIST_ENTRY *)globals;
            if ( *((_BYTE *)globals + 272) )
            {
              FxPoolInsertNonPagedAllocateTracker(
                (FX_POOL *)((char *)globals + 112),
                v21,
                v151[5].m_SpinLock.m_Lock,
                *((_DWORD *)globals + 17),
                retaddr);
              v22 = (_LIST_ENTRY *)globals;
              v23 = v21 + 1;
            }
            else
            {
              v23 = v21;
            }
            v23->Link.Flink = &v21->Link;
            p_Pool = &v23->Pool;
            v23->Link.Blink = v22;
            if ( !p_RequestAttributes )
              p_m_ParentObject = &v151[5].m_ParentObject;
            if ( LOBYTE(v22[20].Blink) )
            {
              *(_OWORD *)p_Pool = 0LL;
              *(_OWORD *)&v23->Size = 0LL;
              *(_OWORD *)&v23->CallersAddress = 0LL;
              LODWORD(v23->CallersAddress) = 1146058822;
              p_Pool = (FX_POOL **)&v23[1];
            }
            p_Pool[47] = 0LL;
            p_Pool[48] = 0LL;
            p_Pool[49] = 0LL;
            p_Pool[50] = 0LL;
            p_Pool[51] = 0LL;
            p_Pool[46] = (FX_POOL *)p_Pool;
            if ( p_m_ParentObject )
            {
              v25 = p_m_ParentObject[6];
              if ( v25 )
              {
                m_Globals = p_m_ParentObject[5];
                if ( !m_Globals )
                  m_Globals = (FxObject *)v25->m_Globals;
                memset(p_Pool + 52, 0, ((unsigned __int64)&m_Globals->__vftable + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              }
              p_Pool[50] = (FX_POOL *)p_m_ParentObject[6];
            }
            if ( !p_Pool )
            {
LABEL_217:
              v48 = -1073741670;
              WPP_IFR_SF_D(v151->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
              goto LABEL_65;
            }
            flags = v151;
            p_Pool[2] = (FX_POOL *)v151->m_Globals;
            *p_Pool = (FX_POOL *)FxObject::`vftable';
            *((_DWORD *)p_Pool + 2) = 24121352;
            p_Pool[7] = 0LL;
            *((_BYTE *)p_Pool + 48) = 1;
            *((_DWORD *)p_Pool + 3) = 1;
            *((_DWORD *)p_Pool + 6) = 0x10000;
            p_Pool[8] = 0LL;
            p_Pool[5] = (FX_POOL *)(p_Pool + 4);
            p_Pool[4] = (FX_POOL *)(p_Pool + 4);
            p_Pool[10] = (FX_POOL *)(p_Pool + 9);
            p_Pool[9] = (FX_POOL *)(p_Pool + 9);
            v28 = p_Pool[2];
            p_Pool[11] = 0LL;
            p_Pool[12] = 0LL;
            if ( *(&v28[2].NonPagedLock.m_DbgFlagIsInitialized + 4) )
              FxObject::Vf_VerifyConstruct((FxObject *)p_Pool, v20, 0);
            *p_Pool = (FX_POOL *)FxNonPagedObject::`vftable';
            p_Pool[14] = 0LL;
            *((_BYTE *)p_Pool + 104) = 1;
            if ( *((char *)p_Pool + 24) < 0 )
            {
              v125 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
              if ( v125->FxVerifierLock )
              {
                VerifierLock = 0LL;
                FxVerifierLock::CreateAndInitialize(&VerifierLock, v125, (FxObject *)p_Pool);
                *(p_Pool - 5) = (FX_POOL *)VerifierLock;
              }
            }
            v29 = v161;
            p_Pool[19] = (FX_POOL *)v161;
            p_Pool[23] = 0LL;
            p_Pool[24] = 0LL;
            *((_BYTE *)p_Pool + 214) = v29 == 0LL;
            *((_WORD *)p_Pool + 106) = 0;
            *((_BYTE *)p_Pool + 238) = 1;
            p_Pool[20] = 0LL;
            p_Pool[25] = 0LL;
            *((_BYTE *)p_Pool + 215) = 0;
            *((_BYTE *)p_Pool + 236) = 0;
            p_Pool[21] = 0LL;
            p_Pool[22] = 0LL;
            p_Pool[16] = (FX_POOL *)(p_Pool + 15);
            p_Pool[15] = (FX_POOL *)(p_Pool + 15);
            p_Pool[18] = 0LL;
            p_Pool[27] = (FX_POOL *)216;
            p_Pool[28] = 0LL;
            *((_DWORD *)p_Pool + 52) = 0;
            p_Pool[30] = 0LL;
            *((_DWORD *)p_Pool + 58) = 232;
            *((_BYTE *)p_Pool + 237) = 0;
            p_Pool[32] = (FX_POOL *)FxRequestSystemBuffer::`vftable';
            p_Pool[33] = 0LL;
            p_Pool[34] = (FX_POOL *)FxRequestOutputBuffer::`vftable';
            p_Pool[35] = 0LL;
            p_Pool[31] = 0LL;
            *((_BYTE *)p_Pool + 353) = 0;
            p_Pool[37] = (FX_POOL *)(p_Pool + 36);
            p_Pool[36] = (FX_POOL *)(p_Pool + 36);
            p_Pool[39] = (FX_POOL *)(p_Pool + 38);
            p_Pool[38] = (FX_POOL *)(p_Pool + 38);
            p_Pool[41] = (FX_POOL *)(p_Pool + 40);
            p_Pool[40] = (FX_POOL *)(p_Pool + 40);
            *p_Pool = (FX_POOL *)FxRequestFromLookaside::`vftable';
            *((_BYTE *)p_Pool + 352) = 0;
            *((_WORD *)p_Pool + 177) = 0;
            p_Pool[42] = 0LL;
            p_Pool[43] = 0LL;
            p_Pool[12] = (FX_POOL *)flags->m_DeviceBase;
            v30 = p_Pool[19];
            v31 = HIDWORD(flags[2].__vftable);
            Blink = v30[1].NonPagedHead.Blink;
            Flink_low = LOBYTE(Blink->Flink);
            if ( (_DWORD)Flink_low != 15 )
            {
              if ( (_DWORD)Flink_low == 3 || (_DWORD)Flink_low == 4 )
              {
                v31 = (unsigned int)(v31 - 1);
                if ( (_DWORD)v31 )
                {
                  if ( (_DWORD)v31 != 1 )
                    goto LABEL_45;
                  NonPagedBytes = (FX_POOL *)v30->NonPagedHead.Blink;
                }
                else
                {
                  if ( v30->PagedLock.m_Lock.Event.Header.Type )
                    goto LABEL_45;
                  NonPagedBytes = (FX_POOL *)v30->NonPagedBytes;
                }
                p_Pool[33] = NonPagedBytes;
                goto LABEL_41;
              }
              if ( (_DWORD)Flink_low != 14 )
                goto LABEL_45;
            }
            v34 = (__int64)Blink[1].Blink & 3;
            if ( v34 == 3 )
            {
              if ( (_BYTE)Flink_low != 15 && v30->PagedLock.m_Lock.Event.Header.Type )
                goto LABEL_45;
              p_Pool[33] = (FX_POOL *)Blink[2].Flink;
              v35 = (FX_POOL *)v30->NonPagedBytes;
            }
            else
            {
              if ( v34 )
              {
                if ( (unsigned int)(v34 - 1) <= 1 )
                  p_Pool[33] = (FX_POOL *)v30->NonPagedHead.Blink;
                goto LABEL_41;
              }
              p_Pool[33] = (FX_POOL *)v30->NonPagedHead.Blink;
              v35 = (FX_POOL *)v30->NonPagedHead.Blink;
            }
            p_Pool[35] = v35;
LABEL_41:
            if ( p_Pool[33] )
              *((_BYTE *)p_Pool + 235) |= 1u;
            if ( p_Pool[35] )
              *((_BYTE *)p_Pool + 235) |= 2u;
LABEL_45:
            v36 = *((_WORD *)p_Pool + 5);
            if ( flags->m_Globals->FxRequestParentOptimizationOn )
            {
              v152 = 0LL;
              flags = 0LL;
              if ( v36 )
              {
                if ( p_RequestAttributes )
                {
                  if ( *((_DWORD *)p_RequestAttributes + 6) == 2 )
                  {
                    v118 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
                    *((_WORD *)p_Pool + 12) |= 0x11u;
                    KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v118);
                    flags = v152;
                  }
                  v57 = *((_QWORD *)p_RequestAttributes + 4);
                  globals = (void *)v57;
                  if ( v57 )
                  {
                    LOWORD(v58) = 0;
                    flags = (FxObject *)(~v57 & 0xFFFFFFFFFFFFFFF8uLL);
                    if ( (v57 & 1) != 0 )
                    {
                      v58 = LOWORD(flags->__vftable);
                      flags = (FxObject *)((char *)flags - v58);
                    }
                    if ( flags->m_Type == 4096 )
                    {
                      v152 = flags;
                    }
                    else
                    {
                      v156 = 4096;
                      v155 = &v152;
                      v157 = v58;
                      v158 = 0;
                      if ( ((int (__fastcall *)(FxObject *, FxObject ***, __int64, __int64))flags->QueryInterface)(
                             flags,
                             &v155,
                             Flink_low,
                             v31) < 0 )
                      {
                        v117 = globals;
                        WPP_IFR_SF_qDqD(
                          flags->m_Globals,
                          v112,
                          Flink_low,
                          v113,
                          traceGuid,
                          globals,
                          0x1000u,
                          flags,
                          flags->m_Type);
                        FxVerifierBugCheckWorker(
                          flags->m_Globals,
                          WDF_INVALID_HANDLE,
                          (unsigned __int64)v117,
                          0x1000uLL);
                      }
                      flags = v152;
                    }
                  }
                }
                if ( flags )
                {
                  v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
                  v38 = *((_WORD *)p_Pool + 13) == 1;
                  LOBYTE(globals) = v37;
                  if ( !v38 )
                  {
                    FxObject::TraceDroppedEvent((FxObject *)p_Pool, FxObjectDroppedEventAssignParentObject);
                    goto LABEL_256;
                  }
                  if ( p_Pool[8] )
                  {
LABEL_254:
                    KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v37);
                    v48 = -1071644147;
                    goto LABEL_237;
                  }
                  v108 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
                  v149 = v108;
                  if ( flags->m_ObjectState != 1 )
                  {
LABEL_281:
                    FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v149);
                    goto LABEL_256;
                  }
                  v109 = (unsigned __int16 **)flags->m_ChildListHead.Blink;
                  v110 = (unsigned __int16 *)(p_Pool + 9);
                  if ( *v109 != (unsigned __int16 *)&flags->m_ChildListHead )
                    goto LABEL_258;
                  *(_QWORD *)v110 = &flags->m_ChildListHead;
                  p_Pool[10] = (FX_POOL *)v109;
                  *v109 = v110;
                  flags->m_ChildListHead.Blink = (_LIST_ENTRY *)v110;
                  if ( !p_Pool[12] )
                    p_Pool[12] = (FX_POOL *)flags->m_DeviceBase;
                  KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v108);
                  v111 = (unsigned __int8)globals;
                  p_Pool[8] = (FX_POOL *)flags;
                  KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v111);
                }
                if ( p_RequestAttributes )
                {
                  v59 = *((unsigned __int16 *)p_Pool + 5);
                  if ( (_WORD)v59 )
                    v60 = (__int64)p_Pool + v59;
                  else
                    v60 = 0LL;
                  v61 = *((_QWORD *)p_RequestAttributes + 2);
                  if ( v61 )
                    *(_QWORD *)(v60 + 24) = v61;
                  v62 = *((_QWORD *)p_RequestAttributes + 1);
                  if ( v62 )
                  {
                    *(_QWORD *)(v60 + 16) = v62;
                    *((_WORD *)p_Pool + 12) |= 0x400u;
                  }
                }
                *((_WORD *)p_Pool + 12) |= 8u;
                Flink = p_Pool[2][2].NonPagedHead.Flink;
                if ( !Flink || LODWORD(Flink->Flink) )
                  goto LABEL_64;
                if ( *((_WORD *)p_Pool + 4) == 4098 )
                {
                  if ( _InterlockedIncrement((volatile signed __int32 *)&Flink[1].Flink + 1) >= 2 )
                    _InterlockedAdd((volatile signed __int32 *)&Flink->Blink + 1, (unsigned int)Flink->Blink);
                }
                else if ( *((_WORD *)p_Pool + 4) == 4104 && *((_BYTE *)p_Pool + 213) != 2 )
                {
                  goto LABEL_64;
                }
                *((_WORD *)p_Pool + 12) |= 0x40u;
                _a1 = _InterlockedIncrement((volatile signed __int32 *)&Flink[1]);
                if ( _a1 >= SHIDWORD(Flink->Blink)
                  && !KeGetCurrentIrql()
                  && !_InterlockedCompareExchange((volatile signed __int32 *)Flink, 1, 0) )
                {
                  WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)p_Pool[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
                  if ( BYTE4(Flink->Flink) )
                    DbgBreakPoint();
                  v66 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
                  DriverName = v66->Public.DriverName;
                  FxLiveDump(v66, v65, (unsigned __int64)v66->Public.DriverName, _a1);
                  if ( _a1 >= SHIDWORD(Flink->Blink) )
                    MicrosoftTelemetryAssertTriggeredArgsKM(DriverName, _a1, 0);
                }
                goto LABEL_64;
              }
              v48 = -1073741816;
            }
            else
            {
              if ( v36 )
              {
                if ( p_RequestAttributes && *((_DWORD *)p_RequestAttributes + 6) == 2 )
                {
                  v119 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
                  *((_WORD *)p_Pool + 12) |= 0x11u;
                  KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v119);
                }
                v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
                v38 = *((_WORD *)p_Pool + 13) == 1;
                LOBYTE(globals) = v37;
                if ( v38 )
                {
                  if ( !p_Pool[8] )
                  {
                    v39 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
                    v149 = v39;
                    if ( flags->m_ObjectState == 1 )
                    {
                      v40 = (unsigned __int16 **)flags->m_ChildListHead.Blink;
                      v41 = (unsigned __int16 *)(p_Pool + 9);
                      if ( *v40 != (unsigned __int16 *)&flags->m_ChildListHead )
                        goto LABEL_258;
                      *(_QWORD *)v41 = &flags->m_ChildListHead;
                      p_Pool[10] = (FX_POOL *)v40;
                      *v40 = v41;
                      flags->m_ChildListHead.Blink = (_LIST_ENTRY *)v41;
                      if ( !p_Pool[12] )
                        p_Pool[12] = (FX_POOL *)flags->m_DeviceBase;
                      KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v39);
                      v42 = (unsigned __int8)globals;
                      p_Pool[8] = (FX_POOL *)flags;
                      KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v42);
                      if ( p_RequestAttributes )
                      {
                        v43 = *((unsigned __int16 *)p_Pool + 5);
                        if ( (_WORD)v43 )
                          v44 = (__int64)p_Pool + v43;
                        else
                          v44 = 0LL;
                        v45 = *((_QWORD *)p_RequestAttributes + 2);
                        if ( v45 )
                          *(_QWORD *)(v44 + 24) = v45;
                        v46 = *((_QWORD *)p_RequestAttributes + 1);
                        if ( v46 )
                        {
                          *(_QWORD *)(v44 + 16) = v46;
                          *((_WORD *)p_Pool + 12) |= 0x400u;
                        }
                      }
                      *((_WORD *)p_Pool + 12) |= 8u;
                      v47 = p_Pool[2][2].NonPagedHead.Flink;
                      if ( !v47 || LODWORD(v47->Flink) )
                        goto LABEL_64;
                      if ( *((_WORD *)p_Pool + 4) == 4098 )
                      {
                        if ( _InterlockedIncrement((volatile signed __int32 *)&v47[1].Flink + 1) >= 2 )
                          _InterlockedAdd((volatile signed __int32 *)&v47->Blink + 1, (unsigned int)v47->Blink);
                        goto LABEL_242;
                      }
                      if ( *((_WORD *)p_Pool + 4) != 4104 || *((_BYTE *)p_Pool + 213) == 2 )
                      {
LABEL_242:
                        *((_WORD *)p_Pool + 12) |= 0x40u;
                        v126 = _InterlockedIncrement((volatile signed __int32 *)&v47[1]);
                        if ( v126 >= SHIDWORD(v47->Blink)
                          && !KeGetCurrentIrql()
                          && !_InterlockedCompareExchange((volatile signed __int32 *)v47, 1, 0) )
                        {
                          WPP_IFR_SF_D(
                            (_FX_DRIVER_GLOBALS *)p_Pool[2],
                            2u,
                            0x14u,
                            0xFu,
                            WPP_FxObject_cpp_Traceguids,
                            v126);
                          if ( BYTE4(v47->Flink) )
                            DbgBreakPoint();
                          v128 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
                          v129 = v128->Public.DriverName;
                          FxLiveDump(v128, v127, (unsigned __int64)v128->Public.DriverName, v126);
                          if ( v126 >= SHIDWORD(v47->Blink) )
                            MicrosoftTelemetryAssertTriggeredArgsKM(v129, v126, 0);
                        }
                      }
LABEL_64:
                      v48 = 0;
                      v16 = (FxRequest *)p_Pool;
                      ReservedRequest = (FxRequest *)p_Pool;
                      goto LABEL_65;
                    }
                    goto LABEL_281;
                  }
                  goto LABEL_254;
                }
                FxObject::TraceDroppedEvent((FxObject *)p_Pool, FxObjectDroppedEventAssignParentObject);
LABEL_256:
                KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, (KIRQL)globals);
                v48 = -1073741738;
                goto LABEL_237;
              }
              v48 = -1073741816;
            }
LABEL_237:
            WPP_IFR_SF_D(v151->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v48);
            FxObject::DeleteFromFailedCreate((FxObject *)p_Pool);
LABEL_65:
            v49 = v162;
            if ( v162 )
            {
              if ( v48 < 0 )
                goto LABEL_116;
              if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
                goto LABEL_142;
              v48 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, v16);
              v49 = v162;
            }
            if ( v48 >= 0 )
            {
              if ( !v49 )
              {
LABEL_68:
                v50 = v161;
                goto LABEL_69;
              }
LABEL_142:
              if ( !v9->m_FwdProgContext->m_IoResourcesAllocate.Method )
                goto LABEL_68;
              v16->m_Presented = 1;
              v80 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
              if ( !v16->m_ObjectSize )
                v80 = 0LL;
              v81 = v9->m_ObjectSize ? (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
              if ( v9->m_FwdProgContext->m_IoResourcesAllocate.Method((WDFQUEUE__ *)v81, (WDFREQUEST__ *)v80) >= 0 )
                goto LABEL_68;
              m_RequestContext = v16->m_RequestContext;
              if ( m_RequestContext )
                m_RequestContext->ReleaseAndRestore(m_RequestContext, v16);
              if ( !v16->m_Presented )
                FxObject::ClearEvtCallbacks(v16);
              v16->DeleteObject(v16);
              m_FwdProgContext = v9->m_FwdProgContext;
              v16 = 0LL;
              v84 = v9->m_Globals;
              ReservedRequest = 0LL;
              m_Policy = m_FwdProgContext->m_Policy;
              if ( m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
                goto LABEL_153;
              v137 = m_Policy - 2;
              if ( v137 )
              {
                v50 = v161;
                if ( v137 != 1 )
                  goto LABEL_154;
                if ( (v161->Flags & 2) == 0 || v161->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
                  v138 = 1;
                else
                  v138 = 2;
              }
              else
              {
                Method = m_FwdProgContext->m_IoExamineIrp.Method;
                if ( !Method )
                {
LABEL_153:
                  v50 = v161;
LABEL_154:
                  v86 = KeAcquireSpinLockRaiseToDpc(&v9->m_FwdProgContext->m_PendedReserveLock.m_Lock);
                  p_m_ReservedRequestList = &v9->m_FwdProgContext->m_ReservedRequestList;
                  v162 = v86;
                  v88 = p_m_ReservedRequestList->Flink;
                  if ( p_m_ReservedRequestList->Flink != p_m_ReservedRequestList )
                  {
                    if ( v88->Blink == p_m_ReservedRequestList )
                    {
                      v89 = v88->Flink;
                      if ( v88->Flink->Blink == v88 )
                      {
                        p_m_ReservedRequestList->Flink = v89;
                        v16 = (FxRequest *)&v88[-20];
                        v89->Blink = p_m_ReservedRequestList;
                        v90 = (__int64 *)v88;
                        p_m_ReservedRequestInUseList = (__int64)&v9->m_FwdProgContext->m_ReservedRequestInUseList;
                        v92 = v9->m_FwdProgContext->m_ReservedRequestInUseList.Blink;
                        if ( v92->Flink == (_LIST_ENTRY *)p_m_ReservedRequestInUseList )
                        {
                          *v90 = p_m_ReservedRequestInUseList;
                          v90[1] = (__int64)v92;
                          v92->Flink = (_LIST_ENTRY *)v90;
                          *(_QWORD *)(p_m_ReservedRequestInUseList + 8) = v90;
                          v16->m_Irp.m_Irp = v50;
                          FxRequest::AssignMemoryBuffers(v16, (_WDF_DEVICE_IO_TYPE)v9->m_DeviceBase[1].m_Refcnt);
                          if ( v84->FxVerifierOn )
                            FxRequestBase::SetVerifierFlags(v93, 1024);
                          p_m_Lock = &v9->m_FwdProgContext->m_PendedReserveLock.m_Lock;
                          ReservedRequest = v16;
                          KeReleaseSpinLock(p_m_Lock, v162);
                          goto LABEL_69;
                        }
                      }
                    }
LABEL_258:
                    __fastfail(3u);
                  }
                  v48 = FxIoQueue::QueueForwardProgressIrpLocked(v9, v50);
                  KeReleaseSpinLock(&v9->m_FwdProgContext->m_PendedReserveLock.m_Lock, v132);
                  if ( v48 == 259 )
                    goto LABEL_119;
                  if ( v48 >= 0 )
                    goto LABEL_69;
LABEL_118:
                  v75 = v161;
                  v161->IoStatus.Status = v48;
                  v75->IoStatus.Information = 0LL;
                  IofCompleteRequest(v75, 0);
                  goto LABEL_119;
                }
                if ( v9->m_ObjectSize )
                  v140 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
                else
                  v140 = 0LL;
                v50 = v161;
                v138 = Method((WDFQUEUE__ *)v140, v161);
                if ( (unsigned int)(v138 - 1) > 1 )
                {
                  if ( v9->m_ObjectSize )
                    v141 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v141 = 0LL;
                  v48 = -1073741823;
                  WPP_IFR_SF_qdd(v84, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v141, v138, -1073741823);
                  FxVerifierDbgBreakPoint(v84);
                  goto LABEL_118;
                }
              }
              if ( v138 == 1 )
              {
                if ( v9->m_ObjectSize )
                  v131 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v131 = 0LL;
                v48 = -1073741823;
                WPP_IFR_SF_qqd(v84, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v131, v50, 0xC0000001);
                goto LABEL_118;
              }
              goto LABEL_154;
            }
LABEL_116:
            if ( !this->m_Filter || v9 )
            {
              if ( v49 )
              {
                v50 = v161;
                v136 = FxIoQueue::GetReservedRequest(v9, v161, &ReservedRequest);
                v48 = v136;
                if ( v136 == 259 )
                  goto LABEL_119;
                if ( v136 >= 0 )
                {
                  v16 = ReservedRequest;
LABEL_69:
                  v51 = p_m_InCallerContextCallback;
                  if ( p_m_InCallerContextCallback && p_m_InCallerContextCallback->m_Method && !v16->m_Reserved )
                  {
                    v16->m_InternalContext = v9;
                    v102 = this->m_Globals;
                    v50->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                    if ( v102->FxVerifierOn )
                      FxRequestBase::SetVerifierFlags(v16, 33);
                    if ( v16->m_Completed )
                    {
                      if ( v16->m_ObjectSize )
                        v130 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v130 = 0LL;
                      WPP_IFR_SF_q(v16->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v130);
                      FxVerifierDbgBreakPoint(v16->m_Globals);
                    }
                    else
                    {
                      m_CompletionState = v16->m_CompletionState;
                      v16->m_CompletionState = -126;
                      if ( !m_CompletionState )
                      {
                        v114 = _InterlockedExchangeAdd(&v16->m_Refcnt, 1u);
                        v16 = ReservedRequest;
                        v115 = v114 + 1;
                        if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0 )
                        {
                          v116 = ReservedRequest[-1].m_OwnerListEntry2.Blink;
                          if ( v116 )
                            FxTagTracker::UpdateTagHistory(
                              (FxTagTracker *)v116,
                              (void *)0x74617453,
                              1820,
                              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                              TagAddRef,
                              v115);
                        }
                      }
                    }
                    v16->Release(
                      v16,
                      (void *)1952543827,
                      1741,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
                    v16->m_Presented = 1;
                    v104 = this->m_DeviceBase;
                    v105 = 0LL;
                    if ( v16->m_ObjectSize )
                      v105 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
                    m_ObjectSize = v104->m_ObjectSize;
                    if ( v51->m_Method )
                    {
                      v107 = (unsigned __int64)v104 ^ 0xFFFFFFFFFFFFFFF8uLL;
                      if ( !m_ObjectSize )
                        v107 = 0LL;
                      v51->m_Method((WDFDEVICE__ *)v107, (WDFREQUEST__ *)v105);
                    }
                    goto LABEL_186;
                  }
                  m_ObjectFlags = v9->m_ObjectFlags;
                  VerifierLock = (FxVerifierLock *)v16;
                  LOBYTE(v161) = 0;
                  if ( m_ObjectFlags < 0
                    && (v120 = *(FxVerifierLock **)&v9[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                  {
                    FxVerifierLock::Lock(v120, (unsigned __int8 *)&v161, Flink_low);
                    v53 = (unsigned __int8)v161;
                  }
                  else
                  {
                    v53 = KeAcquireSpinLockRaiseToDpc(&v9->m_NPLock.m_Lock);
                    LOBYTE(v161) = v53;
                  }
                  if ( v16->m_Reserved )
                    FxObject::AddRef(
                      v16,
                      (void *)0x50647746,
                      2311,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                  m_QueueState = v9->m_QueueState;
                  if ( (m_QueueState & 1) == 0 )
                  {
                    v76 = v9->m_Globals;
                    v48 = -1073741436;
                    if ( v76->FxVerboseOn )
                    {
                      if ( v16->m_ObjectSize )
                        v143 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v143 = 0LL;
                      v144 = "power stopping (Drain) in progress,";
                      if ( (m_QueueState & 0x10000) == 0 )
                        v144 = a5;
                      if ( v9->m_ObjectSize )
                        v145 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v145 = 0LL;
                      WPP_IFR_SF_qLsqd(
                        v76,
                        5u,
                        (unsigned int)v145,
                        0x29u,
                        traceGuid,
                        v145,
                        m_QueueState,
                        v144,
                        v143,
                        -1073741436);
                    }
                    if ( SLOBYTE(v9->m_ObjectFlags) < 0
                      && (v121 = *(FxVerifierLock **)&v9[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                    {
                      FxVerifierLock::Unlock(v121, v53, v54);
                    }
                    else
                    {
                      KeReleaseSpinLock(&v9->m_NPLock.m_Lock, v53);
                    }
                    v16->m_Irp.m_Irp->IoStatus.Information = 0LL;
                    v77 = v16->m_DeviceBase;
                    v78 = v16->m_Globals;
                    if ( v78->FxVerboseOn )
                    {
                      v146 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !v16->m_ObjectSize )
                        v146 = 0LL;
                      WPP_IFR_SF_qiid(
                        v78,
                        5u,
                        0x10u,
                        0xBu,
                        WPP_FxRequest_hpp_Traceguids,
                        v146,
                        v16->m_Irp.m_Irp,
                        v16->m_Irp.m_Irp->IoStatus.Information,
                        -1073741436);
                    }
                    if ( v77 )
                      m_Globals_high = HIBYTE(v77[1].m_Globals);
                    else
                      m_Globals_high = 0;
                    v16->m_PriorityBoost = m_Globals_high;
                    FxRequest::CompleteInternal(v16, -1073741436);
                    v16->Release(
                      v16,
                      (void *)1886220099,
                      2338,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                    goto LABEL_119;
                  }
                  v56 = v9->m_Globals;
                  if ( v56->FxVerboseOn )
                  {
                    if ( v9->m_ObjectSize )
                      v142 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v142 = 0LL;
                    if ( v16->m_ObjectSize )
                      v15 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    WPP_IFR_SF_qq(v56, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v15, v142);
                  }
                  if ( v16->m_Globals->FxVerifierIO )
                  {
                    LOBYTE(globals) = 0;
                    FxNonPagedObject::Lock(v16, (unsigned __int8 *)&globals);
                    FxRequest::VerifyRequestIsNotCompleted(v16, v16->m_Globals);
                    FxNonPagedObject::Unlock(v16, (unsigned __int8)globals);
                  }
                  v16->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                  if ( v16->m_Reserved )
                  {
                    if ( v9->m_Dispatching )
                    {
                      FxIoQueue::InsertNewRequestLocked(v9, (FxRequest **)&VerifierLock, (unsigned __int8)v161);
                      FxNonPagedObject::Unlock(v9, (unsigned __int8)v161);
LABEL_186:
                      v48 = 259;
                      goto LABEL_119;
                    }
                    v16 = ReservedRequest;
                    v53 = (unsigned __int8)v161;
                  }
                  FxIoQueue::DispatchEvents(v9, v53, v16);
                  v48 = 259;
LABEL_119:
                  if ( v163 )
                    KeLeaveCriticalRegion();
                  return v48;
                }
              }
              else
              {
                WPP_IFR_SF_D(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v48);
              }
            }
            goto LABEL_118;
          }
          if ( v9->m_IoWrite.Method )
            goto LABEL_7;
        }
      }
$Forward:
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
    v38 = this->m_InCallerContextCallback.m_Method == 0LL;
    p_m_InCallerContextCallback = &this->m_InCallerContextCallback;
    if ( !v38 )
      goto LABEL_6;
    if ( this->m_Filter )
      goto $Forward;
    v73 = -1073741808;
    v122 = this->m_DeviceBase;
    v123 = v122->m_ObjectSize;
    v124 = (const void *)((unsigned __int64)v122 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v123 )
      v124 = 0LL;
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xDu, 0xFu, WPP_FxPkgIo_cpp_Traceguids, v124, Irp, 0xC0000010);
    goto $CompleteIrp_0;
  }
  v68 = Irp->Tail.Overlay.CurrentStackLocation;
  v69 = v68->MajorFunction;
  switch ( v69 )
  {
    case 3:
      v70 = 1LL;
      v71 = 24LL;
      break;
    case 4:
      v70 = 2LL;
      v71 = 40LL;
      break;
    case 14:
      v70 = 3LL;
      v71 = 56LL;
      break;
    case 15:
      v70 = 4LL;
      v71 = 72LL;
      break;
    default:
      v73 = -1073741811;
      v133 = this->m_DeviceBase;
      v134 = v133->m_ObjectSize;
      v135 = (const void *)((unsigned __int64)v133 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v134 )
        v135 = 0LL;
      WPP_IFR_SF_qcDqd(
        this->m_Globals,
        v69,
        0xDu,
        0xEu,
        WPP_FxPkgIo_cpp_Traceguids,
        Irp,
        v69,
        v68->MinorFunction,
        v135,
        v148);
      FxVerifierDbgBreakPoint(this->m_Globals);
      goto $CompleteIrp_0;
  }
  v72 = this->m_Globals;
  if ( v72->FxVerifierOn )
  {
    v73 = FxPkgIo::Vf_VerifyDispatchContext(this, v72, v4);
    if ( v73 < 0 )
    {
$CompleteIrp_0:
      Irp->IoStatus.Status = v73;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v73;
    }
  }
  while ( 1 )
  {
    v95 = v4[v70].Flink;
    v96 = v4;
    v4 = v4->Flink;
    if ( v95 )
      break;
    if ( v4 == p_m_DynamicDispatchInfoListHead )
      goto LABEL_2;
  }
  v97 = this->m_DeviceBase;
  v98 = *(__int64 *)((char *)&v96->Flink + v71);
  v99 = v97->m_ObjectSize;
  v100 = (unsigned __int64)v97 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v99 )
    v100 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _IRP *, unsigned __int64))v95)(
           v100,
           Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
           v98,
           Irp,
           (unsigned __int64)v4 | 1);
}
