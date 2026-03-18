/*
 * XREFs of PsOpenProcess @ 0x1408572E0
 * Callers:
 *     NtAlpcOpenSenderProcess @ 0x1408AB690 (NtAlpcOpenSenderProcess.c)
 *     NtOpenProcess @ 0x1409FE540 (NtOpenProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E3020 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1403F9FA0 (SepDeleteAccessState.c)
 *     SepPrivilegeCheck @ 0x140400B10 (SepPrivilegeCheck.c)
 *     ExLockHandleTableEntry @ 0x1404018A0 (ExLockHandleTableEntry.c)
 *     PsIsProcessInSilo @ 0x14041A2C0 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14044CB0C (ExSlowReplenishHandleTableEntry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
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
  _BYTE *Process; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v23; // rdi
  bool v24; // zf
  _DWORD *v25; // r15
  struct _KTHREAD *v26; // rdi
  __int64 v27; // r14
  _QWORD *v28; // rbx
  ULONG_PTR v29; // rax
  int v30; // ebx
  char v31; // di
  LUID v32; // rbx
  unsigned int v33; // r14d
  _QWORD **ClientToken; // rbx
  char v35; // r13
  _QWORD *PrimaryToken; // r15
  _QWORD **v37; // rcx
  void *v38; // rdi
  _KPROCESS *v39; // rdx
  signed __int64 v40; // rbx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v42; // rtt
  ULONG v43; // edi
  NTSTATUS v44; // eax
  PSE_EXPORTS v46; // r13
  __int64 *v47; // rbx
  int v48; // eax
  int v49; // r15d
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  __int64 v52; // rcx
  _QWORD *v53; // rcx
  int v54; // edi
  LUID *v55; // r8
  __int64 v56; // r9
  __int64 **v57; // rcx
  _DWORD *v58; // rax
  LUID *v59; // r8
  __int64 v60; // r9
  LUID **v61; // rcx
  LUID *v62; // rax
  PETHREAD v63; // rdi
  signed __int32 v64[8]; // [rsp+0h] [rbp-3A8h] BYREF
  char v65; // [rsp+40h] [rbp-368h]
  bool v66; // [rsp+41h] [rbp-367h]
  char v67; // [rsp+42h] [rbp-366h]
  char v68; // [rsp+43h] [rbp-365h] BYREF
  KPROCESSOR_MODE v69; // [rsp+44h] [rbp-364h] BYREF
  ULONG HandleAttributes; // [rsp+48h] [rbp-360h]
  int v71; // [rsp+4Ch] [rbp-35Ch]
  unsigned int ProcessId; // [rsp+50h] [rbp-358h] BYREF
  int v73; // [rsp+58h] [rbp-350h] BYREF
  ULONG v74; // [rsp+60h] [rbp-348h] BYREF
  struct _KTHREAD *v75; // [rsp+68h] [rbp-340h]
  int v76; // [rsp+70h] [rbp-338h]
  PVOID Object; // [rsp+78h] [rbp-330h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-328h] BYREF
  __int128 v79; // [rsp+A0h] [rbp-308h] BYREF
  PETHREAD Thread; // [rsp+B0h] [rbp-2F8h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-2F0h] BYREF
  HANDLE ThreadId[2]; // [rsp+C0h] [rbp-2E8h]
  _QWORD *v83; // [rsp+D0h] [rbp-2D8h] BYREF
  __int128 v84; // [rsp+D8h] [rbp-2D0h]
  __int64 v85; // [rsp+E8h] [rbp-2C0h]
  __int64 v86; // [rsp+F0h] [rbp-2B8h] BYREF
  _QWORD *v87; // [rsp+F8h] [rbp-2B0h]
  __int128 v88; // [rsp+108h] [rbp-2A0h]
  _DWORD v89[2]; // [rsp+118h] [rbp-290h] BYREF
  LUID v90; // [rsp+120h] [rbp-288h] BYREF
  int v91; // [rsp+128h] [rbp-280h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+130h] [rbp-278h] BYREF
  _QWORD v93[28]; // [rsp+1D0h] [rbp-1D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B0h] [rbp-F8h] BYREF
  int *v95; // [rsp+2C0h] [rbp-E8h]
  __int64 v96; // [rsp+2C8h] [rbp-E0h]
  unsigned int *v97; // [rsp+2D0h] [rbp-D8h]
  __int64 v98; // [rsp+2D8h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+2E0h] [rbp-C8h] BYREF
  unsigned int *p_ProcessId; // [rsp+300h] [rbp-A8h]
  __int64 v101; // [rsp+308h] [rbp-A0h]
  int *v102; // [rsp+310h] [rbp-98h]
  __int64 v103; // [rsp+318h] [rbp-90h]
  ULONG *v104; // [rsp+320h] [rbp-88h]
  __int64 v105; // [rsp+328h] [rbp-80h]
  char *v106; // [rsp+330h] [rbp-78h]
  __int64 v107; // [rsp+338h] [rbp-70h]
  KPROCESSOR_MODE *v108; // [rsp+340h] [rbp-68h]
  __int64 v109; // [rsp+348h] [rbp-60h]
  __int64 *v110; // [rsp+350h] [rbp-58h]
  __int64 v111; // [rsp+358h] [rbp-50h]

  v87 = (_QWORD *)a1;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  HandleAttributes = 0;
  memset_0(v93, 0, sizeof(v93));
  *(_OWORD *)ThreadId = 0LL;
  v9 = 0;
  v67 = 0;
  Handle = 0LL;
  v66 = 0;
  v10 = 0;
  LODWORD(v75) = 0;
  Object = 0LL;
  v76 = -1;
  if ( a5 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v11 = a1;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (a3 & 3) != 0 )
      goto LABEL_9;
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    v66 = v12;
    HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( !a4 )
    {
      v9 = 0;
      v67 = 0;
      goto LABEL_10;
    }
    if ( ((unsigned __int8)a4 & 3) != 0 )
LABEL_9:
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)ThreadId = *a4;
    v9 = 1;
    v67 = 1;
    v12 = v66;
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    v66 = v12;
    v48 = 73714;
    if ( AccessMode )
      v48 = 7666;
    HandleAttributes = *(_DWORD *)(a3 + 24) & v48;
    if ( a4 )
    {
      *(_OWORD *)ThreadId = *a4;
      v9 = 1;
      v67 = 1;
    }
  }
LABEL_10:
  if ( v12 || !v9 )
  {
    v30 = -1073741776;
    goto LABEL_60;
  }
  if ( ThreadId[1] )
  {
    Thread = 0LL;
    v30 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
    if ( v30 < 0 )
      goto LABEL_60;
    v63 = Thread;
    if ( (HANDLE)Thread[1].CycleTime == ThreadId[0] )
    {
      Process = Thread->Process;
      ObfReferenceObjectWithTag(Process, 0x746C6644u);
      Object = Process;
      ObfDereferenceObject(v63);
      goto LABEL_34;
    }
    ObfDereferenceObject(Thread);
LABEL_149:
    v30 = -1073741813;
    goto LABEL_60;
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
  *(_QWORD *)&v79 = *v14;
  v17 = v14[1];
LABEL_16:
  v18 = v79;
  *((_QWORD *)&v79 + 1) = v17;
  do
  {
    if ( (v18 & 0x1FFFE) == 0 )
    {
      v49 = 0;
      if ( !ExLockHandleTableEntry(PspCidTable, v15) )
        goto LABEL_28;
      Process = (_BYTE *)ExGetHandlePointer(v15);
      if ( (*Process & 0x7F) == 3 )
      {
        if ( (*((_DWORD *)Process + 125) & 0x400000C) == 0x4000000 )
          v49 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v15);
        _m_prefetchw(Process - 48);
        v50 = *((_QWORD *)Process - 6);
        while ( v50 )
        {
          v51 = v50;
          v50 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)Process - 6,
                  v50 + (unsigned int)(v49 + 1),
                  v50);
          if ( v51 == v50 )
          {
            ObpTraceObjectReferenceIfActive((_DWORD)Process - 48);
            goto LABEL_94;
          }
        }
        v88 = 0LL;
        *(_QWORD *)&v88 = *v15 & 0xFFFFFFFFFFFE0001uLL;
        *v15 = v88;
      }
      Process = 0LL;
LABEL_94:
      v52 = PspCidTable;
      _InterlockedIncrement64(v15);
      v53 = (_QWORD *)(v52 + 48);
      _InterlockedOr(v64, 0);
      if ( *v53 )
        ExfUnblockPushLock((__int64)v53, 0LL);
LABEL_24:
      if ( !Process )
        goto LABEL_29;
      CurrentServerSilo = PsGetCurrentServerSilo();
      v23 = CurrentServerSilo;
      if ( (*((_DWORD *)Process + 125) & 0x4000000) != 0 )
      {
        if ( PsIsProcessInSilo((struct _KPROCESS *)Process, CurrentServerSilo) )
          goto LABEL_29;
      }
      else
      {
        _InterlockedOr(v64, 0);
        if ( (*((_QWORD *)Process + 57) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)Process + 57);
        if ( (*((_DWORD *)Process + 125) & 0x4000000) != 0 && PsIsProcessInSilo((struct _KPROCESS *)Process, v23) )
          goto LABEL_29;
      }
      ObfDereferenceObjectWithTag(Process, 0x746C6644u);
      goto LABEL_28;
    }
    if ( (v18 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v16, v15, v18);
      _m_prefetchw(v15);
      *(_QWORD *)&v79 = *v15;
      v17 = v15[1];
      goto LABEL_16;
    }
    *(_QWORD *)&v19 = v18;
    *((_QWORD *)&v19 + 1) = v17;
    v20 = _InterlockedCompareExchange128(v15, v17, v18 - 2, (signed __int64 *)&v19);
    v17 = *((_QWORD *)&v19 + 1);
    v18 = v19;
    v79 = v19;
  }
  while ( !v20 );
  if ( (unsigned __int16)(v18 >> 1) == 16 )
    *(_QWORD *)&v79 = v18 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v18 >> 1) - 1));
  Process = (_BYTE *)ExGetHandlePointer((__int64 *)&v79);
  if ( (*Process & 0x7F) == 3 )
    goto LABEL_24;
  ObfDereferenceObject(Process);
LABEL_28:
  Process = 0LL;
LABEL_29:
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !Process )
    goto LABEL_149;
  Object = Process;
LABEL_34:
  v76 = *((_DWORD *)Process + 116);
  v71 = 0;
  v10 = 1;
  while ( 1 )
  {
    v25 = (_DWORD *)PsProcessType + 19;
    v26 = KeGetCurrentThread();
    v27 = (__int64)v26->ApcState.Process;
    v84 = 0LL;
    v85 = *(_QWORD *)(v27 + 464);
    if ( (*(_DWORD *)(&v26[1].SwapListEntry + 1) & 8) != 0 )
    {
      v75 = KeGetCurrentThread();
      --v75->KernelApcDisable;
      v47 = KeAbPreAcquire((__int64)&v26[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v26[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&v26[1].WaitBlockList,
          0,
          v47,
          (unsigned __int64)&v26[1].WaitBlockList);
      if ( v47 )
        *((_BYTE *)v47 + 10) = 1;
      if ( (*(_DWORD *)(&v26[1].SwapListEntry + 1) & 8) != 0 )
      {
        v28 = (_QWORD *)(*(_QWORD *)((char *)&v26[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v28, 0x75536553u);
        LODWORD(v84) = *((_DWORD *)&v26[1].0 + 1) & 3;
      }
      else
      {
        v28 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v26[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&v26[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&v26[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v75);
    }
    else
    {
      v28 = 0LL;
    }
    v83 = v28;
    v29 = PsReferencePrimaryTokenWithTag(v27, 0x75536553u);
    *((_QWORD *)&v84 + 1) = v29;
    if ( SeTokenLeakTracking )
    {
      if ( v29 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v29 + 1144) + 284LL));
        if ( v29 == SepTokenLeakToken )
          __debugbreak();
        v28 = v83;
      }
      if ( v28 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v28[143] + 284LL));
        if ( v83 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v30 = SepCreateAccessStateFromSubjectContext(&v83, &PassedAccessState, v93, a2, v25);
    if ( v30 < 0 )
    {
      v10 = 0;
      goto LABEL_60;
    }
    LODWORD(v75) = 1;
    if ( (HandleAttributes & 0x400) == 0 || v71 )
      v31 = AccessMode;
    else
      v31 = 1;
    v32 = SeDebugPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v33 = 1;
    v89[0] = 1;
    v89[1] = 1;
    v90 = v32;
    v91 = 0;
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    if ( v31 )
    {
      if ( SubjectContext.ClientToken )
      {
        if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
        {
          v35 = 0;
          v65 = 0;
          goto LABEL_45;
        }
      }
      else
      {
        ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
      }
      v35 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v90, 1u, 1, v31);
      v65 = v35;
      ClientToken = (_QWORD **)SubjectContext.ClientToken;
      v33 = v89[0];
    }
    else
    {
      v35 = 1;
      v65 = 1;
    }
LABEL_45:
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( v31 )
    {
      v37 = (_QWORD **)SubjectContext.PrimaryToken;
      if ( ClientToken )
        v37 = ClientToken;
      v38 = (void *)*v37[19];
      if ( !RtlEqualSid(SeLocalSystemSid, v38) )
      {
        v46 = SeExports;
        if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v38) && !RtlEqualSid(v46->SeLocalServiceSid, v38) )
          goto LABEL_72;
        v54 = 0;
        if ( !v33 )
          goto LABEL_117;
        v55 = &v90;
        v56 = v33;
        do
        {
          v57 = SepFilterPrivileges;
          v58 = *SepFilterPrivileges;
          while ( v55->LowPart != *v58 || v55->HighPart != v58[1] )
          {
            v58 = *++v57;
            if ( !*v57 )
              goto LABEL_110;
          }
          ++v54;
LABEL_110:
          v55 = (LUID *)((char *)v55 + 12);
          --v56;
        }
        while ( v56 );
        v59 = &v90;
        v60 = v33;
        do
        {
          v61 = &SepServicesFilterPrivileges;
          v62 = SepServicesFilterPrivileges;
          while ( v59->LowPart != v62->LowPart || v59->HighPart != v62->HighPart )
          {
            v62 = *++v61;
            if ( !*v61 )
              goto LABEL_115;
          }
          ++v54;
LABEL_115:
          v59 = (LUID *)((char *)v59 + 12);
          --v60;
        }
        while ( v60 );
        if ( v54 == v33 )
        {
LABEL_117:
          v35 = v65;
        }
        else
        {
LABEL_72:
          v35 = v65;
          SepAdtPrivilegedServiceAuditAlarm(
            (unsigned int)&SubjectContext,
            (unsigned int)&SeSubsystemName,
            0,
            (_DWORD)ClientToken,
            (__int64)PrimaryToken,
            (__int64)v89,
            v65);
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
    v39 = KeGetCurrentThread()->ApcState.Process;
    v40 = (signed __int64)SubjectContext.PrimaryToken;
    _m_prefetchw(&v39[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v39[1].ActiveProcessors;
    do
    {
      if ( (v40 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v40, 0x75536553u);
        goto LABEL_55;
      }
      v42 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v39[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v42 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v40 - 48, 0, 1u, 0x75536553u);
LABEL_55:
    SubjectContext.PrimaryToken = 0LL;
    if ( SubjectContext.ClientToken )
      ObfDereferenceObjectWithTag(SubjectContext.ClientToken, 0x75536553u);
    SubjectContext.ClientToken = 0LL;
    if ( v35 )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    v43 = HandleAttributes;
    v44 = ObOpenObjectByPointer(
            Object,
            HandleAttributes,
            &PassedAccessState,
            0,
            (POBJECT_TYPE)PsProcessType,
            AccessMode,
            &Handle);
    v30 = v44;
    if ( v44 >= 0 )
      break;
    if ( (v43 & 0x400) == 0 || v44 != -1073741790 || v71 )
      goto LABEL_60;
    v71 = 1;
    SeDeleteAccessState((__int64)&PassedAccessState);
  }
  if ( v71 && (unsigned int)dword_140E084E0 > 5 && tlgKeywordOn((__int64)&dword_140E084E0, 0x400000000000LL) )
  {
    ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)Object);
    p_ProcessId = &ProcessId;
    v101 = 4LL;
    v73 = a2;
    v102 = &v73;
    v103 = 4LL;
    v74 = v43;
    v104 = &v74;
    v105 = 4LL;
    v68 = a5;
    v106 = &v68;
    v107 = 1LL;
    v69 = AccessMode;
    v108 = &v69;
    v109 = 1LL;
    v86 = 0x1000000LL;
    v110 = &v86;
    v111 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E084E0, (unsigned __int8 *)&word_14004FC56, 0LL, 0LL, 8u, &v99);
  }
  *v87 = Handle;
LABEL_60:
  ProcessId = v30;
  v73 = a2;
  v74 = v76;
  UserData.Ptr = (ULONGLONG)&v74;
  *(_QWORD *)&UserData.Size = 4LL;
  v95 = &v73;
  v96 = 4LL;
  v97 = &ProcessId;
  v98 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  if ( v10 )
  {
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v30;
}
