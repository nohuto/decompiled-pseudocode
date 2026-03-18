/*
 * XREFs of ObCloseHandleTableEntry @ 0x1408501F0
 * Callers:
 *     ObpCloseHandle @ 0x14084E9C0 (ObpCloseHandle.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ExSweepHandleTable @ 0x140972794 (ExSweepHandleTable.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     HalPutDmaAdapter @ 0x140482570 (HalPutDmaAdapter.c)
 *     KeRaiseUserException @ 0x1404CDCA0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140845A08 (EtwpEventWriteTemplateSessAndProv.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     ObpUnlockDirectory @ 0x140845F60 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x140846000 (ObpLookupDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x1408462DC (ObpDeleteSymbolicLinkName.c)
 *     EtwpTraceHandle @ 0x140850E08 (EtwpTraceHandle.c)
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x140851804 (ExpGetHandleExtraInfo.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExpWin32OkayToCloseProcedure @ 0x14091D8F0 (ExpWin32OkayToCloseProcedure.c)
 *     ExUnlockHandleTableEntry @ 0x140972390 (ExUnlockHandleTableEntry.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140985C34 (SepAdtCloseObjectAuditAlarm.c)
 *     ObpDeleteDirectoryName @ 0x140A087E8 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v19; // rax
  __int64 *v20; // r15
  __int64 v21; // rax
  int v22; // r14d
  unsigned __int64 v23; // rcx
  __int64 v24; // r15
  signed __int64 v25; // rbx
  unsigned int v26; // esi
  PRKPROCESS v27; // r10
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  int (__fastcall *v29)(__int64, struct _FILE_OBJECT *, __int64, __int64); // rax
  __int64 v30; // rax
  unsigned __int16 *v31; // rbx
  struct _KTHREAD *v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // r12
  __int64 v36; // r12
  signed __int64 v37; // rax
  signed __int64 v38; // rdx
  __int64 v39; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v41; // rax
  signed __int8 v42; // cf
  __int64 v43; // rdx
  int v44; // ecx
  volatile signed __int64 *v45; // rdx
  signed __int64 v46; // rax
  signed __int64 v47; // r8
  __int64 v48; // rtt
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  __int64 v51; // rtt
  int v52; // ecx
  __int64 v53; // rax
  char v54; // al
  __int64 v55; // rdx
  struct _KTHREAD *v56; // rax
  __int64 *v57; // rax
  _QWORD *v58; // rdx
  _QWORD *v59; // rsi
  signed __int64 v60; // rax
  signed __int64 v61; // rdx
  __int64 v62; // rtt
  char *v63; // r13
  PVOID v64; // rbx
  signed __int64 v65; // rax
  signed __int64 v66; // rdx
  __int64 v67; // rtt
  struct _KTHREAD *v68; // rax
  __int64 *v69; // rax
  struct _KTHREAD *v70; // rax
  __int64 *v71; // rax
  signed __int64 v72; // rax
  signed __int64 v73; // rdx
  __int64 v74; // rtt
  signed __int32 v75[8]; // [rsp+0h] [rbp-100h] BYREF
  char v76; // [rsp+30h] [rbp-D0h]
  char v77; // [rsp+31h] [rbp-CFh]
  struct _LIST_ENTRY *v78; // [rsp+38h] [rbp-C8h]
  PRKPROCESS PROCESS; // [rsp+40h] [rbp-C0h]
  __int64 v80; // [rsp+48h] [rbp-B8h]
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v82; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v83; // [rsp+68h] [rbp-98h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-90h] BYREF
  struct _KAPC_STATE v85; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF

  PROCESS = a3;
  memset(&v85, 0, sizeof(v85));
  HandlePointer = ExGetHandlePointer(a2);
  v11 = 0;
  v12 = *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer);
  v77 = 0;
  v13 = HandlePointer + 48;
  v14 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v12];
  if ( *(_QWORD *)(v14 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KeStackAttachProcess(a3, &v85);
      v11 = 1;
      v13 = HandlePointer + 48;
      v77 = 1;
    }
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 168) == ExpWin32OkayToCloseProcedure )
      v54 = ExpWin32OkayToCloseProcedure(a3, v13, a4, a5);
    else
      v54 = guard_dispatch_icall_no_overrides(a3);
    if ( !v54 )
    {
      _InterlockedIncrement64(a2);
      _InterlockedOr(v75, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock(a1 + 48, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v11 )
        KiUnstackDetachProcess((__int64)&v85, 0LL);
      return 3221226037LL;
    }
    v13 = HandlePointer + 48;
  }
  v80 = *a2 >> 17;
  if ( (v80 & 1) != 0 && !a6 )
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
    ExUnlockHandleTableEntry(a1, a2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v77 )
      KiUnstackDetachProcess((__int64)&v85, 0LL);
    if ( KeGetCurrentThread()->ApcStateIndex != 1
      && ((NtGlobalFlag & 0x400000) != 0 || KeGetCurrentThread()->ApcState.Process[1].UserTime || *(_QWORD *)(a1 + 96)) )
    {
      return KeRaiseUserException(0xC0000235, v55);
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
    _InterlockedOr(v75, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock(a1 + 48, 0LL);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 96) )
      ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
    v83 = (unsigned __int64)*a2 >> 1;
    *a2 = 0LL;
    _InterlockedOr(v75, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock(a1 + 48, 0LL);
    v78 = (struct _LIST_ENTRY *)(a4 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *(_DWORD *)(a1 + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v78);
      if ( HandleExtraInfo )
        *HandleExtraInfo = 0LL;
    }
    a2[1] = 0LL;
    v76 = *(_BYTE *)(a1 + 44) & 1;
    if ( v76 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v18 = a1 + ((Number + 1LL) << 6);
    v19 = KeAbPreAcquire(v18, 0LL);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v18, v19, v18);
    if ( v20 )
      *((_BYTE *)v20 + 10) = 1;
    if ( v76 )
    {
      v53 = *(_QWORD *)(v18 + 16);
      if ( v53 )
        *(_QWORD *)(v53 + 8) = a2;
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
    LOWORD(v18) = v83;
  }
  v22 = (unsigned __int16)v18;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (v80 & 4) != 0 )
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
    v80 = (__int64)v41;
    if ( v42 )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), v41, HandlePointer + 16);
      v41 = (__int64 *)v80;
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
        v52 = **(_DWORD **)v43;
        v43 = *(_QWORD *)v43 + 8LL;
        while ( v52 )
        {
          v26 = *(_DWORD *)(v43 + 8) & 0xFFFFFF;
          if ( v26 && *(PRKPROCESS *)v43 == PROCESS )
          {
            *(_DWORD *)(v43 + 8) ^= (*(_DWORD *)(v43 + 8) ^ (*(_DWORD *)(v43 + 8) - 1)) & 0xFFFFFF;
            goto LABEL_78;
          }
          v43 += 16LL;
          --v52;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL);
    v26 = 0;
  }
  if ( *(_QWORD *)(v24 + 128) )
  {
    v27 = PROCESS;
    v76 = 0;
    v78 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
    {
      v76 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
      v78 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KeStackAttachProcess(PROCESS, &ApcState);
      v27 = PROCESS;
    }
    v29 = *(int (__fastcall **)(__int64, struct _FILE_OBJECT *, __int64, __int64))(v24 + 128);
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
    else if ( v29 == IopCloseFile )
    {
      IopCloseFile((__int64)v27, (struct _FILE_OBJECT *)(HandlePointer + 48), v26, v25);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v27);
    }
    if ( v76 )
    {
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
      PsDetachSiloFromCurrentThread(v78);
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
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), v34, HandlePointer + 16);
        if ( v35 )
          *((_BYTE *)v35 + 10) = 1;
        v36 = *(_QWORD *)v31;
        if ( !*(_QWORD *)v31 )
        {
          _m_prefetchw((const void *)(HandlePointer + 16));
          v49 = *(_QWORD *)(HandlePointer + 16);
          v50 = v49 - 16;
          if ( (v49 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v50 = 0LL;
          if ( (v49 & 2) == 0 )
          {
            v51 = *(_QWORD *)(HandlePointer + 16);
            if ( v51 == _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v50, v49) )
              goto LABEL_65;
          }
LABEL_93:
          ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
LABEL_65:
          KeAbPostRelease(HandlePointer + 16);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_49;
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
        v82 = 0x10000000000LL;
        v56 = KeGetCurrentThread();
        Object[1] = 0LL;
        Object[0] = (PVOID)v36;
        --v56->KernelApcDisable;
        v57 = KeAbPreAcquire(v36 + 296, 0LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v36 + 296), 0LL) )
          break;
        if ( v57 )
          KeAbPostReleaseEx(v36 + 296, (ULONG_PTR)v57);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PsReferenceSiloContext((void *)v36);
        _m_prefetchw((const void *)(HandlePointer + 16));
        v65 = *(_QWORD *)(HandlePointer + 16);
        v66 = v65 - 16;
        if ( (v65 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v66 = 0LL;
        if ( (v65 & 2) != 0
          || (v67 = *(_QWORD *)(HandlePointer + 16),
              v67 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v66, v65)) )
        {
          ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
        }
        KeAbPostRelease(HandlePointer + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v68 = KeGetCurrentThread();
        --v68->KernelApcDisable;
        v69 = KeAbPreAcquire(v36 + 296, 0LL);
        v80 = (__int64)v69;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 296), 0LL) )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v36 + 296), v69, v36 + 296);
          v69 = (__int64 *)v80;
        }
        if ( v69 )
          *((_BYTE *)v69 + 10) = 1;
        v70 = KeGetCurrentThread();
        --v70->KernelApcDisable;
        v71 = KeAbPreAcquire(HandlePointer + 16, 0LL);
        v42 = _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer + 16), 0LL);
        v80 = (__int64)v71;
        if ( v42 )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), v71, HandlePointer + 16);
          v71 = (__int64 *)v80;
        }
        if ( v71 )
          *((_BYTE *)v71 + 10) = 1;
        if ( *(_QWORD *)v31 == v36 && (*(_BYTE *)(HandlePointer + 27) & 0x10) == 0 && !*(_QWORD *)(HandlePointer + 8) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v36);
          goto LABEL_135;
        }
        ObpReleaseLookupContext((__int64)Object);
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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        HalPutDmaAdapter((PADAPTER_OBJECT)v36);
      }
      if ( v57 )
        *((_BYTE *)v57 + 10) = 1;
LABEL_135:
      if ( *((_DWORD *)v31 + 6) )
      {
        v59 = 0LL;
      }
      else
      {
        if ( (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(HandlePointer + 48);
        ObpLookupDirectoryEntry(v31 + 4, 0, (__int64)Object);
        v58 = Object[1];
        v59 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v58 = *v59;
        *v59 = 0LL;
      }
      _m_prefetchw((const void *)(HandlePointer + 16));
      v60 = *(_QWORD *)(HandlePointer + 16);
      v61 = v60 - 16;
      if ( (v60 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v61 = 0LL;
      if ( (v60 & 2) != 0
        || (v62 = *(_QWORD *)(HandlePointer + 16),
            v62 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v61, v60)) )
      {
        ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
      }
      KeAbPostRelease(HandlePointer + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v59 )
      {
        v63 = (char *)v59[1];
        v64 = Object[0];
        ObpUnlockDirectory((__int64)Object);
        ExFreePoolWithTag(v59, 0);
        ObfDereferenceObjectWithTag(v64, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v63 - 24) ^ ((unsigned __int16)((_WORD)v63 - 48) >> 8))) == ObpDirectoryObjectType->Index )
        {
          ObpDeleteDirectoryName(v63);
          ObpReleaseLookupContext((__int64)Object);
          goto LABEL_49;
        }
        ObfDereferenceObjectWithTag(v63, 0x6944624Fu);
      }
      ObpReleaseLookupContext((__int64)Object);
    }
  }
LABEL_49:
  _InterlockedDecrement((volatile signed __int32 *)(v24 + 48));
  if ( v77 )
    KiUnstackDetachProcess((__int64)&v85, 0LL);
  if ( v22 )
    _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v22);
  ObfDereferenceObjectWithTag((PVOID)(HandlePointer + 48), 0x6E48624Fu);
  return 0LL;
}
