/*
 * XREFs of PsImpersonateClient @ 0x1409102D0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     PsAssignImpersonationToken @ 0x140910170 (PsAssignImpersonationToken.c)
 *     PsRevertThreadToSelf @ 0x140910250 (PsRevertThreadToSelf.c)
 *     SeImpersonateClientEx @ 0x140910280 (SeImpersonateClientEx.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     CmpCmdHiveOpen @ 0x14092E91C (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     PsRevertToSelf @ 0x140930F00 (PsRevertToSelf.c)
 *     NtImpersonateThread @ 0x140A28F20 (NtImpersonateThread.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140363E20 (SepSetProcessTrustLabelAceForToken.c)
 *     EtwProviderEnabled @ 0x1403D47F0 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x1403D4B94 (EtwpTiFillProcessIdentity.c)
 *     PsIsProcessLoggingEnabled @ 0x14041A430 (PsIsProcessLoggingEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x140467AC0 (EtwpTiFillThreadIdentity.c)
 *     SeSetTokenTrustLink @ 0x14046B268 (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x140481B14 (SeQueryTokenTrustSid.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     SepFinalizeTokenAcls @ 0x14090F550 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 *     RtlCopySid @ 0x140910120 (RtlCopySid.c)
 *     SeTokenCanImpersonate @ 0x140910A30 (SeTokenCanImpersonate.c)
 *     EtwTiLogImpersonateClient @ 0x140910DC8 (EtwTiLogImpersonateClient.c)
 *     PspWriteTebImpersonationInfo @ 0x140911080 (PspWriteTebImpersonationInfo.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v8; // r14
  void *v10; // rax
  unsigned int v11; // r12d
  signed __int64 v12; // r13
  signed __int64 ActiveProcessors; // rax
  signed __int64 v14; // rtt
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // r15
  void *v18; // r15
  struct _KTHREAD *v19; // r13
  int v20; // eax
  struct _KTHREAD *v21; // rdx
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *p_WaitBlockList; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // r14
  int v27; // eax
  void *v28; // r11
  NTSTATUS inserted; // r15d
  struct _FILE_OBJECT *v30; // r14
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  _WORD *v33; // r8
  int v34; // eax
  int v35; // eax
  int v36; // r9d
  ULONG DestinationSidLength[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _KTHREAD *v39; // [rsp+50h] [rbp-B0h]
  PSID SourceSid; // [rsp+60h] [rbp-A0h] BYREF
  struct _KTHREAD *v41; // [rsp+68h] [rbp-98h]
  _QWORD v42[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v43; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+D0h] [rbp-30h] BYREF

  Process = Thread->Process;
  v6 = 0;
  v39 = 0LL;
  v8 = (__int64)Token;
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
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, (__int64)v25, (__int64)p_WaitBlockList);
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
            v34 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, (unsigned __int64 *)&SourceSid);
            v35 = EtwpTiFillThreadIdentity((__int64)&UserData[v34], (__int64)Thread);
            EtwWrite(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_IMPERSONATION_REVERT, 0LL, v35 + v36, UserData);
          }
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_WaitBlockList);
    KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
    KeLeaveCriticalRegionThread();
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
    PsReferenceSiloContext((void *)v8);
LABEL_11:
    v41 = KeGetCurrentThread();
    --v41->KernelApcDisable;
    v15 = v8 & 0xFFFFFFFFFFFFFFF8uLL | v11 & 3 | (4LL * (EffectiveOnly & 1));
    v16 = KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&Thread[1].WaitBlockList,
        (__int64)v16,
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
    Thread[1].WaitBlock[1].Thread = v39;
    *($5FBC9D02EEE85B5272AB6A5488D47FE6 *)((char *)&Thread[1].116 + 4) = ($5FBC9D02EEE85B5272AB6A5488D47FE6)v15;
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
    KeLeaveCriticalRegionThread();
    v21 = v41;
    goto LABEL_24;
  }
  if ( (int)SeTokenCanImpersonate(v10, (PACCESS_TOKEN)v8) >= 0 )
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
  if ( *(_DWORD *)(v8 + 192) == 2 && *(int *)(v8 + 196) < 1 )
    v11 = *(_DWORD *)(v8 + 196);
  v42[0] = 48LL;
  *(_QWORD *)DestinationSidLength = 0LL;
  memset(&v42[1], 0, 24);
  v43 = 0LL;
  inserted = SepDuplicateToken(v8, (int)v42, 0, 2, v11, 0, 0, DestinationSidLength);
  if ( inserted < 0 )
    goto LABEL_43;
  inserted = ObInsertObjectEx(*(struct _FILE_OBJECT **)DestinationSidLength, 0LL, 0, 0, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_43;
  v30 = *(struct _FILE_OBJECT **)DestinationSidLength;
  if ( (*(_DWORD *)(*(_QWORD *)DestinationSidLength + 200LL) & 0x4000) == 0 )
    goto LABEL_46;
  v33 = *(_WORD **)(*(_QWORD *)DestinationSidLength + 784LL);
  if ( !v33 )
    goto LABEL_46;
  inserted = SepAppendAceToTokenObjectAcl(*(ULONG_PTR **)DestinationSidLength, 983551, v33);
  if ( inserted < 0 )
  {
    ObfDereferenceObject(*(PVOID *)DestinationSidLength);
LABEL_43:
    v8 = 0LL;
    goto LABEL_49;
  }
  v30 = *(struct _FILE_OBJECT **)DestinationSidLength;
LABEL_46:
  if ( (int)SepAppendAceToTokenObjectAcl((ULONG_PTR *)v30, 8, SeAliasAdminsSid) >= 0 )
    SepSetProcessTrustLabelAceForToken(v30);
  v8 = *(_QWORD *)DestinationSidLength;
LABEL_49:
  if ( inserted >= 0 )
  {
    v6 = 1;
    goto LABEL_4;
  }
  _m_prefetchw(&Process[1].ActiveProcessors);
  v31 = (signed __int64)Process[1].ActiveProcessors;
  do
  {
    if ( (v12 ^ (unsigned __int64)v31) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v12, 0x746C6644u);
      return inserted;
    }
    v32 = v31;
    v31 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].ActiveProcessors, v31 + 1, v31);
  }
  while ( v32 != v31 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v12 - 48, 0, 1u, 0x746C6644u);
  return inserted;
}
