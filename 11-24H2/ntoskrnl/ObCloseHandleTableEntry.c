/*
 * XREFs of ObCloseHandleTableEntry @ 0x14084BFA0
 * Callers:
 *     ObpCloseHandle @ 0x14084A770 (ObpCloseHandle.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ExSweepHandleTable @ 0x1409E502C (ExSweepHandleTable.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ObpReleaseLookupContext @ 0x14025E7E0 (ObpReleaseLookupContext.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     HalPutDmaAdapter @ 0x1404833B0 (HalPutDmaAdapter.c)
 *     KeRaiseUserException @ 0x1404CDA80 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140841CCC (EtwpEventWriteTemplateSessAndProv.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     ObpUnlockDirectory @ 0x1408424A0 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x140842540 (ObpLookupDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x14084281C (ObpDeleteSymbolicLinkName.c)
 *     EtwpTraceHandle @ 0x14084CBBC (EtwpTraceHandle.c)
 *     ExpUpdateDebugInfo @ 0x14084D2F4 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x14084D528 (ExpGetHandleExtraInfo.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084D5BC (SepAdtCloseObjectAuditAlarm.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     ExpWin32OkayToCloseProcedure @ 0x140934C50 (ExpWin32OkayToCloseProcedure.c)
 *     ExUnlockHandleTableEntry @ 0x14093D890 (ExUnlockHandleTableEntry.c)
 *     ObpDeleteDirectoryName @ 0x1409E4BA0 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // rax
  int v22; // r15d
  unsigned __int64 v23; // rcx
  __int64 v24; // r14
  signed __int64 v25; // rbx
  unsigned int v26; // esi
  PRKPROCESS v27; // r10
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  void (__fastcall *v29)(__int64, struct _FILE_OBJECT *, __int64, __int64); // rax
  __int64 v30; // rax
  unsigned __int16 *v31; // rbx
  struct _KTHREAD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // r12
  __int64 v36; // r12
  signed __int64 v37; // rax
  signed __int64 v38; // rdx
  __int64 v39; // rtt
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v41; // rax
  signed __int8 v42; // cf
  __int64 v43; // rdx
  int v44; // ecx
  volatile signed __int64 *v45; // rdx
  signed __int64 v46; // rax
  signed __int64 v47; // r8
  __int64 v48; // rtt
  struct _FILE_OBJECT *v49; // rdx
  signed __int64 v50; // rax
  signed __int64 v51; // rdx
  __int64 v52; // rtt
  int v53; // ecx
  __int64 v54; // rax
  char v55; // al
  __int64 v56; // rdx
  struct _KTHREAD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  _QWORD *v60; // rsi
  signed __int64 v61; // rax
  signed __int64 v62; // rdx
  __int64 v63; // rtt
  char *v64; // r13
  PVOID v65; // rbx
  signed __int64 v66; // rax
  signed __int64 v67; // rdx
  __int64 v68; // rtt
  struct _KTHREAD *v69; // rax
  _QWORD *v70; // rax
  struct _KTHREAD *v71; // rax
  _QWORD *v72; // rax
  signed __int64 v73; // rax
  signed __int64 v74; // rdx
  __int64 v75; // rtt
  signed __int32 v76[8]; // [rsp+0h] [rbp-100h] BYREF
  char v77; // [rsp+30h] [rbp-D0h]
  char v78; // [rsp+31h] [rbp-CFh]
  struct _LIST_ENTRY *v79; // [rsp+38h] [rbp-C8h]
  PRKPROCESS PROCESS; // [rsp+40h] [rbp-C0h]
  __int64 v81; // [rsp+48h] [rbp-B8h]
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v84; // [rsp+68h] [rbp-98h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-90h] BYREF
  struct _KAPC_STATE v86; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF

  PROCESS = a3;
  memset(&v86, 0, sizeof(v86));
  HandlePointer = ExGetHandlePointer(a2);
  v11 = 0;
  v12 = *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer);
  v78 = 0;
  v13 = HandlePointer + 48;
  v14 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v12];
  if ( *(_QWORD *)(v14 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KeStackAttachProcess(a3, &v86);
      v11 = 1;
      v13 = HandlePointer + 48;
      v78 = 1;
    }
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 168) == ExpWin32OkayToCloseProcedure )
      v55 = ExpWin32OkayToCloseProcedure(a3, v13, a4, a5);
    else
      v55 = guard_dispatch_icall_no_overrides(a3, v13, a4, a5);
    if ( !v55 )
    {
      _InterlockedIncrement64(a2);
      _InterlockedOr(v76, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock(a1 + 48, 0LL);
      KeLeaveCriticalRegionThread();
      if ( v11 )
        KiUnstackDetachProcess((__int64)&v86, 0);
      return 3221226037LL;
    }
    v13 = HandlePointer + 48;
  }
  v81 = *a2 >> 17;
  if ( (v81 & 1) != 0 && !a6 )
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
    ExUnlockHandleTableEntry(a1, a2);
    KeLeaveCriticalRegionThread();
    if ( v78 )
      KiUnstackDetachProcess((__int64)&v86, 0);
    if ( KeGetCurrentThread()->ApcStateIndex != 1
      && ((NtGlobalFlag & 0x400000) != 0 || KeGetCurrentThread()->ApcState.Process[1].UserTime || *(_QWORD *)(a1 + 96)) )
    {
      return KeRaiseUserException(0xC0000235, v56);
    }
    return 3221226037LL;
  }
  if ( (xmmword_140FC5B10 & 0x40) != 0 )
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
    _InterlockedOr(v76, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock(a1 + 48, 0LL);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 96) )
      ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
    v84 = (unsigned __int64)*a2 >> 1;
    *a2 = 0LL;
    _InterlockedOr(v76, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock(a1 + 48, 0LL);
    v79 = (struct _LIST_ENTRY *)(a4 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *(_DWORD *)(a1 + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v79);
      if ( HandleExtraInfo )
        *HandleExtraInfo = 0LL;
    }
    a2[1] = 0LL;
    v77 = *(_BYTE *)(a1 + 44) & 1;
    if ( v77 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v18 = a1 + ((Number + 1LL) << 6);
    v19 = KeAbPreAcquire(v18, 0LL);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v18, (__int64)v19, v18);
    if ( v20 )
      *((_BYTE *)v20 + 10) = 1;
    if ( v77 )
    {
      v54 = *(_QWORD *)(v18 + 16);
      if ( v54 )
        *(_QWORD *)(v54 + 8) = a2;
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
    LOWORD(v18) = v84;
  }
  v22 = (unsigned __int16)v18;
  KeLeaveCriticalRegionThread();
  if ( (v81 & 4) != 0 )
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
  v23 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer);
  memset(&ApcState, 0, sizeof(ApcState));
  v24 = ObTypeIndexTable[v23];
  if ( (*(_BYTE *)(v24 + 66) & 0x10) != 0 || (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v41 = KeAbPreAcquire(HandlePointer + 16, 0LL);
    v42 = _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer + 16), 0LL);
    v81 = (__int64)v41;
    if ( v42 )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), (__int64)v41, HandlePointer + 16);
      v41 = (_QWORD *)v81;
    }
    if ( v41 )
      *((_BYTE *)v41 + 10) = 1;
    v25 = *(_QWORD *)(HandlePointer + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
    {
      *(_QWORD *)(HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v24 + 66) & 0x10) != 0 )
    {
      if ( (*(_BYTE *)(HandlePointer + 26) & 4) != 0 )
        v43 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 7];
      else
        v43 = 0LL;
      if ( (*(_BYTE *)(HandlePointer + 27) & 0x40) != 0 )
      {
        v44 = *(_DWORD *)(v43 + 8);
        v26 = v44 & 0xFFFFFF;
        *(_DWORD *)(v43 + 8) = v44 ^ (v44 ^ (v44 - 1)) & 0xFFFFFF;
      }
      else
      {
        v53 = **(_DWORD **)v43;
        v43 = *(_QWORD *)v43 + 8LL;
        while ( v53 )
        {
          v26 = *(_DWORD *)(v43 + 8) & 0xFFFFFF;
          if ( v26 && *(PRKPROCESS *)v43 == PROCESS )
          {
            *(_DWORD *)(v43 + 8) ^= (*(_DWORD *)(v43 + 8) ^ (*(_DWORD *)(v43 + 8) - 1)) & 0xFFFFFF;
            goto LABEL_78;
          }
          v43 += 16LL;
          --v53;
        }
        v26 = 0;
      }
LABEL_78:
      if ( !*(_BYTE *)(v43 + 11) && (*(_DWORD *)(v43 + 8) & 0xFFFFFF) == 0 )
        *(_QWORD *)v43 = 0LL;
    }
    else
    {
      v26 = 0;
    }
    v45 = (volatile signed __int64 *)(HandlePointer + 16);
    _m_prefetchw((const void *)(HandlePointer + 16));
    v46 = *(_QWORD *)(HandlePointer + 16);
    v47 = v46 - 16;
    if ( (v46 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v47 = 0LL;
    if ( (v46 & 2) != 0 || (v48 = *(_QWORD *)(HandlePointer + 16), v48 != _InterlockedCompareExchange64(v45, v47, v46)) )
    {
      ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
      v45 = (volatile signed __int64 *)(HandlePointer + 16);
    }
    KeAbPostRelease((ULONG_PTR)v45);
    KeLeaveCriticalRegionThread();
  }
  else
  {
    v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL);
    v26 = 0;
  }
  if ( *(_QWORD *)(v24 + 128) )
  {
    v27 = PROCESS;
    v77 = 0;
    v79 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
    {
      v77 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
      v79 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KeStackAttachProcess(PROCESS, &ApcState);
      v27 = PROCESS;
    }
    v29 = *(void (__fastcall **)(__int64, struct _FILE_OBJECT *, __int64, __int64))(v24 + 128);
    if ( (char *)v29 == (char *)CmpCloseKeyObject )
    {
      CmpCloseKeyObject((__int64)v27, HandlePointer + 48, v26, v25);
    }
    else if ( (char *)v29 == (char *)EtwpCloseRegistrationObject )
    {
      if ( v25 == 1 )
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
      v49 = (struct _FILE_OBJECT *)(HandlePointer + 48);
      if ( v29 == IopCloseFile )
        IopCloseFile((__int64)v27, v49, v26, v25);
      else
        guard_dispatch_icall_no_overrides(v27, v49, v26, v25);
    }
    if ( v77 )
    {
      KiUnstackDetachProcess((__int64)&ApcState, 0);
      PsDetachSiloFromCurrentThread(v79);
    }
  }
  if ( v25 == 1 && (*(_BYTE *)(HandlePointer + 26) & 2) != 0 )
  {
    v30 = ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 3];
    v31 = (unsigned __int16 *)(HandlePointer - v30);
    if ( HandlePointer != v30 )
    {
      while ( 1 )
      {
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        v34 = KeAbPreAcquire(HandlePointer + 16, 0LL);
        v35 = v34;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), (__int64)v34, HandlePointer + 16);
        if ( v35 )
          *((_BYTE *)v35 + 10) = 1;
        v36 = *(_QWORD *)v31;
        if ( !*(_QWORD *)v31 )
        {
          _m_prefetchw((const void *)(HandlePointer + 16));
          v50 = *(_QWORD *)(HandlePointer + 16);
          v51 = v50 - 16;
          if ( (v50 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v51 = 0LL;
          if ( (v50 & 2) == 0 )
          {
            v52 = *(_QWORD *)(HandlePointer + 16);
            if ( v52 == _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v51, v50) )
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
          v37 = *(_QWORD *)(HandlePointer + 16);
          v38 = v37 - 16;
          if ( (v37 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v38 = 0LL;
          if ( (v37 & 2) == 0 )
          {
            v39 = *(_QWORD *)(HandlePointer + 16);
            if ( v39 == _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v38, v37) )
              goto LABEL_65;
          }
          goto LABEL_93;
        }
        v83 = 0x10000000000LL;
        v57 = KeGetCurrentThread();
        Object[1] = 0LL;
        Object[0] = (PVOID)v36;
        --v57->KernelApcDisable;
        v58 = KeAbPreAcquire(v36 + 296, 0LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v36 + 296), 0LL) )
          break;
        if ( v58 )
          KeAbPostReleaseEx(v36 + 296, (ULONG_PTR)v58);
        KeLeaveCriticalRegionThread();
        PsReferenceSiloContext((void *)v36);
        _m_prefetchw((const void *)(HandlePointer + 16));
        v66 = *(_QWORD *)(HandlePointer + 16);
        v67 = v66 - 16;
        if ( (v66 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v67 = 0LL;
        if ( (v66 & 2) != 0
          || (v68 = *(_QWORD *)(HandlePointer + 16),
              v68 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v67, v66)) )
        {
          ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
        }
        KeAbPostRelease(HandlePointer + 16);
        KeLeaveCriticalRegionThread();
        v69 = KeGetCurrentThread();
        --v69->KernelApcDisable;
        v70 = KeAbPreAcquire(v36 + 296, 0LL);
        v81 = (__int64)v70;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 296), 0LL) )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v36 + 296), (__int64)v70, v36 + 296);
          v70 = (_QWORD *)v81;
        }
        if ( v70 )
          *((_BYTE *)v70 + 10) = 1;
        v71 = KeGetCurrentThread();
        --v71->KernelApcDisable;
        v72 = KeAbPreAcquire(HandlePointer + 16, 0LL);
        v42 = _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer + 16), 0LL);
        v81 = (__int64)v72;
        if ( v42 )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), (__int64)v72, HandlePointer + 16);
          v72 = (_QWORD *)v81;
        }
        if ( v72 )
          *((_BYTE *)v72 + 10) = 1;
        if ( *(_QWORD *)v31 == v36 && (*(_BYTE *)(HandlePointer + 27) & 0x10) == 0 && !*(_QWORD *)(HandlePointer + 8) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v36);
          goto LABEL_135;
        }
        ObpReleaseLookupContext((__int64)Object);
        _m_prefetchw((const void *)(HandlePointer + 16));
        v73 = *(_QWORD *)(HandlePointer + 16);
        v74 = v73 - 16;
        if ( (v73 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v74 = 0LL;
        if ( (v73 & 2) != 0
          || (v75 = *(_QWORD *)(HandlePointer + 16),
              v75 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v74, v73)) )
        {
          ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
        }
        KeAbPostRelease(HandlePointer + 16);
        KeLeaveCriticalRegionThread();
        HalPutDmaAdapter((PADAPTER_OBJECT)v36);
      }
      if ( v58 )
        *((_BYTE *)v58 + 10) = 1;
LABEL_135:
      if ( *((_DWORD *)v31 + 6) )
      {
        v60 = 0LL;
      }
      else
      {
        if ( (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(HandlePointer + 48);
        ObpLookupDirectoryEntry(v31 + 4, 0, (__int64)Object);
        v59 = Object[1];
        v60 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v59 = *v60;
        *v60 = 0LL;
      }
      _m_prefetchw((const void *)(HandlePointer + 16));
      v61 = *(_QWORD *)(HandlePointer + 16);
      v62 = v61 - 16;
      if ( (v61 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v62 = 0LL;
      if ( (v61 & 2) != 0
        || (v63 = *(_QWORD *)(HandlePointer + 16),
            v63 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v62, v61)) )
      {
        ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
      }
      KeAbPostRelease(HandlePointer + 16);
      KeLeaveCriticalRegionThread();
      if ( v60 )
      {
        v64 = (char *)v60[1];
        v65 = Object[0];
        ObpUnlockDirectory((__int64)Object);
        ExFreePoolWithTag(v60, 0);
        ObfDereferenceObjectWithTag(v65, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v64 - 24) ^ ((unsigned __int16)((_WORD)v64 - 48) >> 8))) == ObpDirectoryObjectType->Index )
        {
          ObpDeleteDirectoryName(v64);
          ObpReleaseLookupContext((__int64)Object);
          goto LABEL_43;
        }
        ObfDereferenceObjectWithTag(v64, 0x6944624Fu);
      }
      ObpReleaseLookupContext((__int64)Object);
    }
  }
LABEL_43:
  _InterlockedDecrement((volatile signed __int32 *)(v24 + 48));
  if ( v78 )
    KiUnstackDetachProcess((__int64)&v86, 0);
  if ( v22 )
    _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v22);
  ObfDereferenceObjectWithTag((PVOID)(HandlePointer + 48), 0x6E48624Fu);
  return 0LL;
}
