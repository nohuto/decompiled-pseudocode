/*
 * XREFs of PsOpenProcess @ 0x140850610
 * Callers:
 *     NtOpenProcess @ 0x1408505E0 (NtOpenProcess.c)
 *     NtAlpcOpenSenderProcess @ 0x1408929D0 (NtAlpcOpenSenderProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E0270 (SepCreateAccessStateFromSubjectContext.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepDeleteAccessState @ 0x1403FBF80 (SepDeleteAccessState.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     ExLockHandleTableEntry @ 0x140401530 (ExLockHandleTableEntry.c)
 *     PsIsProcessInSilo @ 0x140407120 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14043D820 (ExSlowReplenishHandleTableEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
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
  signed __int64 *v14; // rax
  signed __int64 *v15; // rdi
  __int64 v16; // r15
  signed __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int128 v19; // rt0
  unsigned __int8 v20; // tt
  _BYTE *HandlePointer; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v23; // rdi
  bool v24; // zf
  int v25; // r13d
  _DWORD *v26; // r15
  struct _KTHREAD *v27; // rdi
  __int64 Process; // r14
  _QWORD *v29; // rbx
  ULONG_PTR v30; // rax
  int v31; // ebx
  char v32; // di
  LUID v33; // rbx
  unsigned int v34; // r14d
  _QWORD **ClientToken; // rbx
  char v36; // r15
  _QWORD *PrimaryToken; // r13
  _QWORD **v38; // rcx
  void *v39; // rdi
  _KPROCESS *v40; // rdx
  signed __int64 v41; // rbx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v43; // rtt
  ULONG v44; // edi
  NTSTATUS v45; // eax
  PSE_EXPORTS v47; // r15
  char *v48; // rbx
  int v49; // eax
  int v50; // r15d
  signed __int64 v51; // rax
  signed __int64 v52; // rtt
  __int64 v53; // rcx
  _QWORD *v54; // rcx
  int v55; // edi
  LUID *v56; // r8
  __int64 v57; // r9
  __int64 **v58; // rcx
  _DWORD *v59; // rax
  LUID *v60; // r8
  __int64 v61; // r9
  LUID **v62; // rcx
  LUID *v63; // rax
  PVOID v64; // rdi
  signed __int32 v65[8]; // [rsp+0h] [rbp-3A8h] BYREF
  char v66; // [rsp+40h] [rbp-368h]
  bool v67; // [rsp+41h] [rbp-367h]
  char v68; // [rsp+42h] [rbp-366h]
  char v69; // [rsp+43h] [rbp-365h] BYREF
  KPROCESSOR_MODE v70; // [rsp+44h] [rbp-364h] BYREF
  ULONG HandleAttributes; // [rsp+48h] [rbp-360h]
  int v72; // [rsp+4Ch] [rbp-35Ch]
  unsigned int ProcessId; // [rsp+50h] [rbp-358h] BYREF
  int v74; // [rsp+58h] [rbp-350h] BYREF
  ULONG v75; // [rsp+60h] [rbp-348h] BYREF
  struct _KTHREAD *v76; // [rsp+68h] [rbp-340h]
  int v77; // [rsp+70h] [rbp-338h]
  PVOID Object; // [rsp+78h] [rbp-330h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-328h] BYREF
  __int128 v80; // [rsp+A0h] [rbp-308h] BYREF
  PVOID v81; // [rsp+B0h] [rbp-2F8h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-2F0h] BYREF
  HANDLE ThreadId[2]; // [rsp+C0h] [rbp-2E8h]
  _QWORD *v84; // [rsp+D0h] [rbp-2D8h] BYREF
  __int128 v85; // [rsp+D8h] [rbp-2D0h]
  __int64 v86; // [rsp+E8h] [rbp-2C0h]
  __int64 v87; // [rsp+F0h] [rbp-2B8h] BYREF
  _QWORD *v88; // [rsp+F8h] [rbp-2B0h]
  __int128 v89; // [rsp+108h] [rbp-2A0h]
  unsigned int v90[2]; // [rsp+118h] [rbp-290h] BYREF
  LUID v91; // [rsp+120h] [rbp-288h] BYREF
  int v92; // [rsp+128h] [rbp-280h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+130h] [rbp-278h] BYREF
  _QWORD v94[28]; // [rsp+1D0h] [rbp-1D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B0h] [rbp-F8h] BYREF
  int *v96; // [rsp+2C0h] [rbp-E8h]
  __int64 v97; // [rsp+2C8h] [rbp-E0h]
  unsigned int *v98; // [rsp+2D0h] [rbp-D8h]
  __int64 v99; // [rsp+2D8h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+2E0h] [rbp-C8h] BYREF
  unsigned int *p_ProcessId; // [rsp+300h] [rbp-A8h]
  __int64 v102; // [rsp+308h] [rbp-A0h]
  int *v103; // [rsp+310h] [rbp-98h]
  __int64 v104; // [rsp+318h] [rbp-90h]
  ULONG *v105; // [rsp+320h] [rbp-88h]
  __int64 v106; // [rsp+328h] [rbp-80h]
  char *v107; // [rsp+330h] [rbp-78h]
  __int64 v108; // [rsp+338h] [rbp-70h]
  KPROCESSOR_MODE *v109; // [rsp+340h] [rbp-68h]
  __int64 v110; // [rsp+348h] [rbp-60h]
  __int64 *v111; // [rsp+350h] [rbp-58h]
  __int64 v112; // [rsp+358h] [rbp-50h]

  v88 = (_QWORD *)a1;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  HandleAttributes = 0;
  memset_0(v94, 0, sizeof(v94));
  *(_OWORD *)ThreadId = 0LL;
  v9 = 0;
  v68 = 0;
  Handle = 0LL;
  v67 = 0;
  v10 = 0;
  LODWORD(v76) = 0;
  Object = 0LL;
  v77 = -1;
  if ( a5 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v11 = a1;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (a3 & 3) != 0 )
      goto LABEL_9;
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    v67 = v12;
    HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( !a4 )
    {
      v9 = 0;
      v68 = 0;
      goto LABEL_10;
    }
    if ( ((unsigned __int8)a4 & 3) != 0 )
LABEL_9:
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)ThreadId = *a4;
    v9 = 1;
    v68 = 1;
    v12 = v67;
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    v67 = v12;
    v49 = 73714;
    if ( AccessMode )
      v49 = 7666;
    HandleAttributes = *(_DWORD *)(a3 + 24) & v49;
    if ( a4 )
    {
      *(_OWORD *)ThreadId = *a4;
      v9 = 1;
      v68 = 1;
    }
  }
LABEL_10:
  if ( v12 || !v9 )
  {
    v31 = -1073741776;
    goto LABEL_63;
  }
  if ( ThreadId[1] )
  {
    v81 = 0LL;
    v31 = PsLookupThreadByThreadId(ThreadId[1], (PETHREAD *)&v81);
    if ( v31 < 0 )
      goto LABEL_63;
    v64 = v81;
    if ( *((HANDLE *)v81 + 161) == ThreadId[0] )
    {
      HandlePointer = (_BYTE *)*((_QWORD *)v81 + 68);
      ObfReferenceObjectWithTag(HandlePointer, 0x746C6644u);
      Object = HandlePointer;
      ObfDereferenceObject(v64);
      goto LABEL_34;
    }
    ObfDereferenceObject(v81);
LABEL_109:
    v31 = -1073741813;
    goto LABEL_63;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ((__int64)ThreadId[0] & 0x3FC) == 0 )
    goto LABEL_28;
  v14 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, (__int64)ThreadId[0]);
  v15 = v14;
  if ( !v14 )
    goto LABEL_28;
  v16 = PspCidTable;
  _m_prefetchw(v14);
  *(_QWORD *)&v80 = *v14;
  v17 = v14[1];
LABEL_16:
  v18 = v80;
  *((_QWORD *)&v80 + 1) = v17;
  do
  {
    if ( (v18 & 0x1FFFE) == 0 )
    {
      v50 = 0;
      if ( !ExLockHandleTableEntry(PspCidTable, v15) )
        goto LABEL_28;
      HandlePointer = (_BYTE *)ExGetHandlePointer(v15);
      if ( (*HandlePointer & 0x7F) == 3 )
      {
        if ( (*((_DWORD *)HandlePointer + 125) & 0x400000C) == 0x4000000 )
          v50 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v15);
        _m_prefetchw(HandlePointer - 48);
        v51 = *((_QWORD *)HandlePointer - 6);
        while ( v51 )
        {
          v52 = v51;
          v51 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)HandlePointer - 6,
                  v51 + (unsigned int)(v50 + 1),
                  v51);
          if ( v52 == v51 )
          {
            ObpTraceObjectReferenceIfActive((_DWORD)HandlePointer - 48);
            goto LABEL_95;
          }
        }
        v89 = 0LL;
        *(_QWORD *)&v89 = *v15 & 0xFFFFFFFFFFFE0001uLL;
        *v15 = v89;
      }
      HandlePointer = 0LL;
LABEL_95:
      v53 = PspCidTable;
      _InterlockedIncrement64(v15);
      v54 = (_QWORD *)(v53 + 48);
      _InterlockedOr(v65, 0);
      if ( *v54 )
        ExfUnblockPushLock((__int64)v54, 0LL);
LABEL_24:
      if ( !HandlePointer )
        goto LABEL_29;
      CurrentServerSilo = PsGetCurrentServerSilo();
      v23 = CurrentServerSilo;
      if ( (*((_DWORD *)HandlePointer + 125) & 0x4000000) != 0 )
      {
        if ( PsIsProcessInSilo((struct _KPROCESS *)HandlePointer, CurrentServerSilo) )
          goto LABEL_29;
      }
      else
      {
        _InterlockedOr(v65, 0);
        if ( (*((_QWORD *)HandlePointer + 57) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)HandlePointer + 57);
        if ( (*((_DWORD *)HandlePointer + 125) & 0x4000000) != 0
          && PsIsProcessInSilo((struct _KPROCESS *)HandlePointer, v23) )
        {
          goto LABEL_29;
        }
      }
      ObfDereferenceObjectWithTag(HandlePointer, 0x746C6644u);
      goto LABEL_28;
    }
    if ( (v18 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v16, v15, v18);
      _m_prefetchw(v15);
      *(_QWORD *)&v80 = *v15;
      v17 = v15[1];
      goto LABEL_16;
    }
    *(_QWORD *)&v19 = v18;
    *((_QWORD *)&v19 + 1) = v17;
    v20 = _InterlockedCompareExchange128(v15, v17, v18 - 2, (signed __int64 *)&v19);
    v17 = *((_QWORD *)&v19 + 1);
    v18 = v19;
    v80 = v19;
  }
  while ( !v20 );
  if ( (unsigned __int16)(v18 >> 1) == 16 )
    *(_QWORD *)&v80 = v18 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v18 >> 1) - 1));
  HandlePointer = (_BYTE *)ExGetHandlePointer((__int64 *)&v80);
  if ( (*HandlePointer & 0x7F) == 3 )
    goto LABEL_24;
  ObfDereferenceObject(HandlePointer);
LABEL_28:
  HandlePointer = 0LL;
LABEL_29:
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !HandlePointer )
    goto LABEL_109;
  Object = HandlePointer;
LABEL_34:
  v77 = *((_DWORD *)HandlePointer + 116);
  v25 = 0;
  v72 = 0;
  v10 = 1;
  while ( 1 )
  {
    v26 = (_DWORD *)PsProcessType + 19;
    v27 = KeGetCurrentThread();
    Process = (__int64)v27->ApcState.Process;
    v85 = 0LL;
    v86 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&v27[1].SwapListEntry + 1) & 8) != 0 )
    {
      v76 = KeGetCurrentThread();
      --v76->KernelApcDisable;
      v48 = (char *)KeAbPreAcquire((__int64)&v27[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v27[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&v27[1].WaitBlockList, 0, v48, (__int64)&v27[1].WaitBlockList);
      if ( v48 )
        v48[10] = 1;
      if ( (*(_DWORD *)(&v27[1].SwapListEntry + 1) & 8) != 0 )
      {
        v29 = (_QWORD *)(*(_QWORD *)((char *)&v27[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v29, 0x75536553u);
        LODWORD(v85) = *((_DWORD *)&v27[1].0 + 1) & 3;
      }
      else
      {
        v29 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v27[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&v27[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&v27[1].WaitBlockList);
      KeLeaveCriticalRegionThread();
      v25 = v72;
    }
    else
    {
      v29 = 0LL;
    }
    v84 = v29;
    v30 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    *((_QWORD *)&v85 + 1) = v30;
    if ( SeTokenLeakTracking )
    {
      if ( v30 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v30 + 1144) + 284LL));
        if ( v30 == SepTokenLeakToken )
          __debugbreak();
        v29 = v84;
      }
      if ( v29 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v29[143] + 284LL));
        if ( v84 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v31 = SepCreateAccessStateFromSubjectContext(&v84, &PassedAccessState, v94, a2, v26);
    if ( v31 < 0 )
    {
      v10 = 0;
      goto LABEL_63;
    }
    LODWORD(v76) = 1;
    if ( (HandleAttributes & 0x400) == 0 || v25 )
      v32 = AccessMode;
    else
      v32 = 1;
    v33 = SeDebugPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v34 = 1;
    v90[0] = 1;
    v90[1] = 1;
    v91 = v33;
    v92 = 0;
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    if ( v32 )
    {
      if ( SubjectContext.ClientToken )
      {
        if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
        {
          v36 = 0;
          v66 = 0;
          goto LABEL_45;
        }
      }
      else
      {
        ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
      }
      v36 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v91, 1u, 1, v32);
      v66 = v36;
      ClientToken = (_QWORD **)SubjectContext.ClientToken;
      v34 = v90[0];
    }
    else
    {
      v36 = 1;
      v66 = 1;
    }
LABEL_45:
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( v32 )
    {
      v38 = (_QWORD **)SubjectContext.PrimaryToken;
      if ( ClientToken )
        v38 = ClientToken;
      v39 = (void *)*v38[19];
      if ( !RtlEqualSid(SeLocalSystemSid, v39) )
      {
        v47 = SeExports;
        if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v39) && !RtlEqualSid(v47->SeLocalServiceSid, v39) )
          goto LABEL_72;
        v55 = 0;
        if ( !v34 )
          goto LABEL_119;
        v56 = &v91;
        v57 = v34;
        do
        {
          v58 = SepFilterPrivileges;
          v59 = *SepFilterPrivileges;
          while ( v56->LowPart != *v59 || v56->HighPart != v59[1] )
          {
            v59 = *++v58;
            if ( !*v58 )
              goto LABEL_112;
          }
          ++v55;
LABEL_112:
          v56 = (LUID *)((char *)v56 + 12);
          --v57;
        }
        while ( v57 );
        v60 = &v91;
        v61 = v34;
        do
        {
          v62 = &SepServicesFilterPrivileges;
          v63 = SepServicesFilterPrivileges;
          while ( v60->LowPart != v63->LowPart || v60->HighPart != v63->HighPart )
          {
            v63 = *++v62;
            if ( !*v62 )
              goto LABEL_117;
          }
          ++v55;
LABEL_117:
          v60 = (LUID *)((char *)v60 + 12);
          --v61;
        }
        while ( v61 );
        if ( v55 == v34 )
        {
LABEL_119:
          v36 = v66;
        }
        else
        {
LABEL_72:
          v36 = v66;
          SepAdtPrivilegedServiceAuditAlarm(
            &SubjectContext,
            &SeSubsystemName,
            0LL,
            (__int64)ClientToken,
            (__int64)PrimaryToken,
            v90,
            v66);
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
    v40 = KeGetCurrentThread()->ApcState.Process;
    v41 = (signed __int64)SubjectContext.PrimaryToken;
    _m_prefetchw(&v40[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v40[1].ActiveProcessors;
    do
    {
      if ( (v41 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v41, 0x75536553u);
        goto LABEL_55;
      }
      v43 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v40[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v43 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v41 - 48, 0, 1u, 0x75536553u);
LABEL_55:
    SubjectContext.PrimaryToken = 0LL;
    if ( SubjectContext.ClientToken )
      ObfDereferenceObjectWithTag(SubjectContext.ClientToken, 0x75536553u);
    SubjectContext.ClientToken = 0LL;
    if ( v36 )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    v44 = HandleAttributes;
    v45 = ObOpenObjectByPointer(
            Object,
            HandleAttributes,
            &PassedAccessState,
            0,
            (POBJECT_TYPE)PsProcessType,
            AccessMode,
            &Handle);
    v31 = v45;
    if ( v45 >= 0 )
      break;
    if ( (v44 & 0x400) == 0 || v45 != -1073741790 || v72 )
      goto LABEL_63;
    v25 = 1;
    v72 = 1;
    SeDeleteAccessState((__int64)&PassedAccessState);
  }
  if ( v72 && (unsigned int)dword_140E08630 > 5 && tlgKeywordOn((__int64)&dword_140E08630, 0x400000000000LL) )
  {
    ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)Object);
    p_ProcessId = &ProcessId;
    v102 = 4LL;
    v74 = a2;
    v103 = &v74;
    v104 = 4LL;
    v75 = v44;
    v105 = &v75;
    v106 = 4LL;
    v69 = a5;
    v107 = &v69;
    v108 = 1LL;
    v70 = AccessMode;
    v109 = &v70;
    v110 = 1LL;
    v87 = 0x1000000LL;
    v111 = &v87;
    v112 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08630,
      (unsigned __int8 *)&dword_140051ADC,
      0LL,
      0LL,
      8u,
      &v100);
  }
  *v88 = Handle;
LABEL_63:
  ProcessId = v31;
  v74 = a2;
  v75 = v77;
  UserData.Ptr = (ULONGLONG)&v75;
  *(_QWORD *)&UserData.Size = 4LL;
  v96 = &v74;
  v97 = 4LL;
  v98 = &ProcessId;
  v99 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  if ( v10 )
  {
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v31;
}
