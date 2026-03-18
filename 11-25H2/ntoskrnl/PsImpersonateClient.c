/*
 * XREFs of PsImpersonateClient @ 0x1408A51C0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     PsAssignImpersonationToken @ 0x1408A5060 (PsAssignImpersonationToken.c)
 *     PsRevertThreadToSelf @ 0x1408A5140 (PsRevertThreadToSelf.c)
 *     SeImpersonateClientEx @ 0x1408A5170 (SeImpersonateClientEx.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PsRevertToSelf @ 0x14090E4C0 (PsRevertToSelf.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x140911900 (CmpCmdHiveOpen.c)
 *     NtImpersonateThread @ 0x140A1F3E0 (NtImpersonateThread.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwpTiFillProcessIdentity @ 0x1403BCF74 (EtwpTiFillProcessIdentity.c)
 *     EtwProviderEnabled @ 0x1403BE620 (EtwProviderEnabled.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsIsProcessLoggingEnabled @ 0x14041D370 (PsIsProcessLoggingEnabled.c)
 *     EtwpTiFillThreadIdentity @ 0x14046931C (EtwpTiFillThreadIdentity.c)
 *     SeSetTokenTrustLink @ 0x14046CF1C (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x14048176C (SeQueryTokenTrustSid.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepFinalizeTokenAcls @ 0x1408A4398 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlCopySid @ 0x1408A5010 (RtlCopySid.c)
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     EtwTiLogImpersonateClient @ 0x1408A5C84 (EtwTiLogImpersonateClient.c)
 *     PspWriteTebImpersonationInfo @ 0x1408A5F40 (PspWriteTebImpersonationInfo.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  _KPROCESS *Process; // rsi
  char v6; // r15
  char *v8; // r14
  void *v10; // rax
  unsigned int v11; // r12d
  signed __int64 v12; // r13
  signed __int64 ActiveProcessors; // rax
  signed __int64 v14; // rtt
  unsigned __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // r15
  void *v18; // r15
  struct _KTHREAD *v19; // r13
  int v20; // eax
  struct _KTHREAD *v21; // rdx
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *p_WaitBlockList; // rbx
  __int64 *v25; // rax
  __int64 *v26; // r14
  int v27; // eax
  void *v28; // r11
  NTSTATUS inserted; // r15d
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  char *v32; // rcx
  _WORD *v33; // r8
  int appended; // eax
  int v35; // eax
  int v36; // eax
  int v37; // r9d
  ULONG DestinationSidLength[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _KTHREAD *v40; // [rsp+50h] [rbp-B0h]
  PSID SourceSid; // [rsp+60h] [rbp-A0h] BYREF
  struct _KTHREAD *v42; // [rsp+68h] [rbp-98h]
  _QWORD v43[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+D0h] [rbp-30h] BYREF

  Process = Thread->Process;
  v6 = 0;
  v40 = 0LL;
  v8 = (char *)Token;
  if ( !Token )
  {
    v18 = 0LL;
    v19 = 0LL;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
    --CurrentThread->KernelApcDisable;
    v25 = KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v25, (__int64)p_WaitBlockList);
    if ( v26 )
      *((_BYTE *)v26 + 10) = 1;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v19 = Thread[1].WaitBlock[1].Thread;
      v18 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
      LOBYTE(v27) = PsIsProcessLoggingEnabled((__int64)Process, (__int64)Process, 256);
      if ( v27 )
      {
        SourceSid = v28;
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_IMPERSONATION_REVERT) )
        {
          if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000000uLL) )
          {
            v35 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, (unsigned __int64 *)&SourceSid);
            v36 = EtwpTiFillThreadIdentity((__int64)&UserData[v35], (__int64)Thread);
            EtwWrite(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_IMPERSONATION_REVERT, 0LL, v36 + v37, UserData);
          }
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_WaitBlockList);
    KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v21 = CurrentThread;
LABEL_24:
    PspWriteTebImpersonationInfo(Thread, v21);
    if ( v18 )
      ObfDereferenceObjectWithTag(v18, 0x746C6644u);
    if ( v19 )
      ObfDereferenceObjectWithTag(v19, 0x746C6644u);
    return 0;
  }
  v10 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  LOBYTE(v11) = ImpersonationLevel;
  v12 = (signed __int64)v10;
  if ( !v10 )
  {
LABEL_10:
    PsReferenceSiloContext(v8);
LABEL_11:
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    v15 = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFF8uLL | v11 & 3 | (4LL * (EffectiveOnly & 1));
    v16 = KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&Thread[1].WaitBlockList,
        v16,
        (__int64)&Thread[1].WaitBlockList);
    if ( v17 )
      *((_BYTE *)v17 + 10) = 1;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v19 = Thread[1].WaitBlock[1].Thread;
      v18 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
    }
    else
    {
      v18 = 0LL;
      v19 = 0LL;
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
    }
    Thread[1].WaitBlock[1].Thread = v40;
    *($F6E8E81C3EACE4482EE2626591212BC8 *)((char *)&Thread[1].116 + 4) = ($F6E8E81C3EACE4482EE2626591212BC8)v15;
    if ( CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    LOBYTE(v20) = PsIsProcessLoggingEnabled((__int64)Process, (__int64)Process, 256);
    if ( v20 )
      EtwTiLogImpersonateClient(Process, Thread, v18, v8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v42);
    v21 = v42;
    goto LABEL_24;
  }
  if ( (int)SeTokenCanImpersonate(v10, v8) >= 0 )
  {
LABEL_4:
    _m_prefetchw(&Process[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
    do
    {
      if ( (v12 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v12, 0x746C6644u);
        goto LABEL_9;
      }
      v14 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&Process[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v14 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v12 - 48, 0, 1u, 0x746C6644u);
LABEL_9:
    if ( v6 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v11 = 1;
  if ( *((_DWORD *)v8 + 48) == 2 && *((int *)v8 + 49) < 1 )
    v11 = *((_DWORD *)v8 + 49);
  v43[0] = 48LL;
  *(_QWORD *)DestinationSidLength = 0LL;
  memset(&v43[1], 0, 24);
  v44 = 0LL;
  inserted = SepDuplicateToken((__int128 *)v8, (__int64)v43, 0, 2, v11, 0, 0, (__int64 *)DestinationSidLength);
  if ( inserted >= 0 )
  {
    inserted = ObInsertObjectEx(*(char **)DestinationSidLength, 0LL, 0, 0, 0, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      v32 = *(char **)DestinationSidLength;
      if ( (*(_DWORD *)(*(_QWORD *)DestinationSidLength + 200LL) & 0x4000) == 0
        || (v33 = *(_WORD **)(*(_QWORD *)DestinationSidLength + 784LL)) == 0LL
        || (appended = SepAppendAceToTokenObjectAcl(*(ULONG_PTR **)DestinationSidLength, 0xF01FFu, v33),
            v32 = *(char **)DestinationSidLength,
            inserted = appended,
            appended >= 0) )
      {
        SepFinalizeTokenAcls(v32);
        v8 = *(char **)DestinationSidLength;
        goto LABEL_54;
      }
      ObfDereferenceObject(*(PVOID *)DestinationSidLength);
    }
  }
  v8 = 0LL;
  if ( inserted >= 0 )
  {
LABEL_54:
    v6 = 1;
    goto LABEL_4;
  }
  _m_prefetchw(&Process[1].ActiveProcessors);
  v30 = (signed __int64)Process[1].ActiveProcessors;
  do
  {
    if ( (v12 ^ (unsigned __int64)v30) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v12, 0x746C6644u);
      return inserted;
    }
    v31 = v30;
    v30 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].ActiveProcessors, v30 + 1, v30);
  }
  while ( v31 != v30 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v12 - 48, 0, 1u, 0x746C6644u);
  return inserted;
}
