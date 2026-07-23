/*
 * XREFs of ObCloseHandleTableEntry @ 0x140848260
 * Callers:
 *     ObpCloseHandle @ 0x140846A30 (ObpCloseHandle.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ExSweepHandleTable @ 0x1409DFA8C (ExSweepHandleTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     HalPutDmaAdapter @ 0x14047E920 (HalPutDmaAdapter.c)
 *     KeRaiseUserException @ 0x1404C6E50 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14083DF8C (EtwpEventWriteTemplateSessAndProv.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     ObpUnlockDirectory @ 0x14083E760 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x14083E800 (ObpLookupDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x14083EADC (ObpDeleteSymbolicLinkName.c)
 *     EtwpTraceHandle @ 0x140848E7C (EtwpTraceHandle.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x1408497E8 (ExpGetHandleExtraInfo.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084987C (SepAdtCloseObjectAuditAlarm.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     ExUnlockHandleTableEntry @ 0x140891F80 (ExUnlockHandleTableEntry.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1408F3ED0 (ExpWin32OkayToCloseProcedure.c)
 *     ObpDeleteDirectoryName @ 0x1409DF600 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        __int64 *a2,
        struct _KPROCESS *a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  unsigned __int64 HandlePointer; // rdi
  char v11; // bl
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *HandleExtraInfo; // rax
  unsigned int Number; // eax
  ULONG_PTR v18; // rbx
  char *v19; // rax
  char *v20; // r15
  __int64 v21; // rax
  int v22; // r15d
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rcx
  __int64 v26; // r14
  signed __int64 v27; // rbx
  unsigned int v28; // esi
  PRKPROCESS v29; // r10
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  void (__fastcall *v31)(__int64, struct _FILE_OBJECT *, __int64, __int64); // rax
  __int64 v32; // rax
  unsigned __int16 *v33; // rbx
  struct _KTHREAD *v35; // rax
  char *v36; // rax
  char *v37; // r12
  __int64 v38; // r12
  signed __int64 v39; // rax
  signed __int64 v40; // rdx
  __int64 v41; // rtt
  struct _KTHREAD *CurrentThread; // rax
  char *v43; // rax
  signed __int8 v44; // cf
  __int64 v45; // rdx
  int v46; // ecx
  volatile signed __int64 *v47; // rdx
  signed __int64 v48; // rax
  signed __int64 v49; // r8
  __int64 v50; // rtt
  struct _FILE_OBJECT *v51; // rdx
  signed __int64 v52; // rax
  signed __int64 v53; // rdx
  __int64 v54; // rtt
  int v55; // ecx
  __int64 v56; // rax
  char v57; // al
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  struct _KTHREAD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rdx
  _QWORD *v66; // rsi
  signed __int64 v67; // rax
  signed __int64 v68; // rdx
  __int64 v69; // rtt
  char *v70; // r13
  PVOID v71; // rbx
  signed __int64 v72; // rax
  signed __int64 v73; // rdx
  __int64 v74; // rtt
  struct _KTHREAD *v75; // rax
  char *v76; // rax
  struct _KTHREAD *v77; // rax
  char *v78; // rax
  signed __int64 v79; // rax
  signed __int64 v80; // rdx
  __int64 v81; // rtt
  signed __int32 v82[8]; // [rsp+0h] [rbp-100h] BYREF
  char v83; // [rsp+30h] [rbp-D0h]
  char v84; // [rsp+31h] [rbp-CFh]
  struct _LIST_ENTRY *v85; // [rsp+38h] [rbp-C8h]
  PRKPROCESS PROCESS; // [rsp+40h] [rbp-C0h]
  __int64 v87; // [rsp+48h] [rbp-B8h]
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v89; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v90; // [rsp+68h] [rbp-98h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-90h] BYREF
  struct _KAPC_STATE v92; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF

  PROCESS = a3;
  memset(&v92, 0, sizeof(v92));
  HandlePointer = ExGetHandlePointer(a2);
  v11 = 0;
  v12 = *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer);
  v84 = 0;
  v13 = HandlePointer + 48;
  v14 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v12];
  if ( *(_QWORD *)(v14 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KeStackAttachProcess(a3, &v92);
      v11 = 1;
      v13 = HandlePointer + 48;
      v84 = 1;
    }
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 168) == ExpWin32OkayToCloseProcedure )
      v57 = ExpWin32OkayToCloseProcedure(a3, v13, a4, a5);
    else
      v57 = guard_dispatch_icall_no_overrides(a3, v13);
    if ( !v57 )
    {
      _InterlockedIncrement64(a2);
      _InterlockedOr(v82, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock(a1 + 48, 0LL);
      KeLeaveCriticalRegionThread();
      if ( v11 )
        KiUnstackDetachProcess((__int64)&v92, 0, v58, v59);
      return 3221226037LL;
    }
    v13 = HandlePointer + 48;
  }
  v87 = *a2 >> 17;
  if ( (v87 & 1) != 0 && !a6 )
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
    ExUnlockHandleTableEntry(a1, a2);
    KeLeaveCriticalRegionThread();
    if ( v84 )
      KiUnstackDetachProcess((__int64)&v92, 0, v61, v62);
    if ( KeGetCurrentThread()->ApcStateIndex != 1
      && ((NtGlobalFlag & 0x400000) != 0 || KeGetCurrentThread()->ApcState.Process[1].UserTime || *(_QWORD *)(a1 + 96)) )
    {
      return KeRaiseUserException(0xC0000235, v60);
    }
    return 3221226037LL;
  }
  if ( (xmmword_140FC6B50 & 0x40) != 0 )
  {
    v15 = a4;
    if ( a3 == PsInitialSystemProcess )
      v15 = a4 | 0x80000000;
    EtwpTraceHandle(4385LL, v15, v13, v14);
  }
  if ( a6 )
  {
    v18 = (unsigned __int64)*a2 >> 1;
    *a2 = 0LL;
    _InterlockedOr(v82, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock(a1 + 48, 0LL);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 96) )
      ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
    v90 = (unsigned __int64)*a2 >> 1;
    *a2 = 0LL;
    _InterlockedOr(v82, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock(a1 + 48, 0LL);
    v85 = (struct _LIST_ENTRY *)(a4 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *(_DWORD *)(a1 + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v85);
      if ( HandleExtraInfo )
        *HandleExtraInfo = 0LL;
    }
    a2[1] = 0LL;
    v83 = *(_BYTE *)(a1 + 44) & 1;
    if ( v83 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v18 = a1 + ((Number + 1LL) << 6);
    v19 = (char *)KeAbPreAcquire(v18, 0LL);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v18, v19, v18);
    if ( v20 )
      v20[10] = 1;
    if ( v83 )
    {
      v56 = *(_QWORD *)(v18 + 16);
      if ( v56 )
        *(_QWORD *)(v56 + 8) = a2;
      else
        *(_QWORD *)(v18 + 8) = a2;
      *(_QWORD *)(v18 + 16) = a2;
    }
    else
    {
      v21 = *(_QWORD *)(v18 + 8);
      a2[1] = v21;
      if ( !v21 )
        *(_QWORD *)(v18 + 16) = a2;
      *(_QWORD *)(v18 + 8) = a2;
    }
    --*(_DWORD *)(v18 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v18);
    KeAbPostRelease(v18);
    LOWORD(v18) = v90;
  }
  v22 = (unsigned __int16)v18;
  KeLeaveCriticalRegionThread();
  if ( (v87 & 4) != 0 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SepAdtCloseObjectAuditAlarm(
      (unsigned int)&SeSubsystemName,
      a4 & 0xFFFFFFFC,
      (unsigned int)&SubjectContext,
      HandlePointer + 48,
      1);
    SeReleaseSubjectContext(&SubjectContext);
  }
  v25 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer);
  memset(&ApcState, 0, sizeof(ApcState));
  v26 = ObTypeIndexTable[v25];
  if ( (*(_BYTE *)(v26 + 66) & 0x10) != 0 || (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v43 = (char *)KeAbPreAcquire(HandlePointer + 16, 0LL);
    v44 = _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer + 16), 0LL);
    v87 = (__int64)v43;
    if ( v44 )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), v43, HandlePointer + 16);
      v43 = (char *)v87;
    }
    if ( v43 )
      v43[10] = 1;
    v27 = *(_QWORD *)(HandlePointer + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
    {
      *(_QWORD *)(HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v26 + 66) & 0x10) != 0 )
    {
      if ( (*(_BYTE *)(HandlePointer + 26) & 4) != 0 )
        v45 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 7];
      else
        v45 = 0LL;
      if ( (*(_BYTE *)(HandlePointer + 27) & 0x40) != 0 )
      {
        v46 = *(_DWORD *)(v45 + 8);
        v28 = v46 & 0xFFFFFF;
        *(_DWORD *)(v45 + 8) = v46 ^ (v46 ^ (v46 - 1)) & 0xFFFFFF;
      }
      else
      {
        v55 = **(_DWORD **)v45;
        v45 = *(_QWORD *)v45 + 8LL;
        while ( v55 )
        {
          v28 = *(_DWORD *)(v45 + 8) & 0xFFFFFF;
          if ( v28 && *(PRKPROCESS *)v45 == PROCESS )
          {
            *(_DWORD *)(v45 + 8) ^= (*(_DWORD *)(v45 + 8) ^ (*(_DWORD *)(v45 + 8) - 1)) & 0xFFFFFF;
            goto LABEL_78;
          }
          v45 += 16LL;
          --v55;
        }
        v28 = 0;
      }
LABEL_78:
      if ( !*(_BYTE *)(v45 + 11) && (*(_DWORD *)(v45 + 8) & 0xFFFFFF) == 0 )
        *(_QWORD *)v45 = 0LL;
    }
    else
    {
      v28 = 0;
    }
    v47 = (volatile signed __int64 *)(HandlePointer + 16);
    _m_prefetchw((const void *)(HandlePointer + 16));
    v48 = *(_QWORD *)(HandlePointer + 16);
    v49 = v48 - 16;
    if ( (v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v49 = 0LL;
    if ( (v48 & 2) != 0 || (v50 = *(_QWORD *)(HandlePointer + 16), v50 != _InterlockedCompareExchange64(v47, v49, v48)) )
    {
      ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
      v47 = (volatile signed __int64 *)(HandlePointer + 16);
    }
    KeAbPostRelease((ULONG_PTR)v47);
    KeLeaveCriticalRegionThread();
  }
  else
  {
    v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL);
    v28 = 0;
  }
  if ( *(_QWORD *)(v26 + 128) )
  {
    v29 = PROCESS;
    v83 = 0;
    v85 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
    {
      v83 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
      v85 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KeStackAttachProcess(PROCESS, &ApcState);
      v29 = PROCESS;
    }
    v31 = *(void (__fastcall **)(__int64, struct _FILE_OBJECT *, __int64, __int64))(v26 + 128);
    v23 = v28;
    if ( (char *)v31 == (char *)CmpCloseKeyObject )
    {
      CmpCloseKeyObject((__int64)v29, HandlePointer + 48, v28, v27);
    }
    else if ( (char *)v31 == (char *)EtwpCloseRegistrationObject )
    {
      if ( v27 == 1 )
      {
        if ( (*(_BYTE *)(HandlePointer + 146) & 2) != 0
          && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
        {
          EtwpEventWriteTemplateSessAndProv(
            EtwpEventTracingProvRegHandle,
            &ETW_EVENT_PROVIDER_UNREGISTERS,
            0LL,
            1,
            0LL,
            *(_QWORD *)(HandlePointer + 80) + 40LL);
        }
        _InterlockedOr16((volatile signed __int16 *)(HandlePointer + 146), 0x20u);
      }
    }
    else
    {
      v51 = (struct _FILE_OBJECT *)(HandlePointer + 48);
      if ( v31 == IopCloseFile )
        IopCloseFile((__int64)v29, v51, v28, v27);
      else
        guard_dispatch_icall_no_overrides(v29, v51);
    }
    if ( v83 )
    {
      KiUnstackDetachProcess((__int64)&ApcState, 0, v23, v24);
      PsDetachSiloFromCurrentThread(v85);
    }
  }
  if ( v27 == 1 && (*(_BYTE *)(HandlePointer + 26) & 2) != 0 )
  {
    v32 = ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 3];
    v33 = (unsigned __int16 *)(HandlePointer - v32);
    if ( HandlePointer != v32 )
    {
      while ( 1 )
      {
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        v36 = (char *)KeAbPreAcquire(HandlePointer + 16, 0LL);
        v37 = v36;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), v36, HandlePointer + 16);
        if ( v37 )
          v37[10] = 1;
        v38 = *(_QWORD *)v33;
        if ( !*(_QWORD *)v33 )
        {
          _m_prefetchw((const void *)(HandlePointer + 16));
          v52 = *(_QWORD *)(HandlePointer + 16);
          v53 = v52 - 16;
          if ( (v52 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v53 = 0LL;
          if ( (v52 & 2) == 0 )
          {
            v54 = *(_QWORD *)(HandlePointer + 16);
            if ( v54 == _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v53, v52) )
              goto LABEL_65;
          }
LABEL_93:
          ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
LABEL_65:
          KeAbPostRelease(HandlePointer + 16);
          KeLeaveCriticalRegionThread();
          goto LABEL_43;
        }
        if ( (*(_BYTE *)(HandlePointer + 27) & 0x10) != 0 || *(_QWORD *)(HandlePointer + 8) )
        {
          _m_prefetchw((const void *)(HandlePointer + 16));
          v39 = *(_QWORD *)(HandlePointer + 16);
          v40 = v39 - 16;
          if ( (v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v40 = 0LL;
          if ( (v39 & 2) == 0 )
          {
            v41 = *(_QWORD *)(HandlePointer + 16);
            if ( v41 == _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v40, v39) )
              goto LABEL_65;
          }
          goto LABEL_93;
        }
        v89 = 0x10000000000LL;
        v63 = KeGetCurrentThread();
        Object[1] = 0LL;
        Object[0] = (PVOID)v38;
        --v63->KernelApcDisable;
        v64 = KeAbPreAcquire(v38 + 296, 0LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v38 + 296), 0LL) )
          break;
        if ( v64 )
          KeAbPostReleaseEx(v38 + 296, (ULONG_PTR)v64);
        KeLeaveCriticalRegionThread();
        PsReferenceSiloContext((void *)v38);
        _m_prefetchw((const void *)(HandlePointer + 16));
        v72 = *(_QWORD *)(HandlePointer + 16);
        v73 = v72 - 16;
        if ( (v72 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v73 = 0LL;
        if ( (v72 & 2) != 0
          || (v74 = *(_QWORD *)(HandlePointer + 16),
              v74 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v73, v72)) )
        {
          ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
        }
        KeAbPostRelease(HandlePointer + 16);
        KeLeaveCriticalRegionThread();
        v75 = KeGetCurrentThread();
        --v75->KernelApcDisable;
        v76 = (char *)KeAbPreAcquire(v38 + 296, 0LL);
        v87 = (__int64)v76;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 296), 0LL) )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v38 + 296), v76, v38 + 296);
          v76 = (char *)v87;
        }
        if ( v76 )
          v76[10] = 1;
        v77 = KeGetCurrentThread();
        --v77->KernelApcDisable;
        v78 = (char *)KeAbPreAcquire(HandlePointer + 16, 0LL);
        v44 = _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer + 16), 0LL);
        v87 = (__int64)v78;
        if ( v44 )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), v78, HandlePointer + 16);
          v78 = (char *)v87;
        }
        if ( v78 )
          v78[10] = 1;
        if ( *(_QWORD *)v33 == v38 && (*(_BYTE *)(HandlePointer + 27) & 0x10) == 0 && !*(_QWORD *)(HandlePointer + 8) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v38);
          goto LABEL_135;
        }
        ObpReleaseLookupContext((__int64)Object);
        _m_prefetchw((const void *)(HandlePointer + 16));
        v79 = *(_QWORD *)(HandlePointer + 16);
        v80 = v79 - 16;
        if ( (v79 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v80 = 0LL;
        if ( (v79 & 2) != 0
          || (v81 = *(_QWORD *)(HandlePointer + 16),
              v81 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v80, v79)) )
        {
          ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
        }
        KeAbPostRelease(HandlePointer + 16);
        KeLeaveCriticalRegionThread();
        HalPutDmaAdapter((PADAPTER_OBJECT)v38);
      }
      if ( v64 )
        *((_BYTE *)v64 + 10) = 1;
LABEL_135:
      if ( *((_DWORD *)v33 + 6) )
      {
        v66 = 0LL;
      }
      else
      {
        if ( (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(HandlePointer + 48);
        ObpLookupDirectoryEntry(v33 + 4, 0, (__int64)Object);
        v65 = Object[1];
        v66 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v65 = *v66;
        *v66 = 0LL;
      }
      _m_prefetchw((const void *)(HandlePointer + 16));
      v67 = *(_QWORD *)(HandlePointer + 16);
      v68 = v67 - 16;
      if ( (v67 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v68 = 0LL;
      if ( (v67 & 2) != 0
        || (v69 = *(_QWORD *)(HandlePointer + 16),
            v69 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v68, v67)) )
      {
        ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
      }
      KeAbPostRelease(HandlePointer + 16);
      KeLeaveCriticalRegionThread();
      if ( v66 )
      {
        v70 = (char *)v66[1];
        v71 = Object[0];
        ObpUnlockDirectory((__int64)Object);
        ExFreePoolWithTag(v66, 0);
        ObfDereferenceObjectWithTag(v71, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v70 - 24) ^ ((unsigned __int16)((_WORD)v70 - 48) >> 8))) == ObpDirectoryObjectType->Index )
        {
          ObpDeleteDirectoryName(v70);
          ObpReleaseLookupContext((__int64)Object);
          goto LABEL_43;
        }
        ObfDereferenceObjectWithTag(v70, 0x6944624Fu);
      }
      ObpReleaseLookupContext((__int64)Object);
    }
  }
LABEL_43:
  _InterlockedDecrement((volatile signed __int32 *)(v26 + 48));
  if ( v84 )
    KiUnstackDetachProcess((__int64)&v92, 0, v23, v24);
  if ( v22 )
    _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v22);
  ObfDereferenceObjectWithTag((PVOID)(HandlePointer + 48), 0x6E48624Fu);
  return 0LL;
}
