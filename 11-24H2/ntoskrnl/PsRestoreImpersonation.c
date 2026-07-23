/*
 * XREFs of PsRestoreImpersonation @ 0x1409C74E0
 * Callers:
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E696C (CmpAddRemoveContainerToCLFSLog.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 *     CmpStartCLFSLog @ 0x140AE7708 (CmpStartCLFSLog.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SeQueryTokenTrustLink @ 0x14045EEDC (SeQueryTokenTrustLink.c)
 *     PspWriteTebImpersonationInfo @ 0x1408E87D0 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // r12
  void *v3; // r15
  __int64 Token; // rbx
  struct _KTHREAD *v6; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  char *v10; // rax
  char *v11; // rbp
  struct _KTHREAD *v12; // rbp
  char v13; // di

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  Token = (__int64)ImpersonationState->Token;
  v6 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v8);
      PsReferenceSiloContext((void *)Token);
      v6 = (struct _KTHREAD *)ImpersonationState->Token;
    }
    v9 = Token & 0xFFFFFFFFFFFFFFF8uLL | (ImpersonationState->EffectiveOnly != 0 ? 4 : 0) | (unsigned __int64)(ImpersonationState->Level & 3);
  }
  else
  {
    v9 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  v10 = (char *)KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Thread[1].WaitBlockList, v10, (__int64)&Thread[1].WaitBlockList);
  if ( v11 )
    v11[10] = 1;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v12 = Thread[1].WaitBlock[1].Thread;
    v3 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( ImpersonationState->Token )
  {
    *($F6E8E81C3EACE4482EE2626591212BC8 *)((char *)&Thread[1].116 + 4) = ($F6E8E81C3EACE4482EE2626591212BC8)v9;
    Thread[1].WaitBlock[1].Thread = v6;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
    goto LABEL_15;
  }
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
  {
LABEL_15:
    v13 = 0;
    goto LABEL_16;
  }
  v13 = 1;
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread();
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    if ( v12 )
      ObfDereferenceObject(v12);
    if ( v13 )
      PspWriteTebImpersonationInfo((__int64)Thread, (__int64)CurrentThread);
  }
}
