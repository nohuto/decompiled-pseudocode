/*
 * XREFs of PsReferenceImpersonationToken @ 0x140946AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  signed __int64 *p_WaitBlockList; // rbp
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v11; // rdi
  void *v12; // rdi
  BOOLEAN v13; // al

  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
    return 0LL;
  p_WaitBlockList = (signed __int64 *)&Thread[1].WaitBlockList;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL);
  if ( _InterlockedCompareExchange64(p_WaitBlockList, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(p_WaitBlockList, 0, v11, (__int64)p_WaitBlockList);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v12 = Thread[1].WaitBlock[1].Thread;
    if ( v12 )
    {
      v13 = 0;
    }
    else
    {
      v12 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      v13 = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 2)) & 1;
    }
    *CopyOnOpen = v13;
    ObfReferenceObjectWithTag(v12, 0x746C6644u);
    *ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
    *EffectiveOnly = (*(_BYTE *)(&Thread[1].MiscFlags + 1) & 4) != 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_WaitBlockList);
  KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
  KeLeaveCriticalRegionThread();
  return v12;
}
