/*
 * XREFs of PsOpenProcess @ 0x140854350
 * Callers:
 *     NtOpenProcess @ 0x140854320 (NtOpenProcess.c)
 *     NtAlpcOpenSenderProcess @ 0x14093E390 (NtAlpcOpenSenderProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403EBC80 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x140401610 (SepDeleteAccessState.c)
 *     SepPrivilegeCheck @ 0x140403670 (SepPrivilegeCheck.c)
 *     ExLockHandleTableEntry @ 0x140409050 (ExLockHandleTableEntry.c)
 *     PsIsProcessInSilo @ 0x14040EF20 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140445670 (ExSlowReplenishHandleTableEntry.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE AccessMode)
{
  char v9; // dl
  int v10; // r12d
  __int64 v11; // rcx
  bool v12; // cl
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  signed __int64 *v16; // rax
  signed __int64 *v17; // rdi
  __int64 v18; // r15
  signed __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int128 v21; // rt0
  unsigned __int8 v22; // tt
  _BYTE *HandlePointer; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v25; // rdi
  bool v26; // zf
  int v27; // r13d
  _DWORD *v28; // r15
  struct _KTHREAD *v29; // rdi
  __int64 Process; // r14
  _QWORD *v31; // rbx
  ULONG_PTR v32; // rax
  int v33; // ebx
  char v34; // di
  LUID v35; // rbx
  unsigned int v36; // r14d
  _QWORD **ClientToken; // rbx
  char v38; // r15
  _QWORD *PrimaryToken; // r13
  _QWORD **v40; // rcx
  void *v41; // rdi
  _KPROCESS *v42; // rdx
  signed __int64 v43; // rbx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v45; // rtt
  ULONG v46; // edi
  NTSTATUS v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  PSE_EXPORTS v55; // r15
  _QWORD *v56; // rbx
  int v57; // eax
  int v58; // r15d
  signed __int64 v59; // rax
  signed __int64 v60; // rtt
  __int64 v61; // rcx
  int v62; // edi
  LUID *v63; // r8
  __int64 v64; // r9
  __int64 **v65; // rcx
  _DWORD *v66; // rax
  LUID *v67; // r8
  __int64 v68; // r9
  LUID **v69; // rcx
  LUID *v70; // rax
  PVOID v71; // rdi
  signed __int32 v72[8]; // [rsp+0h] [rbp-3A8h] BYREF
  char v73; // [rsp+40h] [rbp-368h]
  bool v74; // [rsp+41h] [rbp-367h]
  char v75; // [rsp+42h] [rbp-366h]
  char v76; // [rsp+43h] [rbp-365h] BYREF
  KPROCESSOR_MODE v77; // [rsp+44h] [rbp-364h] BYREF
  ULONG HandleAttributes; // [rsp+48h] [rbp-360h]
  int v79; // [rsp+4Ch] [rbp-35Ch]
  unsigned int ProcessId; // [rsp+50h] [rbp-358h] BYREF
  int v81; // [rsp+58h] [rbp-350h] BYREF
  ULONG v82; // [rsp+60h] [rbp-348h] BYREF
  struct _KTHREAD *v83; // [rsp+68h] [rbp-340h]
  int v84; // [rsp+70h] [rbp-338h]
  PVOID Object; // [rsp+78h] [rbp-330h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-328h] BYREF
  __int128 v87; // [rsp+A0h] [rbp-308h] BYREF
  PVOID v88; // [rsp+B0h] [rbp-2F8h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-2F0h] BYREF
  HANDLE ThreadId[2]; // [rsp+C0h] [rbp-2E8h]
  _QWORD *v91; // [rsp+D0h] [rbp-2D8h] BYREF
  __int128 v92; // [rsp+D8h] [rbp-2D0h]
  __int64 v93; // [rsp+E8h] [rbp-2C0h]
  __int64 v94; // [rsp+F0h] [rbp-2B8h] BYREF
  _QWORD *v95; // [rsp+F8h] [rbp-2B0h]
  __int128 v96; // [rsp+108h] [rbp-2A0h]
  unsigned int v97[2]; // [rsp+118h] [rbp-290h] BYREF
  LUID v98; // [rsp+120h] [rbp-288h] BYREF
  int v99; // [rsp+128h] [rbp-280h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+130h] [rbp-278h] BYREF
  _QWORD v101[28]; // [rsp+1D0h] [rbp-1D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B0h] [rbp-F8h] BYREF
  int *v103; // [rsp+2C0h] [rbp-E8h]
  __int64 v104; // [rsp+2C8h] [rbp-E0h]
  unsigned int *v105; // [rsp+2D0h] [rbp-D8h]
  __int64 v106; // [rsp+2D8h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+2E0h] [rbp-C8h] BYREF
  unsigned int *p_ProcessId; // [rsp+300h] [rbp-A8h]
  __int64 v109; // [rsp+308h] [rbp-A0h]
  int *v110; // [rsp+310h] [rbp-98h]
  __int64 v111; // [rsp+318h] [rbp-90h]
  ULONG *v112; // [rsp+320h] [rbp-88h]
  __int64 v113; // [rsp+328h] [rbp-80h]
  char *v114; // [rsp+330h] [rbp-78h]
  __int64 v115; // [rsp+338h] [rbp-70h]
  KPROCESSOR_MODE *v116; // [rsp+340h] [rbp-68h]
  __int64 v117; // [rsp+348h] [rbp-60h]
  __int64 *v118; // [rsp+350h] [rbp-58h]
  __int64 v119; // [rsp+358h] [rbp-50h]

  v95 = (_QWORD *)a1;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  HandleAttributes = 0;
  memset_0(v101, 0, sizeof(v101));
  *(_OWORD *)ThreadId = 0LL;
  v9 = 0;
  v75 = 0;
  Handle = 0LL;
  v74 = 0;
  v10 = 0;
  LODWORD(v83) = 0;
  Object = 0LL;
  v84 = -1;
  if ( a5 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v11 = a1;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (a3 & 3) != 0 )
      goto LABEL_9;
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    v74 = v12;
    HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( !a4 )
    {
      v9 = 0;
      v75 = 0;
      goto LABEL_10;
    }
    if ( ((unsigned __int8)a4 & 3) != 0 )
LABEL_9:
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)ThreadId = *a4;
    v9 = 1;
    v75 = 1;
    v12 = v74;
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    v74 = v12;
    v57 = 73714;
    if ( AccessMode )
      v57 = 7666;
    HandleAttributes = *(_DWORD *)(a3 + 24) & v57;
    if ( a4 )
    {
      *(_OWORD *)ThreadId = *a4;
      v9 = 1;
      v75 = 1;
    }
  }
LABEL_10:
  if ( v12 || !v9 )
  {
    v33 = -1073741776;
    goto LABEL_63;
  }
  if ( ThreadId[1] )
  {
    v88 = 0LL;
    v33 = PsLookupThreadByThreadId(ThreadId[1], (PETHREAD *)&v88);
    if ( v33 < 0 )
      goto LABEL_63;
    v71 = v88;
    if ( *((HANDLE *)v88 + 161) == ThreadId[0] )
    {
      HandlePointer = (_BYTE *)*((_QWORD *)v88 + 68);
      ObfReferenceObjectWithTag(HandlePointer, 0x746C6644u);
      Object = HandlePointer;
      ObfDereferenceObject(v71);
      goto LABEL_34;
    }
    ObfDereferenceObject(v88);
LABEL_109:
    v33 = -1073741813;
    goto LABEL_63;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v14 = (_QWORD *)PspCidTable;
  v15 = (__int64)ThreadId[0];
  if ( ((__int64)ThreadId[0] & 0x3FC) == 0 )
    goto LABEL_28;
  v16 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, (__int64)ThreadId[0]);
  v17 = v16;
  if ( !v16 )
    goto LABEL_28;
  v18 = PspCidTable;
  _m_prefetchw(v16);
  *(_QWORD *)&v87 = *v16;
  v19 = v16[1];
LABEL_16:
  v20 = v87;
  *((_QWORD *)&v87 + 1) = v19;
  do
  {
    if ( (v20 & 0x1FFFE) == 0 )
    {
      v58 = 0;
      if ( !ExLockHandleTableEntry(PspCidTable, v17) )
        goto LABEL_28;
      HandlePointer = (_BYTE *)ExGetHandlePointer(v17);
      if ( (*HandlePointer & 0x7F) == 3 )
      {
        if ( (*((_DWORD *)HandlePointer + 125) & 0x400000C) == 0x4000000 )
          v58 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v17);
        v15 = (unsigned int)(v58 + 1);
        _m_prefetchw(HandlePointer - 48);
        v59 = *((_QWORD *)HandlePointer - 6);
        while ( v59 )
        {
          v60 = v59;
          v59 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)HandlePointer - 6,
                  v59 + (unsigned int)v15,
                  v59);
          if ( v60 == v59 )
          {
            ObpTraceObjectReferenceIfActive((_DWORD)HandlePointer - 48);
            goto LABEL_95;
          }
        }
        v96 = 0LL;
        *(_QWORD *)&v96 = *v17 & 0xFFFFFFFFFFFE0001uLL;
        *v17 = v96;
      }
      HandlePointer = 0LL;
LABEL_95:
      v61 = PspCidTable;
      _InterlockedIncrement64(v17);
      v14 = (_QWORD *)(v61 + 48);
      _InterlockedOr(v72, 0);
      if ( *v14 )
        ExfUnblockPushLock((__int64)v14, 0LL);
LABEL_24:
      if ( !HandlePointer )
        goto LABEL_29;
      CurrentServerSilo = PsGetCurrentServerSilo();
      v25 = CurrentServerSilo;
      if ( (*((_DWORD *)HandlePointer + 125) & 0x4000000) != 0 )
      {
        if ( PsIsProcessInSilo((struct _KPROCESS *)HandlePointer, CurrentServerSilo) )
          goto LABEL_29;
      }
      else
      {
        _InterlockedOr(v72, 0);
        if ( (*((_QWORD *)HandlePointer + 57) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)HandlePointer + 57);
        if ( (*((_DWORD *)HandlePointer + 125) & 0x4000000) != 0
          && PsIsProcessInSilo((struct _KPROCESS *)HandlePointer, v25) )
        {
          goto LABEL_29;
        }
      }
      ObfDereferenceObjectWithTag(HandlePointer, 0x746C6644u);
      goto LABEL_28;
    }
    if ( (v20 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v18, v17, v20);
      _m_prefetchw(v17);
      *(_QWORD *)&v87 = *v17;
      v19 = v17[1];
      goto LABEL_16;
    }
    *(_QWORD *)&v21 = v20;
    *((_QWORD *)&v21 + 1) = v19;
    v22 = _InterlockedCompareExchange128(v17, v19, v20 - 2, (signed __int64 *)&v21);
    v19 = *((_QWORD *)&v21 + 1);
    v20 = v21;
    v87 = v21;
  }
  while ( !v22 );
  if ( (unsigned __int16)(v20 >> 1) == 16 )
    *(_QWORD *)&v87 = v20 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v20 >> 1) - 1));
  HandlePointer = (_BYTE *)ExGetHandlePointer((__int64 *)&v87);
  if ( (*HandlePointer & 0x7F) == 3 )
    goto LABEL_24;
  ObfDereferenceObject(HandlePointer);
LABEL_28:
  HandlePointer = 0LL;
LABEL_29:
  v26 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v26 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)v14, v15);
  if ( !HandlePointer )
    goto LABEL_109;
  Object = HandlePointer;
LABEL_34:
  v84 = *((_DWORD *)HandlePointer + 116);
  v27 = 0;
  v79 = 0;
  v10 = 1;
  while ( 1 )
  {
    v28 = (_DWORD *)PsProcessType + 19;
    v29 = KeGetCurrentThread();
    Process = (__int64)v29->ApcState.Process;
    v92 = 0LL;
    v93 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&v29[1].SwapListEntry + 1) & 8) != 0 )
    {
      v83 = KeGetCurrentThread();
      --v83->KernelApcDisable;
      v56 = KeAbPreAcquire((__int64)&v29[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v29[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&v29[1].WaitBlockList, 0, v56, (__int64)&v29[1].WaitBlockList);
      if ( v56 )
        *((_BYTE *)v56 + 10) = 1;
      if ( (*(_DWORD *)(&v29[1].SwapListEntry + 1) & 8) != 0 )
      {
        v31 = (_QWORD *)(*(_QWORD *)((char *)&v29[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v31, 0x75536553u);
        LODWORD(v92) = *((_DWORD *)&v29[1].0 + 1) & 3;
      }
      else
      {
        v31 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v29[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&v29[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&v29[1].WaitBlockList);
      KeLeaveCriticalRegionThread();
      v27 = v79;
    }
    else
    {
      v31 = 0LL;
    }
    v91 = v31;
    v32 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    *((_QWORD *)&v92 + 1) = v32;
    if ( SeTokenLeakTracking )
    {
      if ( v32 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v32 + 1144) + 284LL));
        if ( v32 == SepTokenLeakToken )
          __debugbreak();
        v31 = v91;
      }
      if ( v31 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v31[143] + 284LL));
        if ( v91 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v33 = SepCreateAccessStateFromSubjectContext(&v91, &PassedAccessState, v101, a2, v28);
    if ( v33 < 0 )
    {
      v10 = 0;
      goto LABEL_63;
    }
    LODWORD(v83) = 1;
    if ( (HandleAttributes & 0x400) == 0 || v27 )
      v34 = AccessMode;
    else
      v34 = 1;
    v35 = SeDebugPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v36 = 1;
    v97[0] = 1;
    v97[1] = 1;
    v98 = v35;
    v99 = 0;
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    if ( v34 )
    {
      if ( SubjectContext.ClientToken )
      {
        if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
        {
          v38 = 0;
          v73 = 0;
          goto LABEL_45;
        }
      }
      else
      {
        ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
      }
      v38 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v98, 1u, 1, v34);
      v73 = v38;
      ClientToken = (_QWORD **)SubjectContext.ClientToken;
      v36 = v97[0];
    }
    else
    {
      v38 = 1;
      v73 = 1;
    }
LABEL_45:
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( v34 )
    {
      v40 = (_QWORD **)SubjectContext.PrimaryToken;
      if ( ClientToken )
        v40 = ClientToken;
      v41 = (void *)*v40[19];
      if ( !RtlEqualSid(SeLocalSystemSid, v41) )
      {
        v55 = SeExports;
        if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v41) && !RtlEqualSid(v55->SeLocalServiceSid, v41) )
          goto LABEL_72;
        v62 = 0;
        if ( !v36 )
          goto LABEL_119;
        v63 = &v98;
        v64 = v36;
        do
        {
          v65 = SepFilterPrivileges;
          v66 = *SepFilterPrivileges;
          while ( v63->LowPart != *v66 || v63->HighPart != v66[1] )
          {
            v66 = *++v65;
            if ( !*v65 )
              goto LABEL_112;
          }
          ++v62;
LABEL_112:
          v63 = (LUID *)((char *)v63 + 12);
          --v64;
        }
        while ( v64 );
        v67 = &v98;
        v68 = v36;
        do
        {
          v69 = &SepServicesFilterPrivileges;
          v70 = SepServicesFilterPrivileges;
          while ( v67->LowPart != v70->LowPart || v67->HighPart != v70->HighPart )
          {
            v70 = *++v69;
            if ( !*v69 )
              goto LABEL_117;
          }
          ++v62;
LABEL_117:
          v67 = (LUID *)((char *)v67 + 12);
          --v68;
        }
        while ( v68 );
        if ( v62 == v36 )
        {
LABEL_119:
          v38 = v73;
        }
        else
        {
LABEL_72:
          v38 = v73;
          SepAdtPrivilegedServiceAuditAlarm(
            &SubjectContext,
            &SeSubsystemName,
            0LL,
            (__int64)ClientToken,
            (__int64)PrimaryToken,
            v97,
            v73);
          PrimaryToken = SubjectContext.PrimaryToken;
          ClientToken = (_QWORD **)SubjectContext.ClientToken;
        }
      }
    }
    if ( SeTokenLeakTracking )
    {
      if ( PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
        if ( SubjectContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
        ClientToken = (_QWORD **)SubjectContext.ClientToken;
      }
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)ClientToken[143] + 71);
        if ( SubjectContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v42 = KeGetCurrentThread()->ApcState.Process;
    v43 = (signed __int64)SubjectContext.PrimaryToken;
    _m_prefetchw(&v42[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v42[1].ActiveProcessors;
    do
    {
      if ( (v43 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v43, 0x75536553u);
        goto LABEL_55;
      }
      v45 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v42[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v45 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v43 - 48, 0, 1u, 0x75536553u);
LABEL_55:
    SubjectContext.PrimaryToken = 0LL;
    if ( SubjectContext.ClientToken )
      ObfDereferenceObjectWithTag(SubjectContext.ClientToken, 0x75536553u);
    SubjectContext.ClientToken = 0LL;
    if ( v38 )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    v46 = HandleAttributes;
    v47 = ObOpenObjectByPointer(
            Object,
            HandleAttributes,
            &PassedAccessState,
            0,
            (POBJECT_TYPE)PsProcessType,
            AccessMode,
            &Handle);
    v33 = v47;
    if ( v47 >= 0 )
      break;
    if ( (v46 & 0x400) == 0 || v47 != -1073741790 || v79 )
      goto LABEL_63;
    v27 = 1;
    v79 = 1;
    SeDeleteAccessState((__int64)&PassedAccessState, v48, v49, v50);
  }
  if ( v79 && (unsigned int)dword_140E085C0 > 5 && tlgKeywordOn((__int64)&dword_140E085C0, 0x400000000000LL) )
  {
    ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)Object);
    p_ProcessId = &ProcessId;
    v109 = 4LL;
    v81 = a2;
    v110 = &v81;
    v111 = 4LL;
    v82 = v46;
    v112 = &v82;
    v113 = 4LL;
    v76 = a5;
    v114 = &v76;
    v115 = 1LL;
    v77 = AccessMode;
    v116 = &v77;
    v117 = 1LL;
    v94 = 0x1000000LL;
    v118 = &v94;
    v119 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E085C0, (unsigned __int8 *)word_140050FE2, 0LL, 0LL, 8u, &v107);
  }
  *v95 = Handle;
LABEL_63:
  ProcessId = v33;
  v81 = a2;
  v82 = v84;
  UserData.Ptr = (ULONGLONG)&v82;
  *(_QWORD *)&UserData.Size = 4LL;
  v103 = &v81;
  v104 = 4LL;
  v105 = &ProcessId;
  v106 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  if ( v10 )
  {
    SepDeleteAccessState((__int64)&PassedAccessState, v51, v52, v53);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v33;
}
