/*
 * XREFs of PsRestoreImpersonation @ 0x1409D7040
 * Callers:
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407D6518 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140AD5500 (CmpStartCLFSLog.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SeQueryTokenTrustLink @ 0x140468F38 (SeQueryTokenTrustLink.c)
 *     PspWriteTebImpersonationInfo @ 0x1408A5F40 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // r12
  void *v3; // rbp
  __int64 Token; // rbx
  struct _KTHREAD *v6; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // r15
  struct _KTHREAD *v12; // r15
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
  v10 = KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Thread[1].WaitBlockList, v10, (__int64)&Thread[1].WaitBlockList);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    if ( v12 )
      ObfDereferenceObject(v12);
    if ( v13 )
      PspWriteTebImpersonationInfo((__int64)Thread, (__int64)CurrentThread);
  }
}
