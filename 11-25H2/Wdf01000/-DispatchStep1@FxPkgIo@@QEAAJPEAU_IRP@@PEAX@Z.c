/*
 * XREFs of ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140028E00
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x140028D30 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x14005C640 (imp_WdfDeviceWdmDispatchIrp.c)
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
 *     WPP_IFR_SF_qcDqd @ 0x14007F450 (WPP_IFR_SF_qcDqd.c)
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
  PSLIST_ENTRY v19; // rax
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
  unsigned __int16 v55; // r9
  unsigned int m_QueueState; // eax
  _FX_DRIVER_GLOBALS *v57; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  _LIST_ENTRY *Flink; // rdi
  signed int _a1; // r15d
  _WDF_BUGCHECK_CODES v66; // edx
  _FX_DRIVER_GLOBALS *v67; // rcx
  const char *DriverName; // r12
  _IO_STACK_LOCATION *v69; // r8
  int v70; // edx
  __int64 v71; // rsi
  __int64 v72; // r14
  _FX_DRIVER_GLOBALS *v73; // rdx
  int v74; // r12d
  PIRP v76; // rcx
  _FX_DRIVER_GLOBALS *v77; // rcx
  unsigned __int8 v78; // r8
  FxDeviceBase *v79; // rbx
  _FX_DRIVER_GLOBALS *v80; // rcx
  char m_Globals_high; // al
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  _FX_DRIVER_GLOBALS *v86; // r15
  _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY m_Policy; // ecx
  KIRQL v88; // al
  _LIST_ENTRY *p_m_ReservedRequestList; // rcx
  _LIST_ENTRY *v90; // rax
  _LIST_ENTRY *v91; // rdx
  __int64 *v92; // rcx
  __int64 p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *v94; // r8
  FxRequestBase *v95; // rcx
  unsigned __int64 *p_m_Lock; // rcx
  _LIST_ENTRY *v97; // r12
  _LIST_ENTRY *v98; // r11
  FxDeviceBase *v99; // rcx
  __int64 v100; // r11
  unsigned __int16 v101; // r9
  unsigned __int64 v102; // rcx
  FX_POOL *NonPagedBytes; // rax
  _FX_DRIVER_GLOBALS *v104; // rcx
  unsigned __int8 m_CompletionState; // al
  FxDeviceBase *v106; // rcx
  unsigned __int64 v107; // rdx
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v109; // rcx
  KIRQL v110; // r8
  unsigned __int16 **v111; // rdx
  unsigned __int16 *v112; // rcx
  KIRQL v113; // dl
  unsigned __int8 v114; // dl
  unsigned __int16 v115; // r9
  signed __int32 v116; // edx
  unsigned int v117; // edx
  _LIST_ENTRY *v118; // rcx
  void *v119; // rbx
  KIRQL v120; // al
  KIRQL v121; // al
  FxVerifierLock *v122; // rcx
  FxVerifierLock *v123; // rcx
  FxDeviceBase *v124; // rcx
  unsigned __int16 v125; // ax
  const void *v126; // rcx
  _FX_DRIVER_GLOBALS *v127; // rdx
  signed int v128; // r15d
  _WDF_BUGCHECK_CODES v129; // edx
  _FX_DRIVER_GLOBALS *v130; // rcx
  const char *v131; // r12
  const void *v132; // rax
  const void *v133; // rsi
  KIRQL v134; // r10
  FxDeviceBase *v135; // rcx
  unsigned __int16 v136; // ax
  const void *v137; // rcx
  int v138; // eax
  __int32 v139; // ecx
  int v140; // eax
  _WDF_IO_FORWARD_PROGRESS_ACTION (__fastcall *Method)(WDFQUEUE__ *, _IRP *); // rax
  unsigned __int64 v142; // rcx
  const void *v143; // rsi
  const void *v144; // rax
  unsigned __int8 v145; // r8
  unsigned __int8 v146; // r8
  const void *v147; // rdx
  const char *v148; // r10
  const void *v149; // r8
  const void *v150; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  int v152; // [rsp+48h] [rbp-31h]
  KIRQL v153; // [rsp+50h] [rbp-29h]
  FxRequest *ReservedRequest; // [rsp+58h] [rbp-21h] BYREF
  FxObject *v155; // [rsp+60h] [rbp-19h]
  FxObject *v156; // [rsp+68h] [rbp-11h] BYREF
  FxIoInCallerContext *p_m_InCallerContextCallback; // [rsp+70h] [rbp-9h]
  FxVerifierLock *VerifierLock; // [rsp+78h] [rbp-1h] BYREF
  FxObject **v159; // [rsp+80h] [rbp+7h] BYREF
  __int16 v160; // [rsp+88h] [rbp+Fh]
  __int16 v161; // [rsp+8Ah] [rbp+11h]
  int v162; // [rsp+8Ch] [rbp+13h]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  void *globals; // [rsp+E0h] [rbp+67h] BYREF
  PIRP v165; // [rsp+E8h] [rbp+6Fh] BYREF
  KIRQL v166; // [rsp+F0h] [rbp+77h]
  char v167; // [rsp+F8h] [rbp+7Fh]

  v165 = Irp;
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
              goto $Forward_0;
LABEL_7:
            v167 = 0;
            v166 = v9 && v9->m_SupportForwardProgress;
            if ( KeGetCurrentIrql() <= 1u )
            {
              KeEnterCriticalRegion();
              v167 = 1;
            }
            if ( v9 && (v12 = v9->m_CxDeviceInfo) != 0LL )
              p_RequestAttributes = (_WDF_EXECUTION_LEVEL *)&v12->RequestAttributes;
            else
              p_RequestAttributes = &this->m_DeviceBase[2].m_ExecutionLevel;
            m_DeviceBase = this->m_DeviceBase;
            v15 = 0LL;
            v155 = m_DeviceBase;
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
              v19 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&VerifierLock->m_Mutex.m_Lock.Count)(
                                    *((unsigned int *)&VerifierLock->m_OldIrql + 1),
                                    *((unsigned int *)&VerifierLock->m_Mutex.m_DbgFlagIsInitialized + 1),
                                    *(unsigned int *)&VerifierLock->m_Mutex.m_DbgFlagIsInitialized);
            }
            else
            {
              v19 = FxAllocateFromNPagedLookasideList((_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock, v18);
            }
            v21 = (FX_POOL_TRACKER *)v19;
LABEL_19:
            if ( !v21 )
              goto LABEL_217;
            v22 = (_LIST_ENTRY *)globals;
            if ( *((_BYTE *)globals + 272) )
            {
              FxPoolInsertNonPagedAllocateTracker(
                (FX_POOL *)((char *)globals + 112),
                v21,
                v155[5].m_SpinLock.m_Lock,
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
              p_m_ParentObject = &v155[5].m_ParentObject;
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
              WPP_IFR_SF_D(v155->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
              goto LABEL_65;
            }
            flags = v155;
            p_Pool[2] = (FX_POOL *)v155->m_Globals;
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
              v127 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
              if ( v127->FxVerifierLock )
              {
                VerifierLock = 0LL;
                FxVerifierLock::CreateAndInitialize(&VerifierLock, v127, (FxObject *)p_Pool);
                *(p_Pool - 5) = (FX_POOL *)VerifierLock;
              }
            }
            v29 = v165;
            p_Pool[19] = (FX_POOL *)v165;
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
              v156 = 0LL;
              flags = 0LL;
              if ( v36 )
              {
                if ( p_RequestAttributes )
                {
                  if ( *((_DWORD *)p_RequestAttributes + 6) == 2 )
                  {
                    v120 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
                    *((_WORD *)p_Pool + 12) |= 0x11u;
                    KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v120);
                    flags = v156;
                  }
                  v58 = *((_QWORD *)p_RequestAttributes + 4);
                  globals = (void *)v58;
                  if ( v58 )
                  {
                    LOWORD(v59) = 0;
                    flags = (FxObject *)(~v58 & 0xFFFFFFFFFFFFFFF8uLL);
                    if ( (v58 & 1) != 0 )
                    {
                      v59 = LOWORD(flags->__vftable);
                      flags = (FxObject *)((char *)flags - v59);
                    }
                    if ( flags->m_Type == 4096 )
                    {
                      v156 = flags;
                    }
                    else
                    {
                      v160 = 4096;
                      v159 = &v156;
                      v161 = v59;
                      v162 = 0;
                      if ( ((int (__fastcall *)(FxObject *, FxObject ***, __int64, __int64))flags->QueryInterface)(
                             flags,
                             &v159,
                             Flink_low,
                             v31) < 0 )
                      {
                        v119 = globals;
                        WPP_IFR_SF_qDqD(
                          flags->m_Globals,
                          v114,
                          Flink_low,
                          v115,
                          traceGuid,
                          globals,
                          0x1000u,
                          flags,
                          flags->m_Type);
                        FxVerifierBugCheckWorker(
                          flags->m_Globals,
                          WDF_INVALID_HANDLE,
                          (unsigned __int64)v119,
                          0x1000uLL);
                      }
                      flags = v156;
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
                  v110 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
                  v153 = v110;
                  if ( flags->m_ObjectState != 1 )
                  {
LABEL_281:
                    FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v153);
                    goto LABEL_256;
                  }
                  v111 = (unsigned __int16 **)flags->m_ChildListHead.Blink;
                  v112 = (unsigned __int16 *)(p_Pool + 9);
                  if ( *v111 != (unsigned __int16 *)&flags->m_ChildListHead )
                    goto LABEL_258;
                  *(_QWORD *)v112 = &flags->m_ChildListHead;
                  p_Pool[10] = (FX_POOL *)v111;
                  *v111 = v112;
                  flags->m_ChildListHead.Blink = (_LIST_ENTRY *)v112;
                  if ( !p_Pool[12] )
                    p_Pool[12] = (FX_POOL *)flags->m_DeviceBase;
                  KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v110);
                  v113 = (unsigned __int8)globals;
                  p_Pool[8] = (FX_POOL *)flags;
                  KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v113);
                }
                if ( p_RequestAttributes )
                {
                  v60 = *((unsigned __int16 *)p_Pool + 5);
                  if ( (_WORD)v60 )
                    v61 = (__int64)p_Pool + v60;
                  else
                    v61 = 0LL;
                  v62 = *((_QWORD *)p_RequestAttributes + 2);
                  if ( v62 )
                    *(_QWORD *)(v61 + 24) = v62;
                  v63 = *((_QWORD *)p_RequestAttributes + 1);
                  if ( v63 )
                  {
                    *(_QWORD *)(v61 + 16) = v63;
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
                  v67 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
                  DriverName = v67->Public.DriverName;
                  FxLiveDump(v67, v66, (unsigned __int64)v67->Public.DriverName, _a1);
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
                  v121 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
                  *((_WORD *)p_Pool + 12) |= 0x11u;
                  KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v121);
                }
                v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
                v38 = *((_WORD *)p_Pool + 13) == 1;
                LOBYTE(globals) = v37;
                if ( v38 )
                {
                  if ( !p_Pool[8] )
                  {
                    v39 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
                    v153 = v39;
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
                        v128 = _InterlockedIncrement((volatile signed __int32 *)&v47[1]);
                        if ( v128 >= SHIDWORD(v47->Blink)
                          && !KeGetCurrentIrql()
                          && !_InterlockedCompareExchange((volatile signed __int32 *)v47, 1, 0) )
                        {
                          WPP_IFR_SF_D(
                            (_FX_DRIVER_GLOBALS *)p_Pool[2],
                            2u,
                            0x14u,
                            0xFu,
                            WPP_FxObject_cpp_Traceguids,
                            v128);
                          if ( BYTE4(v47->Flink) )
                            DbgBreakPoint();
                          v130 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
                          v131 = v130->Public.DriverName;
                          FxLiveDump(v130, v129, (unsigned __int64)v130->Public.DriverName, v128);
                          if ( v128 >= SHIDWORD(v47->Blink) )
                            MicrosoftTelemetryAssertTriggeredArgsKM(v131, v128, 0);
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
            WPP_IFR_SF_D(v155->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v48);
            FxObject::DeleteFromFailedCreate((FxObject *)p_Pool);
LABEL_65:
            v49 = v166;
            if ( v166 )
            {
              if ( v48 < 0 )
                goto LABEL_116;
              if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
                goto LABEL_142;
              v48 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, v16);
              v49 = v166;
            }
            if ( v48 >= 0 )
            {
              if ( !v49 )
              {
LABEL_68:
                v50 = v165;
                goto LABEL_69;
              }
LABEL_142:
              if ( !v9->m_FwdProgContext->m_IoResourcesAllocate.Method )
                goto LABEL_68;
              v16->m_Presented = 1;
              v82 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
              if ( !v16->m_ObjectSize )
                v82 = 0LL;
              v83 = v9->m_ObjectSize ? (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
              if ( v9->m_FwdProgContext->m_IoResourcesAllocate.Method((WDFQUEUE__ *)v83, (WDFREQUEST__ *)v82) >= 0 )
                goto LABEL_68;
              m_RequestContext = v16->m_RequestContext;
              if ( m_RequestContext )
                m_RequestContext->ReleaseAndRestore(m_RequestContext, v16);
              if ( !v16->m_Presented )
                FxObject::ClearEvtCallbacks(v16);
              v16->DeleteObject(v16);
              m_FwdProgContext = v9->m_FwdProgContext;
              v16 = 0LL;
              v86 = v9->m_Globals;
              ReservedRequest = 0LL;
              m_Policy = m_FwdProgContext->m_Policy;
              if ( m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
                goto LABEL_153;
              v139 = m_Policy - 2;
              if ( v139 )
              {
                v50 = v165;
                if ( v139 != 1 )
                  goto LABEL_154;
                if ( (v165->Flags & 2) == 0 || v165->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
                  v140 = 1;
                else
                  v140 = 2;
              }
              else
              {
                Method = m_FwdProgContext->m_IoExamineIrp.Method;
                if ( !Method )
                {
LABEL_153:
                  v50 = v165;
LABEL_154:
                  v88 = KeAcquireSpinLockRaiseToDpc(&v9->m_FwdProgContext->m_PendedReserveLock.m_Lock);
                  p_m_ReservedRequestList = &v9->m_FwdProgContext->m_ReservedRequestList;
                  v166 = v88;
                  v90 = p_m_ReservedRequestList->Flink;
                  if ( p_m_ReservedRequestList->Flink != p_m_ReservedRequestList )
                  {
                    if ( v90->Blink == p_m_ReservedRequestList )
                    {
                      v91 = v90->Flink;
                      if ( v90->Flink->Blink == v90 )
                      {
                        p_m_ReservedRequestList->Flink = v91;
                        v16 = (FxRequest *)&v90[-20];
                        v91->Blink = p_m_ReservedRequestList;
                        v92 = (__int64 *)v90;
                        p_m_ReservedRequestInUseList = (__int64)&v9->m_FwdProgContext->m_ReservedRequestInUseList;
                        v94 = v9->m_FwdProgContext->m_ReservedRequestInUseList.Blink;
                        if ( v94->Flink == (_LIST_ENTRY *)p_m_ReservedRequestInUseList )
                        {
                          *v92 = p_m_ReservedRequestInUseList;
                          v92[1] = (__int64)v94;
                          v94->Flink = (_LIST_ENTRY *)v92;
                          *(_QWORD *)(p_m_ReservedRequestInUseList + 8) = v92;
                          v16->m_Irp.m_Irp = v50;
                          FxRequest::AssignMemoryBuffers(v16, (_WDF_DEVICE_IO_TYPE)v9->m_DeviceBase[1].m_Refcnt);
                          if ( v86->FxVerifierOn )
                            FxRequestBase::SetVerifierFlags(v95, 1024);
                          p_m_Lock = &v9->m_FwdProgContext->m_PendedReserveLock.m_Lock;
                          ReservedRequest = v16;
                          KeReleaseSpinLock(p_m_Lock, v166);
                          goto LABEL_69;
                        }
                      }
                    }
LABEL_258:
                    __fastfail(3u);
                  }
                  v48 = FxIoQueue::QueueForwardProgressIrpLocked(v9, v50);
                  KeReleaseSpinLock(&v9->m_FwdProgContext->m_PendedReserveLock.m_Lock, v134);
                  if ( v48 == 259 )
                    goto LABEL_119;
                  if ( v48 >= 0 )
                    goto LABEL_69;
LABEL_118:
                  v76 = v165;
                  v165->IoStatus.Status = v48;
                  v76->IoStatus.Information = 0LL;
                  IofCompleteRequest(v76, 0);
                  goto LABEL_119;
                }
                if ( v9->m_ObjectSize )
                  v142 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
                else
                  v142 = 0LL;
                v50 = v165;
                v140 = Method((WDFQUEUE__ *)v142, v165);
                if ( (unsigned int)(v140 - 1) > 1 )
                {
                  if ( v9->m_ObjectSize )
                    v143 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v143 = 0LL;
                  v48 = -1073741823;
                  WPP_IFR_SF_qdd(v86, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v143, v140, -1073741823);
                  FxVerifierDbgBreakPoint(v86);
                  goto LABEL_118;
                }
              }
              if ( v140 == 1 )
              {
                if ( v9->m_ObjectSize )
                  v133 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v133 = 0LL;
                v48 = -1073741823;
                WPP_IFR_SF_qqd(v86, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v133, v50, 0xC0000001);
                goto LABEL_118;
              }
              goto LABEL_154;
            }
LABEL_116:
            if ( !this->m_Filter || v9 )
            {
              if ( v49 )
              {
                v50 = v165;
                v138 = FxIoQueue::GetReservedRequest(v9, v165, &ReservedRequest);
                v48 = v138;
                if ( v138 == 259 )
                  goto LABEL_119;
                if ( v138 >= 0 )
                {
                  v16 = ReservedRequest;
LABEL_69:
                  v51 = p_m_InCallerContextCallback;
                  if ( p_m_InCallerContextCallback && p_m_InCallerContextCallback->m_Method && !v16->m_Reserved )
                  {
                    v16->m_InternalContext = v9;
                    v104 = this->m_Globals;
                    v50->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                    if ( v104->FxVerifierOn )
                      FxRequestBase::SetVerifierFlags(v16, 33);
                    if ( v16->m_Completed )
                    {
                      if ( v16->m_ObjectSize )
                        v132 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v132 = 0LL;
                      WPP_IFR_SF_q(v16->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v132);
                      FxVerifierDbgBreakPoint(v16->m_Globals);
                    }
                    else
                    {
                      m_CompletionState = v16->m_CompletionState;
                      v16->m_CompletionState = -126;
                      if ( !m_CompletionState )
                      {
                        v116 = _InterlockedExchangeAdd(&v16->m_Refcnt, 1u);
                        v16 = ReservedRequest;
                        v117 = v116 + 1;
                        if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0 )
                        {
                          v118 = ReservedRequest[-1].m_OwnerListEntry2.Blink;
                          if ( v118 )
                            FxTagTracker::UpdateTagHistory(
                              (FxTagTracker *)v118,
                              (void *)0x74617453,
                              1820,
                              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                              TagAddRef,
                              v117);
                        }
                      }
                    }
                    v16->Release(
                      v16,
                      (void *)1952543827,
                      1741,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
                    v16->m_Presented = 1;
                    v106 = this->m_DeviceBase;
                    v107 = 0LL;
                    if ( v16->m_ObjectSize )
                      v107 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
                    m_ObjectSize = v106->m_ObjectSize;
                    if ( v51->m_Method )
                    {
                      v109 = (unsigned __int64)v106 ^ 0xFFFFFFFFFFFFFFF8uLL;
                      if ( !m_ObjectSize )
                        v109 = 0LL;
                      v51->m_Method((WDFDEVICE__ *)v109, (WDFREQUEST__ *)v107);
                    }
                    goto LABEL_186;
                  }
                  m_ObjectFlags = v9->m_ObjectFlags;
                  VerifierLock = (FxVerifierLock *)v16;
                  LOBYTE(v165) = 0;
                  if ( m_ObjectFlags < 0
                    && (v122 = *(FxVerifierLock **)&v9[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                  {
                    FxVerifierLock::Lock(v122, (unsigned __int8 *)&v165, Flink_low);
                    v53 = (unsigned __int8)v165;
                  }
                  else
                  {
                    v53 = KeAcquireSpinLockRaiseToDpc(&v9->m_NPLock.m_Lock);
                    LOBYTE(v165) = v53;
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
                    v77 = v9->m_Globals;
                    v48 = -1073741436;
                    if ( v77->FxVerboseOn )
                    {
                      if ( v16->m_ObjectSize )
                        v147 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v147 = 0LL;
                      v148 = "power stopping (Drain) in progress,";
                      if ( (m_QueueState & 0x10000) == 0 )
                        v148 = a5;
                      if ( v9->m_ObjectSize )
                        v149 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v149 = 0LL;
                      WPP_IFR_SF_qLsqd(
                        v77,
                        5u,
                        (unsigned int)v149,
                        0x29u,
                        traceGuid,
                        v149,
                        m_QueueState,
                        v148,
                        v147,
                        -1073741436);
                    }
                    if ( SLOBYTE(v9->m_ObjectFlags) < 0
                      && (v123 = *(FxVerifierLock **)&v9[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                    {
                      FxVerifierLock::Unlock(v123, v53, v54);
                    }
                    else
                    {
                      KeReleaseSpinLock(&v9->m_NPLock.m_Lock, v53);
                    }
                    v16->m_Irp.m_Irp->IoStatus.Information = 0LL;
                    v79 = v16->m_DeviceBase;
                    v80 = v16->m_Globals;
                    if ( v80->FxVerboseOn )
                    {
                      v150 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !v16->m_ObjectSize )
                        v150 = 0LL;
                      WPP_IFR_SF_qiid(
                        v80,
                        5u,
                        0x10u,
                        0xBu,
                        WPP_FxRequest_hpp_Traceguids,
                        v150,
                        v16->m_Irp.m_Irp,
                        v16->m_Irp.m_Irp->IoStatus.Information,
                        -1073741436);
                    }
                    if ( v79 )
                      m_Globals_high = HIBYTE(v79[1].m_Globals);
                    else
                      m_Globals_high = 0;
                    v16->m_PriorityBoost = m_Globals_high;
                    FxRequest::CompleteInternal(v16, 0xC0000184, v78);
                    v16->Release(
                      v16,
                      (void *)1886220099,
                      2338,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                    goto LABEL_119;
                  }
                  v57 = v9->m_Globals;
                  if ( v57->FxVerboseOn )
                  {
                    if ( v9->m_ObjectSize )
                      v144 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v144 = 0LL;
                    if ( v16->m_ObjectSize )
                      v15 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    WPP_IFR_SF_qq(v57, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v15, v144);
                  }
                  if ( v16->m_Globals->FxVerifierIO )
                  {
                    LOBYTE(globals) = 0;
                    FxNonPagedObject::Lock(v16, (unsigned __int8 *)&globals, v54);
                    FxRequest::VerifyRequestIsNotCompleted(v16, v16->m_Globals);
                    FxNonPagedObject::Unlock(v16, (unsigned __int8)globals, v145);
                  }
                  v16->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                  if ( v16->m_Reserved )
                  {
                    if ( v9->m_Dispatching )
                    {
                      FxIoQueue::InsertNewRequestLocked(v9, (FxRequest **)&VerifierLock, (unsigned __int8)v165);
                      FxNonPagedObject::Unlock(v9, (unsigned __int8)v165, v146);
LABEL_186:
                      v48 = 259;
                      goto LABEL_119;
                    }
                    v16 = ReservedRequest;
                    v53 = (unsigned __int8)v165;
                  }
                  FxIoQueue::DispatchEvents(v9, v53, v16, v55);
                  v48 = 259;
LABEL_119:
                  if ( v167 )
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
$Forward_0:
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
      goto $Forward_0;
    v74 = -1073741808;
    v124 = this->m_DeviceBase;
    v125 = v124->m_ObjectSize;
    v126 = (const void *)((unsigned __int64)v124 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v125 )
      v126 = 0LL;
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xDu, 0xFu, WPP_FxPkgIo_cpp_Traceguids, v126, Irp, 0xC0000010);
    goto $CompleteIrp_0;
  }
  v69 = Irp->Tail.Overlay.CurrentStackLocation;
  v70 = v69->MajorFunction;
  switch ( v70 )
  {
    case 3:
      v71 = 1LL;
      v72 = 24LL;
      break;
    case 4:
      v71 = 2LL;
      v72 = 40LL;
      break;
    case 14:
      v71 = 3LL;
      v72 = 56LL;
      break;
    case 15:
      v71 = 4LL;
      v72 = 72LL;
      break;
    default:
      v74 = -1073741811;
      v135 = this->m_DeviceBase;
      v136 = v135->m_ObjectSize;
      v137 = (const void *)((unsigned __int64)v135 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v136 )
        v137 = 0LL;
      WPP_IFR_SF_qcDqd(
        this->m_Globals,
        v70,
        0xDu,
        0xEu,
        WPP_FxPkgIo_cpp_Traceguids,
        Irp,
        v70,
        v69->MinorFunction,
        v137,
        v152);
      FxVerifierDbgBreakPoint(this->m_Globals);
      goto $CompleteIrp_0;
  }
  v73 = this->m_Globals;
  if ( v73->FxVerifierOn )
  {
    v74 = FxPkgIo::Vf_VerifyDispatchContext(this, v73, v4);
    if ( v74 < 0 )
    {
$CompleteIrp_0:
      Irp->IoStatus.Status = v74;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v74;
    }
  }
  while ( 1 )
  {
    v97 = v4[v71].Flink;
    v98 = v4;
    v4 = v4->Flink;
    if ( v97 )
      break;
    if ( v4 == p_m_DynamicDispatchInfoListHead )
      goto LABEL_2;
  }
  v99 = this->m_DeviceBase;
  v100 = *(__int64 *)((char *)&v98->Flink + v72);
  v101 = v99->m_ObjectSize;
  v102 = (unsigned __int64)v99 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v101 )
    v102 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _IRP *, unsigned __int64))v97)(
           v102,
           Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
           v100,
           Irp,
           (unsigned __int64)v4 | 1);
}
